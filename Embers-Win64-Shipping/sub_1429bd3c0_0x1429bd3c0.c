// 函数: sub_1429bd3c0
// 地址: 0x1429bd3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *arg2
int32_t r10 = arg2[1]
int32_t r15_2 = r11 * arg7 + arg3
int32_t rsi_2 = r10 * arg8 + arg5
int32_t rbp_1 = r11 - 1 + r15_2
int32_t r13_1 = r10 - 1 + rsi_2
int32_t rax = sub_1429bd7c0(arg5, arg6, arg10, arg2[3])
int32_t rcx_3 = arg3 - 1 + sub_1429bd7c0(arg3, arg4, arg9, arg2[3])
int32_t rax_2 = rax - 1 + arg5

if (rcx_3 s>= rbp_1)
    rcx_3 = rbp_1

*arg1 = r15_2
arg1[1] = rsi_2
arg1[2] = rcx_3

if (rax_2 s>= r13_1)
    rax_2 = r13_1

arg1[3] = rax_2
return arg1
