// 函数: sub_142ac0200
// 地址: 0x142ac0200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdx = (arg2 u>> 0xa).b & 1
uint8_t rax_1 = (arg2 u>> 9).b & 1

if (rax_1 == 0)
    if (rdx != 0)
        return zx.q(*(arg1 + 0xec) - *(0xe8 + arg1))
else if (rdx != 0)
    return zx.q(*(arg1 + 0x194) - *(0x190 + arg1))

if (((arg2 u>> 8).b & 1) == 0)
    void* const rcx_1 = 0xe0
    
    if (rax_1 != 0)
        rcx_1 = 0x188
    
    return zx.q(*(rcx_1 + arg1 + 4) - *(rcx_1 + arg1))

void* const rcx = 0xd8

if (rax_1 != 0)
    rcx = 0x180

return zx.q(*(rcx + arg1 + 4) - *(rcx + arg1))
