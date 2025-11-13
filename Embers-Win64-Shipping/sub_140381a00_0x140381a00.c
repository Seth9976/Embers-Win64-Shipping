// 函数: sub_140381a00
// 地址: 0x140381a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

while (arg2 s< 0x190)
    arg2 *= 2
    r10 += 1

int32_t rax
int32_t r8

if (arg1 == 0x3e8)
    rax.b = arg3.b + 3
    r10.b -= 2
    rax.b <<= 5
    r10.b <<= 3
    rax.b |= r10.b
    r8.b = arg4 == 2
    return zx.q(rax.b) | zx.q(r8 << 2)

if (arg1 != 0x3ea)
    rax.b = arg3.b | 6
    rax.b *= 2
    r10.b -= 2
else
    rax = arg3 - 0x44e
    
    if (arg3 - 0x44e s< 0)
        rax = 0
    
    rax.b |= 0xfc
    rax.b <<= 2

rax.b |= r10.b
rax.b <<= 3
r8.b = arg4 == 2
return zx.q(rax.b) | zx.q(r8 << 2)
