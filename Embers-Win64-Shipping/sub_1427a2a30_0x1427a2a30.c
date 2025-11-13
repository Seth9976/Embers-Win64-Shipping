// 函数: sub_1427a2a30
// 地址: 0x1427a2a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
memset(&var_98, 0, 0x88)
int32_t var_90 = 0x3f800000
char rax_1 = (*(*(arg1 - 0x88) + 0x318))(arg1 - 0x88, arg3, &var_98)
arg2[0x14] = 0
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0
int32_t var_a0 = 0x3f800000

if (rax_1 == 0)
    *arg2 = 0
    *(arg2 + 4) = 0x7f7fffff
else
    int32_t var_8c
    *(arg2 + 4) = var_8c.d
    *arg2 = 1

*(arg2 + 8) = _mm_unpacklo_ps(zx.o(0), 0)
*(arg2 + 0x10) = 0x3f800000
return arg2
