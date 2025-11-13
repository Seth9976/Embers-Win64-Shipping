// 函数: sub_141b70680
// 地址: 0x141b70680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx_1

if (*arg2 == 0)
    rbx_1 = arg1[0x39]
else
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 == 0)
        rbx_1 = arg1[0x39]
    else
        rbx_1 = *arg2
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                || rbx_1 == 0)
            rbx_1 = arg1[0x39]

if (rbx_1 != 0)
    void* rax_4 = sub_141c122a0()
    
    if (rax_4 != 0)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rbx_1 + 0x38) && *(*(rbx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            void* rax_7 = sub_141c122a0()
            void* rax_8 = sub_141c122a0()
            int64_t rcx_2
            
            if (rax_8 != 0)
                rcx_2 = sx.q(*(rax_8 + 0x38))
            
            void* rax_10
            
            if (rax_8 == 0 || rcx_2.d s> *(rbx_1 + 0x38)
                    || *(*(rbx_1 + 0x30) + (rcx_2 << 3)) != rax_8 + 0x30)
                rax_10 = nullptr
            else
                rax_10 = rbx_1
            
            if (rax_7 != 0)
                int64_t rcx_4 = sx.q(*(rax_7 + 0x38))
                
                if (rcx_4.d s<= *(rax_10 + 0x38)
                        && *(*(rax_10 + 0x30) + (rcx_4 << 3)) == rax_7 + 0x30
                        && sub_141bb8250(arg1, rbx_1) != 0)
                    void* result = sub_141ba1000(arg1, rbx_1)
                    
                    if (result != 0)
                        void* rax_13 = sub_141c122a0()
                        void* rcx_7 = *(result + 0x10)
                        int64_t rdx_6 = sx.q(*(rax_13 + 0x38))
                        
                        if (rdx_6.d s<= *(rcx_7 + 0x38)
                                && *(*(rcx_7 + 0x30) + (rdx_6 << 3)) == rax_13 + 0x30)
                            return result
                    
                    return nullptr

return 0
