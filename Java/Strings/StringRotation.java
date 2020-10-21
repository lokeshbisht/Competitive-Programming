
//Given two strings, check if they are rotations of each other
// Example: Input : "ABCD" and "CDAB"
//          Output : Yes
//          Input : "ABAB" and "ABBA"
//          Output : No

class StringRotation {

    public static boolean areRotation(String s1, String s2) {
        if(s1.length() != s2.length()) {
            return false;
        }
        s1 = s1 + s1;        
        if(s1.indexOf(s2) >= 0) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        String s1 = "ABCD";
        String s2 = "DABC";
        if(areRotation(s1, s2)) {
            System.out.println("Yes");
        }
        else System.out.println("No");
    }
}