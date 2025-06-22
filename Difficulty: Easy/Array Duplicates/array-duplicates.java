import java.util.Arrays;
class Solution {
    public List<Integer> findDuplicates(int[] arr) {
         List<Integer> elem=new ArrayList<>();
         Arrays.sort(arr);
         for(int i=1;i<arr.length;i++){
              if(arr[i]==arr[i-1]){
                  elem.add(arr[i]);
              }
         }
         return elem;
    }
}