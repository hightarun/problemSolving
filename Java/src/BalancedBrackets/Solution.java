import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;

class Result {

  public static String isBalanced(String s) {
    Stack<Character> stack = new Stack<>();
    HashMap<Character, Character> map = new HashMap<>();
    map.put('{', '}');
    map.put('(', ')');
    map.put('[', ']');

    for (int i = 0; i < s.length(); i++) {
      char ch = s.charAt(i);
      if (ch == '{' || ch == '(' || ch == '[') {
        stack.push(ch);
        continue;
      }
      // if stack is empty or bracket does not match return no
      if (stack.empty() || ch != map.get(stack.pop())) {
        return "NO";
      }
    }
    // check if there are some brackets left in stack
    return stack.empty() ? "YES" : "NO";
  }
}

public class Solution {

  public static void main(String[] args) throws IOException {
    BufferedReader bufferedReader = new BufferedReader(
      new InputStreamReader(System.in)
    );
    BufferedWriter bufferedWriter = new BufferedWriter(
      new FileWriter(System.getenv("OUTPUT_PATH"))
    );

    int t = Integer.parseInt(bufferedReader.readLine().trim());

    IntStream
      .range(0, t)
      .forEach(
        tItr -> {
          try {
            String s = bufferedReader.readLine();

            String result = Result.isBalanced(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
          } catch (IOException ex) {
            throw new RuntimeException(ex);
          }
        }
      );

    bufferedReader.close();
    bufferedWriter.close();
  }
}
