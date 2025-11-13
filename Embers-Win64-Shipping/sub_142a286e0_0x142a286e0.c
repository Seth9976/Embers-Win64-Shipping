// 函数: sub_142a286e0
// 地址: 0x142a286e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 1
uint64_t rcx_2 = zx.q(arg10)
int32_t r8

if (rcx_2.d == 0)
    r8 = 0

if (rcx_2.d != 0 || *(arg1 + 0x1b8) != 0)
    r8 = 1

uint64_t rax = zx.q(arg9)

if (rax.d == 0 && *(arg1 + 0x1b0) == 0)
    r10 = 0

int32_t r11
r11.b = rax.d + (1 << arg3) s< 1 << arg2
return sub_142a27e30(arg1, arg5, arg6, arg7, arg8, arg4, arg3, r8, r10, r11, (rax << 2).d, 
    (rcx_2 << 2).d, arg11)
