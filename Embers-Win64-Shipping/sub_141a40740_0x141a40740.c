// 函数: sub_141a40740
// 地址: 0x141a40740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x18))
char arg_8
char arg_10
int32_t rax
int32_t arg_14

if (r8.d == 0)
    rax = 0
    arg_10 = 0
    arg_14 = 0
    arg_8 = 0
else
    int32_t* rcx = *(arg1 + 0x10)
    arg_8 = 1
    arg_10 = 1
    rax = *rcx
    arg_14 = rcx[r8 - 1]
int32_t arg_c = rax
int64_t var_10 = arg_10.q
*arg2 = arg_8.q.o
return arg2
