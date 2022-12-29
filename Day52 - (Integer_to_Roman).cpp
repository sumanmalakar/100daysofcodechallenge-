  public String intToRoman(int num) {
        String[] dict = new String[]{"I", "V", "X", "L", "C", "D", "M", "", ""};
        
        String roman = "";
        int mod = num % 10;
        int i = 0;

        while (num != 0) {
            roman = getRoman(mod, dict[i], dict[i + 1], dict[i + 2]) + roman;

            num = num / 10;
            mod = num % 10;
            i += 2;
        }

        return roman;
    }

    private String getRoman(int val, String low, String mid, String high) {
        if (val == 1)
            return low;
        if (val == 2)
            return low + low;
        if (val == 3)
            return low + low + low;
        if (val == 4)
            return low + mid;
        if (val == 5)
            return mid;
        if (val == 6)
            return mid + low;
        if (val == 7)
            return mid + low + low;
        if (val == 8)
            return mid + low + low + low;
        if (val == 9)
            return low + high;
        return "";
    }