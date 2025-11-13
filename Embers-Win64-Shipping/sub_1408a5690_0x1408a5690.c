// 函数: sub_1408a5690
// 地址: 0x1408a5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result_1
uint128_t zmm7_1
uint128_t zmm8_1
int128_t zmm10
int128_t zmm11
result_1, zmm7_1, zmm8_1, zmm10, zmm11 = sub_1408a4110(arg1, *arg1, arg2, arg3)
int64_t rsi = sx.q(*(arg1 + 0x410))
int128_t result = result_1

if (rsi s> 1)
    char* rdi_1 = 1
    int128_t var_58_1 = zmm10
    zmm10 = *(arg1 + 0x414)
    int128_t var_68_1 = zmm11
    *(arg1 + 0x418)
    
    do
        zmm8_1.d = zmm8_1.d f* zmm10.d
        zmm7_1.d = zmm7_1.d f* zmm10.d
        float zmm9
        result_1, result, zmm7_1, zmm8_1, zmm9, zmm10, zmm11 =
            sub_1408a4110(arg1, *(rdi_1 + arg1), zmm8_1, zmm7_1)
        result_1.d = result_1.d f* zmm9
        rdi_1 = &rdi_1[1]
        result.d = result.d f+ result_1.d
    while (rdi_1 s< rsi)

result.d = result.d f* *(arg1 + 0x420)
return result
