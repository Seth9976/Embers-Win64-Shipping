// 函数: sub_141aa0850
// 地址: 0x141aa0850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r13 = arg3
void* r14 = arg1
int32_t i_1 = 0

if (*(arg1 + 0xe8) s> 0)
    int64_t rdx = 0
    int64_t var_c0_1 = 0
    int32_t i
    
    do
        int128_t* rdi_2 = *(r14 + 0xe0) + rdx
        int64_t rdx_1 = sx.q(*(rdi_2 + 0x38))
        
        if (*(rdx_1 + *(arg2 + 0x20)) == 0)
            sub_141a98300(arg2 + 8, rdx_1.d)
        
        int128_t* rax_5 = rdx_1 * 0x30 + *(arg2 + 8)
        *rdi_2 = *rax_5
        rdi_2[1] = rax_5[1]
        rdi_2[2] = rax_5[2]
        int32_t rdx_2 = *(rdi_2 + 0x3c)
        *(rdi_2 + 0x58) = 0
        
        if (rdx_2 s> *(rdi_2 + 0x5c))
            sub_1405a5220(&rdi_2[5], rdx_2)
        
        int64_t r8 = 0
        int32_t* r12_1 = rdi_2[4].q
        int64_t var_d0_1 = 0
        uint64_t rcx_3 = sx.q(*(rdi_2 + 0x48)) << 2 u>> 2
        
        if (r12_1 u> &r12_1[sx.q(*(rdi_2 + 0x48))])
            rcx_3 = 0
        
        if (rcx_3 != 0)
            do
                int64_t rdx_3 = sx.q(*r12_1)
                
                if (*(rdx_3 + *(arg2 + 0x20)) == 0)
                    sub_141a98300(arg2 + 8, rdx_3.d)
                    r8 = var_d0_1
                
                int64_t rsi_1 = sx.q(*(rdi_2 + 0x58))
                int64_t rbp_1 = *(arg2 + 8)
                int32_t rax_9 = (rsi_1 + 1).d
                *(rdi_2 + 0x58) = rax_9
                
                if (rax_9 s> *(rdi_2 + 0x5c))
                    sub_140638970(&rdi_2[5])
                    r8 = var_d0_1
                
                int64_t rax_10 = rdi_2[5].q
                int64_t rdx_6 = rdx_3 * 6
                int64_t rcx_7 = rsi_1 * 6
                r8 += 1
                r12_1 = &r12_1[1]
                var_d0_1 = r8
                *(rax_10 + (rcx_7 << 3)) = *(rbp_1 + (rdx_6 << 3))
                *(rax_10 + (rcx_7 << 3) + 0x10) = *(rbp_1 + (rdx_6 << 3) + 0x10)
                *(rax_10 + (rcx_7 << 3) + 0x20) = *(rbp_1 + (rdx_6 << 3) + 0x20)
            while (r8 != rcx_3)
            
            r13 = arg3
            r14 = arg1
        
        char rax_11 = sub_141ac8710(r14, rdi_2)
        char rbp_2 = sub_141a99a70(r14, rdi_2)
        char rax_12
        
        if (*(rdi_2[3].q + 0x2b) == 0)
            rax_12 = 0
        else
            rax_12 = sub_141a95250(r14, rdi_2)
        
        if (rax_11 != 0 || rbp_2 != 0 || rax_12 != 0)
            rax_12 = 1
        
        float zmm3_1[0x4] = *rdi_2
        
        if (rax_12 != 0)
        label_141aa0a7f:
            int32_t j = 0
            *rdi_2[5].q = zmm3_1
            
            if (*(rdi_2 + 0x3c) s> 0)
                int128_t* rsi_3 = nullptr
                int32_t* r14_2 = nullptr
                
                do
                    int64_t rbp_3 = sx.q(r13[1].d)
                    int32_t rcx_12 = *(r14_2 + rdi_2[4].q)
                    int64_t rax_18 = rdi_2[5].q
                    int128_t zmm6_1 = *(rsi_3 + rax_18)
                    int128_t zmm7_1 = *(rsi_3 + rax_18 + 0x10)
                    int128_t zmm8_1 = *(rsi_3 + rax_18 + 0x20)
                    int32_t rax_19 = (rbp_3 + 1).d
                    r13[1].d = rax_19
                    
                    if (rax_19 s> *(r13 + 0xc))
                        sub_1405c4fe0(r13)
                    
                    int64_t rax_20 = *r13
                    j += 1
                    float (* rcx_15)[0x4] = rbp_3 << 6
                    r14_2 = &r14_2[1]
                    rsi_3 = &rsi_3[3]
                    *(rcx_15 + rax_20) = rcx_12.o
                    *(rcx_15 + rax_20 + 0x10) = zmm6_1
                    *(rcx_15 + rax_20 + 0x20) = zmm7_1
                    *(rcx_15 + rax_20 + 0x30) = zmm8_1
                while (j s< *(rdi_2 + 0x3c))
                
                r14 = arg1
        else
            uint32_t zmm5_1[0x4] = data_143f2b9a0
            var_d0_1.d = 0x38d1b717
            float zmm4_1[0x4] = *rdi_2[5].q
            float temp0_1[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, 
                    _mm_and_ps(_mm_sub_ps(zmm4_1, zmm3_1), zmm5_1), 1)) != 0 && _mm_movemask_ps(
                    _mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm3_1, zmm4_1), zmm5_1), 1)) != 0)
                goto label_141aa0a7f
        
        i = i_1 + 1
        rdx = var_c0_1 + 0xa0
        i_1 = i
        var_c0_1 = rdx
    while (i s< *(r14 + 0xe8))

char var_d8
int64_t result = sub_141a8a370(*r13, r13[1].d, var_d8)
__security_check_cookie(rax_1 ^ &var_f8)
return result
