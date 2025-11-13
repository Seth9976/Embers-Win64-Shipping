// 函数: sub_142435600
// 地址: 0x142435600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x568)

if (arg2 != result && result != 1 && arg2 != 0)
    if (arg2 == 1 && result == 2)
        *(arg1 + 0x568) = arg2
        return result
    
    void* rcx = *(arg1 + 0x30)
    
    if (rcx != 0)
        sub_1420e4e60(rcx)
    
    char rbp_1 = *(arg1 + 0x568)
    *(arg1 + 0x568) = arg2
    sub_14244a470(arg1)
    sub_140bc7700(0xffffffff)
    sub_14244a470(arg1)
    
    if (*(arg1 + 0xe0) != 0 || *(arg1 + 0xe8) != 0)
        char rdi_1 = *(arg1 + 0x568)
        
        while (true)
            if (rdi_1 == 1)
                sub_140bc7700(0xffffffff)
            
            sub_14244a470(arg1)
            char rsi_1 = *(arg1 + 0x568)
            
            if (rdi_1 == rsi_1 && sub_14243b130(arg1) == 0)
                break
            
            rdi_1 = rsi_1
    
    result = *(arg1 + 0x11b)
    
    if ((result & 0xc) == 0)
        int64_t* rcx_5 = *(arg1 + 0x1f8)
        
        if (rcx_5 != 0)
            sub_142268f30(rcx_5, arg1)
            result = *(arg1 + 0x11b)
        
        result |= 8
        *(arg1 + 0x11b) = result
    
    if (*(arg1 + 0x568) == 1)
        *(arg1 + 0x11c) &= 0xbf
    
    *(arg1 + 0x568) = rbp_1

return result
