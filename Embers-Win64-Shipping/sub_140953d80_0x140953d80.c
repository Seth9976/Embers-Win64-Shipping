// 函数: sub_140953d80
// 地址: 0x140953d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x49] != 0)
    void* rsi_1 = arg1[0x1c]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_140986690()
        void* rdx = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && *(rsi_1 + 0x238) != 1)
            int64_t* rcx_1 = *(arg2 + 8)
            int64_t rax_3
            
            if (rcx_1 != 0)
                rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
            
            if (rcx_1 == 0 || rax_3.b == 0)
                rax_3.b = 0
            else
                rax_3.b = 1
            
            if (rax_3.b != 0)
                int64_t* rcx_2 = *(arg2 + 0x30)
                
                if (rcx_2 != 0)
                    rax_3 = (*(*rcx_2 + 0x28))(rcx_2)
                
                if (rcx_2 == 0 || rax_3.b == 0)
                    rax_3.b = 0
                else
                    rax_3.b = 1
                
                if (rax_3.b != 0 && *(arg2 + 0x68) s> 1
                        && (sub_14094dfb0(arg2, arg2 + 0x28) == 0 || *(arg2 + 0x58) s> 1))
                    int64_t* rcx_4 = arg1[0x49]
                    void** rax_8 = (*(*rcx_4 + 0x288))(rcx_4)
                    int64_t* rcx_5 = arg1[0x49]
                    int64_t r8_2 = *rcx_5
                    int32_t rax_9 = (*(r8_2 + 0x290))(rcx_5, arg2, r8_2)
                    
                    if (rax_9 == 0xffffffff)
                        int64_t* rcx_14 = arg1[0x49]
                        int32_t rax_17 = (*(*rcx_14 + 0x290))(rcx_14, arg2 + 0x28)
                        int32_t rax_18
                        
                        if (rax_17 == 0xffffffff)
                            rax_18 = sub_140947320(arg1[0x49] + 0x50, *(arg2 + 0x30))
                        
                        if (rax_17 != 0xffffffff || rax_18 != 0xffffffff)
                            return 0xf
                        
                        int64_t* rcx_17 = arg1[0x49]
                        
                        if ((*(*rcx_17 + 0x2b8))(rcx_17, arg2) == 0)
                            return 3
                        
                        char rax_20
                        
                        if (arg1[0x55].d == 0)
                            rax_20 = 0
                        else
                            int64_t* rcx_18 = arg1[0x54]
                            
                            if (rcx_18 == 0)
                                rax_20 = 0
                            else if ((*(*rcx_18 + 0x28))(rcx_18) == 0)
                                rax_20 = 0
                            else
                                rax_20 = 1
                        
                        if (rax_20 != 0)
                            int64_t* rcx_19
                            
                            if (arg1[0x55].d == 0)
                                rcx_19 = nullptr
                            else
                                rcx_19 = arg1[0x54]
                            
                            if ((*(*rcx_19 + 0x48))(rcx_19, arg2 + 0x28) == 0)
                                return 0xb
                        
                        int64_t* rcx_20 = arg1[0x49]
                        
                        if ((*(*rcx_20 + 0x2e0))(rcx_20, arg2) != 0)
                            int64_t* rcx_21 = arg1[0x49]
                            
                            if ((*(*rcx_21 + 0x268))(rcx_21, arg2) == 0)
                                return 4
                            
                            sub_140969190(arg1, arg2 + 0x28)
                            sub_140977350(arg1)
                            sub_14096a8d0(arg1, &arg1[0x4c])
                            int64_t* rcx_25 = arg1[0x49]
                            
                            if ((*(*rcx_25 + 0x2c0))(rcx_25) != 0)
                                sub_14096a8d0(arg1, &arg1[0x4a])
                            
                            return 8
                    else
                        if (*(arg2 + 0x58) s> 1)
                            sub_140597df0(*rax_8 + sx.q(rax_9) * 0x78 + 0x50, arg2 + 0x50)
                        
                        int64_t* rcx_9 = arg1[0x49]
                        
                        if ((*(*rcx_9 + 0x2e0))(rcx_9, arg2) != 0)
                            sub_140977350(arg1)
                            char rax_12
                            
                            if (arg1[0x51].d == 0)
                                rax_12 = 0
                            else
                                int64_t* rcx_11 = arg1[0x50]
                                
                                if (rcx_11 == 0)
                                    rax_12 = 0
                                else if ((*(*rcx_11 + 0x28))(rcx_11) == 0)
                                    rax_12 = 0
                                else
                                    rax_12 = 1
                            
                            if (rax_12 != 0)
                                int64_t* rcx_12
                                
                                if (arg1[0x51].d == 0)
                                    rcx_12 = nullptr
                                else
                                    rcx_12 = arg1[0x50]
                                
                                (*(*rcx_12 + 0x50))(rcx_12, arg2)
                            
                            sub_140969190(arg1, arg2 + 0x28)
                            return 6
                    
                    return 0xa
            
            return 0xd

return 9
