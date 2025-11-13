// 函数: sub_1426a9c40
// 地址: 0x1426a9c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
char arg_20 = arg4
int32_t arg_18 = arg3
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t rcx = *arg2
        result = r15_1 * 3
        int64_t* rsi_1 = rcx + (result << 3)
        uint64_t rcx_1 = zx.q(*(rcx + (result << 3) + 0x10))
        result.b = rcx_1.d s< *(arg1 + 0x118)
        
        if (result.b != 0)
            int64_t* r10_1 = *(arg1 + 0x110)
            void* j_1 = *rsi_1
            result.b = 0
            int32_t rbx_1 = -1
            void* rdi_2 = rcx_1 * 0x58 + r10_1
            
            if (j_1 == 0)
                int64_t j = rsi_1[1]
                
                if (j != 0)
                    int64_t* r8_1 = *(rdi_2 + 0x20)
                    int64_t* rbx_2 = r8_1
                    result = &r8_1[sx.q(*(rdi_2 + 0x28)) * 2]
                    
                    if (r8_1 == result)
                    label_1426a9d22:
                        rbx_1 = -1
                    label_1426a9d27:
                        result.b = 0
                        arg3 = arg_18
                    else
                        while (*rbx_2 != j)
                            rbx_2 = &rbx_2[2]
                            
                            if (rbx_2 == result)
                                goto label_1426a9d22
                        
                        rbx_1 = ((rbx_2 - r8_1) s>> 4).d
                        
                        if (rbx_1 == 0xffffffff || *((sx.q(rbx_1) << 4) + r8_1 + 8) != 0)
                            goto label_1426a9d27
                        
                        result.b = 1
                        arg3 = arg_18
            else
                int64_t* rcx_2 = *(rdi_2 + 0x10)
                void* r8 = &rcx_2[sx.q(*(rdi_2 + 0x18))]
                
                if (rcx_2 == r8)
                    goto label_1426a9d27
                
                while (*rcx_2 != j_1)
                    rcx_2 = &rcx_2[1]
                    
                    if (rcx_2 == r8)
                        goto label_1426a9d27
                
                result.b = 1
                arg3 = arg_18
            
            void* j_3 = j_1
            
            if (j_1 == 0)
                j_3 = rsi_1[1]
            
            char rcx_3 = *(rsi_1 + 0x12)
            
            if (rcx_3 != 2 || result.b != 0)
                if (rcx_3 != 1)
                label_1426a9d6c:
                    result.b = *(rsi_1 + 0x13) & 1
                    
                    if (result.b == arg4)
                        if (j_1 == 0)
                            result = rsi_1[1]
                            
                            if (result != 0)
                                if (rcx_3 != 2)
                                    void* const* result_1 = result
                                    int64_t rdi_4 = sx.q(*(rdi_2 + 0x28))
                                    int32_t var_40_1 = 0
                                    int32_t rax_14 = (rdi_4 + 1).d
                                    *(rdi_2 + 0x28) = rax_14
                                    
                                    if (rax_14 s> *(rdi_2 + 0x2c))
                                        sub_1405a4f90(rdi_2 + 0x20)
                                    
                                    result = *(rdi_2 + 0x20)
                                    *(result + rdi_4 * 0x10) = result_1.o
                                else
                                    sub_1426c19e0(arg1, result)
                                    result = sub_1426c33e0(rsi_1[1], arg1, 
                                        zx.q(*(j_3 + 0x52)) + *(rdi_2 + 0x30))
                                    uint64_t rdx_8 = zx.q(rsi_1[2].w)
                                    int32_t r10_3 = result.d
                                    
                                    if (rdx_8.d s< *(arg1 + 0x118))
                                        if (rbx_1 s< 0
                                                || rbx_1 s>= (*(arg1 + 0x110))[rdx_8 * 0xb + 5].d)
                                            result.b = 0
                                        else
                                            result.b = 1
                                        
                                        if (result.b != 0)
                                            result = *(arg1 + 0x110)
                                            int64_t* r9_5 = rsi_1[1]
                                            int64_t r8_16 = sx.q(rbx_1) * 2
                                            
                                            if (*(result[rdx_8 * 0xb + 4] + (r8_16 << 3)) == r9_5)
                                                if (r10_3 == 3)
                                                    *(*(rdi_2 + 0x20) + (r8_16 << 3) + 8) = 1
                                                    *(arg1 + 0x263) |= 4
                                                    r9_5 = rsi_1[1]
                                                
                                                result, arg5 =
                                                    sub_1426b8c80(arg1, r9_5, r10_3, arg5)
                        else if ((*(arg1 + 0x263) & 2) == 0)
                        label_1426a9e70:
                            int64_t rbp_2 = zx.q(*(j_3 + 0x52)) + *(rdi_2 + 0x30)
                            
                            if (*(rsi_1 + 0x12) != 2)
                                int64_t rdi_3 = sx.q(*(rdi_2 + 0x18))
                                int32_t rax_11 = (rdi_3 + 1).d
                                *(rdi_2 + 0x18) = rax_11
                                
                                if (rax_11 s> *(rdi_2 + 0x1c))
                                    sub_1405a4d70(rdi_2 + 0x10)
                                
                                *(*(rdi_2 + 0x10) + (rdi_3 << 3)) = *rsi_1
                                result = sub_1426c34a0(*rsi_1, arg1, rbp_2)
                            else
                                int64_t* r10_2 = *(rdi_2 + 0x10)
                                int64_t r9_2 = sx.q(*(rdi_2 + 0x18))
                                int64_t* rax_8 = r10_2
                                void* r8_7 = &r10_2[r9_2]
                                
                                if (r10_2 != r8_7)
                                    while (*rax_8 != j_1)
                                        rax_8 = &rax_8[1]
                                        
                                        if (rax_8 == r8_7)
                                            result = sub_1426c34f0(*rsi_1, arg1, rbp_2)
                                            goto label_1426aa03e
                                    
                                    int32_t rax_10 = ((rax_8 - r10_2) s>> 3).d
                                    
                                    if (rax_10 != 0xffffffff)
                                        int32_t rcx_10 = r9_2.d - rax_10 - 1
                                        
                                        if (rcx_10 s>= 1)
                                            rcx_10 = 1
                                        
                                        if (rcx_10 != 0)
                                            memcpy(&r10_2[sx.q(rax_10)], 
                                                &r10_2[sx.q(r9_2.d - rcx_10)], rcx_10 << 3)
                                        
                                        *(rdi_2 + 0x18) -= 1
                                        sub_1405c53d0(rdi_2 + 0x10)
                                
                                result = sub_1426c34f0(*rsi_1, arg1, rbp_2)
                        else
                            char r8_2 = *(j_1 + 0x59)
                            void* const rcx_4 = *(j_1 + 0x48)
                            
                            if (r8_2 != 0xff)
                                uint32_t rax_2
                                
                                if (rcx_4 != 0)
                                    rax_2.b = zx.d(r8_2) s< *(rcx_4 + 0x60)
                                
                                if (rcx_4 == 0 || rax_2.b == 0)
                                    rcx_4 = nullptr
                                else
                                    int64_t r9 = *(rcx_4 + 0x58)
                                    uint64_t r8_4 = zx.q(r8_2) * 6
                                    rcx_4 = *(r9 + (r8_4 << 3))
                                    
                                    if (rcx_4 == 0)
                                        rcx_4 = *(r9 + (r8_4 << 3) + 8)
                            
                            if (rcx_4 != *r10_1)
                                goto label_1426a9e70
                            
                            void* rax_5 = sub_1427329a0()
                            j_1 = *rsi_1
                            void* r8_5 = *(j_1 + 0x10)
                            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                            
                            if (rax_6.d s> *(r8_5 + 0x38))
                                goto label_1426a9e70
                            
                            result = *(r8_5 + 0x30)
                            
                            if (result[rax_6] != rax_5 + 0x30)
                                goto label_1426a9e70
                            
                            if (*(rsi_1 + 0x12) != 2)
                                void* rax_7 = *(arg1 + 0x110)
                                int64_t* j_2 = *(rax_7 + 0x10)
                                result = sx.q(*(rax_7 + 0x18))
                                
                                for (; j_2 != &j_2[result]; j_2 = &j_2[1])
                                    if (*j_2 == j_1)
                                        goto label_1426aa03e
                                
                                goto label_1426a9e70
                else if (result.b == 0)
                    result = zx.q(*(j_3 + 0x50))
                    
                    if (result.d s<= arg3)
                        goto label_1426a9d6c
        
    label_1426aa03e:
        arg4 = arg_20
        i += 1
        arg3 = arg_18
        r15_1 += 1
    while (i s< arg2[1].d)

return result
