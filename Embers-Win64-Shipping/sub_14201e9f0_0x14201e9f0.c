// 函数: sub_14201e9f0
// 地址: 0x14201e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg2 + 0x30) != 0)
    void* rax_1 = sub_140d41340()
    
    if (rax_1 != 0)
        void* rdx = *(arg2 + 0x30)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx != 0)
            void* rax_4 = sub_142452380()
            void* const rdx_1
            
            if (*(arg2 + 0x30) == 0)
                rdx_1 = nullptr
            else
                void* rax_5 = sub_140d41340()
                
                if (rax_5 == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = *(arg2 + 0x30)
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> *(rdx_1 + 0x38)
                            || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rdx_1 = nullptr
            
            if (rax_4 != 0)
                int64_t rax_8 = sx.q(*(rax_4 + 0x38))
                
                if (rax_8.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_4 + 0x30)
                    int64_t* rdx_2
                    
                    if (*(arg2 + 0x30) == 0)
                        rdx_2 = nullptr
                    else
                        void* rax_10 = sub_140d41340()
                        
                        if (rax_10 == 0)
                            rdx_2 = nullptr
                        else
                            rdx_2 = *(arg2 + 0x30)
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> rdx_2[7].d
                                    || *(rdx_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                rdx_2 = nullptr
                    
                    int64_t var_18_1 = 0
                    return sub_14201e850(arg1, rdx_2, arg3, zx.q(arg4 * 2 + 1))

return nullptr
