// 函数: sub_142aa2640
// 地址: 0x142aa2640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0 && arg4 != 0)
    if (arg4 s>= 0)
        int16_t rax_1 = *(arg2 + 8)
        int32_t r8_1
        
        if (rax_1 s< 0)
            r8_1 = *(arg2 + 0xc)
        else
            r8_1 = sx.d(rax_1) s>> 5
        
        int16_t r11 = *(arg3 + 8)
        int32_t rcx_1
        
        if (r11 s< 0)
            rcx_1 = *(arg3 + 0xc)
        else
            rcx_1 = sx.d(r11) s>> 5
        
        if (r8_1 s> arg4)
            r8_1 = arg4
        
        if (rcx_1 s> arg4)
            rcx_1 = arg4
        
        void* rbx = nullptr
        int16_t* r9
        
        if ((r11.b & 0x11) == 0)
            r9 = arg3 + 0xa
            
            if ((r11.b & 2) == 0)
                r9 = *(arg3 + 0x18)
        else
            r9 = nullptr
        
        if ((rax_1.b & 0x11) == 0)
            rbx = arg2 + 0xa
            
            if ((rax_1.b & 2) == 0)
                rbx = *(arg2 + 0x18)
        
        return sub_142aa3550(arg1, rbx, r8_1, r9, rcx_1, arg5)
    
    *arg5 = 1

return 0
