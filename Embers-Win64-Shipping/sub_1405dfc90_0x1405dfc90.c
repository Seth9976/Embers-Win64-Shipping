// 函数: sub_1405dfc90
// 地址: 0x1405dfc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    void* rsi_1 = *(arg2 + 8)
    int32_t rbp_1 = arg2[4]
    
    if ((rsi_1.b & 1) != 0)
        rsi_1 = (rsi_1 s>> 1) + &arg2[2]
    
    int32_t r8_1 = arg1[5]
    arg1[4] = rbp_1
    
    if (rbp_1 != 0 || r8_1 != 0)
        sub_1405e3e80(&arg1[2], rbp_1, r8_1)
        void* rcx_1 = *(arg1 + 8)
        
        if ((rcx_1.b & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + &arg1[2]
        
        memcpy(rcx_1, rsi_1, rbp_1 * 2)
    else
        arg1[5] = rbp_1

if (&arg1[6] != &arg2[6])
    void* rsi_3 = *(arg2 + 0x18)
    int64_t rbp_2 = sx.q(arg2[8])
    
    if ((rsi_3.b & 1) != 0)
        rsi_3 = (rsi_3 s>> 1) + &arg2[6]
    
    int32_t r8_4 = arg1[9]
    arg1[8] = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405e3e00(&arg1[6], rbp_2.d, r8_4)
        void* rcx_4 = *(arg1 + 0x18)
        
        if ((rcx_4.b & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + &arg1[6]
        
        memcpy(rcx_4, rsi_3, (rbp_2 << 5).d)
    else
        arg1[9] = rbp_2.d

*(arg1 + 0x28) = *(arg2 + 0x28)
return arg1
