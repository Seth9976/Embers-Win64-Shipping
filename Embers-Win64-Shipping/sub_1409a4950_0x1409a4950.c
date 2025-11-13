// 函数: sub_1409a4950
// 地址: 0x1409a4950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* result = *arg1
void* rcx_1 = *(*(result + 0x40) + (sx.q(arg2) << 3) - 8)
void* var_c8 = rcx_1
int32_t* r13 = *(rcx_1 + 8)

if (*(rcx_1 + 0x34) != 0)
    int32_t rdi_1 = r13[5]
    void var_98
    void* var_a8_1 = &var_98
    void* rax_2 = nullptr
    int32_t var_a0_1 = rdi_1
    int32_t var_9c_1 = 0x10
    void* var_58_1 = nullptr
    
    if (rdi_1 u> 0x10)
        rax_2 = j_sub_140a82f30(zx.q(rdi_1) << 2)
        rcx_1 = var_c8
        var_58_1 = rax_2
        var_a8_1 = rax_2
        int32_t var_9c_2 = rdi_1
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*r13 s> 0)
        uint128_t zmm4 = zx.o(0)
        int64_t rbp_1 = 0
        void* r12_1 = nullptr
        void* var_c0_1 = nullptr
        
        do
            int64_t r8 = sx.q(*(r12_1 + *(rcx_1 + 0xa8)))
            
            if (r8.d != 0xffffffff)
                void* rdx_1 = *(r13 + 0x18)
                int64_t r9 = sx.q(*(rdx_1 + rbp_1))
                void* r11_1 = *(r13 + 0x30) + (sx.q(*(rdx_1 + rbp_1 + 4)) << 2)
                float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(r9.d)).d
                int64_t rcx_6
                int64_t rdi_3
                
                if (r9.d s> 0)
                    rdi_3, rcx_6 = __memfill_u32(var_a8_1, zmm1, r9)
                int64_t rcx_7 = *arg4
                int64_t r8_1 = r8 * 3
                int32_t var_b0_1 = 0
                uint32_t r14_1 = 0
                *(rcx_7 + (r8_1 << 2)) = (_mm_unpacklo_ps(zmm4, zmm4.q)).q
                *(rcx_7 + (r8_1 << 2) + 8) = 0
                int64_t rax_6 = 0
                uint128_t zmm0
                float zmm2
                uint128_t zmm3
                
                if (r9.d s>= 4)
                    void* r12_2 = r11_1 + 8
                    int64_t r10_2 = neg.q(r11_1)
                    uint64_t rax_9 = zx.q(((r9 - 4).d u>> 2) + 1)
                    uint64_t j_3 = zx.q(rax_9.d)
                    r14_1 = (rax_9 << 2).d
                    float var_d0_1
                    var_d0_1.q = rax_9 << 2
                    uint64_t j
                    
                    do
                        int64_t rdx_2 = *arg4
                        void* rdi_4 = r10_2 + r12_2
                        zmm3 = *(rdi_4 + var_a8_1 - 8)
                        int64_t rcx_8 = sx.q(*(r12_2 - 8)) * 3
                        int64_t rax_13 = *arg3
                        zmm0.d = zmm3.d f* *(rax_13 + (rcx_8 << 2))
                        zmm0.d = zmm0.d f+ *(rdx_2 + (r8_1 << 2))
                        zmm1 = *(rax_13 + (rcx_8 << 2) + 4) f* zmm3.d
                        zmm2 = *(rax_13 + (rcx_8 << 2) + 8) f* zmm3.d
                        *(rdx_2 + (r8_1 << 2)) = zmm0.d
                        *(rdx_2 + (r8_1 << 2) + 4) = zmm1 f+ *(rdx_2 + (r8_1 << 2) + 4)
                        *(rdx_2 + (r8_1 << 2) + 8) = zmm2 f+ *(rdx_2 + (r8_1 << 2) + 8)
                        int64_t rdx_3 = *arg4
                        zmm3 = *(rdi_4 + var_a8_1 - 4)
                        int64_t rcx_9 = sx.q(*(r12_2 - 4)) * 3
                        int64_t rax_16 = *arg3
                        zmm0.d = zmm3.d f* *(rax_16 + (rcx_9 << 2))
                        zmm0.d = zmm0.d f+ *(rdx_3 + (r8_1 << 2))
                        zmm1 = *(rax_16 + (rcx_9 << 2) + 4) f* zmm3.d
                        zmm2 = *(rax_16 + (rcx_9 << 2) + 8) f* zmm3.d
                        *(rdx_3 + (r8_1 << 2)) = zmm0.d
                        *(rdx_3 + (r8_1 << 2) + 4) = zmm1 f+ *(rdx_3 + (r8_1 << 2) + 4)
                        *(rdx_3 + (r8_1 << 2) + 8) = zmm2 f+ *(rdx_3 + (r8_1 << 2) + 8)
                        int64_t rdx_4 = *arg4
                        zmm3 = *(r10_2 + r12_2 + var_a8_1)
                        int64_t rcx_11 = sx.q(*r12_2) * 3
                        int64_t rax_19 = *arg3
                        zmm0.d = zmm3.d f* *(rax_19 + (rcx_11 << 2))
                        zmm0.d = zmm0.d f+ *(rdx_4 + (r8_1 << 2))
                        zmm1 = *(rax_19 + (rcx_11 << 2) + 4) f* zmm3.d
                        zmm2 = *(rax_19 + (rcx_11 << 2) + 8) f* zmm3.d
                        *(rdx_4 + (r8_1 << 2)) = zmm0.d
                        *(rdx_4 + (r8_1 << 2) + 4) = zmm1 f+ *(rdx_4 + (r8_1 << 2) + 4)
                        *(rdx_4 + (r8_1 << 2) + 8) = zmm2 f+ *(rdx_4 + (r8_1 << 2) + 8)
                        int64_t rdx_5 = *arg4
                        zmm3 = *(r10_2 + r12_2 + var_a8_1 + 4)
                        int64_t rax_21 = sx.q(*(r12_2 + 4))
                        r12_2 += 0x10
                        int64_t rcx_13 = rax_21 * 3
                        int64_t rax_22 = *arg3
                        zmm0.d = zmm3.d f* *(rax_22 + (rcx_13 << 2))
                        zmm1 = *(rax_22 + (rcx_13 << 2) + 4) f* zmm3.d
                        zmm2 = *(rax_22 + (rcx_13 << 2) + 8) f* zmm3.d
                        zmm0.d = zmm0.d f+ *(rdx_5 + (r8_1 << 2))
                        *(rdx_5 + (r8_1 << 2)) = zmm0.d
                        *(rdx_5 + (r8_1 << 2) + 4) = zmm1 f+ *(rdx_5 + (r8_1 << 2) + 4)
                        *(rdx_5 + (r8_1 << 2) + 8) = zmm2 f+ *(rdx_5 + (r8_1 << 2) + 8)
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    i = i_1
                    r12_1 = var_c0_1
                    rax_6 = var_d0_1.q
                
                if (r14_1 s< r9.d)
                    int128_t* rdi_5 = rax_6 << 2
                    uint64_t j_2 = zx.q(r9.d - r14_1)
                    uint64_t j_1
                    
                    do
                        int64_t rdx_6 = *arg4
                        zmm3 = *(rdi_5 + var_a8_1)
                        int64_t rax_24 = sx.q(*(rdi_5 + r11_1))
                        rdi_5 += 4
                        int64_t rcx_14 = rax_24 * 3
                        int64_t rax_25 = *arg3
                        zmm0.d = zmm3.d f* *(rax_25 + (rcx_14 << 2))
                        zmm0.d = zmm0.d f+ *(rdx_6 + (r8_1 << 2))
                        zmm2 = *(rax_25 + (rcx_14 << 2) + 8) f* zmm3.d f+ *(rdx_6 + (r8_1 << 2) + 8)
                        *(rdx_6 + (r8_1 << 2) + 4) =
                            *(rax_25 + (rcx_14 << 2) + 4) f* zmm3.d f+ *(rdx_6 + (r8_1 << 2) + 4)
                        *(rdx_6 + (r8_1 << 2)) = zmm0.d
                        *(rdx_6 + (r8_1 << 2) + 8) = zmm2
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                rcx_1 = var_c8
            
            i += 1
            r12_1 += 4
            rbp_1 += 8
            i_1 = i
            var_c0_1 = r12_1
        while (i s< *r13)
        
        rax_2 = var_58_1
    
    result = j_sub_140a74f90(rax_2)

__security_check_cookie(rax_1 ^ &var_f8)
return result
