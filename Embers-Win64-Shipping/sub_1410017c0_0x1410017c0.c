// 函数: sub_1410017c0
// 地址: 0x1410017c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int64_t* r8_2
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi) << 2)); i != 0xffffffff; 
            i = r8_2[5].d)
        r8_2 = sx.q(i) * 0x30 + *arg1
        
        if (*r8_2 == *arg3 && r8_2[1].d == arg3[1].d && r8_2[2] == arg3[2] && r8_2[3] == arg3[3])
            if (i != 0xffffffff && r8_2 != 0)
                return &r8_2[4]
            
            break

return sub_1410015c0(arg1, rsi.d, arg3) __tailcall
