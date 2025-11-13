// 函数: sub_141438000
// 地址: 0x141438000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    arg4 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (arg4 != 0)
        r11_1 = arg4
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2))
    
    if (i != 0xffffffff)
        arg4 = zx.q(*arg3)
        
        do
            int32_t* rdx_2 = (sx.q(i) << 4) + *arg1
            
            if (*rdx_2 == arg4.d)
                if (i != 0xffffffff && rdx_2 != 0)
                    return &rdx_2[1]
                
                break
            
            i = rdx_2[2]
        while (i != 0xffffffff)

return sub_141435a60(arg1, rsi.d, arg3, arg4.w) __tailcall
