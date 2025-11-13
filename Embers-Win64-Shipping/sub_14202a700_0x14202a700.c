// 函数: sub_14202a700
// 地址: 0x14202a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx_1

if (*(arg1 + 0x240) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14256a090()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x240)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

if (arg3 != 0 && *(arg1 + 0x268) != 0)
    void* rax_4 = sub_14256a090()
    
    if (rax_4 != 0)
        void* rdx_1 = *(arg1 + 0x268)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30
                && rdx_1 != 0)
            void* rax_7 = *(arg3 + 0x228)
            
            if (rax_7 != 0 && (*(rax_7 + 0x22a) & 4) != 0)
                if (rdx_1 == 0)
                    rbx_1 = nullptr
                else
                    void* rax_8 = sub_14256a090()
                    
                    if (rax_8 == 0)
                        rbx_1 = nullptr
                    else
                        rbx_1 = *(arg1 + 0x268)
                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_9.d s> *(rbx_1 + 0x38)
                                || *(*(rbx_1 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                            rbx_1 = nullptr

*arg2 = rbx_1
return arg2
