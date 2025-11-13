// 函数: sub_1426223e0
// 地址: 0x1426223e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg6)
uint64_t rdi_1 = zx.q((arg3 * 3).d * 2)
int32_t r15 = arg3.d
int64_t* rbp = arg1
int64_t rax_1 = (*(*arg1 + 0x10))(arg5, zx.q((rdi_1 + rsi).d * 2))
int64_t r13 = rax_1
int64_t rbx

if (rax_1 != 0)
    rbx = rsi * 2
    int64_t r14_1 = rbx + rax_1
    int32_t r12_1 = 0
    void* rax_3 = (*(*rbp + 0x10))(rbp, zx.q((rdi_1 * 3).d << 2))
    void* rbp_1 = rax_3
    
    if (rax_3 != 0)
        if (rsi.d s> 0)
            __builtin_memset(r13, 0xffff, rbx u>> 1 << 1)
        
        int16_t* rsi_1 = arg2
        int32_t r11_1 = 0
        
        if (r15 s> 0)
            int16_t* r10_1 = rsi_1
            
            do
                int32_t i_5 = 0
                int32_t i
                
                do
                    int64_t i_7 = sx.q(i_5)
                    int16_t r8 = r10_1[i_7]
                    
                    if (r8 == 0xffff)
                        break
                    
                    i = i_5 + 1
                    int16_t rdi_3
                    
                    if (i s< 6)
                        rdi_3 = r10_1[i_7 + 1]
                    
                    if (i s>= 6 || rdi_3 == 0xffff)
                        rdi_3 = *r10_1
                    
                    if (r8 u< rdi_3)
                        int64_t rdx_4 = sx.q(r12_1)
                        int64_t rax_4 = rdx_4 * 3
                        *(rbp_1 + (rax_4 << 2) + 4) = i_5.w
                        *(rbp_1 + (rax_4 << 2)) = r8
                        *(rbp_1 + (rax_4 << 2) + 2) = rdi_3
                        *(rbp_1 + (rax_4 << 2) + 8) = r11_1.w
                        *(rbp_1 + (rax_4 << 2) + 0xa) = r11_1.w
                        *(rbp_1 + (rax_4 << 2) + 6) = 0xff
                        uint64_t rcx_2 = zx.q(r8) << 1
                        *(r14_1 + (rdx_4 << 1)) = *(rcx_2 + r13)
                        *(rcx_2 + r13) = r12_1.w
                        r12_1 += 1
                    
                    i_5 = i
                while (i s< 6)
                r11_1 += 1
                r10_1 = &r10_1[0xc]
            while (r11_1 s< r15)
        
        int32_t i_1 = 0
        
        if (r15 s> 0)
            do
                int32_t r8_1 = 0
                
                do
                    int64_t rax_7 = sx.q(r8_1)
                    int16_t rdi_4 = rsi_1[rax_7]
                    
                    if (rdi_4 == 0xffff)
                        break
                    
                    rbx = zx.q(r8_1 + 1)
                    int16_t r9
                    
                    if (rbx.d s< 6)
                        r9 = rsi_1[rax_7 + 1]
                    
                    if (rbx.d s>= 6 || r9 == 0xffff)
                        r9 = *rsi_1
                    
                    if (rdi_4 u> r9)
                        int16_t* r10_3 = (zx.q(r9) << 1) + r13
                        int16_t rax_9 = *r10_3
                        
                        if (rax_9 == 0xffff)
                        label_1426225dd:
                            int64_t rcx_4 = sx.q(r12_1)
                            int64_t rax_11 = rcx_4 * 3
                            *(rbp_1 + (rax_11 << 2)) = r9
                            *(rbp_1 + (rax_11 << 2) + 2) = rdi_4
                            *(rbp_1 + (rax_11 << 2) + 8) = i_1.w
                            *(rbp_1 + (rax_11 << 2) + 4) = r8_1.w
                            *(rbp_1 + (rax_11 << 2) + 0xa) = i_1.w
                            *(rbp_1 + (rax_11 << 2) + 6) = 0xff
                            *(r14_1 + (rcx_4 << 1)) = *r10_3
                            *r10_3 = r12_1.w
                            r12_1 += 1
                        else
                            while (true)
                                uint64_t rdx_5 = zx.q(rax_9)
                                uint64_t rax_10 = rdx_5 * 3
                                
                                if (*(rbp_1 + (rax_10 << 2) + 2) == rdi_4
                                        && *(rbp_1 + (rax_10 << 2) + 8)
                                        == *(rbp_1 + (rax_10 << 2) + 0xa))
                                    *(rbp_1 + (rax_10 << 2) + 0xa) = i_1.w
                                    *(rbp_1 + (rax_10 << 2) + 6) = r8_1.w
                                    break
                                
                                rax_9 = *(r14_1 + (rdx_5 << 1))
                                
                                if (rax_9 == 0xffff)
                                    goto label_1426225dd
                    
                    r8_1 = rbx.d
                while (rbx.d s< 6)
                
                i_1 += 1
                rsi_1 = &rsi_1[0xc]
            while (i_1 s< arg3.d)
        
        int32_t* rax_13 = arg7
        int32_t i_2 = 0
        int32_t i_4 = 0
        
        if (*rax_13 s> 0)
            int64_t r13_1 = 0
            
            do
                int32_t* r14_2 = *(rax_13 + 8)
                int32_t rax_14 = *(r14_2 + r13_1)
                
                if (rax_14 s>= 3)
                    int32_t j = 0
                    
                    if (rax_14 s> 0)
                        void* r15_1 = rax_3
                        int64_t rsi_2 = 0
                        int64_t rcx_6 = sx.q(rax_14 - 1) << 3
                        
                        do
                            int64_t rax_16 = *(r14_2 + r13_1 + 8)
                            int16_t* rcx_7 = rcx_6 + rax_16
                            int16_t* rdx_6 = rsi_2 + rax_16
                            rbx.b = rcx_7[3].b & 0xf
                            
                            if (rbx.b != 0xf)
                                if ((rbx.b & 0xfd) == 0)
                                    int16_t rax_23 = rcx_7[2]
                                    int16_t r10_5 = rdx_6[2]
                                    int16_t r11_3 = rax_23
                                    int16_t r9_2 = *rcx_7
                                    
                                    if (rax_23 u<= r10_5)
                                        r11_3 = r10_5
                                    
                                    if (rax_23 u<= r10_5)
                                        r10_5 = rax_23
                                    
                                    if (r12_1 s> 0)
                                        void* rdx_8 = r15_1 + 8
                                        uint64_t k_3 = zx.q(r12_1)
                                        uint64_t k
                                        
                                        do
                                            if (*rdx_8 == *(rdx_8 + 2))
                                                int16_t* rdi_7 = arg4 + zx.q(*(rdx_8 - 8)) * 6
                                                uint64_t rcx_12 = zx.q(*(rdx_8 - 6)) * 3
                                                
                                                if (*rdi_7 == r9_2
                                                        && *(arg4 + (rcx_12 << 1)) == r9_2)
                                                    int16_t rdi_8 = rdi_7[2]
                                                    int16_t rcx_13 = *(arg4 + (rcx_12 << 1) + 4)
                                                    int16_t rax_27 = rdi_8
                                                    
                                                    if (rdi_8 u<= rcx_13)
                                                        rax_27 = rcx_13
                                                    
                                                    if (r10_5 u< rax_27)
                                                        if (rdi_8 u<= rcx_13)
                                                            rcx_13 = rdi_8
                                                        
                                                        if (r11_3 u> rcx_13)
                                                            *(rdx_8 - 2) = zx.w(rbx.b)
                                            
                                            rdx_8 += 0xc
                                            k = k_3
                                            k_3 -= 1
                                        while (k != 1)
                                        r15_1 = rax_3
                                else
                                    int16_t rax_17 = *rcx_7
                                    int16_t r10_4 = *rdx_6
                                    int16_t r11_2 = rax_17
                                    int16_t r9_1 = rcx_7[2]
                                    
                                    if (rax_17 u<= r10_4)
                                        r11_2 = r10_4
                                    
                                    if (rax_17 u<= r10_4)
                                        r10_4 = rax_17
                                    
                                    if (r12_1 s> 0)
                                        void* rdx_7 = r15_1 + 8
                                        uint64_t k_2 = zx.q(r12_1)
                                        uint64_t k_1
                                        
                                        do
                                            if (*rdx_7 == *(rdx_7 + 2))
                                                int16_t* rdi_5 = arg4 + zx.q(*(rdx_7 - 8)) * 6
                                                uint64_t rcx_9 = zx.q(*(rdx_7 - 6)) * 3
                                                
                                                if (rdi_5[2] == r9_1
                                                        && *(arg4 + (rcx_9 << 1) + 4) == r9_1)
                                                    int16_t rdi_6 = *rdi_5
                                                    int16_t rcx_10 = *(arg4 + (rcx_9 << 1))
                                                    int16_t rax_21 = rdi_6
                                                    
                                                    if (rdi_6 u<= rcx_10)
                                                        rax_21 = rcx_10
                                                    
                                                    if (r10_4 u< rax_21)
                                                        if (rdi_6 u<= rcx_10)
                                                            rcx_10 = rdi_6
                                                        
                                                        if (r11_2 u> rcx_10)
                                                            *(rdx_7 - 2) = zx.w(rbx.b)
                                            
                                            rdx_7 += 0xc
                                            k_1 = k_2
                                            k_2 -= 1
                                        while (k_1 != 1)
                                        r15_1 = rax_3
                            
                            rcx_6 = rsi_2
                            j += 1
                            rsi_2 += 8
                        while (j s< *(r14_2 + r13_1))
                        
                        i_2 = i_4
                
                rax_13 = arg7
                i_2 += 1
                r13_1 += 0x18
                i_4 = i_2
            while (i_2 s< *rax_13)
            
            rbp_1 = rax_3
            r13 = rax_1
        
        if (r12_1 s> 0)
            void* rdi_9 = rbp_1 + 8
            uint64_t i_6 = zx.q(r12_1)
            uint64_t i_3
            
            do
                int16_t rax_29 = *rdi_9
                int16_t rdx_9 = *(rdi_9 + 2)
                
                if (rax_29 == rdx_9)
                    int16_t rdx_11 = *(rdi_9 - 2)
                    
                    if (rdx_11 != 0xff)
                        arg2[zx.q(*(rdi_9 - 4)) + zx.q(rax_29) * 0xc + 6] = rdx_11 | 0x8000
                else
                    arg2[zx.q(*(rdi_9 - 4)) + zx.q(rax_29) * 0xc + 6] = rdx_9
                    arg2[zx.q(*(rdi_9 - 2)) + zx.q(rdx_9) * 0xc + 6] = *rdi_9
                
                rdi_9 += 0xc
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            rbp_1 = rax_3
            r13 = rax_1
        
        rbx.b = 1
    else
        rbx.b = 0
    
    rbp = arg1
    (*(*arg1 + 0x18))(rbp, rbp_1)
else
    rbx.b = 0

(*(*rbp + 0x18))(rbp, r13)
return zx.q(rbx.b)
