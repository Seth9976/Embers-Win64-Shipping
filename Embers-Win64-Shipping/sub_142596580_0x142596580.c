// 函数: sub_142596580
// 地址: 0x142596580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 8 != arg2 + 8)
    void* rsi_1 = *(arg2 + 8)
    int64_t rbp_1 = sx.q(*(arg2 + 0x10))
    
    if ((rsi_1.b & 1) != 0)
        rsi_1 = (rsi_1 s>> 1) + arg2 + 8
    
    int32_t r8_1 = *(arg1 + 0x14)
    *(arg1 + 0x10) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1419d6d70(arg1 + 8, rbp_1.d, r8_1)
        void* rcx_1 = *(arg1 + 8)
        
        if ((rcx_1.b & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 8
        
        memcpy(rcx_1, rsi_1, (rbp_1 << 2).d)
    else
        *(arg1 + 0x14) = rbp_1.d

if (arg1 + 0x18 != arg2 + 0x18)
    void* rsi_3 = *(arg2 + 0x18)
    int64_t rbp_2 = sx.q(*(arg2 + 0x20))
    
    if ((rsi_3.b & 1) != 0)
        rsi_3 = (rsi_3 s>> 1) + arg2 + 0x18
    
    int32_t r8_4 = *(arg1 + 0x24)
    *(arg1 + 0x20) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1419d6d70(arg1 + 0x18, rbp_2.d, r8_4)
        void* rcx_4 = *(arg1 + 0x18)
        
        if ((rcx_4.b & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + arg1 + 0x18
        
        memcpy(rcx_4, rsi_3, (rbp_2 << 2).d)
    else
        *(arg1 + 0x24) = rbp_2.d

*(arg1 + 0x28) = *(arg2 + 0x28)
return arg1
