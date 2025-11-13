// 函数: sub_142b946e0
// 地址: 0x142b946e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0)
    return zx.q((arg2 + 0x14).d)

int64_t rdi = *arg1

if (rdi == 0)
    return zx.q((rdi + 6).d)

if ((*(arg2 + 0x20) & 1) != 0)
    int64_t rdx = *(arg2 + 8)
    
    if (rdx != 0)
        (*(rdi + 0x10))(rdi, rdx)
    
    int64_t rdx_1 = *(arg2 + 0x10)
    *(arg2 + 8) = 0
    
    if (rdx_1 != 0)
        (*(rdi + 0x10))(rdi, rdx_1)
    
    int64_t rdx_2 = *(arg2 + 0x18)
    *(arg2 + 0x10) = 0
    
    if (rdx_2 != 0)
        (*(rdi + 0x10))(rdi, rdx_2)
    
    *(arg2 + 0x18) = 0

__builtin_memset(arg2, 0, 0x20)
*(arg2 + 0x20) = 0
return 0
