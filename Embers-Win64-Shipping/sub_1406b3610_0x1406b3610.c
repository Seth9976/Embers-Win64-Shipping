// 函数: sub_1406b3610
// 地址: 0x1406b3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[1].d

if (rcx s<= 1)
    sub_140596d10(arg1, arg3)
    return arg1

int32_t rax_1 = arg3[1].d
int32_t rsi = rax_1 - 1

if (rax_1 == 0)
    rsi = 0

int64_t var_28
int64_t* arg_10 = &var_28
var_28 = *arg2
*arg2 = 0
int32_t rax_3 = *(arg2 + 0xc)
arg2[1] = 0
int32_t rdx_1 = rcx + rsi

if (rdx_1 s> rax_3)
    sub_1405947f0(&var_28, rdx_1)

sub_140a20ba0(&var_28, *arg3, rsi)
*arg1 = var_28
arg1[1].d = rcx
*(arg1 + 0xc) = rax_3
return arg1
