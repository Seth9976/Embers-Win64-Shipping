// 函数: sub_140b56230
// 地址: 0x140b56230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*(arg1 + 0x30))
int32_t rcx = *(arg1 + 0x30)

if (((*(*(arg1 + 0x10) + 0x3c) u>> 4).b & 1) == 0)
    int32_t rax_4 = (rsi + 8).d
    
    if (rax_4 s> rcx)
        *(arg1 + 0x30) = rax_4
        
        if (rax_4 s> *(arg1 + 0x34))
            sub_1405daba0(arg1 + 0x28)
    else if (rax_4 s< rcx && rax_4 != rcx)
        *(arg1 + 0x30) = rax_4
        sub_1405dac10(arg1 + 0x28)
    
    *(rsi + *(arg1 + 0x28)) = 0
else
    int32_t rax_1 = (rsi + 0xc).d
    
    if (rax_1 s> rcx)
        *(arg1 + 0x30) = rax_1
        
        if (rax_1 s> *(arg1 + 0x34))
            sub_1405daba0(arg1 + 0x28)
    else if (rax_1 s< rcx && rax_1 != rcx)
        *(arg1 + 0x30) = rax_1
        sub_1405dac10(arg1 + 0x28)
    
    int64_t* rax_3 = rsi + *(arg1 + 0x28)
    *rax_3 = 0
    rax_3[1].d = 0

int64_t rdi_1 = sx.q(*(arg1 + 0x60))
int32_t rax_7 = (rdi_1 + 1).d
*(arg1 + 0x60) = rax_7

if (rax_7 s> *(arg1 + 0x64))
    sub_14083a7e0(arg1 + 0x58)

int64_t rcx_6 = *(arg1 + 0x58)
int64_t rdx_3 = rdi_1 * 3
*(rcx_6 + (rdx_3 << 2)) = 0
int64_t* r8_2 = rcx_6 + (rdx_3 << 2)
*r8_2 = *arg2
r8_2[1].d = rsi.d
return zx.q(rsi.d)
