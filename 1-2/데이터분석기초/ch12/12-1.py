test_set = [list(map(int, input().split())) for _ in range(5)] #input test set 정의. 

from sklearn.linear_model import LinearRegression
lr=LinearRegression()
set=[[1],[0],[-5],[10],[-20],[42],[-16],[-9],[8]]
label=[10,7,-8,37,-53,133,-41,-20,31]
lr.fit(set,label)
y_pred = lr.predict(test_set)
inter = round(lr.intercept_, 3)
print(y_pred)
print( lr.coef_, inter)
