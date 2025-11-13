// 函数: sub_1419fdd30
// 地址: 0x1419fdd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 8 != arg2 + 8)
    int64_t rbp_1 = sx.q(*(arg2 + 0x10))
    void* rsi_1 = *(arg2 + 8)
    
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

*(arg1 + 0x18) = *(arg2 + 0x18)
return arg1
