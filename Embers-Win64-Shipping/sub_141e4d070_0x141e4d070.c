// 函数: sub_141e4d070
// 地址: 0x141e4d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int64_t* r8_1
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; 
            i = r8_1[0xc].d)
        r8_1 = sx.q(i) * 0x68 + *arg1
        
        if (*r8_1 == *arg3 && r8_1[1] == arg3[1])
            if (i != 0xffffffff && r8_1 != 0)
                return &r8_1[2]
            
            break

return sub_141e4cd50(arg1, rsi.d, arg3) __tailcall
