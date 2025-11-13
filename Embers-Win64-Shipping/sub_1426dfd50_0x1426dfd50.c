// 函数: sub_1426dfd50
// 地址: 0x1426dfd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (*(arg1 + 0x38) != 0 && *(arg1 + 0x58) != 0)
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 != 0)
        void* rdx = *(arg1 + 0x58)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx != 0)
            void* rax_4 = sub_14273b0e0()
            void* const rdx_1
            
            if (*(arg1 + 0x58) == 0)
                rdx_1 = nullptr
            else
                void* rax_5 = sub_14273b6f0()
                
                if (rax_5 == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = *(arg1 + 0x58)
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> *(rdx_1 + 0x38)
                            || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rdx_1 = nullptr
            
            if (rax_4 != 0)
                int64_t rax_8 = sx.q(*(rax_4 + 0x38))
                
                if (rax_8.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_4 + 0x30)
                    int64_t* rcx_3 = *(arg1 + 0x38)
                    
                    if (*(arg1 + 0x34) != 3)
                        int64_t rax_10 = sub_1426df620(rcx_3, 0)
                        int64_t rdi_1 = sx.q(arg2[1].d)
                        int32_t rcx_4 = (rdi_1 + 1).d
                        arg2[1].d = rcx_4
                        
                        if (rcx_4 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rdi_1 << 3)) = rax_10
                        return arg2
                    
                    sub_1426da760(rcx_3, arg2)

return arg2
