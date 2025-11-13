// 函数: sub_142b98b80
// 地址: 0x142b98b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xf0)

if (rax == 0 || (*(rax + 8) & 1) == 0)
    *(arg1 + 0x78) = 0
else
    int64_t rdx_1 = *(arg1 + 0x78)
    int64_t r8_1 = *(*(arg1 + 8) + 0x98)
    
    if (rdx_1 != 0)
        (*(r8_1 + 0x10))(r8_1, rdx_1, r8_1)
    
    void* rax_2 = *(arg1 + 0xf0)
    *(arg1 + 0x78) = 0
    *(rax_2 + 8) &= 0xfffffffe

__builtin_memset(arg1 + 0x30, 0, 0x28)
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x82) = 0
__builtin_memset(arg1 + 0x90, 0, 0x34)
__builtin_memset(arg1 + 0xc8, 0, 0x1c)
*(arg1 + 0xe8) = 0
*(arg1 + 0x60) = 0
return 0
