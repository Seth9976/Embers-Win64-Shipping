// 函数: sub_140b907e0
// 地址: 0x140b907e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]
void* rdi = &arg2[5]
void* rbp = &rsi[4]
*arg2 = **arg1
arg2[1] = *rsi
arg2[2] = rsi[1]
arg2[3].b = rsi[2].b
*(arg2 + 0x19) = *(rsi + 0x11)
*(arg2 + 0x1a) = *(rsi + 0x12)
arg2[4] = rsi[3]
*(rdi + 0x80) = 0
int64_t r14 = sx.q(*(rbp + 0x88))
void* r15 = *(rbp + 0x80)
*(rdi + 0x88) = r14.d

if (r14.d != 0)
    sub_140bb7d20(rdi, r14.d, 0)
    void* rax_7 = *(rdi + 0x80)
    
    if (r15 != 0)
        rbp = r15
    
    if (rax_7 != 0)
        rdi = rax_7
    
    memcpy(rdi, rbp, (r14 << 4).d)
else
    *(rdi + 0x8c) = 8

arg2[0x27] = 0
void* rdi_1 = &arg2[0x17]
int64_t r14_1 = sx.q(rsi[0x27].d)
void* rbp_1 = &rsi[0x16]
void* r15_1 = *(rbp_1 + 0x80)
*(rdi_1 + 0x88) = r14_1.d

if (r14_1.d != 0)
    sub_140bb7d20(rdi_1, r14_1.d, 0)
    void* rax_8 = *(rdi_1 + 0x80)
    
    if (r15_1 != 0)
        rbp_1 = r15_1
    
    if (rax_8 != 0)
        rdi_1 = rax_8
    
    memcpy(rdi_1, rbp_1, (r14_1 << 4).d)
else
    *(rdi_1 + 0x8c) = 8

arg2[0x29] = rsi[0x28]
arg2[0x2a].b ^= (rsi[0x29].b ^ arg2[0x2a].b) & 1
return arg2
