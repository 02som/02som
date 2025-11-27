import pandas as pd
import matplotlib.pyplot as plt
import numpy as np 
###########################################################################
# 1. 데이터 불러오기
df = pd.read_csv('data/merged.csv')

# 2. 파생변수 Power_usage_level 생성
Q1=df['Power_usage'].quantile(0.25)
Q2=df['Power_usage'].quantile(0.5)
Q3=df['Power_usage'].quantile(0.75)

def usage_level(x):
	if x>=Q3:
		return "Very_High"
	elif x>=Q2:
		return "High"
	elif x>=Q1:
		return "Low"
	else:
		return "Very_Low"
df['Power_usage_level'] = df['Power_usage'].apply(usage_level)

# 3. 그룹별 평균 구하기
group_mean_df = df.groupby('Power_usage_level').mean()
###########################################################################
# 입출력 코드
column_name = input()
if column_name != '-1':
	level_name = input()
	if level_name in group_mean_df.index:
	    mean_value = group_mean_df.loc[level_name, column_name]
	    print(level_name, round(mean_value, 3))

# 시각화 코드
else:
	# 시각화에 사용되는 색상입니다.
	palette = {
			"Very_Low": "#1f77b4",
			"Low": "#2ca02c",
			"High": "#ff7f0e",
			"Very_High": "#b22222"
	}
	labels = ["Very_Low", "Low", "High", "Very_High"]

	x = np.arange(len(df))

	fig, axes = plt.subplots(1, 3, figsize=(18, 5), constrained_layout=True)

	# (1) Power_usage scatter
	for lvl in labels:
			s = df[df["Power_usage_level"] == lvl]
			axes[0].scatter(s.index, s["Power_usage"],
											s=14, alpha=0.8,
											c=palette[lvl], label=lvl)
	axes[0].set_title("Power_usage")
	axes[0].set_ylabel("MWh")
	axes[0].grid(alpha=0.2)

	# (2) Temp_deviation scatter
	for lvl in labels:
			s = df[df["Power_usage_level"] == lvl]
			axes[1].scatter(s.index, s["Temp_deviation"],
											s=14, alpha=0.8,
											c=palette[lvl], label=lvl)
	axes[1].set_title("Temp_deviation")
	axes[1].set_ylabel("℃")
	axes[1].grid(alpha=0.2)

	# (3) Power_usage boxplot
	data_power = [df.loc[df["Power_usage_level"] == lvl, "Power_usage"]
								for lvl in labels]
	axes[2].boxplot(data_power, tick_labels=labels, patch_artist=True)
	axes[2].set_title("Power_usage by Level")
	axes[2].set_ylabel("Power_usage")
	axes[2].grid(alpha=0.2)

	handles, leg_labels = axes[0].get_legend_handles_labels()
	fig.legend(handles, leg_labels, loc="upper center", ncol=4)
	plt.savefig("data/out.png")
