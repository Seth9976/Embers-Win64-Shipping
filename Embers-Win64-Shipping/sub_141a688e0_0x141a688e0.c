// 函数: sub_141a688e0
// 地址: 0x141a688e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x460)

if (rcx != 0)
    (*(*rcx + 0x280))(rcx)

int64_t rbx = *(arg1 + 0x7c0)
int32_t arg_8 = *(arg1 + 0x468)
int32_t arg_c = 0
int32_t rcx_2 = *sub_1408ec700(&arg_8, arg_8.q, rbx, arg2)
arg_8 = *(arg1 + 0x46c)
*(arg1 + 0x468) = rcx_2
arg_c = 0
int64_t* rax_5 = sub_1408ec700(&arg_8, arg_8.q, rbx, arg2)
int32_t rax_6 = *rax_5

if (not(0.5f f> *(rax_5 + 4)))
    rax_6 += 1

char r9_2 = *(arg1 + 0x7d0)
int64_t r8_2 = *(arg1 + 0x7c8)
*(arg1 + 0x46c) = rax_6
return sub_141a69410(arg1 + 0x7c0, arg2, r8_2, r9_2) __tailcall
