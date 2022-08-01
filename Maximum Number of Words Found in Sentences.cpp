class Solution {
public:
    int count=0;
    int maxi=0;
    int mostWordsFound(vector<string>& sentences) {
      for(int i=0;i<sentences.size();i++){
          for(int j=0;j<sentences[i].size();j++){
              if(sentences[i][j]==' ')
                  count++;
          }
          maxi=max(maxi,count);
            count=0;
      }
         return maxi+1; 
        
         
            }
           
        
      
    
};