import numpy as np
a1=np.array([ [1,2,3],[4,5,6],[7,8,9],[10,11,12] ])     #2d array
print(a1.size)                      #size is the number of elements in an array
print(a1.shape)         #shape : it will start from backwards and look for number of 1-d arrays and then look for no. of elements 



a2=np.array([[[],[],[]],[[],[],[]]])        #3d array it will start from backwards and look for number of 2-d arrays and then look for 1-d array and then no. of elements 
print(a2.shape)




a3=np.array([1,2,3],ndmin=2)                #nd'min'  is used to set the minimum dimension and note that min. dimension cannot be set as zero
print(a3.ndim)
print(a3)