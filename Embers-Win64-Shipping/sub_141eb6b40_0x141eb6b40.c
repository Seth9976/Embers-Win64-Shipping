// 函数: sub_141eb6b40
// 地址: 0x141eb6b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = &arg2[4]
*arg1 = *arg2
void* rsi = &arg1[4]
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

if (rsi != rbp)
    int64_t r14_1 = sx.q(*(rbp + 0x28))
    int32_t r8_1 = *(rsi + 0x2c)
    void* r15_1 = *(rbp + 0x20)
    *(rsi + 0x28) = r14_1.d
    
    if (r14_1.d != 0 || r8_1 != 0)
        sub_140775110(rsi, r14_1.d, r8_1)
        void* rax_11 = *(rsi + 0x20)
        
        if (r15_1 != 0)
            rbp = r15_1
        
        if (rax_11 != 0)
            rsi = rax_11
        
        memcpy(rsi, rbp, (r14_1 << 2).d)
    else
        *(rsi + 0x2c) = 8

void* rsi_1 = &arg2[0xa]
void* rdi_1 = &arg1[0xa]

if (rdi_1 != rsi_1)
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x18))
    void* r14_2 = *(rsi_1 + 0x10)
    int32_t r8_4 = *(rdi_1 + 0x1c)
    *(rdi_1 + 0x18) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_4 != 0)
        sub_140775080(rdi_1, rbp_1.d, r8_4)
        void* rax_12 = *(rdi_1 + 0x10)
        
        if (r14_2 != 0)
            rsi_1 = r14_2
        
        if (rax_12 != 0)
            rdi_1 = rax_12
        
        memcpy(rdi_1, rsi_1, (rbp_1 << 2).d)
    else
        *(rdi_1 + 0x1c) = 4

return arg1
