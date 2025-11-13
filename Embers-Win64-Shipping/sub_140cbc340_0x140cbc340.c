// 函数: sub_140cbc340
// 地址: 0x140cbc340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b63b70(*(arg1 + 8), arg2)
sub_140a20ba0(arg2, &data_142d404d4, 1)
int64_t var_18
int64_t* rax = sub_140cbdce0(arg1, &var_18, 0)
int32_t rcx_3 = rax[1].d
int32_t r8 = rcx_3 - 1

if (rcx_3 == 0)
    r8 = 0

sub_140a20ba0(arg2, *rax, r8)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
