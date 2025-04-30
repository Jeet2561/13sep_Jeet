import numpy as np
x = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(x)
print("\nMean : ",x.mean())                         #For arithmetic mean : mean()

print("\nPrincipal Diagonal Elements : ",x.diagonal())       # To print principle diagonal elements : 1,5,9 diagonal()
print("\nTrace : ",x.trace())                                #For sum of diagonal elements : trace()
print("\nTranspose : ",x.transpose())                        #Transpose function converts rows to column and colums to rows
print("\nMinimum Value : ",x.min())                          #To get minimum value
print("\nMaximum Value : ",x.max())                          #To get maximum value
print("\nPeak to Peak Difference between minimum and maximum value : ",np.ptp(x))         #To know the difference between the minimum and maximum value
print("\nAdd/Sum of all the values in the array : ",x.sum())            #To get the total of all the values
print("\nMultiplication/Product of all the values : ",x.prod())         #To get the product of all the values 
print('\n')