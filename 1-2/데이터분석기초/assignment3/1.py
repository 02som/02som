import pandas as pd
import matplotlib.pyplot as plt

################################
# 1. 2개의 csv 파일을 읽고 2개의 데이터프레임 생성
df_weather = pd.DataFrame(pd.read_csv("data/weather.csv"))
df_power = pd.DataFrame(pd.read_csv("data/power_usage.csv"))

# 2. 2개의 데이터프레임을 Merge하여 1개의 데이터프레임으로 생성
merged_df = pd.merge(df_weather, df_power, on='Date')
################################
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
