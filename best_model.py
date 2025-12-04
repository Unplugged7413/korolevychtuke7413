import numpy as np
from sklearn.ensemble import RandomForestClassifier, GradientBoostingClassifier
from sklearn.svm import SVC
from sklearn.neighbors import KNeighborsClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score

# load data
X_train = np.load('X_train.npy')
X_test  = np.load('X_test.npy')
y_train = np.load('y_train.npy')
y_test  = np.load('y_test.npy')

models = {
    "RandomForest_200": RandomForestClassifier(n_estimators=200, max_depth=None, random_state=0),
    "RandomForest_500": RandomForestClassifier(n_estimators=500, max_depth=None, random_state=0),
    "SVC_rbf":          SVC(kernel='rbf', C=2, gamma='scale'),
    "SVC_linear":       SVC(kernel='linear', C=1),
    "KNN_7":            KNeighborsClassifier(n_neighbors=7),
    "LogReg":           LogisticRegression(max_iter=500),
    "GB":               GradientBoostingClassifier()
}

results = {}

for name, model in models.items():
    model.fit(X_train, y_train)
    preds = model.predict(X_test)
    acc = accuracy_score(y_test, preds)
    results[name] = acc
    print(f"{name}: {acc:.4f}")

print("\nBest model:", max(results, key=results.get),
      "Accuracy:", results[max(results, key=results.get)])
