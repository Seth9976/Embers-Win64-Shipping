// 函数: sub_14263c400
// 地址: 0x14263c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xbc) |= 1
int32_t rcx = 0
int32_t i = *(arg1 + 0xe8)

while (i s> 0)
    if (rcx + 1 s> 0x10)
        i = *(arg1 + 0xec)
        *(arg1 + 0xe8) = 0
        
        if (i s< 0 && i != 0)
            i = sub_1405a5410(arg1 + 0xe0, 0)
        
        break
    
    int32_t j = 0
    
    if (i s> 0)
        int64_t r13_1 = 0
        
        do
            void* r8_1 = *(arg1 + 0xe0)
            void* rsi_1 = *(r8_1 + r13_1 + 8)
            int32_t rax = *(rsi_1 + 0xc)
            void* const rax_4
            
            if (rax s>= data_143e1d9b4)
                rax_4 = nullptr
            else
                uint32_t rdx_1 = zx.d(rax.w)
                
                if (rax s< 0)
                    rax += 0xffff
                    rdx_1 -= 0x10000
                
                rax_4 = *(data_143e1d9a0 + (sx.q(rax s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
            
            if (((*(rax_4 + 8) u>> 0x1d).b & 1) == 0)
                uint32_t rcx_10 = zx.d(*(r8_1 + r13_1))
                
                if (rcx_10 == 0)
                    if (*(rsi_1 + 0x39) != 4)
                        int32_t rdx_7 = *(arg1 + 0xd8)
                        int32_t rbx_1 = 0
                        int64_t rdi_1 = 0
                        
                        if (rdx_7 s> 0)
                            while (true)
                                void* rax_11 = *(*(arg1 + 0xd0) + (rdi_1 << 3))
                                
                                if (rax_11 != 0)
                                    char rcx_12 = *(rax_11 + 0x38)
                                    char rax_12 = *(rsi_1 + 0x38)
                                    
                                    if (*(rsi_1 + 0x3a) != 0)
                                        if (rcx_12 u< rax_12)
                                            break
                                    else if (rcx_12 u<= rax_12)
                                        break
                                
                                rbx_1 += 1
                                rdi_1 += 1
                                
                                if (rbx_1 s>= rdx_7)
                                    goto label_14263c5e9
                            
                            int32_t rbp_1 = *(arg1 + 0xd8)
                            *(arg1 + 0xd8) = rbp_1 + 1
                            
                            if (rbp_1 + 1 s> *(arg1 + 0xdc))
                                sub_1405a4d70(arg1 + 0xd0)
                            
                            int64_t rdx_9 = *(arg1 + 0xd0) + (sx.q(rbx_1) << 3)
                            memmove(rdx_9 + 8, rdx_9, (rbp_1 - rbx_1) << 3)
                            *(*(arg1 + 0xd0) + (rdi_1 << 3)) = rsi_1
                        
                        if (rdx_7 s<= 0 || rbx_1 == 0xffffffff)
                        label_14263c5e9:
                            int64_t rbx_2 = sx.q(*(arg1 + 0xd8))
                            int32_t rax_16 = (rbx_2 + 1).d
                            *(arg1 + 0xd8) = rax_16
                            
                            if (rax_16 s> *(arg1 + 0xdc))
                                sub_1405a4d70(arg1 + 0xd0)
                            
                            *(*(arg1 + 0xd0) + (rbx_2 << 3)) = rsi_1
                else if (rcx_10 == 1)
                    sub_14263c7f0(arg1, rsi_1)
            else
                int64_t* r9_1 = *(arg1 + 0xd0)
                uint64_t r8_2 = sx.q(*(arg1 + 0xd8))
                int64_t* rax_7 = r9_1
                void* rdx_3 = &r9_1[r8_2]
                
                if (r9_1 != rdx_3)
                    do
                        if (*rax_7 == rsi_1)
                            int32_t rax_9 = ((rax_7 - r9_1) s>> 3).d
                            
                            if (rax_9 != 0xffffffff)
                                int32_t rcx_5 = r8_2.d - rax_9
                                
                                if (rcx_5 != 1)
                                    memmove(&r9_1[sx.q(rax_9)], &r9_1[sx.q(rax_9 + 1)], 
                                        (rcx_5 - 1) << 3)
                                    r8_2 = zx.q(*(arg1 + 0xd8))
                                
                                *(arg1 + 0xd8) = (r8_2 - 1).d
                            
                            break
                        
                        rax_7 = &rax_7[1]
                    while (rax_7 != rdx_3)
            
            j += 1
            r13_1 += 0x10
        while (j s< *(arg1 + 0xe8))
    
    int32_t rax_18 = *(arg1 + 0xec)
    *(arg1 + 0xe8) = 0
    
    if (rax_18 s< 0 && rax_18 != 0)
        sub_1405a5410(arg1 + 0xe0, 0)
    
    sub_14263ce30(arg1)
    i = *(arg1 + 0xe8)
    rcx += 1

*(arg1 + 0xbc) &= 0xfe
return i
