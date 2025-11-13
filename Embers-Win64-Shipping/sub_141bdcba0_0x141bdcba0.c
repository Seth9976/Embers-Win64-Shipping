// 函数: sub_141bdcba0
// 地址: 0x141bdcba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x28)

if (rax == 1)
    sub_140d3a3a0(arg1 + 0x34, sub_141ba8300(arg3, arg1 + 0x2c))
else if (rax - 4 u<= 1)
    sub_140d3a3a0(arg1 + 0x3c, arg2)
    *(arg1 + 0x44) = *(arg1 + 0x2c)

char rax_3 = *(arg1 + 0x4c)

if (rax_3 == 1)
    sub_140d3a3a0(arg1 + 0x58, sub_141ba8300(arg3, arg1 + 0x50))
else if (rax_3 - 4 u<= 1)
    sub_140d3a3a0(arg1 + 0x60, arg2)
    *(arg1 + 0x68) = *(arg1 + 0x50)

char rax_6 = *(arg1 + 0x70)

if (rax_6 == 1)
    sub_140d3a3a0(arg1 + 0x7c, sub_141ba8300(arg3, arg1 + 0x74))
else if (rax_6 - 4 u<= 1)
    sub_140d3a3a0(arg1 + 0x84, arg2)
    *(arg1 + 0x8c) = *(arg1 + 0x74)

char rax_9 = *(arg1 + 0x94)

if (rax_9 == 1)
    sub_140d3a3a0(arg1 + 0xa0, sub_141ba8300(arg3, arg1 + 0x98))
else if (rax_9 - 4 u<= 1)
    sub_140d3a3a0(arg1 + 0xa8, arg2)
    *(arg1 + 0xb0) = *(arg1 + 0x98)

char rax_12 = *(arg1 + 0xb8)

if (rax_12 == 1)
    sub_140d3a3a0(arg1 + 0xc4, sub_141ba8300(arg3, arg1 + 0xbc))
else if (rax_12 - 4 u<= 1)
    sub_140d3a3a0(arg1 + 0xcc, arg2)
    *(arg1 + 0xd4) = *(arg1 + 0xbc)

uint64_t result = zx.q(*(arg1 + 0xdc))

if (result.b == 1)
    return sub_140d3a3a0(arg1 + 0xe8, sub_141ba8300(arg3, arg1 + 0xe0))

result.b -= 4

if (result.b u<= 1)
    sub_140d3a3a0(arg1 + 0xf0, arg2)
    result = *(arg1 + 0xe0)
    *(arg1 + 0xf8) = result

return result
