// 函数: sub_140bd32b0
// 地址: 0x140bd32b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t* rcx_3
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; 
            i = rcx_3[0x16])
        rcx_3 = sx.q(i) * 0x60 + *arg1
        
        if (*rcx_3 == *arg3)
            if (i != 0xffffffff && rcx_3 != 0)
                return &rcx_3[2]
            
            break

return sub_140bd2f60(arg1, rsi.d, arg3) __tailcall
