typedef struct {
    uint64_t val[4];
} uint256_t;

typedef struct {
    uint64_t w0: 64;
    uint64_t w1: 64;
    uint64_t w2: 64;
    uint64_t w3: 64;
} uint256_t;

typedef struct {
    __uint128_t val[2];
} uint256_t;
