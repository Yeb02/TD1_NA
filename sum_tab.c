int sum_array(int t1[], int t2[], int len) {
    int t[len];
    for (int i = 0; i < len; i++) {
        t[i] = t1[i] + t2[i];
    }
    return t;
}
