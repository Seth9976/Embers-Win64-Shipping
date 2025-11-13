// 函数: sub_141a6c760
// 地址: 0x141a6c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg3

if (arg4 == 0)
    sub_141a5b700(arg2, arg1, arg3)
    return arg1

bool cond:0 = *(arg2 + 0x24) == 0
int64_t var_38 = rax

if (not(cond:0))
    *(arg2 + 0x24) = 0

if (arg2[2].b == 0)
    var_38:4.d = 0
    rax = var_38

int64_t r9 = arg2[1]
int64_t r8 = *arg2
*(arg2 + 0x14) = rax
sub_1408ec700(&var_38, rax, r8, r9)
int64_t rax_2 = var_38
int64_t var_2c = rax_2
int64_t var_18 = arg2[1]
char var_30 = 1
char var_24 = 1
int32_t var_10 = 0
int32_t var_c = 0x80000000

if (&var_30 != &arg2[5])
    *(arg2 + 0x28) = var_30.o
    *(arg2 + 0x38) = rax_2.o
    arg2[9] = var_10.q
    arg2[0xa].b = 1

*arg1 = *(arg2 + 0x28)
arg1[1] = *(arg2 + 0x38)
arg1[2].q = arg2[9]
return arg1
