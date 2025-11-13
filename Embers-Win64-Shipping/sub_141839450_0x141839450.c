// 函数: sub_141839450
// 地址: 0x141839450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
uint32_t rax = GetFileAttributesW(arg2)
enum WIN32_ERROR rax_1 = GetLastError()

if (rax == 0xffffffff)
    int32_t rax_2
    rax_2.b = rax_1 - 2 u<= 1
    return rax_2

int32_t rcx_2 = *arg3 | 1
*arg3 = rcx_2

if ((rax.b & 1) != 0)
    rcx_2 |= 2
    *arg3 = rcx_2

if (test_bit(rax, 0xb))
    *arg3 = rcx_2 | 4

rax_1.b = 1
return rax_1
