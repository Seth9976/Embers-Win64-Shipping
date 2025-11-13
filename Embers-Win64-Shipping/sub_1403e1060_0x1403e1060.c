// 函数: sub_1403e1060
// 地址: 0x1403e1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_12 = arg1[2]

if (rax_12 == 0x1f40 || rax_12 == 0x2ee0 || rax_12 == 0x3e80 || rax_12 == 0x5dc0 || rax_12 == 0x7d00
        || rax_12 == 0xac44 || rax_12 == 0xbb80)
    int32_t rax = arg1[5]
    
    if (rax == 0x1f40 || rax == 0x2ee0 || rax == 0x3e80)
        int32_t r8_1 = arg1[3]
        
        if (r8_1 == 0x1f40 || r8_1 == 0x2ee0 || r8_1 == 0x3e80)
            int32_t rdx_1 = arg1[4]
            
            if ((rdx_1 == 0x1f40 || rdx_1 == 0x2ee0 || rdx_1 == 0x3e80) && rdx_1 s<= rax
                    && r8_1 s>= rax && rdx_1 s<= r8_1)
                int64_t rax_1 = sx.q(arg1[6])
                
                if (rax_1.d u> 0x3c || not(test_bit(0x1000010000100400, rax_1)))
                    return 0xffffff99
                
                if (arg1[8] u> 0x64)
                    return 0xffffff97
                
                if (arg1[0xb] u> 1)
                    return 0xffffff94
                
                if (arg1[0xc] u> 1)
                    return 0xffffff93
                
                if (arg1[0xa] u> 1)
                    return 0xffffff95
                
                int32_t rdx_2 = *arg1
                
                if (rdx_2 - 1 u<= 1)
                    int32_t r8_2 = arg1[1]
                    
                    if (r8_2 - 1 u<= 1 && r8_2 s<= rdx_2)
                        if (arg1[9] u<= 0xa)
                            return 0
                        
                        return 0xffffff96
                
                return 0xffffff91

return 0xffffff9a
