// 函数: sub_1414c05a0
// 地址: 0x1414c05a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[0x10]
*arg1 = *arg2
void* rbp = &arg2[0x10]
*(rsi + 0x100) = 0
int64_t r14 = sx.q(*(rbp + 0x110))
void* r15 = *(rbp + 0x100)
*(rsi + 0x110) = r14.d

if (r14.d != 0)
    sub_1414dc0f0(rsi, r14.d, 0)
    void* rax_1 = *(rsi + 0x100)
    
    if (r15 != 0)
        rbp = r15
    
    if (rax_1 != 0)
        rsi = rax_1
    
    memcpy(rsi, rbp, (r14 << 4).d)
else
    *(rsi + 0x114) = 0x10

*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x138) = *(arg2 + 0x138)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x148) = *(arg2 + 0x148)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x158) = *(arg2 + 0x158)
return arg1
