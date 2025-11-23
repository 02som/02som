test_set = [list(map(int, input().split())) for _ in range(5)]
test_label = list(map(int, input().split()))
from sklearn.linear_model import LinearRegression
lr=LinearRegression()
train_set=[[1],[0],[-2],[3],[-4],[5],[-6],[7],[-8]]
train_label=[3,2,6,11,18,27,38,51,66]
lr.fit(train_set,train_label)
print(lr.predict(test_set))
intercept = round(lr.intercept_, 4)
print( lr.coef_, intercept)
score = round(lr.score(test_set, test_label), 4)
print(score)
