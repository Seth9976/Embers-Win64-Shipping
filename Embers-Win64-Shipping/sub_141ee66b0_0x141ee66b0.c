// 函数: sub_141ee66b0
// 地址: 0x141ee66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax
int32_t rcx
rax, rcx = sub_1422a6b20(arg1, arg3)
arg2[1].d &= 0xfffffffb
arg2[1].d |= (sbb.d(rcx, rcx, rax != 0) & 4) | 2
char rax_1 = sub_1422a69b0(arg1, arg3)
int32_t rcx_7 = (arg2[1].d & 0xfffffff7) | zx.d(rax_1) << 3
arg2[1].d = rcx_7 & 0xfffffeff

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0 && rcx_7.b s< 0)
    rbp = 0x10

arg2[1].d = (rcx_7 & 0xfffffeef) | rbp
return arg2
