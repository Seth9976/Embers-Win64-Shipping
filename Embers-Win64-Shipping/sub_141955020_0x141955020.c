// 函数: sub_141955020
// 地址: 0x141955020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x1d8) s> 0)
    bool rbx_1 = arg3
    void* rdi_1 = arg1 + 0x20
    
    do
        char rax = *(rdi_1 - 4)
        int32_t rcx = *(rdi_1 - 8)
        char arg_9 = *rdi_1
        int16_t rax_2
        rax_2.b = *(rdi_1 + 8) == 1
        int16_t arg_e = rax_2
        char arg_b = *(rdi_1 + 0x11)
        int16_t arg_c = *(rdi_1 + 0xc)
        bool rax_7
        
        if (rcx u> 0x140b)
            rax_7 = rbx_1
            
            if (rcx == 0x8368)
                rax_7 = true
            
            arg3 = rax_7
            rbx_1 = rax_7
        else if (rcx == 0x140b)
            int32_t rax_9 = *(rdi_1 + 4)
            
            if (rax_9 == 2)
                rbx_1 = true
                arg3 = true
            else if (rax_9 == 4)
                rbx_1 = true
                arg3 = true
        else
            uint64_t rcx_1 = zx.q(rcx - 0x1400)
            
            if (rcx_1.d u<= 6)
                switch (rcx_1)
                    case 0
                        if (*(rdi_1 + 4) == 4)
                            rbx_1 = true
                            arg3 = true
                    case 1
                        int32_t rax_5 = *(rdi_1 + 4)
                        
                        if (rax_5 == 4)
                            rbx_1 = (*(rdi_1 + 0x10) != 0) + 6
                            arg3 = rbx_1
                        else if (rax_5 == 0x80e1)
                            rbx_1 = true
                            arg3 = true
                    case 2
                        int32_t rax_6 = *(rdi_1 + 4)
                        
                        if (rax_6 == 2)
                            if (*(rdi_1 + 0x10) == 0)
                                rax_7 = true
                                
                                if (*(rdi_1 + 0x12) == 0)
                                    rax_7 = true
                                
                                arg3 = rax_7
                                rbx_1 = rax_7
                            else
                                rbx_1 = true
                                arg3 = true
                        else if (rax_6 == 4)
                            if (*(rdi_1 + 0x10) == 0)
                                rbx_1 = true
                                
                                if (*(rdi_1 + 0x12) == 0)
                                    rbx_1 = true
                                
                                arg3 = rbx_1
                            else
                                rbx_1 = true
                                arg3 = true
                    case 3
                        int32_t rax_8 = *(rdi_1 + 4)
                        
                        if (rax_8 == 2)
                            rax_7 = true
                            
                            if (*(rdi_1 + 0x10) != 0)
                                rax_7 = true
                            
                            arg3 = rax_7
                            rbx_1 = rax_7
                        else if (rax_8 == 4)
                            rax_7 = true
                            
                            if (*(rdi_1 + 0x10) != 0)
                                rax_7 = true
                            
                            arg3 = rax_7
                            rbx_1 = rax_7
                    case 5
                        rbx_1 = true
                        arg3 = true
                    case 6
                        int32_t rcx_4 = *(rdi_1 + 4)
                        
                        if (rcx_4 == 1)
                            rbx_1 = true
                            arg3 = true
                        else if (rcx_4 == 2)
                            rbx_1 = true
                            arg3 = true
                        else if (rcx_4 == 3)
                            rbx_1 = true
                            arg3 = true
                        else if (rcx_4 == 4)
                            rbx_1 = true
                            arg3 = true
        int64_t rsi_1 = sx.q(*(arg2 + 0x80))
        int32_t rax_10 = (rsi_1 + 1).d
        *(arg2 + 0x80) = rax_10
        
        if (rax_10 s> *(arg2 + 0x84))
            sub_14088f7f0(arg2)
        
        i += 1
        rdi_1 += 0x1c
        *(arg2 + (rsi_1 << 3)) = rax.q
    while (i s< *(arg1 + 0x1d8))

int64_t result
result.b = 1
return result
