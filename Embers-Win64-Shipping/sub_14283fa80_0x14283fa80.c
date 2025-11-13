// 函数: sub_14283fa80
// 地址: 0x14283fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_5 = zx.d(arg1)
int32_t rcx_1 = rdx_5 & 0x3ff
int32_t rax_1 = rdx_5 & 0x7c00
int32_t rax_2

if (rax_1 == 0x7c00)
    rax_2 = 0x8f
else if (rax_1 != 0)
    rax_2 = rdx_5 u>> 0xa & 0x1f
else if (rcx_1 == 0)
    rax_2 = -0x70
else
    rax_2 = 1
    
    do
        rax_2 -= 1
        rcx_1 *= 2
    while (not(test_bit(rcx_1, 0xa)))
    
    rcx_1 &= 0x3ff

int512_t result
result.o = ((rdx_5 & 0xffff8000) << 3 | rcx_1) << 0xd | (rax_2 + 0x70) << 0x17
return result
