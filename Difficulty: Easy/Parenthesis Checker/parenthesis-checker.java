
class Solution {
    static boolean isBalanced(String s) {
        // code here
        Stack<Character> st = new Stack<Character>();
        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else if(st.isEmpty() || (c==')' && st.peek()!='(') || (c=='}' && st.peek()!='{') || (c==']' && st.peek()!='[')){
                return false;
            }
            else{
                st.pop();
            }
        }
        return st.isEmpty();
    }
}
