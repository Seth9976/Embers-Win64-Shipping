// 函数: sub_142b7c7c0
// 地址: 0x142b7c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)

if (rcx == 0)
    return 

*(rcx + 4) = *(arg1 + 0x48)
int16_t rsi_1 = -1
**(arg1 + 0x28) = 0
int32_t rbx_1 = *(arg1 + 0x48)
int32_t rdx_1 = rbx_1 - 0xf

if (rdx_1 s< 0)
    rdx_1 = 0
else if (rdx_1 s> 0)
    void* rax_3 = *(arg1 + 0x10)
    int16_t r8_1 = *(rax_3 + 8)
    int32_t rcx_2
    
    if (r8_1 s< 0)
        rcx_2 = *(rax_3 + 0xc)
    else
        rcx_2 = sx.d(r8_1) s>> 5
    
    int16_t r8_2
    
    if (rdx_1 u>= rcx_2)
        r8_2 = -1
    else
        void* rcx_3 = rax_3 + 0xa
        
        if ((r8_1.b & 2) == 0)
            rcx_3 = *(rax_3 + 0x18)
        
        r8_2 = *(rcx_3 + (sx.q(rdx_1) << 1))
    
    if ((zx.d(r8_2) & 0xfffffc00) == 0xdc00)
        rdx_1 += 1

int32_t rbx_2 = rbx_1 - rdx_1
sub_142a49120(*(arg1 + 0x10), rdx_1, rbx_2, *(arg1 + 0x28) + 8, 0)
*(*(arg1 + 0x28) + (sx.q(rbx_2) << 1) + 8) = 0
void* rcx_6 = *(arg1 + 0x10)
int16_t rax_8 = *(rcx_6 + 8)
int32_t rbx_4

if (rax_8 s< 0)
    rbx_4 = *(rcx_6 + 0xc)
else
    rbx_4 = sx.d(rax_8) s>> 5

int32_t r10_1 = *(arg1 + 0x48)
int32_t rbx_5 = rbx_4 - r10_1

if (rbx_5 s>= 0x10)
    int16_t rdx_2 = *(rcx_6 + 8)
    rbx_5 = 0xf
    int32_t rax_10
    
    if (rdx_2 s< 0)
        rax_10 = *(rcx_6 + 0xc)
    else
        rax_10 = sx.d(rdx_2) s>> 5
    
    if (r10_1 + 0xe u< rax_10)
        void* rdx_3 = rcx_6 + 0xa
        
        if ((rdx_2.b & 2) == 0)
            rdx_3 = *(rcx_6 + 0x18)
        
        rsi_1 = *(rdx_3 + (sx.q(r10_1 + 0xe) << 1))
    
    if ((zx.d(rsi_1) & 0xfffffc00) == 0xd800)
        rbx_5 = 0xe

sub_142a49120(rcx_6, r10_1, rbx_5, *(arg1 + 0x28) + 0x28, 0)
*(*(arg1 + 0x28) + (sx.q(rbx_5) << 1) + 0x28) = 0
