// Given a string, find the leftmost character that does not repeat.
// Input : abcdab
// Output : c


import java.util.*;

public class StringFirstNonRepeatingCharacter {

    public static int firstNonRepeatingCharacter(String str) {
        int result = Integer.MAX_VALUE;
        str = str.toLowerCase();
        final int[] position = new int[256];
        Arrays.fill(position, -1);
        for (int i = 0; i < str.length(); i++) {
            final char c = str.charAt(i);
            if (position[c - 'a'] == -1) {
                position[c - 'a'] = i;
            } else
                position[c - 'a'] = -2;
        }
        for (int i = 0; i < 256; i++) {
            if (position[i] >= 0) {
                result = Math.min(result, position[i]);
            }
        }
        return (result == Integer.MAX_VALUE) ? -1 : result;

    }

    public static void main(final String[] args) {
        final String str = "abcdefabdec";
        final int index = firstNonRepeatingCharacter(str);
        if(index == -1) {
            System.out.println("No character found");
        }
        else System.out.println(str.charAt(index));
    }
}