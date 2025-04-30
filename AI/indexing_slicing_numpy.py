import numpy as np
a1 = np.array([[[1,2],[3,4]],[[5,6],[7,8]]])            #3d array with 2 2d arrays
print(a1)
print(a1[1,0,0])        #output will be 5
print(a1[-1])
print(a1[-1,-1,-1])        #output will be 8 - extreme last element
print(a1[-1,0,1])          #output will be 6( -(minus) symbol : reverse indexing)

a2=np.array([2,4,6,8,10])
print(a2[1:4:1])                #slicing - ( begin(inclusive) : end(exclusive) : step )
print(a2[4:0:-2])
print(a2[3::])                  #It will print till last
print(a2[3::-1])                #it will start printing from 3rd element


a3=np.array([[1,2,3],[4,5,6],[7,8,9]])
print(a3)
print(a3[::-1])                   #it will reverse the array
print(a3[::-1 , ::-1])            #it will reverse the array and also the elements
print(a3[1 , ::-1])               #it will the reverse the elements at first index i.e it will reverse [4,5,6]
print(a3[0:2 , 1::1])