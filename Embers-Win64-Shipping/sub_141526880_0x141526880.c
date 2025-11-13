// 函数: sub_141526880
// 地址: 0x141526880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18 = arg3
int32_t* r13 = *(arg1 + 0x60)
int32_t* r14 = arg3
uint64_t rdx = zx.q(*arg3)
uint128_t zmm6
uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
int32_t* rsi = &r13[1]
uint128_t zmm9
uint128_t var_68 = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
*r13 = rdx.d
void* const* result

if (r13 u< rsi)
    while (true)
        *r14 = rdx.d
        r13 = &r13[1]
        int32_t r15_1 = 0
        
        if (*(*(arg1 + 0x28) + (sx.q(rdx.d) << 2)) s> 0)
            void* r12_1 = nullptr
            
            while (true)
                result = *(arg1 + 0x30)
                int64_t rbp_1 = sx.q(*(r12_1 + *(*(arg1 + 0x20) + (sx.q(rdx.d) << 3))))
                int64_t rcx_4 = rbp_1 * 3
                void* rdx_1 = &result[rcx_4]
                zmm6.q = *(rdx_1 + 8) f* *(arg1 + 0x88)
                zmm6.q = zmm6.q f+ result[rcx_4] f* *(arg1 + 0x80)
                zmm6.q = zmm6.q f+ *(rdx_1 + 0x10) f* *(arg1 + 0x90) f- *(arg1 + 0x98)
                
                if (not(zmm6.q f< -0x424a02801e869b6b))
                    if (zmm6.q f> 0x3db5fd7fe1796495)
                    label_141526b2e:
                        rdx = sx.q(*r14)
                        r15_1 += 1
                        r12_1 += 4
                        
                        if (r15_1 s>= *(*(arg1 + 0x28) + (rdx << 2)))
                            break
                        
                        continue
                    else
                        int32_t rdx_2 = *(arg1 + 0x74)
                        int32_t rcx_5 = 0
                        result = nullptr
                        int32_t rcx_10
                        
                        if (rdx_2 s<= 0)
                        label_1415269b1:
                            int32_t rax_1 = *(arg1 + 0x70)
                            int64_t rdi_1
                            
                            if (rdx_2 != rax_1)
                                rdi_1 = *(arg1 + 0x78)
                            else
                                int32_t rax_2 = rax_1 * 2
                                int64_t rcx_6 = sx.q(rax_2)
                                *(arg1 + 0x70) = rax_2
                                int64_t rax_3 = 4 * rcx_6
                                
                                if (mulu.dp.q(4, rcx_6) u>> 0x40 != zx.o(0))
                                    rax_3 = -1
                                
                                rdi_1 = j_sub_140a82f30(rax_3)
                                int32_t i = 0
                                
                                if (*(arg1 + 0x74) s> 0)
                                    int64_t r8_1 = 0
                                    
                                    do
                                        r8_1 += 4
                                        i += 1
                                        *(rdi_1 + r8_1 - 4) = *(r8_1 + *(arg1 + 0x78) - 4)
                                    while (i s< *(arg1 + 0x74))
                                
                                j_sub_140a74f90(*(arg1 + 0x78))
                                rdx_2 = *(arg1 + 0x74)
                                *(arg1 + 0x78) = rdi_1
                            
                            *(rdi_1 + (sx.q(rdx_2) << 2)) = rbp_1.d
                            int64_t rcx_11 = sx.q(*(arg1 + 0x74))
                            *(arg1 + 0x74) = (rcx_11 + 1).d
                            int32_t rdx_4
                            
                            if (zmm6.q f<= 0x3da5fd7fe1796495)
                                int32_t rdx_5
                                rdx_5.b = zmm6.q f>= -0x425a02801e869b6b
                                rdx_4 = rdx_5 - 1
                            else
                                rdx_4 = 1
                            
                            *(*(arg1 + 0x78) + (rcx_11 << 2) + 4) = rdx_4
                            int64_t rcx_12 = sx.q(*(arg1 + 0x74))
                            *(arg1 + 0x74) = (rcx_12 + 1).d
                            rcx_10 = *(*(arg1 + 0x78) + (rcx_12 << 2))
                        else
                            int64_t r8 = *(arg1 + 0x78)
                            
                            while (*(r8 + (result << 2)) != rbp_1.d)
                                rcx_5 += 2
                                result += 2
                                
                                if (rcx_5 s>= rdx_2)
                                    goto label_1415269b1
                            
                            rcx_10 = *(r8 + (result << 2) + 4)
                        
                        if (rcx_10 != 0xffffffff)
                            if (rcx_10 == 0)
                                for (int32_t* i_1 = *(arg1 + 0x60); i_1 u< rsi; i_1 = &i_1[1])
                                    if (*i_1 == rbp_1.d)
                                        goto label_141526b2e
                                
                                if (rsi == *(arg1 + 0x68))
                                    *(arg1 + 0x14) <<= 1
                                    int64_t rcx_13 = sx.q(*(arg1 + 0x14))
                                    int64_t rax_9 = 4 * rcx_13
                                    
                                    if (mulu.dp.q(4, rcx_13) u>> 0x40 != zx.o(0))
                                        rax_9 = -1
                                    
                                    int32_t* rax_10 = j_sub_140a82f30(rax_9)
                                    int32_t* rcx_15 = *(arg1 + 0x60)
                                    int32_t* rdi_2 = rax_10
                                    uint64_t r8_5 = (rsi - rcx_15 + 3) u>> 2
                                    int64_t rdx_6 = 0
                                    
                                    if (rcx_15 u> rsi)
                                        r8_5 = 0
                                    
                                    if (r8_5 != 0)
                                        do
                                            int32_t rax_11 = *rcx_15
                                            rcx_15 = &rcx_15[1]
                                            *rdi_2 = rax_11
                                            rdx_6 += 1
                                            rdi_2 = &rdi_2[1]
                                        while (rdx_6 u< r8_5)
                                        
                                        rcx_15 = *(arg1 + 0x60)
                                    
                                    j_sub_140a74f90(rcx_15)
                                    int64_t rax_12 = sx.q(*(arg1 + 0x14))
                                    rsi = rdi_2
                                    *(arg1 + 0x60) = rax_10
                                    r14 = arg_18
                                    *(arg1 + 0x68) = &rax_10[rax_12]
                                
                                *rsi = rbp_1.d
                                rsi = &rsi[1]
                            
                            goto label_141526b2e
                
                result.b = 1
                goto label_141526b9a
        
        if (r13 u>= rsi)
            break
        
        rdx = zx.q(*r13)

result.b = 0
label_141526b9a:
return result
