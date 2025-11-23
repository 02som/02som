data = [ [171,'male', 69], [169,'male', 65], [176,'male', 72], [168,'male', 67], [181,'male', 71], [166,'male', 65], [180,'male', 80], [175,'male', 71], [163,'female', 55], [162,'female', 51], [171,'female

                                                                                                                                                                                                  from sklearn.linear_model import LinearRegression
import pandas as pd
lr=LinearRegression()
lr2=LinearRegression()
df=pd.DataFrame(data, columns=['height','sex','weight'])
df1=df.drop('sex',axis=1)
df1=df1.drop('weight',axis=1)
df2=df.drop('weight',axis=1)
def sex_to_int(x):
	if x=='male':
		return 0
	elif x=='female':
		return 1
	else:
		return 2
df2['sex']=df2['sex'].apply(sex_to_int)
y=df['weight']

lr.fit(df1,y)
lr2.fit(df2,y)
score1=round(lr.score(df1,y),4)
score2=round(lr2.score(df2,y),4)

print(score1, score2)
