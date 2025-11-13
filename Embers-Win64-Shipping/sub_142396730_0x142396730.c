// 函数: sub_142396730
// 地址: 0x142396730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (data_14399ea98() != 0)
    rax = 1
else if (sub_140bac910() != 0)
    rax = 1
else if (data_14399fa10() == 0)
    rax = 1
else
    rax = 0

*(arg1 + 0xd0) = rax
int64_t var_18 = 0
int64_t rax_1 = *arg5
*arg5 = 0
int64_t var_38 = rax_1
int32_t var_30 = arg5[1].d
int32_t rax_3 = *(arg5 + 0xc)
arg5[1] = 0
int32_t var_2c = rax_3
int64_t rax_4 = *arg3
*arg3 = 0
int64_t var_28 = rax_4
int32_t var_20 = arg3[1].d
int32_t var_1c = *(arg3 + 0xc)
int32_t var_10 = 0
arg3[1] = 0
sub_1423960c0(arg1, arg2, &var_28, &var_18, 0x64, arg4, 0, &var_38)
*(arg1 + 0xd0) = 0
int64_t* rcx_1 = *arg2

if (rcx_1 != 0)
    sub_14239d1f0(rcx_1, zx.o(0), 1)

sub_1408464b0(arg3)
int64_t rcx_3 = *arg5

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg2
