// 函数: sub_1423de1d0
// 地址: 0x1423de1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg1)

if (rcx == 0)
    return *(arg1 + 4)

if (rcx != 1)
    return zx.o(0)

int32_t i_3 = 0
int32_t i = 0
float result[0x4] = zx.o(0)

while (i s>= 0)
    if (i s>= *(arg1 + 0x18))
        break
    
    int64_t i_4 = sx.q(i)
    i += 1
    result = _mm_max_ss((*(*(arg1 + 0x10) + i_4 * 0x14))[0], result[0])

int32_t i_1 = 0

while (i_1 s>= 0)
    if (i_1 s>= *(arg1 + 0x28))
        break
    
    int32_t arg_8
    void arg_20
    sub_141f8bae0(*((sx.q(i_1) << 6) + *(arg1 + 0x20)), &arg_20, &arg_8)
    i_1 += 1
    result = _mm_max_ss(arg_8[0], result[0])

int32_t i_2 = 0

while (i_2 s>= 0)
    if (i_2 s>= *(arg1 + 0x38))
        break
    
    void var_38
    int32_t arg_10
    sub_141f8bae0(*((sx.q(i_2) << 6) + *(arg1 + 0x30)), &var_38, &arg_10)
    i_2 += 1
    result = _mm_max_ss(arg_10[0], result[0])

while (i_3 s>= 0)
    if (i_3 s>= *(arg1 + 0x48))
        break
    
    void var_34
    int32_t arg_18
    sub_141f8bae0(*((sx.q(i_3) << 6) + *(arg1 + 0x40)), &var_34, &arg_18)
    i_3 += 1
    result = _mm_max_ss(arg_18[0], result[0])

return result
