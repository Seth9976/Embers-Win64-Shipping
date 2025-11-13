// 函数: sub_141ba8130
// 地址: 0x141ba8130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x28)

if (rdi != 0 && rdi[5] != 0)
    void* rax_1 = sub_141c0a640()
    
    if (rax_1 != 0)
        int64_t rcx = sx.q(*(rax_1 + 0x38))
        void* rax_2 = rdi[5]
        
        if (rcx.d s<= *(rax_2 + 0x38) && *(*(rax_2 + 0x30) + (rcx << 3)) == rax_1 + 0x30)
            bool rdx_1 = arg2:4.d == 0
            
            if ((rdx_1 & sub_140b5b8a0(arg2.d, 0)) == 0)
                int64_t* rax_6 = (*(*rdi + 0x278))(rdi, rdx_1)
                void* const rcx_7
                
                if (rax_6[1].d == *(rax_6 + 0x34))
                label_141ba8220:
                    rcx_7 = nullptr
                else
                    int32_t rax_8 = sub_140b5ead0(arg2.d) + arg2:4.d
                    void* r8_1 = &rax_6[7]
                    void* rcx_5 = *(r8_1 + 8)
                    
                    if (rcx_5 != 0)
                        r8_1 = rcx_5
                    
                    int32_t rax_10 = *(r8_1 + (((sx.q(rax_6[9].d) - 1) & sx.q(rax_8)) << 2))
                    
                    if (rax_10 == 0xffffffff)
                    label_141ba8220_1:
                        rcx_7 = nullptr
                    else
                        int64_t r8_2 = *rax_6
                        
                        while (true)
                            int64_t rdx_5 = sx.q(rax_10) * 3
                            rcx_7 = r8_2 + (rdx_5 << 3)
                            
                            if (*(r8_2 + (rdx_5 << 3)) == arg2)
                                break
                            
                            rax_10 = *(rcx_7 + 0x10)
                            
                            if (rax_10 == 0xffffffff)
                                goto label_141ba8220_2
                        
                        if (rax_10 == 0xffffffff)
                        label_141ba8220_2:
                            rcx_7 = nullptr
                
                void* rax_11 = rcx_7 + 8
                
                if (rcx_7 == 0)
                    rax_11 = nullptr
                
                if (rax_11 != 0)
                    int64_t rax_12 = *rax_11
                    
                    if (rax_12 != 0)
                        return rax_12 + 8

return 0
