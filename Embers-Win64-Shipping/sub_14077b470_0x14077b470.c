// 函数: sub_14077b470
// 地址: 0x14077b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int64_t* rcx_2
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; 
            i = rcx_2[0x1a].d)
        rcx_2 = sx.q(i) * 0xe0 + *arg1
        
        if (*rcx_2 == *arg3)
            if (i != 0xffffffff && rcx_2 != 0)
                return &rcx_2[2]
            
            break

return sub_14077afa0(arg1, rsi.d, arg3) __tailcall
