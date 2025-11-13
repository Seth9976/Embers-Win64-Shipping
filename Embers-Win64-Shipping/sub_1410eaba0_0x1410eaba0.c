// 函数: sub_1410eaba0
// 地址: 0x1410eaba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[2]
*arg1 = *arg2
void* rbp = &arg2[2]
*(rsi + 0x40) = 0
int64_t r14 = sx.q(*(rbp + 0x50))
void* r15 = *(rbp + 0x40)
*(rsi + 0x50) = r14.d

if (r14.d != 0)
    sub_141034410(rsi, r14.d, 0)
    void* rax_1 = *(rsi + 0x40)
    
    if (r15 != 0)
        rbp = r15
    
    if (rax_1 != 0)
        rsi = rax_1
    
    memcpy(rsi, rbp, (r14 << 6).d)
else
    *(rsi + 0x54) = 1

arg1[0xe].d = arg2[0xe].d
void* rax_3 = arg2[0xf]
arg1[0xf] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* rsi_1 = &arg1[0x10]
*(rsi_1 + 8) = 0
void* rbp_1 = &arg2[0x10]
int64_t r14_1 = sx.q(*(rbp_1 + 0x10))
void* r15_1 = *(rbp_1 + 8)
*(rsi_1 + 0x10) = r14_1.d

if (r14_1.d != 0)
    sub_141034350(rsi_1, r14_1.d, 0)
    void* rax_4 = *(rsi_1 + 8)
    
    if (r15_1 != 0)
        rbp_1 = r15_1
    
    if (rax_4 != 0)
        rsi_1 = rax_4
    
    memcpy(rsi_1, rbp_1, (r14_1 << 2).d)
else
    *(rsi_1 + 0x14) = 1

arg1[0x13].b = arg2[0x13].b
*(arg1 + 0x99) = *(arg2 + 0x99)
*(arg1 + 0x9a) = *(arg2 + 0x9a)
return arg1
