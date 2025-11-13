// 函数: sub_14214a0b0
// 地址: 0x14214a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10
uint128_t var_98 = zmm10
uint128_t zmm11
uint128_t var_a8 = zmm11
int64_t r13 = sx.q(arg2)
void* rdi_3 = r13 * 0x50 + *(*(arg1 + 0x410) + 0x68)
int32_t var_160
int32_t var_140
sub_140ad6430(rdi_3 + 0x30, &var_140, &var_160)
float zmm12[0x4] = 0x4a000000
uint64_t r11
r11.b = 0
float zmm13[0x4] = 0xca000000
int32_t r14 = 0
int64_t* rbx = arg7
int64_t r15 = 0
float var_138
float zmm6 = var_138
int32_t* r12 = nullptr
float var_158
int64_t zmm7 = var_158
float zmm14[0x4] = 0x4a000000
int32_t var_15c
uint128_t zmm8 = var_15c
float zmm15[0x4] = 0xca000000
uint128_t zmm9 = var_160
char arg_8 = 0
int32_t var_13c
uint128_t zmm0_1
uint128_t zmm1_1
uint128_t zmm2_1
uint128_t zmm3_1
uint128_t zmm4_1
uint128_t zmm5_1

while (true)
    zmm5_1 = var_140
    zmm4_1 = var_13c
    int32_t rax_1
    
    if (rbx == 0)
        rax_1 = *(arg1 + 0x430)
    else
        rax_1 = rbx[1].d
    
    if (r14 s>= rax_1)
        break
    
    uint32_t rcx_1
    
    if (rbx == 0)
        rcx_1 = zx.d(*(*(arg1 + 0x428) + r15))
    else
        rcx_1 = *(r12 + *rbx)
    
    r11 = *(arg1 + 0x410)
    void* r9_2 = (sx.q(rcx_1) << 6) + *(r11 + 0x28)
    
    if (rbx != 0 || *(r9_2 + 0x14) == r13.d)
        uint32_t r10_1 = zx.d(*(r9_2 + 0x36))
        uint32_t r8_1 = 0
        
        if (r10_1 u>= 4)
            int64_t rbx_1 = *(r11 + 0x38)
            int64_t r13_1 = *(r11 + 0x58)
            int32_t r11_1 = *(r9_2 + 0x10)
            uint64_t rax_6 = zx.q(((r10_1 - 4) u>> 2) + 1)
            arg_8 = 1
            uint64_t rdi_4 = zx.q(rax_6.d)
            r8_1 = (rax_6 << 2).d
            
            while (true)
                int64_t rdx_1 = sx.q(r11_1)
                int64_t rax_8 = sx.q(*(rbx_1 + rdx_1 * 0x18)) * 3
                zmm11 = zx.o(*(r13_1 + (rax_8 << 2)))
                zmm10 = zmm11
                zmm2_1 = *(r13_1 + (rax_8 << 2) + 8)
                zmm1_1 = zmm2_1
                zmm3_1 = zmm11.q:4.d
                zmm2_1.d = zmm2_1.d f* zmm7.d
                int64_t rax_11 = sx.q(*(rbx_1 + rdx_1 * 0x18 + 0x18)) * 3
                zmm1_1.d = zmm1_1.d f* zmm6
                zmm0_1 = zmm3_1
                zmm3_1.d = zmm3_1.d f* zmm8.d
                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                zmm11.d = zmm11.d f* zmm9.d
                zmm9 = zx.o(*(r13_1 + (rax_11 << 2)))
                zmm8 = zmm9
                zmm11.d = zmm11.d f+ zmm3_1.d
                zmm3_1 = zmm9.q:4.d
                zmm9.d = zmm9.d f* var_160
                zmm11.d = zmm11.d f+ zmm2_1.d
                zmm10.d = zmm10.d f* zmm5_1.d
                int64_t rax_14 = sx.q(*(rbx_1 + rdx_1 * 0x18 + 0x30)) * 3
                zmm2_1 = *(r13_1 + (rax_11 << 2) + 8)
                zmm8.d = zmm8.d f* zmm5_1.d
                zmm10.d = zmm10.d f+ zmm0_1.d
                zmm0_1 = zmm3_1
                zmm3_1.d = zmm3_1.d f* var_15c
                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                zmm10.d = zmm10.d f+ zmm1_1.d
                zmm1_1 = zmm2_1
                zmm2_1.d = zmm2_1.d f* zmm7.d
                zmm9.d = zmm9.d f+ zmm3_1.d
                zmm7 = *(r13_1 + (rax_14 << 2))
                zmm8.d = zmm8.d f+ zmm0_1.d
                zmm1_1.d = zmm1_1.d f* zmm6
                zmm6 = zmm7.d
                zmm9.d = zmm9.d f+ zmm2_1.d
                zmm2_1 = *(r13_1 + (rax_14 << 2) + 8)
                zmm8.d = zmm8.d f+ zmm1_1.d
                zmm3_1 = zmm7:4.d
                zmm1_1 = zmm2_1
                zmm7.d = zmm7.d f* var_160
                int64_t rax_17 = sx.q(*(rbx_1 + rdx_1 * 0x18 + 0x48)) * 3
                zmm2_1.d = zmm2_1.d f* var_158
                zmm0_1 = zmm3_1
                zmm3_1.d = zmm3_1.d f* var_15c
                zmm1_1.d = zmm1_1.d f* var_138
                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                zmm7.d = zmm7.d f+ zmm3_1.d
                zmm6 = zmm6 f* zmm5_1.d
                zmm5_1 = zx.o(*(r13_1 + (rax_17 << 2)))
                zmm7.d = zmm7.d f+ zmm2_1.d
                zmm6 = zmm6 f+ zmm0_1.d
                zmm3_1 = zmm5_1.q:4.d
                zmm4_1.d = zmm5_1.d f* var_140
                zmm0_1.d = zmm3_1.d f* var_13c
                zmm2_1 = *(r13_1 + (rax_17 << 2) + 8)
                zmm6 = zmm6 f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                zmm5_1.d = zmm5_1.d f* var_160
                float temp0_1[0x4] = _mm_min_ss(zmm12[0], zmm10.d)
                r11_1 += 4
                zmm3_1.d = zmm3_1.d f* var_15c
                float temp0_2[0x4] = _mm_min_ss(zmm14[0], zmm11.d)
                float temp0_3[0x4] = _mm_max_ss(zmm13[0], zmm10.d)
                zmm1_1.d = zmm2_1.d f* var_138
                float temp0_4[0x4] = _mm_max_ss(zmm15[0], zmm11.d)
                zmm2_1.d = zmm2_1.d f* var_158
                float temp0_5[0x4] = _mm_min_ss(temp0_1[0], zmm8.d)
                float temp0_6[0x4] = _mm_min_ss(temp0_2[0], zmm9.d)
                float temp0_7[0x4] = _mm_max_ss(temp0_3[0], zmm8.d)
                zmm8 = var_15c
                float temp0_8[0x4] = _mm_max_ss(temp0_4[0], zmm9.d)
                zmm9 = var_160
                float temp0_9[0x4] = _mm_min_ss(temp0_5[0], zmm6)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                float temp0_10[0x4] = _mm_min_ss(temp0_6[0], zmm7.d)
                float temp0_11[0x4] = _mm_max_ss(temp0_7[0], zmm6)
                zmm6 = var_138
                float temp0_12[0x4] = _mm_max_ss(temp0_8[0], zmm7.d)
                zmm7 = var_158
                zmm5_1.d = zmm5_1.d f+ zmm3_1.d
                zmm12 = _mm_min_ss(temp0_9[0], zmm4_1.d)
                zmm13 = _mm_max_ss(temp0_11[0], zmm4_1.d)
                zmm5_1.d = zmm5_1.d f+ zmm2_1.d
                zmm14 = _mm_min_ss(temp0_10[0], zmm5_1.d)
                zmm15 = _mm_max_ss(temp0_12[0], zmm5_1.d)
                uint64_t temp0_17 = rdi_4
                rdi_4 -= 1
                
                if (temp0_17 == 1)
                    break
                
                zmm4_1 = var_13c
                zmm5_1 = var_140
            
            r11 = *(arg1 + 0x410)
            rbx = arg7
            r13 = zx.q(arg2)
        
        if (r8_1 u< r10_1)
            int64_t rdi_5 = *(r11 + 0x38)
            int64_t rdx_2 = *(r11 + 0x58)
            r11.b = 1
            int32_t r9_3 = *(r9_2 + 0x10)
            arg_8 = 1
            
            do
                int32_t rax_19 = r9_3 + r8_1
                r8_1 += 1
                int64_t rax_21 = sx.q(*(rdi_5 + sx.q(rax_19) * 0x18)) * 3
                zmm5_1 = zx.o(*(rdx_2 + (rax_21 << 2)))
                zmm4_1.d = zmm5_1.d f* var_140
                zmm3_1 = zmm5_1.q:4.d
                zmm2_1 = *(rdx_2 + (rax_21 << 2) + 8)
                zmm0_1.d = zmm3_1.d f* var_13c
                zmm5_1.d = zmm5_1.d f* zmm9.d
                zmm3_1.d = zmm3_1.d f* zmm8.d
                zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                zmm1_1.d = zmm2_1.d f* zmm6
                zmm2_1.d = zmm2_1.d f* zmm7.d
                zmm5_1.d = zmm5_1.d f+ zmm3_1.d
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                zmm5_1.d = zmm5_1.d f+ zmm2_1.d
                zmm12 = _mm_min_ss(zmm12[0], zmm4_1.d)
                zmm13 = _mm_max_ss(zmm13[0], zmm4_1.d)
                zmm14 = _mm_min_ss(zmm14[0], zmm5_1.d)
                zmm15 = _mm_max_ss(zmm15[0], zmm5_1.d)
            while (r8_1 u< r10_1)
            
            r14 += 1
            r12 = &r12[1]
            r15 += 2
            continue
    
    r11 = zx.q(arg_8)
    r14 += 1
    r12 = &r12[1]
    r15 += 2

uint128_t* result

if (r11.b == 0)
    *arg4 = 0
    *arg5 = 0
    result = arg6
    *result = data_14399f6e0
    result[1] = data_14399f6f0
    result[2] = data_14399f700
    zmm1_1 = data_14399f710
else
    zmm8 = _mm_cvtepi32_ps(zx.o(arg3))
    zmm7.d = zmm8.q.d f* *(rdi_3 + 0x40)
    zmm1_1.d = 1f f/ zmm7.d
    zmm5_1.d = zmm1_1.d f* zmm12[0]
    int32_t rcx_8 = int.d(zmm5_1.d)
    
    if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8)).d f== zmm5_1.d))
        zmm5_1 =
            _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5_1, zmm5_1.q)) & 1)))
    
    zmm5_1.d = zmm5_1.d f* zmm7.d
    zmm2_1.d = zmm1_1.d f* zmm14[0]
    int32_t rcx_10 = int.d(zmm2_1.d)
    
    if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10)).d f== zmm2_1.d))
        zmm2_1 =
            _mm_cvtepi32_ps(zx.o(rcx_10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2_1, zmm2_1.q)) & 1)))
    
    zmm2_1.d = zmm2_1.d f* zmm7.d
    zmm3_1.d = zmm1_1.d f* zmm15[0]
    int32_t rcx_12 = int.d(zmm3_1.d)
    
    if (rcx_12 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_12)).d f== zmm3_1.d))
        zmm3_1 = _mm_cvtepi32_ps(zx.o(rcx_12
            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm3_1, zmm3_1.q)) & 1) ^ 1)))
    
    zmm3_1.d = zmm3_1.d f* zmm7.d
    zmm4_1.d = zmm1_1.d f* zmm13[0]
    int32_t rcx_14 = int.d(zmm4_1.d)
    
    if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== zmm4_1.d))
        zmm4_1 = _mm_cvtepi32_ps(zx.o(rcx_14
            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm4_1, zmm4_1.q)) & 1) ^ 1)))
    
    zmm4_1.d = zmm4_1.d f* zmm7.d
    int32_t rcx_16 = 4
    zmm4_1.d = zmm4_1.d f- zmm5_1.d
    zmm1_1.d = zmm1_1.d f* zmm4_1.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_1.d = -0.5f f- zmm1_1.d
    int32_t rax_35 = neg.d(int.d(zmm0_1.d) s>> 1)
    int32_t rdx_3
    
    if (rax_35 s>= 4)
        rdx_3 = 0x400
        
        if (rax_35 s< 0x400)
            rdx_3 = rax_35
    else
        rdx_3 = 4
    
    zmm3_1.d = zmm3_1.d f- zmm2_1.d
    *arg4 = rdx_3
    zmm8.d = zmm8.d f* *(rdi_3 + 0x40)
    zmm0_1.d = zmm3_1.d f/ zmm8.d
    zmm0_1.d = zmm0_1.d f+ zmm0_1.d
    zmm7.d = -0.5f f- zmm0_1.d
    int32_t rax_39 = neg.d(int.d(zmm7.d) s>> 1)
    
    if (rax_39 s>= 4)
        rcx_16 = 0x400
        
        if (rax_39 s< 0x400)
            rcx_16 = rax_39
    
    zmm12 = 0x3f800000
    zmm11.d = -1f f/ zmm3_1.d
    int32_t var_11c_1 = 0
    int32_t var_10c_1 = 0
    *arg5 = rcx_16
    result = arg6
    int32_t var_fc_1 = 0
    int32_t var_ec_1 = 0x3f800000
    zmm1_1 = *(rdi_3 + 0x30)
    zmm8 = *(rdi_3 + 0x38)
    zmm9 = *(rdi_3 + 0x3c) ^ data_142d3f780
    zmm11.d = zmm11.d f* zmm2_1.d
    zmm2_1.d = 1f f/ zmm4_1.d
    zmm12[0] = 1f f/ zmm3_1.d
    zmm10.d = -1f f/ zmm4_1.d
    zmm7 = zmm2_1.q
    zmm3_1 = zmm2_1
    zmm2_1.d = zmm2_1.d f* var_140
    zmm3_1.d = zmm3_1.d f* var_13c
    zmm4_1.d = zmm12.d f* var_15c
    zmm0_1.d = zmm2_1.d
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    zmm7.d = zmm7.d f* zmm6
    zmm6 = zmm12[0]
    zmm12[0] = zmm12[0] f* var_160
    zmm0_1.d = zmm12[0]
    zmm10.d = zmm10.d f* zmm5_1.d
    zmm5_1 = *(rdi_3 + 0x34)
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
    zmm0_1.d = zmm1_1.d
    zmm1_1.d = zmm3_1.d
    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
    zmm1_1.d = zmm4_1.d
    *result = zmm0_1
    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc6)
    zmm0_1.d = zmm7.d
    zmm1_1.d = zmm5_1.d
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    zmm0_1.d = zmm6 * var_158
    result[1] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
    zmm1_1.d = zmm10.d
    _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
    zmm0_1.d = zmm8.d
    zmm1_1.d = zmm11.d
    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc6)
    zmm1_1.d = zmm9.d
    result[2] = zmm0_1
    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)

result[3] = zmm1_1
return result
