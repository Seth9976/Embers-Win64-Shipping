// 函数: sub_142bbf6b0
// 地址: 0x142bbf6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x10)
void* rcx = *(arg1 + 0x90)

if (rcx != 0)
    int64_t rdi_1 = *(rcx + 0x30)
    
    if (*(arg1 + 0xb8) != 0)
        sub_142b97020(rcx, arg1 + 0xb8)
    
    sub_142b99980(rdi_1, *(arg1 + 0xb0))
    __builtin_memset(arg1 + 0x90, 0, 0x30)

void* rcx_2 = *(arg1 + 0x520)

if (rcx_2 != 0)
    int64_t rdi_2 = *(rcx_2 + 0x30)
    
    if (*(arg1 + 0x548) != 0)
        sub_142b97020(rcx_2, arg1 + 0x548)
    
    sub_142b99980(rdi_2, *(arg1 + 0x540))
    __builtin_memset(arg1 + 0x520, 0, 0x30)

void* rcx_4 = *(arg1 + 0x30)

if (rcx_4 != 0)
    int64_t rdi_3 = *(rcx_4 + 0x30)
    
    if (*(arg1 + 0x58) != 0)
        sub_142b97020(rcx_4, arg1 + 0x58)
    
    sub_142b99980(rdi_3, *(arg1 + 0x50))
    __builtin_memset(arg1 + 0x30, 0, 0x30)

void* rcx_6 = *(arg1 + 0x4f0)

if (rcx_6 != 0)
    int64_t rdi_4 = *(rcx_6 + 0x30)
    
    if (*(arg1 + 0x518) != 0)
        sub_142b97020(rcx_6, arg1 + 0x518)
    
    sub_142b99980(rdi_4, *(arg1 + 0x510))
    __builtin_memset(arg1 + 0x4f0, 0, 0x30)

if (*(arg1 + 0x8b0) != 0)
    int32_t i = 0
    
    do
        sub_142bc1f70(rsi, *(arg1 + (zx.q(i) << 3) + 0x8b8))
        i += 1
    while (i u< *(arg1 + 0x8b0))
    
    sub_142b99980(rsi, *(arg1 + 0x8b8))
    *(arg1 + 0x8b8) = 0

*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
int64_t rdi_5 = *(*(arg1 + 8) + 0x30)
sub_142b99980(rdi_5, *(arg1 + 0x4e0))
int64_t rdx_13 = *(arg1 + 0x4d8)
*(arg1 + 0x4e0) = 0
*(arg1 + 0x4e8) = 0
sub_142b99980(rdi_5, rdx_13)
*(arg1 + 0x4d8) = 0
*(arg1 + 0x4d0) = 0
sub_142bc2440(arg1 + 0x1118, rsi)
sub_142bc1f70(rsi, arg1 + 0x5e0)

if (*(arg1 + 0x10c0) != 0)
    sub_142b97020(*(arg1 + 8), arg1 + 0x10c0)

*(arg1 + 0x10c8) = 0
*(arg1 + 0x10b8) = 0
*(arg1 + 0x10bc) = 0
sub_142b99980(rsi, *(arg1 + 0x10f0))
int64_t rdx_18 = *(arg1 + 0x5b0)
*(arg1 + 0x10f0) = 0
sub_142b99980(rsi, rdx_18)
int64_t rdx_19 = *(arg1 + 0x5b8)
*(arg1 + 0x5b0) = 0
sub_142b99980(rsi, rdx_19)
int64_t rdx_20 = *(arg1 + 0x5c8)
*(arg1 + 0x5b8) = 0
sub_142b99980(rsi, rdx_20)
int64_t rdx_21 = *(arg1 + 0x5d0)
*(arg1 + 0x5c8) = 0
sub_142b99980(rsi, rdx_21)
int64_t rax_2 = *(arg1 + 0x1110)
*(arg1 + 0x5d0) = 0

if (rax_2 != 0)
    rax_2(*(arg1 + 0x1108))
    sub_142b99980(rsi, *(arg1 + 0x1108))
    *(arg1 + 0x1108) = 0

int64_t result = sub_142b99980(rsi, *(arg1 + 0x1138))
*(arg1 + 0x1138) = 0
return result
