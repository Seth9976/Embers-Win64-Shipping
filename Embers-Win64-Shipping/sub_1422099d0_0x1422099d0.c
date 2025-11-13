// 函数: sub_1422099d0
// 地址: 0x1422099d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t rax_1 = *rcx + 4

if (rax_1 u> rcx[1])
    int64_t rax_2 = *arg1
    int32_t arg_8 = 0
    (*(rax_2 + 0x150))(arg1, &arg_8, 4)
else
    *rcx = rax_1

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    *arg2 = *rdx_1
    int64_t* rax_5 = arg1[1]
    *rax_5 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, arg2, 4)
return arg1
