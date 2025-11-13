// 函数: sub_1409a4340
// 地址: 0x1409a4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* r10 = *arg1
void* rcx_1 = *(*(r10 + 0x40) + (sx.q(arg2) << 3) - 8)
int32_t var_100 = *(r10 + 4)
void* var_110 = rcx_1
void* r15 = *(rcx_1 + 8)
void* r11 = *(rcx_1 + 0x10)
void* var_e0 = r11
void* var_b0 = r15
int32_t rbx = *(r15 + 0x10)
void var_80
void* var_90 = &var_80
void* rax_4 = nullptr
void* var_60 = nullptr
int32_t var_88 = rbx
int32_t var_84 = 8

if (rbx u> 8)
    rax_4 = j_sub_140a82f30(zx.q(rbx) << 2)
    rcx_1 = var_110
    r11 = var_e0
    var_60 = rax_4
    var_90 = rax_4
    int32_t var_84_1 = rbx

int32_t i = 0

if (*(r15 + 4) s> 0)
    int32_t rdx = 0
    void* r8 = nullptr
    int64_t r9 = 0
    float zmm6[0x4] = zx.o(0)
    float* var_f8_1 = nullptr
    int64_t var_108_1 = 0
    int32_t var_118_1 = 0
    
    do
        int64_t r8_1 = sx.q(*(r8 + *(rcx_1 + 0xd8)))
        
        if (r8_1.d != 0xffffffff)
            int64_t rdi_1 = *(r15 + 0x78)
            int64_t rsi_1 = sx.q(rdx)
            int32_t* rdx_1 = *(r15 + 0x90)
            int64_t var_d0_1 = 0
            int64_t var_c0_1 = 0
            int32_t var_b8_1 = 0
            char var_b4_1 = 0
            int32_t i_1 = i
            int32_t* r12_1 = *(r15 + 0xa8) + (sx.q(*(rdx_1 + r9 + 4)) << 2)
            int32_t j_2 = *(rdx_1 + r9)
            int32_t r9_1 = 1
            int32_t var_f0
            int32_t* var_d8 = &var_f0
            void* var_c8_1 = var_90
            
            if (zmm6[0] f< *(var_f8_1 + *(r15 + 0xd8)))
                r9_1 = 4
            
            zmm6 = sub_140995cd0(&var_100, &var_b0, &var_d8, r9_1, 
                zx.d(*(*(r11 + 0x1b0) + (r8_1 << 1))) u>> 7 & 0xf)
            int64_t r10_1 = r8_1 * 3
            int64_t rcx_9 = *arg4
            int32_t var_98_1 = 0
            *(rcx_9 + (r10_1 << 2)) = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
            *(rcx_9 + (r10_1 << 2) + 8) = 0
            float zmm0_1[0x4] = var_f0
            int64_t rcx_10 = *arg4
            int64_t rdx_4 = sx.q(*(rdi_1 + (rsi_1 << 2))) * 3
            int64_t rax_11 = *arg3
            float zmm2 = *(rax_11 + (rdx_4 << 2) + 4) * zmm0_1[0]
            float zmm1_1 = *(rax_11 + (rdx_4 << 2) + 8) * zmm0_1[0]
            zmm0_1[0] = zmm0_1[0] f* *(rax_11 + (rdx_4 << 2))
            zmm2 = zmm2 f+ *(rcx_10 + (r10_1 << 2) + 4)
            zmm1_1 = zmm1_1 f+ *(rcx_10 + (r10_1 << 2) + 8)
            zmm0_1[0] = zmm0_1[0] f+ *(rcx_10 + (r10_1 << 2))
            *(rcx_10 + (r10_1 << 2) + 4) = zmm2
            *(rcx_10 + (r10_1 << 2) + 8) = zmm1_1
            *(rcx_10 + (r10_1 << 2)) = zmm0_1[0]
            int32_t var_ec
            zmm0_1 = var_ec
            int64_t rcx_11 = *arg4
            int64_t rdx_5 = sx.q(*(rdi_1 + (rsi_1 << 2) + 4)) * 3
            int64_t rax_13 = *arg3
            zmm1_1 = zmm0_1[0] f* *(rax_13 + (rdx_5 << 2) + 8)
            zmm2 = *(rax_13 + (rdx_5 << 2) + 4) * zmm0_1[0]
            zmm0_1[0] = zmm0_1[0] f* *(rax_13 + (rdx_5 << 2))
            zmm2 = zmm2 f+ *(rcx_11 + (r10_1 << 2) + 4)
            zmm1_1 = zmm1_1 f+ *(rcx_11 + (r10_1 << 2) + 8)
            zmm0_1[0] = zmm0_1[0] f+ *(rcx_11 + (r10_1 << 2))
            *(rcx_11 + (r10_1 << 2) + 4) = zmm2
            *(rcx_11 + (r10_1 << 2) + 8) = zmm1_1
            *(rcx_11 + (r10_1 << 2)) = zmm0_1[0]
            
            if (var_b8_1 s> 0 && j_2 s> 0)
                int128_t* r11_2 = nullptr
                uint64_t j_1 = zx.q(j_2)
                uint64_t j
                
                do
                    float zmm3[0x4]
                    
                    if (var_b4_1 == 0)
                        int64_t rdx_7 = *(r15 + 0x18)
                        int64_t r8_3 = sx.q(*(r12_1 + r11_2) * 2)
                        int64_t rcx_14 = sx.q(*(rdx_7 + (r8_3 << 2) + 4))
                        int32_t rdx_8 = *(rdx_7 + (r8_3 << 2))
                        int32_t* r9_2 = *(r15 + 0x48) + (rcx_14 << 2)
                        int32_t rcx_15 = 0
                        
                        while (*r9_2 != i)
                            rcx_15 += 1
                            r9_2 = &r9_2[1]
                        
                        zmm3 = *(r11_2 + var_90)
                        int32_t rax_25 = rcx_15 + 2 - rdx_8
                        
                        if (rcx_15 + 2 s< rdx_8)
                            rax_25 = rcx_15 + 2
                        
                        int64_t rdx_9 =
                            sx.q(*(*(r15 + 0x30) + (rcx_14 << 2) + (sx.q(rax_25) << 2))) * 3
                        int64_t rcx_18 = *arg4
                        int64_t rax_28 = *arg3
                        zmm1_1 = *(rax_28 + (rdx_9 << 2) + 4)
                        zmm2 = *(rax_28 + (rdx_9 << 2) + 8)
                        zmm3[0] = zmm3[0] f* *(rax_28 + (rdx_9 << 2))
                        zmm1_1 = zmm1_1 * zmm3[0]
                        zmm3[0] = zmm3[0] f+ *(rcx_18 + (r10_1 << 2))
                        zmm3[0] = zmm3[0] * zmm2
                        zmm1_1 = zmm1_1 f+ *(rcx_18 + (r10_1 << 2) + 4)
                        zmm3[0] = zmm3[0] f+ *(rcx_18 + (r10_1 << 2) + 8)
                        *(rcx_18 + (r10_1 << 2)) = zmm3[0]
                        *(rcx_18 + (r10_1 << 2) + 4) = zmm1_1
                        *(rcx_18 + (r10_1 << 2) + 8) = zmm3[0]
                    else
                        int64_t rdx_6 = *arg4
                        float zmm4[0x4] = *(r11_2 + var_90)
                        zmm1_1 = zmm4[0]
                        int64_t rax_18 =
                            sx.q(*(*(var_110 + 0xa8) + (sx.q(*(r12_1 + r11_2)) << 2))) * 3
                        zmm2 = *(rdx_6 + (rax_18 << 2) + 4)
                        zmm3 = *(rdx_6 + (rax_18 << 2) + 8)
                        zmm4[0] = zmm4[0] f* *(rdx_6 + (rax_18 << 2))
                        zmm4[0] = zmm4[0] f+ *(rdx_6 + (r10_1 << 2))
                        zmm4[0] = zmm4[0] * zmm3[0]
                        zmm1_1 = zmm1_1 * zmm2 f+ *(rdx_6 + (r10_1 << 2) + 4)
                        zmm4[0] = zmm4[0] f+ *(rdx_6 + (r10_1 << 2) + 8)
                        *(rdx_6 + (r10_1 << 2)) = zmm4[0]
                        *(rdx_6 + (r10_1 << 2) + 4) = zmm1_1
                        *(rdx_6 + (r10_1 << 2) + 8) = zmm4[0]
                    r11_2 += 4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            rcx_1 = var_110
            r9 = var_108_1
        
        r9 += 8
        var_118_1 += 2
        r8 = &var_f8_1[1]
        rdx = var_118_1
        i += 1
        r11 = var_e0
        var_108_1 = r9
        var_f8_1 = r8
    while (i s< *(r15 + 4))
    
    rax_4 = var_60

int64_t result = j_sub_140a74f90(rax_4)
__security_check_cookie(rax_1 ^ &var_148)
return result
