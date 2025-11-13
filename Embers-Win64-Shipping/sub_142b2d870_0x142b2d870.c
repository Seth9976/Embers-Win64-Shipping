// 函数: sub_142b2d870
// 地址: 0x142b2d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

char rax_1 = sub_142a57090(arg1, arg2)

if (rax_1 == 0)
    return rax_1

if (sub_142a45d30(arg1 + 0x148, arg2 + 0x148) != 0
        && sub_142b74b40(arg1 + 0x228, arg2 + 0x228) != 0)
    int64_t* rcx_2 = *(arg1 + 0x2a8)
    int32_t r8_1
    r8_1.b = *(arg2 + 0x2a8) == 0
    int32_t rax_4
    rax_4.b = rcx_2 == 0
    
    if (rax_4 == r8_1)
        char rax_6
        
        if (rcx_2 != 0)
            rax_6 = (*(*rcx_2 + 0x10))()
        
        if (rcx_2 == 0 || rax_6 != 0)
            int64_t* rcx_3 = *(arg1 + 0x2c0)
            int32_t rax_7
            rax_7.b = *(arg2 + 0x2c0) == 0
            int32_t rsi_1
            rsi_1.b = rcx_3 == 0
            
            if (rsi_1 == rax_7)
                if (rcx_3 != 0)
                    rax_7 = (*(*rcx_3 + 0x10))()
                
                if (rcx_3 == 0 || rax_7.b != 0)
                    rax_7.b = 1
                    return rax_7

return 0
