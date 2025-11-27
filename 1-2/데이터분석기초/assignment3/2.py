import pandas as pd
import matplotlib.pyplot as plt

# 1. 1개의 csv 파일을 읽고 데이터프레임 생성
merged_df =pd.read_csv("data/merged_weather_power.csv")

# 2-1. 'Daily_percipitation'에 대한 결측치 0으로 대체
merged_df.fillna({'Daily_percipitation':0}, inplace=True)
# 2-2. 'Average_relative_humidity'에 대한 결측치 행 제거
merged_df.dropna(subset=['Average_relative_humidity'],inplace=True)
# 3. 이상치 제거 
Q1=merged_df['Power_usage'].quantile(0.25)
Q3=merged_df['Power_usage'].quantile(0.75)
IQR=Q3-Q1
ix1=merged_df[merged_df['Power_usage']<(Q1-1.5*IQR)].index
ix2=merged_df[merged_df['Power_usage']>(Q3+1.5*IQR)].index
merged_df.drop(ix1, inplace=True)
merged_df.drop(ix2, inplace=True)
# 4. 행 인덱스 초기화
merged_df.reset_index(drop=True, inplace=True)

# 입출력 및 시각화 코드
row_index = int(input())
	
if row_index != -1:
	print(merged_df.iloc[row_index])

else:
	fig, axes = plt.subplots(1, 2, figsize=(12, 6))

	axes[0].scatter(merged_df.index, merged_df['Daily_percipitation'], alpha=0.5)
	axes[0].set_title("Daily precipitation")
	axes[0].set_ylabel("mm")

	axes[1].scatter(merged_df.index, merged_df['Power_usage'], alpha=0.5)
	axes[1].set_title("Power Usage")
	axes[1].set_ylabel("MWh")

	plt.tight_layout()
	plt.savefig("data/out.png")
