import pandas as pd

################################################
# 1. 데이터 불러오기
df = pd.read_csv('data/merged.csv')

# 2. 전체 기간에서 'Power_usage'과 'Temp_deviation' 간 상관계수 구하기
overall_corr = df.corr().loc['Power_usage']['Temp_deviation']


# # 3. 기간별 'Power_usage'과 'Temp_deviation' 간 상관계수 구하기
 
spring_corr = df.loc[(df['Month']==3) |(df['Month']==4)|(df['Month']==5) ].corr().loc['Power_usage']['Temp_deviation']
 summer_corr = df.loc[(df['Month']==6) |(df['Month']==7)|(df['Month']==8) ].corr().loc['Power_usage']['Temp_deviation']
 autumn_corr = df.loc[(df['Month']==9 )|(df['Month']==10)|(df['Month']==11 )].corr().loc['Power_usage']['Temp_deviation']
 winter_corr = df.loc[(df['Month']==12) |(df['Month']==1)|(df['Month']==2) ].corr().loc['Power_usage']['Temp_deviation']
################################################
# 입력 코드
period = int(input())
# 채점 코드
if period == 0:
	print("Overall:", round(overall_corr, 3))
elif period == 1:
	print("Spring:", round(spring_corr, 3))
elif period == 2:
	print("Summer:", round(summer_corr, 3))
elif period == 3:
	print("Autumn:", round(autumn_corr, 3))
elif period == 4:
	print("Winter:", round(winter_corr, 3))
else:
	print("0부터 4까지의 정수만 입력해 주세요.")
