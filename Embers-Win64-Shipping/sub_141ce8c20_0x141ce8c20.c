// 函数: sub_141ce8c20
// 地址: 0x141ce8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2))
    
    if (i != 0xffffffff)
        int64_t zmm0 = *arg3
        
        do
            int64_t* rcx_2 = sx.q(i) * 0x1c + *arg1
            
            if (not((*rcx_2).d f!= zmm0.d) && *(rcx_2 + 4) f== zmm0:4.d)
                if (i != 0xffffffff && rcx_2 != 0)
                    return &rcx_2[1]
                
                break
            
            i = *(rcx_2 + 0x14)
        while (i != 0xffffffff)

return sub_141ce8870(arg1, rsi.d, arg3) __tailcall
