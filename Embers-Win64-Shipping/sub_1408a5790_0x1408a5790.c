// 函数: sub_1408a5790
// 地址: 0x1408a5790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result_1
int128_t zmm7
float zmm8_1
uint128_t zmm9_1
uint128_t zmm10_1
int128_t zmm12
result_1, zmm7, zmm8_1, zmm9_1, zmm10_1, zmm12 = sub_1408a44f0(arg1, *arg1, arg2, arg3, arg4.d)
int64_t rsi = sx.q(*(arg1 + 0x410))
int128_t result = result_1

if (rsi s> 1)
    char* rdi_1 = 1
    int128_t var_28_1 = zmm7
    zmm7 = *(arg1 + 0x414)
    int128_t var_78_1 = zmm12
    *(arg1 + 0x418)
    
    do
        zmm10_1.d = zmm10_1.d f* zmm7.d
        zmm9_1.d = zmm9_1.d f* zmm7.d
        float zmm11
        result_1, result, zmm7, zmm8_1, zmm9_1, zmm10_1, zmm11, zmm12 =
            sub_1408a44f0(arg1, *(rdi_1 + arg1), zmm10_1, zmm9_1, zmm8_1 f* zmm7.d)
        result_1.d = result_1.d f* zmm11
        rdi_1 = &rdi_1[1]
        result.d = result.d f+ result_1.d
    while (rdi_1 s< rsi)

result.d = result.d f* *(arg1 + 0x420)
return result
