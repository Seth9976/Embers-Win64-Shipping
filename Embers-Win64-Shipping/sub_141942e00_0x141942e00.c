// 函数: sub_141942e00
// 地址: 0x141942e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x138)
int32_t i = 0
void*** r10

if (rax == 0)
    r10 = nullptr
else
    r10 = sub_141929890(rax)

void* r9 = &r10[4]

do
    void* r8_1
    
    if (*(arg3 + 0x38) == 0)
        r8_1 = arg3
    else
        r8_1 = zx.q(i) * 7 + arg3
    
    if (*r8_1 != 0 || *(r8_1 + 2) != 0 || *(r8_1 + 1) != 1 || *(r8_1 + 3) != 0 || *(r8_1 + 5) != 0
            || *(r8_1 + 4) != 1)
        rax.b = 1
    else
        rax.b = 0
    
    *(r9 - 8) = rax.b
    uint32_t rcx_1 = zx.d(*r8_1)
    int32_t rax_1
    
    if (rcx_1 == 1)
        rax_1 = 0x800a
    else if (rcx_1 == 2)
        rax_1 = 0x8007
    else if (rcx_1 == 3)
        rax_1 = 0x8008
    else if (rcx_1 == 4)
        rax_1 = 0x800b
    else
        rax_1 = 0x8006
    
    *(r9 - 4) = rax_1
    *r9 = sub_14194e9f0(zx.d(*(r8_1 + 1)))
    *(r9 + 4) = sub_14194e9f0(zx.d(*(r8_1 + 2)))
    char rax_4
    
    if (*(r8_1 + 5) != *(r8_1 + 2) || *(r8_1 + 4) != *(r8_1 + 1))
        rax_4 = 1
    else
        rax_4 = 0
    
    *(r9 + 8) = rax_4
    uint32_t rcx_7 = zx.d(*(r8_1 + 3))
    int32_t rax_5
    
    if (rcx_7 == 1)
        rax_5 = 0x800a
    else if (rcx_7 == 2)
        rax_5 = 0x8007
    else if (rcx_7 == 3)
        rax_5 = 0x8008
    else if (rcx_7 == 4)
        rax_5 = 0x800b
    else
        rax_5 = 0x8006
    
    *(r9 + 0xc) = rax_5
    *(r9 + 0x10) = sub_14194e9f0(zx.d(*(r8_1 + 4)))
    *(r9 + 0x14) = sub_14194e9f0(zx.d(*(r8_1 + 5)))
    i += 1
    *(r9 + 0x18) ^= (zx.d(*(r8_1 + 6)) ^ *(r9 + 0x18)) & 1
    int32_t rcx_16 = ((zx.d(*(r8_1 + 6)) ^ *(r9 + 0x18)) & 2) ^ *(r9 + 0x18)
    *(r9 + 0x18) = rcx_16
    int32_t rdx_3 = ((zx.d(*(r8_1 + 6)) ^ rcx_16) & 4) ^ rcx_16
    *(r9 + 0x18) = rdx_3
    *(r9 + 0x18) = ((zx.d(*(r8_1 + 6)) ^ rdx_3) & 8) ^ rdx_3
    r9 += 0x24
while (i u< 8)

*arg2 = r10

if (r10 != 0)
    r10[1].d += 1

return arg2
