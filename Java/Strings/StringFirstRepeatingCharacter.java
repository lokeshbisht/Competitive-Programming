// Given a String, find the leftmost character that repeats
// For Eg:  Input: abba
//          Output: a

import java.util.*;

public class StringFirstRepeatingCharacter {

    public static char firstRepeating(String str) {
        int result = Integer.MAX_VALUE;
        int[] frequency = new int[26];
        Arrays.fill(frequency, -1);
        str = str.toLowerCase();
        for(int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if(frequency[c - 'a'] == -1) {
                frequency[c - 'a'] = i; 
            }
            else result = Math.min(result, frequency[c - 'a']);
        }
        return result == Integer.MAX_VALUE ? '0' : str.charAt(result);
    }

    public static void main(String[] args) {
        String str = "abcdefba"; 
        System.out.println(firstRepeating(str));
    }
}