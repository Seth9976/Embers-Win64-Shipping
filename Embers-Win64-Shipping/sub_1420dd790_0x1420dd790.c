// 函数: sub_1420dd790
// 地址: 0x1420dd790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = arg1[1] - arg2[1]
*arg1 = *arg1 - *arg2
arg1[1] = zmm1
void* i = *(arg1 + 0x20)
int64_t j = sx.q(arg1[0xa])

for (void* r9 = i + j * 0x28; i != r9; i += 0x28)
    j = *(i + 8)
    
    for (int64_t rcx_3 = (sx.q(*(i + 0x10)) << 4) + j; j != rcx_3; j += 0x10)
        *j = *arg2 f+ *j
        float zmm0 = *(j + 8)
        *(j + 4) = arg2[1] f+ *(j + 4)
        *(j + 8) = zmm0 + arg2[2]

return j
