// 函数: sub_140744050
// 地址: 0x140744050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[6]
void* rbp = &arg5[4]
*arg1 = 0
arg1[1].d = 0xffffffff
arg1[2] = *arg5
arg1[3] = arg5[1]
arg1[4].b = arg5[2].b
*(arg1 + 0x21) = *(arg5 + 0x11)
*(arg1 + 0x22) = *(arg5 + 0x12)
*(arg1 + 0x23) = *(arg5 + 0x13)
*(arg1 + 0x24) = *(arg5 + 0x14)
*(arg1 + 0x25) = *(arg5 + 0x15)
arg1[5].d = arg5[3].d
*(arg1 + 0x2c) = *(arg5 + 0x1c)
*(arg1 + 0x2e) = *(arg5 + 0x1e)
*(rdi + 0x20) = 0
int64_t r14 = sx.q(*(rbp + 0x28))
void* r12 = *(rbp + 0x20)
*(rdi + 0x28) = r14.d

if (r14.d != 0)
    sub_140775110(rdi, r14.d, 0)
    void* rax_11 = *(rdi + 0x20)
    
    if (r12 != 0)
        rbp = r12
    
    if (rax_11 != 0)
        rdi = rax_11
    
    memcpy(rdi, rbp, (r14 << 2).d)
else
    *(rdi + 0x2c) = 8

void* rsi_1 = &arg5[0xa]
arg1[0xe] = 0
void* rdi_1 = &arg1[0xc]
int64_t rbp_1 = sx.q(*(rsi_1 + 0x18))
void* r14_1 = *(rsi_1 + 0x10)
*(rdi_1 + 0x18) = rbp_1.d

if (rbp_1.d != 0)
    sub_140775080(rdi_1, rbp_1.d, 0)
    void* rax_12 = *(rdi_1 + 0x10)
    
    if (r14_1 != 0)
        rsi_1 = r14_1
    
    if (rax_12 != 0)
        rdi_1 = rax_12
    
    memcpy(rdi_1, rsi_1, (rbp_1 << 2).d)
else
    *(rdi_1 + 0x1c) = 4

arg1[0x10] = *arg2
arg1[0x11].d = arg2[1].d
*(arg1 + 0x8c) = *arg3
*(arg1 + 0x94) = arg3[1].d
arg1[0x13].d = arg4
return arg1
