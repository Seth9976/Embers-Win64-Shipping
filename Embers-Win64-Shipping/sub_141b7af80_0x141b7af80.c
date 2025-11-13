// 函数: sub_141b7af80
// 地址: 0x141b7af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[4]
*arg1 = *arg2
void* rbp = &arg2[4]
arg1[1] = arg2[1]
arg1[2].b = arg2[2].b
*(arg1 + 0x11) = *(arg2 + 0x11)
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x13) = *(arg2 + 0x13)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1e) = *(arg2 + 0x1e)
*(rbx + 0x20) = 0
int64_t r14 = sx.q(*(rbp + 0x28))
void* r15 = *(rbp + 0x20)
*(rbx + 0x28) = r14.d

if (r14.d != 0)
    sub_140775110(rbx, r14.d, 0)
    void* rax_11 = *(rbx + 0x20)
    
    if (r15 != 0)
        rbp = r15
    
    if (rax_11 != 0)
        rbx = rax_11
    
    memcpy(rbx, rbp, (r14 << 2).d)
else
    *(rbx + 0x2c) = 8

void* rsi_1 = &arg2[0xa]
arg1[0xc] = 0
void* rbx_1 = &arg1[0xa]
int64_t rbp_1 = sx.q(*(rsi_1 + 0x18))
void* r14_1 = *(rsi_1 + 0x10)
*(rbx_1 + 0x18) = rbp_1.d

if (rbp_1.d != 0)
    sub_140775080(rbx_1, rbp_1.d, 0)
    void* rax_12 = *(rbx_1 + 0x10)
    
    if (r14_1 != 0)
        rsi_1 = r14_1
    
    if (rax_12 != 0)
        rbx_1 = rax_12
    
    memcpy(rbx_1, rsi_1, (rbp_1 << 2).d)
else
    *(rbx_1 + 0x1c) = 4

return arg1
