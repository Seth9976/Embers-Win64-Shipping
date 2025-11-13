// 函数: sub_1414763d0
// 地址: 0x1414763d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]

if (&arg1[8] != &arg2[8])
    int64_t r14_1 = sx.q(arg2[0x24])
    void* r15_1 = *(arg2 + 0x80)
    int32_t r8_1 = arg1[0x25]
    arg1[0x24] = r14_1.d
    
    if (r14_1.d != 0 || r8_1 != 0)
        sub_1413f6990(&arg1[8], r14_1.d, r8_1)
        void* rax_6 = *(arg1 + 0x80)
        void* rdx_1 = &arg2[8]
        void* rcx_1 = &arg1[8]
        
        if (r15_1 != 0)
            rdx_1 = r15_1
        
        if (rax_6 != 0)
            rcx_1 = rax_6
        
        memcpy(rcx_1, rdx_1, (r14_1 << 4).d)
    else
        arg1[0x25] = 6

void* rbp_1 = &arg2[0x28]
void* rsi_1 = &arg1[0x28]

if (rsi_1 != rbp_1)
    int64_t r14_2 = sx.q(*(rbp_1 + 0x90))
    void* r15_2 = *(rbp_1 + 0x80)
    int32_t r8_4 = *(rsi_1 + 0x94)
    *(rsi_1 + 0x90) = r14_2.d
    
    if (r14_2.d != 0 || r8_4 != 0)
        sub_1413f6a50(rsi_1, r14_2.d, r8_4)
        void* rax_7 = *(rsi_1 + 0x80)
        
        if (r15_2 != 0)
            rbp_1 = r15_2
        
        if (rax_7 != 0)
            rsi_1 = rax_7
        
        memcpy(rsi_1, rbp_1, (r14_2 << 4).d)
    else
        *(rsi_1 + 0x94) = 8

*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x150) = *(arg2 + 0x150)
arg1[0x58].b = arg2[0x58].b
arg1[0x59] = arg2[0x59]
arg1[0x5a] = arg2[0x5a]
return arg1
