// 函数: sub_142670850
// 地址: 0x142670850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[5]
*arg1 = *arg2
void* rbp = &arg2[5]
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(rsi + 0x48) = 0
int64_t r14 = sx.q(*(rbp + 0x50))
void* r15 = *(rbp + 0x48)
*(rsi + 0x50) = r14.d

if (r14.d != 0)
    sub_142692cc0(rsi, r14.d, 0)
    void* r9_1 = *(rsi + 0x48)
    
    if (r15 != 0)
        rbp = r15
    
    if (r9_1 != 0)
        rsi = r9_1
    
    memcpy(rsi, rbp, (r14 * 0xc).d)
else
    *(rsi + 0x54) = 6

arg1[0x10].b = arg2[0x10].b
*(arg1 + 0x81) ^= (*(arg1 + 0x81) ^ *(arg2 + 0x81)) & 1
char rax_8 = *(arg1 + 0x81)
char rcx_2 = ((*(arg2 + 0x81) ^ rax_8) & 2) ^ rax_8
*(arg1 + 0x81) = rcx_2
*(arg1 + 0x81) = ((*(arg2 + 0x81) ^ rcx_2) & 4) ^ rcx_2
return arg1
