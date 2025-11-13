// 函数: sub_140a738a0
// 地址: 0x140a738a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    int64_t rsi_1 = sx.q(arg3[2].d)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int64_t* r10_3
    
    for (int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rsi_1) << 2)); i != 0xffffffff; 
            i = r10_3[0x1a].d)
        r10_3 = sx.q(i) * 0xd8 + *arg1
        
        if (r10_3[2].d == rsi_1.d)
            int16_t* const r9_4
            
            if (arg3[1].d == 0)
                r9_4 = &data_142d40450
            else
                r9_4 = *arg3
            
            int16_t* rcx_1
            
            if (r10_3[1].d == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *r10_3
            
            int64_t r9_5 = r9_4 - rcx_1
            uint32_t j
            uint32_t r8
            
            do
                r8 = zx.d(*rcx_1)
                j = zx.d(*(rcx_1 + r9_5))
                
                if (r8 != j)
                    break
                
                rcx_1 = &rcx_1[1]
            while (j != 0)
            
            if (r8 - j == 0)
                *arg2 = i
                return arg2

*arg2 = 0xffffffff
return arg2
