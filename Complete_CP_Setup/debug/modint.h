const int MOD = 1e9 + 7;
class ModInt {
public:
    int val;
    ModInt(long long v = 0) { val = v % MOD; if (val < 0) val += MOD; }
    ModInt operator + (const ModInt& other) const { return ModInt(val + other.val); }
    ModInt operator - (const ModInt& other) const { return ModInt(val - other.val); }
    ModInt operator * (const ModInt& other) const { return ModInt(1LL * val * other.val); }
};
