// Rest of the code is already given

class Solution
{
    public:
   using Vector = vector<int>;
 
void printVector(const Vector& a)
{
    cout << "[";
    for (auto e : a) {
        cout << e << " ";
    }
    cout << "]" << endl;
}
 
Vector mergeThree(Vector& A, Vector& B,
                  Vector& C)
{
    int m, n, o, i, j, k;
    m = A.size();
    n = B.size();
    o = C.size();
 
    Vector D;
    D.reserve(m + n + o);
 
    i = j = k = 0;
 
    while (i < m && j < n && k < o) {
 
        int m = min(min(A[i], B[j]), C[k]);
 
        D.push_back(m);
 
        if (m == A[i])
            i++;
        else if (m == B[j])
            j++;
        else
            k++;
    }
 
    while (i < m && j < n) {
        if (A[i] <= B[j]) {
            D.push_back(A[i]);
            i++;
        }
        else {
            D.push_back(B[j]);
            j++;
        }
    }
 
    while (i < m && k < o) {
        if (A[i] <= C[k]) {
            D.push_back(A[i]);
            i++;
        }
        else {
            D.push_back(C[k]);
            k++;
        }
    }
 
    while (j < n && k < o) {
        if (B[j] <= C[k]) {
            D.push_back(B[j]);
            j++;
        }
        else {
            D.push_back(C[k]);
            k++;
        }
    }
 
    while (k < o)
        D.push_back(C[k++]);
 
    while (i < m)
        D.push_back(A[i++]);
 
    while (j < n)
        D.push_back(B[j++]);
 
    return D;
}
};