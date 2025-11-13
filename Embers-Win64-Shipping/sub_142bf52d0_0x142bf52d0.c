// 函数: sub_142bf52d0
// 地址: 0x142bf52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg3
uint64_t r11 = zx.q(arg2)

if (*(arg1 + 0x1c) == 2 || arg3 - r11.d u< 2)
    return 

int64_t rdi_1 = *(arg1 + 0x78)
int32_t r9_1 = *(rdi_1 + r11 * 0x14 + 8)
uint64_t r8_1 = zx.q((r11 + 1).d)

if (r8_1.d u< r10)
    uint64_t i_3 = zx.q(r10 - r8_1.d)
    int32_t* rdx_2 = rdi_1 + (((r8_1 << 2) + 2 + zx.q(r8_1.d)) << 2)
    uint64_t i
    
    do
        if (r9_1 u>= *rdx_2)
            r9_1 = *rdx_2
        
        rdx_2 = &rdx_2[5]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r11.d != 0)
    uint64_t r8_2
    
    do
        r8_2 = zx.q((r11 - 1).d)
        
        if (*(rdi_1 + r8_2 * 0x14 + 8) != *(rdi_1 + zx.q(r11.d) * 0x14 + 8))
            break
        
        r11 = zx.q(r8_2.d)
    while (r8_2.d != 0)

int32_t r8_3 = *(arg1 + 0x64)
bool cond:1_1 = r10 != r8_3

if (r10 u< r8_3)
    do
        if (*(rdi_1 + zx.q(r10 - 1) * 0x14 + 8) != *(rdi_1 + zx.q(r10) * 0x14 + 8))
            break
        
        r10 += 1
    while (r10 u< r8_3)
    
    cond:1_1 = r10 != r8_3

if (not(cond:1_1))
    int32_t i_1 = *(arg1 + 0x5c)
    
    while (i_1 u< *(arg1 + 0x60))
        void* rdx_5 = *(arg1 + 0x70) + zx.q(i_1) * 0x14
        
        if (*(rdx_5 + 8) != *(*(arg1 + 0x78) + zx.q(r10 - 1) * 0x14 + 8))
            break
        
        if (*(rdx_5 + 8) != r9_1)
            *(rdx_5 + 4) &= 0xfffffffe
        
        i_1 += 1
        *(rdx_5 + 8) = r9_1

if (r11.d u>= r10)
    return 

uint64_t rcx_7 = zx.q(r11.d) * 0x14
uint64_t i_4 = zx.q(r10 - r11.d)
uint64_t i_2

do
    uint64_t rax = *(arg1 + 0x78)
    
    if (*(rcx_7 + rax + 8) != r9_1)
        *(rcx_7 + rax + 4) &= 0xfffffffe
    
    *(rcx_7 + rax + 8) = r9_1
    rcx_7 += 0x14
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
