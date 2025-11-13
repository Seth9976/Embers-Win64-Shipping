// 函数: sub_141eae6b0
// 地址: 0x141eae6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cebe30(arg1, arg2)

if (*(arg1 + 0x30) != 0)
    result = sub_140d41340()
    
    if (result != 0)
        void* rdx = *(arg1 + 0x30)
        result = sx.q(result[7].d)
        
        if (result.d s<= *(rdx + 0x38))
            void** result_1 = result
            result = *(rdx + 0x30)
            
            if (result[result_1] == &result[6] && rdx != 0)
                sub_140d41340()
                void* const rdx_1
                
                if (*(arg1 + 0x30) == 0)
                    rdx_1 = nullptr
                else
                    void* rax = sub_140d41340()
                    
                    if (rax == 0)
                        rdx_1 = nullptr
                    else
                        rdx_1 = *(arg1 + 0x30)
                        int64_t rax_1 = sx.q(*(rax + 0x38))
                        
                        if (rax_1.d s> *(rdx_1 + 0x38)
                                || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                            rdx_1 = nullptr
                
                *(rdx_1 + 8) |= arg2
                int64_t* r8_3
                
                if (*(arg1 + 0x30) == 0)
                    r8_3 = nullptr
                else
                    void* rax_3 = sub_140d41340()
                    
                    if (rax_3 == 0)
                        r8_3 = nullptr
                    else
                        r8_3 = *(arg1 + 0x30)
                        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                        
                        if (rax_4.d s> r8_3[7].d || *(r8_3[6] + (rax_4 << 3)) != rax_3 + 0x30)
                            r8_3 = nullptr
                
                result = (*(*r8_3 + 0x1a8))(r8_3, zx.q(arg2))

if (*(arg1 + 0x28) != 0)
    result = sub_140d41340()
    
    if (result != 0)
        void* rdx_4 = *(arg1 + 0x28)
        result = sx.q(result[7].d)
        
        if (result.d s<= *(rdx_4 + 0x38))
            void** result_2 = result
            result = *(rdx_4 + 0x30)
            
            if (result[result_2] == &result[6] && rdx_4 != 0)
                result = sub_140d41340()
                void* const rdi_1
                
                if (result == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = *(arg1 + 0x28)
                    result = sx.q(result[7].d)
                    
                    if (result.d s> *(rdi_1 + 0x38))
                        rdi_1 = nullptr
                    else
                        void** result_3 = result
                        result = *(rdi_1 + 0x30)
                        
                        if (result[result_3] != &result[6])
                            rdi_1 = nullptr
                
                void* const rdx_6
                
                if (*(arg1 + 0x30) == 0)
                    rdx_6 = nullptr
                else
                    result = sub_140d41340()
                    
                    if (result == 0)
                        rdx_6 = nullptr
                    else
                        rdx_6 = *(arg1 + 0x30)
                        result = sx.q(result[7].d)
                        
                        if (result.d s> *(rdx_6 + 0x38))
                            rdx_6 = nullptr
                        else
                            void** result_4 = result
                            result = *(rdx_6 + 0x30)
                            
                            if (result[result_4] != &result[6])
                                rdx_6 = nullptr
                
                if (rdi_1 != rdx_6)
                    void* const rdx_7
                    
                    if (*(arg1 + 0x28) == 0)
                        rdx_7 = nullptr
                    else
                        sub_140d41340()
                        
                        if (*(arg1 + 0x28) == 0)
                            rdx_7 = nullptr
                        else
                            void* rax_7 = sub_140d41340()
                            
                            if (rax_7 == 0)
                                rdx_7 = nullptr
                            else
                                rdx_7 = *(arg1 + 0x28)
                                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                                
                                if (rax_8.d s> *(rdx_7 + 0x38)
                                        || *(*(rdx_7 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                    rdx_7 = nullptr
                    
                    *(rdx_7 + 8) |= arg2
                    int64_t* r8_7
                    
                    if (*(arg1 + 0x28) == 0)
                        r8_7 = nullptr
                    else
                        void* rax_10 = sub_140d41340()
                        
                        if (rax_10 == 0)
                            r8_7 = nullptr
                        else
                            r8_7 = *(arg1 + 0x28)
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> r8_7[7].d
                                    || *(r8_7[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                r8_7 = nullptr
                    
                    return (*(*r8_7 + 0x1a8))(r8_7, zx.q(arg2))

return result
