import pandas as pd
import numpy as np
import matplotlib.pyplot as plt



##########################################################

# 1. 1개의 csv 파일을 읽고 데이터프레임 생성
df = pd.read_csv('data/merged.csv')

# 2. 상관관계 분석 - 상관관계 데이터프레임 구하기
df_corr = df.corr()

# 3. 'Power_usage'과 상관관계를 내림차순으로 정렬하고, 상관계수가 가장 높은 2개의 열 df_corr_high에 저장 
df_corr.loc['Power_usage'].sort_values(ascending=False, inplace=True)
df_corr_high = df_corr.loc['Power_usage'].drop('Power_usage').sort_values(ascending=False).head(2)

# 4. 파생변수 추가
df['Temp_deviation']=abs(df['Average_temperature']-14)

# 5. 파생변수 추가 후, 상관관계 분석
df_corr_new = df.corr()

# 6. 'Power_usage'과 상관계수가 가장 높은 열 df_corr_new_high 저장
df_corr_new_high = df_corr_new.loc['Power_usage'].drop('Power_usage').sort_values(ascending=False).head(1)

##########################################################


# 입출력 및 시각화 코드
input_num = int(input())

if input_num == 0:
    for var, corr_value in df_corr["Power_usage"].head(5).items():
        print(f"{var}: {corr_value:.3f}")
elif input_num == 1:
    for var, corr_value in df_corr_high.items():
        print(f"{var}: {corr_value:.3f}")
elif input_num == 2:
    for var, corr_value in df_corr_new_high.items():
        print(f"{var}: {corr_value:.3f}")

elif input_num == -1:  # 두 개의 상관관계 히트맵 출력 (채점과 무관)

    corr_list = [df_corr, df_corr_new]
    titles = ['Correlation (Original)', 'Correlation (With Temp_deviation)']

    fig, axes = plt.subplots(1, 2, figsize=(20, 8))

    for idx, corr_df in enumerate(corr_list):

        index = corr_df.index
        display_corr = corr_df.loc[index, index]
        n = len(display_corr)

        ax = axes[idx]

        mask = np.where(np.triu(np.ones((n, n)).astype(bool)), np.nan, 1.0)
        cax = ax.matshow(display_corr * mask, cmap='coolwarm', vmin=-1, vmax=1)

        # 컬러바는 subplot별로 따로 붙이기
        fig.colorbar(cax, ax=ax)

        # 라벨 설정
        ax.set_xticks(np.arange(n))
        ax.set_yticks(np.arange(n))
        ax.set_xticklabels(display_corr.columns, rotation=45, ha='left')
        ax.set_yticklabels(display_corr.index)

        # 텍스트(상관계수) 표시
        for i in range(n):
            for j in range(n):
                if not np.isnan(display_corr.iloc[i, j] * mask[i, j]):
                    ax.text(j, i, f'{display_corr.iloc[i, j]:.2f}',
                            ha='center', va='center', color='white')

        ax.set_title(titles[idx], pad=20)

    plt.tight_layout()
    plt.savefig("data/out.png", bbox_inches="tight")
