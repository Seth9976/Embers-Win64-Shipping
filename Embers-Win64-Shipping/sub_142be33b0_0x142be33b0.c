// 函数: sub_142be33b0
// 地址: 0x142be33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x18)
void* rax = sub_142be8ea0(rsi + 6, arg3)

if (rax != 0)
    uint64_t rdx_7 =
        zx.q(((zx.d(*rax) << 8 | zx.d(*(rax + 1))) << 8 | zx.d(*(rax + 2))) << 8) | zx.q(*(rax + 3))
    uint32_t rcx_7 =
        ((zx.d(*(rax + 4)) << 8 | zx.d(*(rax + 5))) << 8 | zx.d(*(rax + 6))) << 8 | zx.d(*(rax + 7))
    
    if (rdx_7.d != 0)
        if (rcx_7 == 0)
            return sub_142be8f30(arg1, rdx_7 + rsi, arg2) __tailcall
        
        char* r10_3 = zx.q(rcx_7) + rsi
        char* r9_3 = zx.q(rdx_7.d) + rsi
        uint32_t r15_6 =
            ((zx.d(*r10_3) << 8 | zx.d(r10_3[1])) << 8 | zx.d(r10_3[2])) << 8 | zx.d(r10_3[3])
        int32_t rax_13 = sub_142be8de0(r9_3)
        uint32_t r12_6 =
            ((zx.d(*r9_3) << 8 | zx.d(r9_3[1])) << 8 | zx.d(r9_3[2])) << 8 | zx.d(r9_3[3])
        
        if (r15_6 == 0)
            return sub_142be8f30(arg1, r9_3, arg2)
        
        if (rax_13 == 0)
            return sub_142be9070(arg1, r10_3, arg2)
        
        if (sub_142be8e30(arg1, rax_13 + 1 + r15_6, arg2) != 0)
            return nullptr
        
        int32_t r11_3 = 0
        void* result = *(arg1 + 0x30)
        uint32_t rdi_1 = zx.d(r9_3[7])
        void* rbx_1 = &r9_3[8]
        uint32_t rdx_21 = (zx.d(r9_3[4]) << 8 | zx.d(r9_3[5])) << 8 | zx.d(r9_3[6])
        int32_t r14_1 = 1
        int32_t rbp_1 = 1
        void* rsi_2 = &r10_3[9]
        uint32_t r9_8 = (zx.d(r10_3[4]) << 8 | zx.d(r10_3[5])) << 8 | zx.d(r10_3[6])
        int64_t r8_6 = 0
        
        while (true)
            if (r9_8 u<= rdx_21 + rdi_1)
                if (r9_8 u< rdx_21)
                    r11_3 += 1
                    *(result + (r8_6 << 2)) = r9_8
                    r8_6 += 1
                
                rbp_1 += 1
                
                if (rbp_1 u<= r15_6)
                    r9_8 = (zx.d(*rsi_2) << 8 | zx.d(*(rsi_2 + 1))) << 8 | zx.d(*(rsi_2 + 2))
                    rsi_2 += 5
                    continue
            else
                int32_t rcx_17 = 0
                r11_3 = r11_3 + 1 + rdi_1
                
                do
                    int32_t rax_21 = rcx_17 + rdx_21
                    rcx_17 += 1
                    *(result + (r8_6 << 2)) = rax_21
                    r8_6 += 1
                while (rcx_17 u<= rdi_1)
                
                r14_1 += 1
                
                if (r14_1 u<= r12_6)
                    rdi_1 = zx.d(*(rbx_1 + 3))
                    rdx_21 = (zx.d(*rbx_1) << 8 | zx.d(*(rbx_1 + 1))) << 8 | zx.d(*(rbx_1 + 2))
                    rbx_1 += 4
                    continue
                else if (rbp_1 u<= r15_6)
                    int64_t rax_26 = sx.q(r11_3)
                    r11_3 += 1
                    *(result + (rax_26 << 2)) = r9_8
                    
                    if (rbp_1 u< r15_6)
                        int64_t rax_27 = sx.q(r11_3)
                        void* rdx_26 = rsi_2 - 1
                        int32_t i_4 = r15_6 - rbp_1
                        void* r8_7 = rsi_2 - 2
                        void* rsi_3 = rsi_2 - 3
                        uint64_t i_2 = zx.q(i_4)
                        r11_3 += i_4
                        void* r9_13 = result + (rax_27 << 2)
                        uint64_t i
                        
                        do
                            uint32_t rax_28 = zx.d(*(r8_7 + 3))
                            r9_13 += 4
                            uint32_t rcx_18 = zx.d(*(rsi_3 + 3))
                            rsi_3 += 5
                            r8_7 += 5
                            uint32_t rax_29 = zx.d(*(rdx_26 + 3))
                            rdx_26 += 5
                            *(r9_13 - 4) = (rcx_18 << 8 | rax_28) << 8 | rax_29
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    break
            
            if (r14_1 u> r12_6)
                break
            
            int64_t rax_30 = sx.q(r11_3)
            int32_t rcx_23 = 0
            r11_3 = r11_3 + 1 + rdi_1
            void* r8_8 = result + (rax_30 << 2)
            
            do
                int32_t rax_31 = rcx_23 + rdx_21
                rcx_23 += 1
                *r8_8 = rax_31
                r8_8 += 4
            while (rcx_23 u<= rdi_1)
            
            if (r14_1 u< r12_6)
                int64_t r8_9 = sx.q(r11_3)
                uint64_t i_3 = zx.q(r12_6 - r14_1)
                uint64_t i_1
                
                do
                    uint32_t rax_32 = zx.d(*(rbx_1 + 1))
                    int32_t rcx_24 = 0
                    uint32_t r9_14 = zx.d(*rbx_1)
                    rbx_1 += 4
                    uint32_t r9_18 = (r9_14 << 8 | rax_32) << 8 | zx.d(*(rbx_1 - 2))
                    uint32_t rax_34 = zx.d(*(rbx_1 - 1))
                    r11_3 = r11_3 + 1 + rax_34
                    
                    do
                        int32_t rdx_27 = rcx_24 + r9_18
                        rcx_24 += 1
                        *(result + (r8_9 << 2)) = rdx_27
                        r8_9 += 1
                    while (rcx_24 u<= rax_34)
                    
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            break
        
        *(result + (sx.q(r11_3) << 2)) = 0
        return result
    
    if (rcx_7 != 0)
        return sub_142be9070(arg1, zx.q(rcx_7) + rsi, arg2) __tailcall

return 0
