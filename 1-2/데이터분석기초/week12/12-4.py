data = [ [171,'male', 69], [169,'male', 65], [176,'male', 72], [168,'male', 67], [181,'male', 71], [166,'male', 65], [180,'male', 80], [175,'male', 71], [163,'female', 55], [162,'female', 51], [171,'female', 59], [162,'female', 53], [164,'female', 57], [162,'female', 56], [158,'female', 47], [173,'female', 57], [171,'unknown', 72], [169,'unknown', 66], [176,'unknown', 71], [168,'unknown', 69], [181,'unknown', 74]]

from sklearn.linear_model import LinearRegression
import pandas as pd
l1=LinearRegression()
l2=LinearRegression()
df=pd.DataFrame(data, columns=['height','sex','weight'])
df1=df.drop('weight',axis=1)
df2=df.drop('weight',axis=1)

def sex_to_int(x):
	if x=='male':
		return 0
	elif x=='female':
		return 1
	else:
		return 2
def sex_to_int2(x):
	if x=='male':
		return 0
	elif x=='female':
		return 1
	else:
		return 0
    
df1['sex']=df1['sex'].apply(sex_to_int)
df2['sex']=df2['sex'].apply(sex_to_int2)
y=df['weight']

l1.fit(df1,y)
l2.fit(df2,y)
score1=round(l1.score(df1,y),4)
score2=round(l2.score(df2,y),4)

print(score1, score2)
