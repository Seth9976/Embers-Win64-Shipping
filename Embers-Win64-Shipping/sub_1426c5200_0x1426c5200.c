// 函数: sub_1426c5200
// 地址: 0x1426c5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[7]
*arg1 = arg2
void* rbp = &arg4[4]
arg1[1] = *arg5
arg1[2].d = arg5[1].d
arg1[3] = *arg4
arg1[4] = arg4[1]
arg1[5].b = arg4[2].b
*(arg1 + 0x29) = *(arg4 + 0x11)
*(arg1 + 0x2a) = *(arg4 + 0x12)
*(arg1 + 0x2b) = *(arg4 + 0x13)
*(arg1 + 0x2c) = *(arg4 + 0x14)
*(arg1 + 0x2d) = *(arg4 + 0x15)
arg1[6].d = arg4[3].d
*(arg1 + 0x34) = *(arg4 + 0x1c)
*(arg1 + 0x36) = *(arg4 + 0x1e)
*(rdi + 0x20) = 0
int64_t r14 = sx.q(*(rbp + 0x28))
void* r15 = *(rbp + 0x20)
*(rdi + 0x28) = r14.d

if (r14.d != 0)
    sub_140775110(rdi, r14.d, 0)
    void* rax_13 = *(rdi + 0x20)
    
    if (r15 != 0)
        rbp = r15
    
    if (rax_13 != 0)
        rdi = rax_13
    
    memcpy(rdi, rbp, (r14 << 2).d)
else
    *(rdi + 0x2c) = 8

void* rsi_1 = &arg4[0xa]
arg1[0xf] = 0
void* rdi_1 = &arg1[0xd]
int64_t rbp_1 = sx.q(*(rsi_1 + 0x18))
void* r14_1 = *(rsi_1 + 0x10)
*(rdi_1 + 0x18) = rbp_1.d

if (rbp_1.d != 0)
    sub_140775080(rdi_1, rbp_1.d, 0)
    void* rax_14 = *(rdi_1 + 0x10)
    
    if (r14_1 != 0)
        rsi_1 = r14_1
    
    if (rax_14 != 0)
        rdi_1 = rax_14
    
    memcpy(rdi_1, rsi_1, (rbp_1 << 2).d)
else
    *(rdi_1 + 0x1c) = 4

*(arg1 + 0x8c) = arg6
arg1[0x11].d = arg3
arg1[0x12] = 0
arg1[0x13] = 0
return arg1
