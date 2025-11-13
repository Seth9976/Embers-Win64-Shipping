// 函数: __common_ssin_cout_rare
// 地址: 0x142c98b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg1
int32_t var_8 = rdx
float zmm1 = *arg1

if ((zx.d(*(arg1 + 2)) & 0x7f80) != 0x7f80)
    return 0

var_8:3.b = (rdx u>> 0x18).b & 0x7f

if (var_8 != 0x7f800000)
    *arg2 = zmm1 f* *arg1
    return 0

*arg2 = zmm1 * 0f
return 1
