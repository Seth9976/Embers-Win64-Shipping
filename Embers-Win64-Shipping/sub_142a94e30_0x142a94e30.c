// 函数: sub_142a94e30
// 地址: 0x142a94e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 1

for (int32_t i = 6; i s> 0; )
    int32_t r11_1 = *(&data_1436438d0 + (sx.q(r9) << 2))
    int32_t rax_3 = *(&data_1436438d0 + (sx.q(r9 + 1) << 2))
    
    if (arg1 s< r11_1)
        break
    
    if (arg1 s< rax_3)
        int32_t rax_6 = r9 + 2 + ((arg1 - r11_1) << 1)
        
        if (rax_6 != 0)
            int64_t rax_8 = sx.q(*(&data_1436438d0 + (sx.q(rax_6 + 1) << 2)))
            
            if (rax_8.d != 0)
                return sub_142a94d50(*(&data_1436438d0 + (rax_8 << 2)), arg2) __tailcall
        
        break
    
    i -= 1
    r9 = r9 + 2 + ((rax_3 - r11_1) << 1)

return 0xffffffff
