// 函数: sub_142212100
// 地址: 0x142212100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28[0x4]
int64_t* rax = sub_14226bc80(&var_28, arg2)
int128_t* rcx_1 = *arg1
*rcx_1 = *rax
rcx_1[1].q = rax[2]
int32_t result = rax[3].d
*(rcx_1 + 0x18) = result
return result
