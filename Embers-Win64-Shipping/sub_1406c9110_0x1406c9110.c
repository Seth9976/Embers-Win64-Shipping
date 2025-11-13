// 函数: sub_1406c9110
// 地址: 0x1406c9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t* arg_10

if (r8 s<= 1)
    arg_10 = arg1
    *arg1 = 0
    *arg1 = *arg3
    *arg3 = 0
    arg1[1].d = arg3[1].d
    *(arg1 + 0xc) = *(arg3 + 0xc)
    arg3[1] = 0
    return arg1

int32_t rax_4 = arg3[1].d
int32_t rsi = rax_4 - 1

if (rax_4 == 0)
    rsi = 0

int64_t var_18
arg_10 = &var_18
var_18 = *arg2
*arg2 = 0
int32_t rax_6 = *(arg2 + 0xc)
arg2[1] = 0
int32_t rdx = rsi + r8

if (rdx s> rax_6)
    sub_1405947f0(&var_18, rdx)

sub_140a20ba0(&var_18, *arg3, rsi)
arg_10 = arg1
*arg1 = var_18
arg1[1].d = r8
*(arg1 + 0xc) = rax_6
return arg1
