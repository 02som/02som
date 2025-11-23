import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

dataset = pd.read_csv('data/fetch_california_housing.csv', encoding='utf-8')

# Target 변수 분리
X = dataset.drop(['MedHouseVal'], axis=1)
y = dataset['MedHouseVal']

# 선형 회귀 모델 준비
l1=LinearRegression()
l2=LinearRegression()

# train, test 데이터 분리
X_train, X_test, y_train, y_test=train_test_split(X,y,test_size=0.2,random_state=777)

# 선형 회귀 모델 학습
l1.fit(X_train,y_train)

train_score=round(l1.score(X_train, y_train),4)
test_score=round(l1.score(X_test, y_test),4)
print(train_score, test_score)
# 새로운 데이터셋 준비
dataset2 = dataset.copy()

# 새로운 파생 변수 2개 열을 dataset2에 추가
dataset2["RoomsPerPerson"]=dataset["AveRooms"]/dataset["AveOccup"]
dataset2["BedrmsPerRoom"]=dataset["AveBedrms"]/dataset["AveRooms"]
# Target 변수 분리
X2 = dataset2.drop(['MedHouseVal'], axis=1)
y2 = dataset2['MedHouseVal']

# train, test 데이터 분리
X_train2, X_test2, y_train2, y_test2=train_test_split(X2,y2,test_size=0.2,random_state=777)


# 파생변수들 추가한 dataset2로 선형 회귀 모델 학습
l2.fit(X_train2, y_train2)

train_score=round(l2.score(X_train2, y_train2),4)
test_score=round(l2.score(X_test2, y_test2),4)
print(train_score, test_score)
