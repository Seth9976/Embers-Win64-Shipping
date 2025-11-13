// 函数: sub_1420ab9f0
// 地址: 0x1420ab9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg3 + 0x50)
int64_t rbx = sx.q(arg2)

if (result == 0 || arg2 s< 0 || rbx.d s>= *(arg1 + 0x78))
    return result

int32_t arg_18 = *result
int32_t var_18
sub_140acc920(&var_18, &arg_18)
int64_t rdx_1 = *(arg1 + 0x70)
int64_t r8 = rbx * 0x2c
int32_t var_10
float var_20_1 = var_10[0]
int32_t var_14
*(r8 + rdx_1 + 4) = (_mm_unpacklo_ps(var_18, var_14[0].q)).q
*(r8 + rdx_1 + 0xc) = var_20_1
r8.b = 1
return sub_141f55fe0(arg1 + 0x70, *(arg1 + 0x88), r8.b)
