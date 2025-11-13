// 函数: sub_141012260
// 地址: 0x141012260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int128_t* rbx_1 = arg1
    
    if (arg2 != *(arg1 + 0x24) && not(_mm_cvtepi32_pd(zx.q(*(arg1 + 0x28) + 1))
            f> float.d(zx.q(arg1[2].d + 1)) f* 0.90000000000000002))
        int64_t rax_5 = *(arg3 + 8)
        uint64_t rsi = zx.q(arg4.d)
        char rdx = *(rsi + rax_5)
        
        if (rdx s< 0)
            *(arg3[1].q + (rsi << 3)) = arg5
            *(*(arg3 + 0x18) + (rsi << 2)) = arg7
            *(rsi + *(arg3 + 8)) = arg2
            *(rbx_1 + 0x28) += 1
            return *(arg3 + 0x18) + (rsi << 2)
        
        *(rsi + rax_5) = arg2
        uint64_t r9 = zx.q(arg4.d + 1)
        int64_t rcx_2 = arg3[1].q
        rdx += 1
        int64_t rbp = *(rcx_2 + (rsi << 3))
        *(rcx_2 + (rsi << 3)) = arg5
        int64_t rcx_3 = *(arg3 + 0x18)
        uint64_t r8_1 = zx.q(r9.d)
        int32_t r14 = *(rcx_3 + (rsi << 2))
        *(rcx_3 + (rsi << 2)) = arg7
        int64_t rax_13 = *(arg3 + 8)
        
        if (*(rax_13 + r9) s>= 0)
            do
                char r11_1 = *(r8_1 + rax_13)
                
                if (r11_1 s>= rdx)
                    rdx += 1
                    
                    if (rdx == *(rbx_1 + 0x24))
                        int64_t rax_21 = arg3[1].q
                        int64_t rdi_1 = *(rax_21 + (rsi << 3))
                        *(rax_21 + (rsi << 3)) = rbp
                        int64_t rax_22 = *(arg3 + 0x18)
                        int32_t rbp_1 = *(rax_22 + (rsi << 2))
                        *(rax_22 + (rsi << 2)) = r14
                        uint64_t rax_23 = zx.q(rbx_1[2].d)
                        int32_t rdx_1 = ((rax_23 << 1) + 2).d
                        
                        if (rax_23.d == 0)
                            rdx_1 = 0
                        
                        if (rdx_1 u<= 4)
                            rdx_1 = 4
                        
                        sub_1410328e0(rbx_1, rdx_1)
                        int64_t rax_24 = *(rbx_1 + 8)
                        uint64_t r9_2 = zx.q(rdi_1.d) & zx.q(rbx_1[2].d)
                        char i = 0
                        
                        if (rax_24 != 0)
                            uint64_t rcx_7 = zx.q(r9_2.d)
                            
                            if (*(r9_2 + rax_24) s>= 0)
                                do
                                    if (rdi_1 == *(rbx_1[1].q + (rcx_7 << 3)))
                                        return *(rbx_1 + 0x18) + (rcx_7 << 2)
                                    
                                    r9_2 = zx.q(r9_2.d + 1)
                                    i += 1
                                    rcx_7 = zx.q(r9_2.d)
                                while (*(r9_2 + rax_24) s>= i)
                        
                        return sub_141012260(rbx_1, i, rbx_1, r9_2, rdi_1, rdi_1.d, rbp_1)
                else
                    *(r8_1 + rax_13) = rdx
                    int64_t rax_14 = rbp
                    int64_t rcx_4 = arg3[1].q
                    rdx = r11_1 + 1
                    rbp = *(rcx_4 + (r8_1 << 3))
                    *(rcx_4 + (r8_1 << 3)) = rax_14
                    int32_t rax_15 = r14
                    int64_t rcx_5 = *(arg3 + 0x18)
                    r14 = *(rcx_5 + (r8_1 << 2))
                    *(rcx_5 + (r8_1 << 2)) = rax_15
                    rax_13 = *(arg3 + 8)
                
                r9 = zx.q(r9.d + 1)
                r8_1 = zx.q(r9.d)
            while (*(r9 + rax_13) s>= 0)
        
        *(arg3[1].q + (r9 << 3)) = rbp
        *(*(arg3 + 0x18) + (r9 << 2)) = r14
        *(r9 + *(arg3 + 8)) = rdx
        *(rbx_1 + 0x28) += 1
        return *(arg3 + 0x18) + (rsi << 2)
    
    uint64_t rax_26 = zx.q(arg1[2].d)
    int32_t rdx_2 = ((rax_26 << 1) + 2).d
    
    if (rax_26.d == 0)
        rdx_2 = 0
    
    if (rdx_2 u<= 4)
        rdx_2 = 4
    
    sub_1410328e0(rbx_1, rdx_2)
    arg2 = 0
    arg4 = zx.q(rbx_1[2].d) & zx.q(arg6)
    int64_t rax_27 = *(rbx_1 + 8)
    
    if (rax_27 != 0)
        uint64_t rcx_10 = zx.q(arg4.d)
        
        if (*(arg4 + rax_27) s>= 0)
            do
                if (arg5 == *(rbx_1[1].q + (rcx_10 << 3)))
                    return *(rbx_1 + 0x18) + (rcx_10 << 2)
                
                arg4 = zx.q(arg4.d + 1)
                arg2 += 1
                rcx_10 = zx.q(arg4.d)
            while (*(arg4 + rax_27) s>= arg2)
    
    arg1 = rbx_1
    arg3 = rbx_1
