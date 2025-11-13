// 函数: sub_141998290
// 地址: 0x141998290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg4) * 0x28
uint32_t r9 = *(r11 + 0x1439c85e8)
uint32_t r10_1 = arg1 u>> arg5

if (r10_1 u>= r9)
    r9 = r10_1

uint32_t rbx_1 = arg2 u>> arg5
*arg6 = r9
uint32_t rdx = *(r11 + &data_1439c85ec)

if (rbx_1 u>= rdx)
    rdx = rbx_1

uint32_t r8 = arg3 u>> arg5
*arg7 = rdx
uint32_t rdx_1 = *(r11 + 0x1439c85f0)

if (r8 u>= rdx_1)
    rdx_1 = r8

*arg8 = rdx_1
return arg8
