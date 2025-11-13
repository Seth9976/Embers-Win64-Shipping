// 函数: sub_142602cb0
// 地址: 0x142602cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = arg5
int32_t zmm2
int32_t var_20 = zmm2
int128_t var_18

if (arg4 != 0)
    int32_t var_1c_1 = *arg4
    var_18:4.d = arg4[2]
    var_18.d = arg4[1].d

sub_142616200(arg1, arg1[1].d + 1)
int64_t rax_1 = *arg1
int64_t rcx_1 = sx.q(arg1[1].d) << 5
*(rcx_1 + rax_1 - 0x20) = arg2.o
*(rcx_1 + rax_1 - 0x10) = var_18
return zx.q(arg1[1].d - 1)
