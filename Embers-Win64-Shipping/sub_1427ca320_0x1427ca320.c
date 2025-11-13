// 函数: sub_1427ca320
// 地址: 0x1427ca320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_3 = *arg2

if (rcx_3 == 0)
    return zx.q(arg2[2])

if (rcx_3 == 1)
    return *(arg2 + 8)

if (rcx_3 != 2)
    if (rcx_3 != 3)
        return 0
    
    uint64_t result
    result.b = arg2[2].b != 0
    return result

float zmm0 = arg2[2]
int64_t rcx_2 = 0

if (not(zmm0 < 9.22337204e+18f))
    zmm0 = zmm0 - 9.22337204e+18f
    
    if (not(zmm0 >= 9.22337204e+18f))
        rcx_2 = -0x8000000000000000

return int.q(zmm0) + rcx_2
