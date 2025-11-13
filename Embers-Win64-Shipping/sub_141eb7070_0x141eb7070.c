// 函数: sub_141eb7070
// 地址: 0x141eb7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140664c50(arg1[0x16] + 0x48, arg2)
int64_t* rcx_2 = arg1[1]
int32_t arg_8 = rax
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    arg_8 = *rdx
    *rcx_2 += 4
    return arg1

int32_t* rdx_1 = &arg_8

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, rdx_1, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, rdx_1, 4)
return arg1
