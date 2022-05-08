class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index1=0;int min=0;int index2=0;bool isArranged=false;
       for(int i=nums.size()-1;i>0;i--){
         if(nums[i]>nums[i-1]){
             isArranged=true;
               index1=i-1;
               min = nums[i];
             for(int j=nums.size()-1;j>index1;j--){
                if(nums[j]<=min && nums[j]>nums[index1]){
                    min = nums[j];
                    index2=j;
                    
                }
            }
               
              swap(&nums[index1],&nums[index2]);
             
             for(int k=index1+1;k<nums.size();k++){
                 for(int w=k+1;w<nums.size();w++){
		           if(nums[k]>nums[w])
			{
				swap(&nums[k],&nums[w]);
			}
		}
                  
             }
               break;
           }
       }
        if(isArranged==false){
            for(int j=0;j<nums.size()/2;j++ ){
               swap(&nums[j],&nums[nums.size()-1-j]);
            }
        }
    }
    void swap(int *x , int *y){
        int  temp;
        temp = *x;
        *x= *y;
        *y = temp;
    }
};