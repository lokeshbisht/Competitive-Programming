//  Given a string and a pattern, find if a permutation of the pattern exists in the text
//  Example: Input  :  String = "atulpandey"
//                     Pattern = "tual"
//           Output :  Yes
//          Input  :  String = "atulpandey"
//                     Pattern = "puat"
//           Output :  No
// We will use window sliding technique and use of anagram.

class IsPatternPresent {

    private static final int MAX_CHAR = 256;

    private static boolean IsPatternPresentInText(String text, String pattern) {
        int[] countText = new int[MAX_CHAR];
        int[] countPattern = new int[MAX_CHAR];
        char[] textArray = text.toCharArray();
        char[] patternArray = pattern.toCharArray();
        int patternLength = pattern.length();
        int textLength = text.length();
        for(int i = 0; i < patternLength; i++) {
            countText[textArray[i]]++;
            countPattern[patternArray[i]]++;
        }

        for(int i = patternLength; i < textLength; i++) {
            if(areEqual(countText, countPattern)) {
                return true;
            }
            countText[textArray[i - patternLength]]--;
            countText[textArray[i]]++;
        }
        return false;
    }

    private static boolean areEqual(int[] countText, int[] countPattern) {
        for(int i = 0; i < MAX_CHAR; i++) {
            if(countText[i] != countPattern[i]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        String str = "atulpandey";
        String pattern = "tual";
        if(IsPatternPresentInText(str, pattern)) {
            System.out.println("Yes");
        }
        else System.out.println("No");
    }

}