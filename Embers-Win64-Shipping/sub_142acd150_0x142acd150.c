// 函数: sub_142acd150
// 地址: 0x142acd150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4a) = *(arg2 + 0x4a)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x78) = *(arg2 + 0x78)
int64_t* rcx = *(arg1 + 0x80)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg2 + 0x80)
int64_t rax_12

if (rcx_1 == 0)
    rax_12 = 0
else
    rax_12 = (*(*rcx_1 + 0x58))(rcx_1)

*(arg1 + 0x80) = rax_12
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x88) = *(arg2 + 0x88)
__builtin_memset(arg1 + 0xa0, 0, 0x12)
__builtin_memset(arg1 + 0xb8, 0, 0x12)
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
return arg1
