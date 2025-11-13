// 函数: sub_1409f6b50
// 地址: 0x1409f6b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = 0
uint64_t arg_8 = 0
char result = sub_140b67990(arg1 + 0x28, &arg_10, &arg_8)

if (result != 0)
    uint64_t rax = arg_8
    uint128_t zmm0
    zmm0.q = float.d(rax)
    
    if (rax s< 0)
        zmm0.q = zmm0.q f+ 1.8446744073709552e+19
    
    int64_t zmm0_1
    zmm0_1, result = sub_1409f5b40(zmm0, 0x22, 0x24)
    zmm0_1.d = fconvert.s(zmm0_1)

return result
