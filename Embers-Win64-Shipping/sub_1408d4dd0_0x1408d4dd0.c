// 函数: sub_1408d4dd0
// 地址: 0x1408d4dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140d3c6e0(arg1)
uint64_t rsi = rax

if (rax == 0 && *(arg1 + 0x10) != 0)
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != arg1[2] || *arg1 != 0xffffffff)
        void* rax_1 = sub_140d2bce0(&arg1[4])
        sub_140d3a3a0(arg1, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            arg1[2] = rax_2
        
        rsi = sub_140d3c6e0(arg1)

if (rsi == 0)
    uint64_t rax_4 = sub_140d3c6e0(arg1)
    
    if (rax_4 == 0)
        if (*(arg1 + 0x10) != 0)
            if (rax_4.d == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_4 = zx.q(data_1439aaa30)
            
            int64_t rax_7
            
            if (rax_4.d != arg1[2] || *arg1 != 0xffffffff)
                void* rax_5 = sub_140d2bce0(&arg1[4])
                sub_140d3a3a0(arg1, rax_5)
                
                if (rax_5 != 0 || data_143e1d7b4 == 0)
                    int32_t rax_6 = 0
                    
                    if (0 == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_6 = data_1439aaa30
                    
                    arg1[2] = rax_6
                
                rax_7 = sub_140d3c6e0(arg1)
            
            if (((rax_4.d == arg1[2] && *arg1 == 0xffffffff) || rax_7 == 0) && *(arg1 + 0x10) != 0)
                sub_140d30a00(&arg1[4], 0)
                uint64_t rax_8 = sub_140d3c6e0(arg1)
                uint64_t rcx_9 = rax_8
                
                if (rax_8 == 0 && *(arg1 + 0x10) != 0)
                    if (rax_8.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_8 = zx.q(data_1439aaa30)
                    
                    if (rax_8.d != arg1[2] || *arg1 != 0xffffffff)
                        void* rax_9 = sub_140d2bce0(&arg1[4])
                        sub_140d3a3a0(arg1, rax_9)
                        
                        if (rax_9 != 0 || data_143e1d7b4 == 0)
                            int32_t rax_10 = 0
                            
                            if (0 == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_10 = data_1439aaa30
                            
                            arg1[2] = rax_10
                        
                        return sub_140d3c6e0(arg1)
                
                return rcx_9

return rsi
