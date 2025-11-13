// 函数: sub_1428992d0
// 地址: 0x1428992d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143feb030 == 0)
    int32_t rsi_1 = 0
    int32_t rcx = 0
    
    if (sub_1428a5c60(&data_143feb034, sub_142899720) != 0)
        rcx = data_143feb04c
    
    if (rcx != 0)
        int32_t rcx_1
        
        if (not(test_bit(arg1, 0x12)))
            rcx_1 = 0
            
            if (sub_1428a5c60(&data_143feb050, sub_1428998f0) != 0)
                rcx_1 = data_143feb054
        
        if (test_bit(arg1, 0x12) || rcx_1 != 0)
            int32_t rdx
            
            if ((arg1.b & 1) != 0)
                rdx = 0
                
                if (sub_1428a5c60(&data_143feb058, sub_1428999a0) != 0)
                    rdx = data_143feb060
            
            if ((arg1.b & 1) == 0 || rdx != 0)
                int32_t rcx_2
                
                if ((arg1.b & 2) != 0)
                    rcx_2 = 0
                    
                    if (sub_1428a5c60(&data_143feb058, sub_142899930) != 0)
                        rcx_2 = data_143feb064
                
                if ((arg1.b & 2) == 0 || rcx_2 != 0)
                    int32_t rdx_1
                    
                    if ((arg1.b & 0x10) != 0)
                        rdx_1 = 0
                        
                        if (sub_1428a5c60(&data_143feb068, sub_142899960) != 0)
                            rdx_1 = data_143feb078
                    
                    if ((arg1.b & 0x10) == 0 || rdx_1 != 0)
                        int32_t rcx_3
                        
                        if ((arg1.b & 4) != 0)
                            rcx_3 = 0
                            
                            if (sub_1428a5c60(&data_143feb068, sub_142899680) != 0)
                                rcx_3 = data_143feb06c
                        
                        if ((arg1.b & 4) == 0 || rcx_3 != 0)
                            int32_t rdx_2
                            
                            if ((arg1.b & 0x20) != 0)
                                rdx_2 = 0
                                
                                if (sub_1428a5c60(&data_143feb070, sub_142899960) != 0)
                                    rdx_2 = data_143feb078
                            
                            if ((arg1.b & 0x20) == 0 || rdx_2 != 0)
                                int32_t rcx_4
                                
                                if ((arg1.b & 8) != 0)
                                    rcx_4 = 0
                                    
                                    if (sub_1428a5c60(&data_143feb070, sub_1428996b0) != 0)
                                        rcx_4 = data_143feb074
                                
                                if (((arg1.b & 8) == 0 || rcx_4 != 0) && not(test_bit(arg1, 0x11)))
                                    int32_t rcx_5
                                    
                                    if (arg1.b s< 0)
                                        rcx_5 = 0
                                        
                                        if (sub_1428a5c60(&data_143feb07c, sub_142899970) != 0)
                                            rcx_5 = data_143feb090
                                    
                                    if (arg1.b s>= 0 || rcx_5 != 0)
                                        int32_t rbx_1
                                        
                                        if ((arg1.b & 0x40) != 0)
                                            sub_1428a5c40(data_143feb040)
                                            int64_t rax_11 = 0
                                            
                                            if (arg2 != 0)
                                                rax_11 = *arg2
                                            
                                            data_143feb088 = rax_11
                                            rbx_1 = 0
                                            
                                            if (sub_1428a5c60(&data_143feb07c, sub_1428997c0) != 0)
                                                rbx_1 = data_143feb084
                                            
                                            sub_1428a5d00(data_143feb040)
                                        
                                        if ((arg1.b & 0x40) == 0 || rbx_1 != 0)
                                            int32_t rcx_8
                                            
                                            if (test_bit(arg1, 8))
                                                rcx_8 = 0
                                                
                                                if (sub_1428a5c60(&data_143feb094, sub_1428996e0)
                                                        != 0)
                                                    rcx_8 = data_143feb09c
                                            
                                            if (not(test_bit(arg1, 8)) || rcx_8 != 0)
                                                int32_t rcx_9
                                                
                                                if (test_bit(arg1, 0xb))
                                                    rcx_9 = 0
                                                    
                                                    if (sub_1428a5c60(&data_143feb0a0, 
                                                            sub_142899860) != 0)
                                                        rcx_9 = data_143feb0a4
                                                
                                                if (not(test_bit(arg1, 0xb)) || rcx_9 != 0)
                                                    int32_t rcx_10
                                                    
                                                    if (test_bit(arg1, 9))
                                                        rcx_10 = 0
                                                        
                                                        if (sub_1428a5c60(&data_143feb0a8, 
                                                                sub_1428998c0) != 0)
                                                            rcx_10 = data_143feb0ac
                                                    
                                                    if (not(test_bit(arg1, 9)) || rcx_10 != 0)
                                                        int32_t rcx_11
                                                        
                                                        if (test_bit(arg1, 0xa))
                                                            rcx_11 = 0
                                                            
                                                            if (sub_1428a5c60(&data_143feb0b0, 
                                                                    sub_142899830) != 0)
                                                                rcx_11 = data_143feb0b4
                                                        
                                                        if (not(test_bit(arg1, 0xa)) || rcx_11 != 0)
                                                            int32_t rcx_12
                                                            
                                                            if (test_bit(arg1, 0xe))
                                                                rcx_12 = 0
                                                                
                                                                if (sub_1428a5c60(&data_143feb0b8, 
                                                                        sub_142899890) != 0)
                                                                    rcx_12 = data_143feb0bc
                                                            
                                                            if (not(test_bit(arg1, 0xe))
                                                                    || rcx_12 != 0)
                                                                int32_t rcx_13
                                                                
                                                                if (test_bit(arg1, 0xd))
                                                                    rcx_13 = 0
                                                                    
                                                                    if (sub_1428a5c60(&data_143feb0c0, 
                                                                            sub_142899800) != 0)
                                                                        rcx_13 = data_143feb0c4
                                                                
                                                                if (not(test_bit(arg1, 0xd))
                                                                        || rcx_13 != 0)
                                                                    if ((arg1 & 0xfe00) != 0)
                                                                        sub_1428de120()
                                                                    
                                                                    if (test_bit(arg1, 0x10) &&
                                                                            sub_1428a5c60(&data_143feb0c8, 
                                                                            sub_142899b40) != 0)
                                                                        rsi_1 = data_143feb0d0
                                                                    
                                                                    if (not(test_bit(arg1, 0x10))
                                                                            || rsi_1 != 0)
                                                                        return 1
else if (not(test_bit(arg1, 0x12)))
    sub_1428a5670(0xf, 0x74, 0x46, "crypto\init.c", 0x249)

return 0
