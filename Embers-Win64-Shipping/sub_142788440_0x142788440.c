// 函数: sub_142788440
// 地址: 0x142788440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[1]
int64_t r9 = *(r8 + 0x520)
uint64_t r13 = zx.q(arg2)
uint64_t rsi = zx.q(arg2)
int64_t* r15_1 = sx.q(arg2) * 0x58 + **arg1
uint64_t rax_3 = zx.q(*(r8 + 0x528) * arg2)
*(rax_3 + r9) = *r15_1
*(zx.q(rax_3.d) + r9 + 8) = r15_1[1].d
void* rax_5 = arg1[1]
uint128_t zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(r15_1[0xa].d), 0), 0)
bool cond:0 = *(rax_5 + 0x4f1) == 0
uint128_t zmm0 = __pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0
int64_t r14 = *(rax_5 + 0x4d0)
zmm0 |= zmm1
zmm1 = zx.o(*(r15_1 + 0x4c))
float temp0_3[0x4] = _mm_cvtepi32_ps(zmm0)
zmm1 = _mm_unpacklo_epi8(zmm1, 0)
float temp0_5[0x4] = __mulps_xmmps_memps(temp0_3, data_142dd3fb0)
zmm1 = _mm_unpacklo_epi16(zmm1, 0)
zmm0 = (__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1
float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55)
float temp0_9[0x4] = _mm_cvtepi32_ps(zmm0)
zmm0 = data_142d3f660
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_9, data_142dd3fb0)
uint128_t var_e8 = zmm0
zmm1 = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xff)
int96_t var_e8_1 = temp0_10[0].12
float temp0_13[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
temp0_13[0] = temp0_13[0] * temp0_8[0]
zmm0.d = temp0_14.d f* zmm1.d
temp0_10[0] = temp0_10[0] f* zmm1.d
temp0_13[0] = temp0_13[0] f- zmm0.d
temp0_14[0] = temp0_14[0] * temp0_5[0]
temp0_13[0] = temp0_13[0] * temp0_5[0]
zmm0.d = temp0_10.d f* temp0_8[0]
float zmm4[0x4] = var_e8_1.d
temp0_10[0] = temp0_10[0] - temp0_13[0]
int96_t var_d8 = temp0_5[0].12
zmm1 = zmm4
temp0_14[0] = temp0_14[0] f- zmm0.d
temp0_13[0] = temp0_13[0] * temp0_12[0]
temp0_10[0] = temp0_10[0] * temp0_12[0]
temp0_14[0] = temp0_14[0] * temp0_12[0]
float zmm0_1
float zmm1_1
float var_c8
float zmm2[0x4]
float zmm3[0x4]

if (cond:0)
    char rbx_1 = -0x80
    zmm1.d = zmm1.d f* 127f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_21 = int.d(zmm1.d) s>> 1
    char rcx_7
    
    if (rax_21 s>= 0xffffff80)
        rcx_7 = 0x7f
        
        if (rax_21 s< 0x7f)
            rcx_7 = rax_21.b
    else
        rcx_7 = -0x80
    
    zmm3 = var_e8_1:4.d
    *(r14 + (r13 << 3)) = rcx_7
    zmm1.d = zmm3.d f* 127f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_23 = int.d(zmm1.d) s>> 1
    char rcx_8
    
    if (rax_23 s>= 0xffffff80)
        rcx_8 = 0x7f
        
        if (rax_23 s< 0x7f)
            rcx_8 = rax_23.b
    else
        rcx_8 = -0x80
    
    zmm2 = var_e8_1:8.d
    *(r14 + (r13 << 3) + 1) = rcx_8
    zmm1.d = zmm2.d f* 127f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_25 = int.d(zmm1.d) s>> 1
    char rcx_9
    
    if (rax_25 s>= 0xffffff80)
        rcx_9 = 0x7f
        
        if (rax_25 s< 0x7f)
            rcx_9 = rax_25.b
    else
        rcx_9 = -0x80
    
    zmm0 = data_142d3f660
    float var_b8_1 = temp0_13[0]
    float var_b4_1 = temp0_10[0]
    *(r14 + (r13 << 3) + 2) = rcx_9
    float var_a8_1 = var_d8.d[0]
    float var_a4_1 = var_d8:4.d[0]
    var_c8 = zmm4[0]
    float var_c4_1 = zmm3[0]
    float var_c0_1 = zmm2[0]
    float var_b0_1 = temp0_14[0]
    float var_a0_1 = var_d8:8.d[0]
    *(r14 + (r13 << 3) + 3) = 0x7f
    int32_t var_bc_1 = 0
    int32_t var_ac_1 = 0
    int32_t var_9c_1 = 0
    uint128_t var_98_1 = zmm0
    int32_t zmm6_2
    float zmm7_2
    float zmm8_2
    float zmm9_2
    float zmm10_1
    float zmm11_1
    zmm0_1, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_1, zmm11_1 = sub_14062b8d0(&var_c8)
    
    zmm1_1 = zmm0_1 f>= zmm6_2 ? 254.5f : -253.5f
    
    zmm9_2 = zmm9_2 * zmm10_1
    int32_t rax_27 = int.d(zmm9_2 + zmm9_2 + zmm11_1) s>> 1
    char rcx_11
    
    if (rax_27 s>= 0xffffff80)
        rcx_11 = 0x7f
        
        if (rax_27 s< 0x7f)
            rcx_11 = rax_27.b
    else
        rcx_11 = -0x80
    
    zmm8_2 = zmm8_2 * zmm10_1
    *(r14 + (r13 << 3) + 4) = rcx_11
    int32_t rax_29 = int.d(zmm8_2 + zmm8_2 + zmm11_1) s>> 1
    char rcx_12
    
    if (rax_29 s>= 0xffffff80)
        rcx_12 = 0x7f
        
        if (rax_29 s< 0x7f)
            rcx_12 = rax_29.b
    else
        rcx_12 = -0x80
    
    zmm7_2 = zmm7_2 * zmm10_1
    *(r14 + (r13 << 3) + 5) = rcx_12
    int32_t rax_31 = int.d(zmm7_2 + zmm7_2 + zmm11_1) s>> 1
    char rcx_13
    
    if (rax_31 s>= 0xffffff80)
        rcx_13 = 0x7f
        
        if (rax_31 s< 0x7f)
            rcx_13 = rax_31.b
    else
        rcx_13 = -0x80
    
    *(r14 + (r13 << 3) + 6) = rcx_13
    int32_t rax_33 = int.d(zmm1_1) s>> 1
    
    if (rax_33 s>= 0xffffff80)
        rbx_1 = 0x7f
        
        if (rax_33 s< 0x7f)
            rbx_1 = rax_33.b
    
    *(r14 + (r13 << 3) + 7) = rbx_1
else
    zmm1.d = zmm1.d f* 32767f
    int16_t rbx = -0x8000
    int16_t* rdi_3 = (zx.q(rsi.d) << 4) + r14
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_7 = int.d(zmm1.d) s>> 1
    int16_t rcx
    
    if (rax_7 s>= 0xffff8000)
        rcx = 0x7fff
        
        if (rax_7 s< 0x7fff)
            rcx = rax_7.w
    else
        rcx = -0x8000
    
    zmm3 = var_e8_1:4.d
    *rdi_3 = rcx
    zmm1.d = zmm3.d f* 32767f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_9 = int.d(zmm1.d) s>> 1
    int16_t rcx_1
    
    if (rax_9 s>= 0xffff8000)
        rcx_1 = 0x7fff
        
        if (rax_9 s< 0x7fff)
            rcx_1 = rax_9.w
    else
        rcx_1 = -0x8000
    
    zmm2 = var_e8_1:8.d
    rdi_3[1] = rcx_1
    zmm1.d = zmm2.d f* 32767f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_11 = int.d(zmm1.d) s>> 1
    int16_t rcx_2
    
    if (rax_11 s>= 0xffff8000)
        rcx_2 = 0x7fff
        
        if (rax_11 s< 0x7fff)
            rcx_2 = rax_11.w
    else
        rcx_2 = -0x8000
    
    zmm0 = data_142d3f660
    float var_b8 = temp0_13[0]
    float var_b4 = temp0_10[0]
    rdi_3[2] = rcx_2
    float var_a8 = var_d8.d[0]
    float var_a4 = var_d8:4.d[0]
    var_c8 = zmm4[0]
    float var_c4 = zmm3[0]
    float var_c0 = zmm2[0]
    float var_b0 = temp0_14[0]
    float var_a0 = var_d8:8.d[0]
    rdi_3[3] = 0x7fff
    int32_t var_bc = 0
    int32_t var_ac = 0
    int32_t var_9c = 0
    uint128_t var_98 = zmm0
    int32_t zmm6_1
    float zmm7_1
    float zmm8_1
    float zmm9_1
    float zmm10
    float zmm11
    zmm0_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11 = sub_14062b8d0(&var_c8)
    
    zmm1_1 = zmm0_1 f>= zmm6_1 ? 65534.5f : -65533.5f
    
    zmm9_1 = zmm9_1 * zmm10
    int32_t rax_13 = int.d(zmm9_1 + zmm9_1 + zmm11) s>> 1
    int16_t rcx_4
    
    if (rax_13 s>= 0xffff8000)
        rcx_4 = 0x7fff
        
        if (rax_13 s< 0x7fff)
            rcx_4 = rax_13.w
    else
        rcx_4 = -0x8000
    
    zmm8_1 = zmm8_1 * zmm10
    rdi_3[4] = rcx_4
    int32_t rax_15 = int.d(zmm8_1 + zmm8_1 + zmm11) s>> 1
    int16_t rcx_5
    
    if (rax_15 s>= 0xffff8000)
        rcx_5 = 0x7fff
        
        if (rax_15 s< 0x7fff)
            rcx_5 = rax_15.w
    else
        rcx_5 = -0x8000
    
    zmm7_1 = zmm7_1 * zmm10
    rdi_3[5] = rcx_5
    int32_t rax_17 = int.d(zmm7_1 + zmm7_1 + zmm11) s>> 1
    int16_t rcx_6
    
    if (rax_17 s>= 0xffff8000)
        rcx_6 = 0x7fff
        
        if (rax_17 s< 0x7fff)
            rcx_6 = rax_17.w
    else
        rcx_6 = -0x8000
    
    rdi_3[6] = rcx_6
    int32_t rax_19 = int.d(zmm1_1) s>> 1
    
    if (rax_19 s>= 0xffff8000)
        rbx = 0x7fff
        
        if (rax_19 s< 0x7fff)
            rbx = rax_19.w
    
    rdi_3[7] = rbx
void* rax_34 = arg1[1]
zmm0_1 = *(r15_1 + 0xc)
zmm1_1 = r15_1[2].d
int64_t r11 = *(rax_34 + 0x4d8)
int64_t r9_2 = zx.q(*(rax_34 + 0x4e8)) * rsi

if (*(rax_34 + 0x4f0) == 0)
    uint16_t rcx_15 = (zmm0_1 u>> 0x17).w
    uint16_t rdx_1 = (zmm0_1 u>> 0x1f).w << 0xf
    uint32_t r8_1 = zx.d(rcx_15.b)
    
    if (r8_1 u> 0x70)
        if (r8_1 u< 0x8f)
            rdx_1 |= ((zmm0_1 u>> 0xd).w & 0x3ff) | ((rcx_15 - 0x10) & 0x1f) << 0xa
        else
            rdx_1 |= 0x7bff
    else if (0x70 - r8_1 + 0xe s<= 0x18)
        int32_t rax_37 = (zmm0_1 & 0x7fffff) | 0x800000
        uint16_t r8_3 = ((rax_37 u>> (0x70 - r8_1 + 0xe).b).w & 0x3ff) | rdx_1
        rdx_1 = r8_3
        
        if (((rax_37 u>> ((0x70 - r8_1).b + 0xd)).b & 1) != 0)
            rdx_1 = r8_3 + 1
    
    *(r11 + (r9_2 << 2)) = rdx_1
    uint16_t rcx_19 = (zmm1_1 u>> 0x17).w
    uint16_t rdx_3 = (zmm1_1 u>> 0x1f).w << 0xf
    uint32_t r8_4 = zx.d(rcx_19.b)
    
    if (r8_4 u> 0x70)
        if (r8_4 u< 0x8f)
            rdx_3 |= ((zmm1_1 u>> 0xd).w & 0x3ff) | ((rcx_19 - 0x10) & 0x1f) << 0xa
        else
            rdx_3 |= 0x7bff
    else if (0x70 - r8_4 + 0xe s<= 0x18)
        int32_t rax_42 = (zmm1_1 & 0x7fffff) | 0x800000
        uint16_t r8_6 = ((rax_42 u>> (0x70 - r8_4 + 0xe).b).w & 0x3ff) | rdx_3
        rdx_3 = r8_6
        
        if (((rax_42 u>> ((0x70 - r8_4).b + 0xd)).b & 1) != 0)
            rdx_3 = r8_6 + 1
    
    *(r11 + (r9_2 << 2) + 2) = rdx_3
else
    *(r11 + (r9_2 << 3)) = zmm0_1
    *(r11 + (r9_2 << 3) + 4) = zmm1_1

void* rcx_22 = arg1[1]
int32_t result = *(r15_1 + 0x54)
*(zx.q(*(rcx_22 + 0x568) * r13.d) + *(rcx_22 + 0x560)) = result
return result
