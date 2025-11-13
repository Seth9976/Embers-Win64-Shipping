// 函数: sub_141f41680
// 地址: 0x141f41680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1c0)
uint32_t temp0_1 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1, 4))
float var_18[0x4] = zmm1

if (temp0_1 != 0)
    *(arg1 + 0x180) = zmm1
    void var_28
    int32_t* rax_1 = sub_140adf5d0(&var_18, &var_28)
    *(arg1 + 0x190) = *rax_1
    *(arg1 + 0x198) = rax_1[2]

int32_t rax_3 = *(arg1 + 0x198)
*arg2 = *(arg1 + 0x190)
arg2[1].d = rax_3
return arg2
