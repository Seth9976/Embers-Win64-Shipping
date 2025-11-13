// 函数: sub_14230b740
// 地址: 0x14230b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r12 = arg4
int128_t zmm7
int128_t var_58 = zmm7

if (*(arg1 + 0x430) != 0)
    int32_t r8 = *(arg2 + 0xc)
    int32_t rsi_1 = 0
    arg2[1].d = 0
    int32_t rdx = 0
    
    if (r8 != 0)
        sub_140638cc0(arg2, 0)
        rdx = arg2[1].d
        r8 = *(arg2 + 0xc)
    
    int32_t rcx_2 = *(r12 + 0xec) + rdx
    arg2[1].d = rcx_2
    
    if (rcx_2 s> r8)
        sub_140638a00(arg2)
    
    result = *(arg1 + 0x430)
    int32_t i_2
    
    if (result[0x60].d s<= 0 || (*(arg1 + 0x71a) & 2) != 0 || zx.o(0).d f>= *(arg1 + 0x734))
        int32_t i = 0
        i_2 = 0
        
        if (r12[1].d s> 0)
            int64_t rdx_12 = 0
            int64_t var_90_3 = 0
            
            do
                int32_t rbx_4 = 0
                void* rbp_4 = *r12 + rdx_12
                int32_t r15_4 = *(rbp_4 + 0x38)
                result = zx.q(*(rbp_4 + 0x10))
                
                if (r15_4 != 0)
                    int32_t rsi_3 = result.d
                    
                    do
                        int64_t var_78
                        sub_141f4f710(&var_78, arg1, rbp_4, &r12[0x17], arg5, rbx_4, arg3)
                        int64_t rcx_24 = sx.q(rbx_4 + rsi_3)
                        rbx_4 += 1
                        int64_t rdx_14 = rcx_24 * 3
                        int64_t rcx_25 = *arg2
                        *(rcx_25 + (rdx_14 << 2)) = var_78
                        int32_t result_2
                        result = zx.q(result_2)
                        *(rcx_25 + (rdx_14 << 2) + 8) = result.d
                    while (rbx_4 u< r15_4)
                    
                    r12 = arg4
                    i = i_2
                    rdx_12 = var_90_3
                
                i += 1
                rdx_12 += 0xe8
                i_2 = i
                var_90_3 = rdx_12
            while (i s< r12[1].d)
    else
        int32_t i_1 = 0
        i_2 = 0
        
        if (r12[1].d s> 0)
            int64_t rdx_1 = 0
            int64_t var_90_1 = 0
            
            do
                void* rbp_2 = *r12 + rdx_1
                int64_t var_88
                int32_t result_1
                uint128_t zmm6
                
                if (*(rbp_2 + 0x20) s> 0)
                    void* r11_1 = *(arg1 + 0x430)
                    int32_t r9 = 0
                    uint128_t zmm0 = *(rbp_2 + 0x44)
                    int64_t r8_1 = 0
                    int64_t rax = sx.q(*(r11_1 + 0x300))
                    
                    if (rax.d s> 0)
                        while (true)
                            void* rdx_2 = *(*(r11_1 + 0x2f8) + (r8_1 << 3))
                            
                            if (rdx_2 != 0 && ((*(rdx_2 + 0x44) ^ zmm0:0xc.d)
                                    | (*(rdx_2 + 0x40) ^ zmm0:8.d) | (*(rdx_2 + 0x3c) ^ zmm0:4.d)
                                    | (*(rdx_2 + 0x38) ^ zmm0.d)) == 0)
                                break
                            
                            r9 += 1
                            r8_1 += 1
                            
                            if (r8_1 s>= rax)
                                goto label_14230b93c
                        
                        if (r9 != 0xffffffff)
                            result = zx.q(*(arg1 + 0x8e8))
                            int32_t* rcx_13
                            
                            if (result.d == *(arg1 + 0x914))
                            label_14230b925:
                                rcx_13 = nullptr
                            else
                                void* r8_2 = arg1 + 0x918
                                void* rcx_9 = *(r8_2 + 8)
                                
                                if (rcx_9 != 0)
                                    r8_2 = rcx_9
                                
                                result =
                                    zx.q(*(r8_2 + (((sx.q(*(arg1 + 0x928)) - 1) & sx.q(r9)) << 2)))
                                
                                if (result.d == 0xffffffff)
                                label_14230b925_1:
                                    rcx_13 = nullptr
                                else
                                    while (true)
                                        rcx_13 = sx.q(result.d) * 0xa0 + *(arg1 + 0x8e0)
                                        
                                        if (*rcx_13 == r9)
                                            break
                                        
                                        result = zx.q(rcx_13[0x24])
                                        
                                        if (result.d == 0xffffffff)
                                            goto label_14230b925_2
                                    
                                    if (result.d == 0xffffffff)
                                    label_14230b925_2:
                                        rcx_13 = nullptr
                            
                            void* rbx_2 = &rcx_13[4]
                            
                            if (rcx_13 == 0)
                                rbx_2 = nullptr
                            
                            if (rbx_2 != 0)
                                int32_t r15_3 = *(rbx_2 + 8)
                                
                                if (*(rbp_2 + 0x38) s<= r15_3)
                                    r15_3 = *(rbp_2 + 0x38)
                                
                                int32_t i_3 = *(rbp_2 + 0x10)
                                i_2 = i_3
                                
                                if (1f f<= *(arg1 + 0x734))
                                    if (r15_3 != 0)
                                        do
                                            int64_t r8_6 = *rbx_2
                                            int64_t r9_3 = sx.q(rsi_1) * 3
                                            int64_t rcx_21 = sx.q(rsi_1 + i_3)
                                            rsi_1 += 1
                                            int64_t rdx_11 = rcx_21 * 3
                                            int64_t rcx_22 = *arg2
                                            *(rcx_22 + (rdx_11 << 2)) = *(r8_6 + (r9_3 << 2))
                                            result = zx.q(*(r8_6 + (r9_3 << 2) + 8))
                                            *(rcx_22 + (rdx_11 << 2) + 8) = result.d
                                            i_3 = i_2
                                        while (rsi_1 u< r15_3)
                                else if (r15_3 != 0)
                                    void* rdx_8 = &r12[0x17]
                                    void* var_90_2 = rdx_8
                                    uint128_t var_48_1 = zmm6
                                    
                                    do
                                        int64_t rcx_17 = sx.q(rsi_1) * 3
                                        int64_t rax_11 = *rbx_2
                                        *(rax_11 + (rcx_17 << 2))
                                        float rax_12 = *(rax_11 + (rcx_17 << 2) + 8)
                                        zmm6 = sub_141f4f710(&var_88, arg1, rbp_2, rdx_8, arg5, 
                                            rsi_1, arg3)
                                        float zmm2_1 = *(arg1 + 0x734)
                                        float result_3[0x4] = var_88.d
                                        float zmm4_1 = 1f - zmm2_1
                                        int64_t rcx_19 = sx.q(rsi_1 + i_3)
                                        uint128_t zmm5
                                        zmm5.d = zmm6.d f* zmm2_1
                                        rsi_1 += 1
                                        uint128_t zmm3_1
                                        zmm3_1.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f* zmm2_1
                                        int64_t rdx_10 = rcx_19 * 3
                                        int64_t rcx_20 = *arg2
                                        result_3[0] = result_3[0] * zmm4_1
                                        zmm5.d = zmm5.d f+ result_3[0]
                                        result_3 = var_88:4.d
                                        result_3[0] = result_3[0] * zmm4_1
                                        zmm3_1.d = zmm3_1.d f+ result_3[0]
                                        result_3 = result_1
                                        result_3[0] = result_3[0] * zmm4_1
                                        float zmm1_1 = rax_12 * zmm2_1 + result_3[0]
                                        *(rcx_20 + (rdx_10 << 2)) =
                                            (_mm_unpacklo_ps(zmm5, zmm3_1.q)).q
                                        uint128_t var_68_1
                                        var_68_1:8.d = zmm1_1
                                        result = zx.q(var_68_1:8.d)
                                        *(rcx_20 + (rdx_10 << 2) + 8) = result.d
                                        rdx_8 = var_90_2
                                    while (rsi_1 u< r15_3)
                                
                                break
                        
                    label_14230b93c:
                        i_1 = i_2
                        rdx_1 = var_90_1
                
                int32_t r15_2 = *(rbp_2 + 0x38)
                int32_t rbx_3 = 0
                result = zx.q(*(rbp_2 + 0x10))
                
                if (r15_2 != 0)
                    int32_t rsi_2 = result.d
                    
                    do
                        zmm6 = sub_141f4f710(&var_88, arg1, rbp_2, &r12[0x17], arg5, rbx_3, arg3)
                        int64_t rcx_15 = sx.q(rbx_3 + rsi_2)
                        rbx_3 += 1
                        int64_t rdx_7 = rcx_15 * 3
                        int64_t rcx_16 = *arg2
                        *(rcx_16 + (rdx_7 << 2)) = var_88
                        result = zx.q(result_1)
                        *(rcx_16 + (rdx_7 << 2) + 8) = result.d
                    while (rbx_3 u< r15_2)
                    
                    r12 = arg4
                    rsi_1 = 0
                    i_1 = i_2
                    rdx_1 = var_90_1
                
                i_1 += 1
                rdx_1 += 0xe8
                i_2 = i_1
                var_90_1 = rdx_1
            while (i_1 s< r12[1].d)

return result
