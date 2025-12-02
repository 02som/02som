#group h.mean()/group l.mean() 중 가장 높은값을갖는 변수두개를 높은순서대로 변수명과 값을출력
import pandas as pd 

data = pd.read_csv('data/whr2024.csv')
data = data.dropna()
data.drop(['country'],axis=1, inplace=True)
num=data.shape[0]

def encoding(x):
	if x>=data.iloc[int(num/3)]['happy_score']:
		return 'H'
	elif x>=data.iloc[int(num/3)*2]['happy_score']:
		return 'M'
	else:
		return 'L'

data['group_rank']=data['happy_score'].apply(encoding)
hi=data.groupby('group_rank').mean()
hi.sort_values('happy_score',ascending=False, inplace=True)
ha=(hi.loc['H']/hi.loc['L'])
ha.sort_values(ascending=False, inplace=True)
ne=ha.head(2)
print(ne.idxmax(), ha[ne.idxmax()])
print(ne.idxmin(),ha[ne.idxmin()])
