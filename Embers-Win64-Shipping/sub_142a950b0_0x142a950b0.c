// 函数: sub_142a950b0
// 地址: 0x142a950b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 1

for (int32_t i = 6; i s> 0; )
    int32_t r11_1 = *(&data_1436438d0 + (sx.q(r8) << 2))
    int32_t rax_3 = *(&data_1436438d0 + (sx.q(r8 + 1) << 2))
    
    if (r11_1 s> 0x100a)
        break
    
    if (rax_3 s> 0x100a)
        int32_t rax_6 = r8 + 2 + ((0x100a - r11_1) << 1)
        
        if (rax_6 != 0)
            int32_t rax_8 = sub_142a94c70(*(&data_1436438d0 + (sx.q(rax_6 + 1) << 2)), arg1)
            
            if (rax_8 != 0)
                void* result = sx.q(rax_8) + "Alpha"
                
                if (*(sx.q(rax_8) + &data_1436487f0) s<= 0)
                    return 0
                
                if (*result == 0)
                    return nullptr
                
                return result
        
        break
    
    i -= 1
    r8 = r8 + 2 + ((rax_3 - r11_1) << 1)

return 0
