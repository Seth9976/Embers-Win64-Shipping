// 函数: sub_1420d2bc0
// 地址: 0x1420d2bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = *(arg1 + 0x98) & 8

if (arg2 != neg.d(sbb.d(arg4, arg4, rcx_1 != 0)) - 1)
    int32_t r9_3 = 1
    int32_t rax_4 = 1
    
    if (rcx_1 == 0)
        rax_4 = -1
    
    if (arg2 != rax_4)
        int32_t rdx = 2
        int32_t rax_7 = 2
        
        if (rcx_1 == 0)
            rax_7 = -1
        
        if (arg2 != rax_7)
            int32_t rax_11 = *(arg1 + 0x98) & 0x11
            int32_t r11_1
            
            if (rax_11 != 0x10)
                r11_1 = -1
                rcx_1 = *(arg1 + 0x98) & 8
            else if (rcx_1 == 0)
                r11_1 = 0
            else
                r11_1 = rax_11 - 0xd
            
            if (arg2 != r11_1)
                if (rax_11 != 0x10)
                    r9_3 = -1
                else if (rcx_1 != 0)
                    r9_3 = 4
                
                if (arg2 != r9_3)
                    if (rax_11 != 0x10)
                        rdx = -1
                    else if (rcx_1 != 0)
                        rdx = 5
                    
                    if (arg2 == rdx)
                        *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 0xc) = arg5
                else
                    *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 8) = arg5
            else
                *(sx.q(arg3) * 0x2c + *(arg1 + 0x60) + 4) = arg5
        else
            *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 0xc) = arg5
    else
        *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 8) = arg5
else
    *(sx.q(arg3) * 0x2c + *(arg1 + 0x48) + 4) = arg5

arg3.b = 1
sub_141f55fe0(arg1 + 0x48, *(arg1 + 0x90), arg3.b)
return sub_141f55fe0(arg1 + 0x60, *(arg1 + 0x94), 1) __tailcall
