// 函数: sub_141f136c0
// 地址: 0x141f136c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* rsi = arg5
int32_t rdi = arg4
int64_t* rbx = arg2
float zmm8[0x4] = *(arg1 + 0x154)
bool cond:0 = zmm8[0] <= 0f
void* var_198 = rsi
zmm8[0] = zmm8[0] * 0.00872664619f
float zmm0[0x4]
float zmm3[0x4]
float zmm7[0x4]
int128_t zmm9

if (cond:0)
    if (zmm8[0] != 0f)
        zmm3 = zmm8
        zmm3[0] = zmm3[0] * -0.5f
    else
        zmm3 = 0x43fa0000
    
    zmm9 = *(arg1 + 0x158)
    zmm7 = *(arg1 + 0x15c)
else
    zmm7 = *(arg1 + 0x15c)
    zmm0 = tanf(zmm8[0])
    zmm9 = *(arg1 + 0x158)
    zmm3 = zmm0
    zmm3[0] = zmm3[0] * zmm7[0]

bool cond:1 = zmm8[0] <= 0f
float zmm4[0x4] = zmm3
zmm4[0] = zmm4[0] f/ zmm9.d
int64_t var_f8 = (_mm_unpacklo_ps(zmm7, zmm3[0].q)).q
float zmm1[0x4] = zmm4 ^ 0x80000000
float zmm2[0x4] = zmm3 ^ 0x80000000
float var_f0 = zmm4[0]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm7, zmm2[0].q)
float var_1d0_2 = zmm1[0]
float var_e4 = zmm4[0]
float var_1d0_3 = zmm1[0]
zmm1 = zmm7
int64_t var_ec = temp0_1.q
zmm0 = zmm7
zmm7 = *(arg1 + 0x160)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm1, zmm3[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm0, zmm2[0].q)
float var_d8 = var_1d0_2
int64_t var_d4 = temp0_2.q
int64_t var_e0 = temp0_3.q
float var_cc = var_1d0_3

if (not(cond:1))
    zmm3 = tanf(zmm8[0])
    zmm3[0] = zmm3[0] * zmm7[0]
    zmm4 = zmm3
    zmm4[0] = zmm4[0] f/ zmm9.d

float zmm5[0x4] = *(arg1 + 0x80)
int32_t* rcx = &var_f0
zmm8 = *(arg1 + 0xa0)
zmm1 = zmm3 ^ 0x80000000
int64_t i_2 = 2
int64_t var_c8 = (_mm_unpacklo_ps(zmm7, zmm3[0].q)).q
int64_t var_bc = (_mm_unpacklo_ps(zmm7, zmm1[0].q)).q
float temp0_6[0x4] = _mm_unpacklo_ps(zmm7, zmm1[0].q)
float var_1d0_4 = zmm4[0]
float var_1d0_5 = zmm4[0]
zmm4 ^= 0x80000000
int64_t var_b0 = temp0_6.q
zmm0 = zmm7
zmm7 = *(arg1 + 0xb0)
float var_c0 = var_1d0_4
float var_1d0_6 = zmm4[0]
float temp0_7[0x4] = _mm_unpacklo_ps(zmm0, zmm3[0].q)
float var_b4 = var_1d0_5
float var_1d0_7 = zmm4[0]
zmm4 = *(arg1 + 0x90)
int64_t var_a4 = temp0_7.q
float var_a8 = var_1d0_6
int32_t var_1bc = 0x3f800000
float var_9c = var_1d0_7
float var_1c8[0x4]
int64_t var_1b8
float result
int64_t i

do
    zmm1 = rcx[-1]
    zmm2 = *rcx
    zmm3 = var_1c8
    zmm3[0] = rcx[-2][0]
    var_1b8 = 0
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_8[0] = zmm1[0]
    var_1b8 = 0
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
    temp0_9[0] = zmm2[0]
    var_1b8.d = 0
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
    var_1b8 = 0
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
    float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm5)
    var_1b8.d = 0
    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm8)
    var_1b8 = 0
    float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_11, zmm4), temp0_14), 
        _mm_add_ps(temp0_15, _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xff), zmm7)))
    float var_1d0_8 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
    *(rcx - 8) = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
    *rcx = var_1d0_8
    zmm1 = rcx[2]
    temp0_10[0] = rcx[1][0]
    zmm2 = rcx[3]
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xe1)
    temp0_25[0] = zmm1[0]
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc6)
    temp0_26[0] = zmm2[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0), zmm5)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
    float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm8)
    float temp0_38[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_31, zmm4), temp0_29), 
        _mm_add_ps(temp0_32, _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), zmm7)))
    float var_1d0_9 = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)[0]
    *(rcx + 4) = (_mm_unpacklo_ps(temp0_38, _mm_shuffle_ps(temp0_38, temp0_38, 0x55)[0].q)).q
    rcx[3] = var_1d0_9
    zmm1 = rcx[5]
    temp0_27[0] = rcx[4][0]
    zmm2 = rcx[6]
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xe1)
    temp0_42[0] = zmm1[0]
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xc6)
    temp0_43[0] = zmm2[0]
    var_1b8.d = 0
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc9)
    int32_t var_1b0_1 = 0
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0)
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm5)
    float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm8)
    float temp0_55[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_45, zmm4), temp0_48), 
        _mm_add_ps(temp0_49, _mm_mul_ps(_mm_shuffle_ps(temp0_44, temp0_44, 0xff), zmm7)))
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float var_1d0_10 = temp0_56[0]
    *(rcx + 0x10) = (_mm_unpacklo_ps(temp0_55, temp0_57[0].q)).q
    rcx[6] = var_1d0_10
    zmm1 = rcx[8]
    temp0_44[0] = rcx[7][0]
    zmm2 = rcx[9]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xe1)
    temp0_59[0] = zmm1[0]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
    temp0_60[0] = zmm2[0]
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
    var_1c8 = temp0_61
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
    float temp0_65[0x4] = _mm_mul_ps(temp0_63, zmm5)
    float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm8)
    float temp0_67[0x4] = _mm_mul_ps(temp0_62, zmm4)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), zmm7)
    float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_65), _mm_add_ps(temp0_66, temp0_69))
    result = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)[0]
    *(rcx + 0x1c) = (_mm_unpacklo_ps(temp0_72, _mm_shuffle_ps(temp0_72, temp0_72, 0x55)[0].q)).q
    rcx[9] = result
    rcx = &rcx[0xc]
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_1 = 0

if (rbx[1].d s> 0)
    int64_t r12_1 = 0
    int32_t r15_1 = 1
    
    do
        if ((rdi & r15_1) != 0)
            void* rax_13 = *(rsi + 0x60)
            void* rcx_1 = rsi + 0x50
            uint8_t rsi_1 = *(arg1 + 0x36)
            
            if (rax_13 != 0)
                rcx_1 = rax_13
            
            int64_t* rdi_1 = *(rcx_1 + r12_1)
            
            if ((rsi_1 & 4) == 0)
            label_141f13bf2:
                rsi_1 u>>= 4
            else
                int64_t* r9 = *(arg1 + 0x70)
                int64_t* rcx_3 = r9
                void* rdx = &r9[sx.q(*(arg1 + 0x78))]
                
                if (r9 == rdx)
                label_141f13bf2_1:
                    rsi_1 u>>= 4
                else
                    while (*rcx_3 != *(*(*rbx + r12_1) + 0x240))
                        rcx_3 = &rcx_3[1]
                        
                        if (rcx_3 == rdx)
                            goto label_141f13bf2_2
                    
                    if (((rcx_3 - r9) s>> 3).d == 0xffffffff)
                    label_141f13bf2_2:
                        rsi_1 u>>= 4
                    else
                        rsi_1 = *(arg1 + 0x37)
            
            rsi_1 &= 7
            sub_140acc920(&var_1b8, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_f8, &var_ec, &var_1b8, rsi_1, 0, 0, 0)
            sub_140acc920(&var_1c8, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_ec, &var_e0, &var_1c8, rsi_1, 0, 0, 0)
            void var_1d8
            sub_140acc920(&var_1d8, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_e0, &var_d4, &var_1d8, rsi_1, 0, 0, 0)
            void var_190
            sub_140acc920(&var_190, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_d4, &var_f8, &var_190, rsi_1, 0, 0, 0)
            void var_180
            sub_140acc920(&var_180, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_c8, &var_bc, &var_180, rsi_1, 0, 0, 0)
            void var_170
            sub_140acc920(&var_170, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_bc, &var_b0, &var_170, rsi_1, 0, 0, 0)
            void var_160
            sub_140acc920(&var_160, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_b0, &var_a4, &var_160, rsi_1, 0, 0, 0)
            void var_150
            sub_140acc920(&var_150, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_a4, &var_c8, &var_150, rsi_1, 0, 0, 0)
            void var_140
            sub_140acc920(&var_140, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_f8, &var_c8, &var_140, rsi_1, 0, 0, 0)
            void var_130
            sub_140acc920(&var_130, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_ec, &var_bc, &var_130, rsi_1, 0, 0, 0)
            void var_120
            sub_140acc920(&var_120, arg1 + 0x150)
            (*(*rdi_1 + 0x30))(rdi_1, &var_e0, &var_b0, &var_120, rsi_1, 0, 0, 0)
            void var_110
            sub_140acc920(&var_110, arg1 + 0x150)
            result = (*(*rdi_1 + 0x30))(rdi_1, &var_d4, &var_a4, &var_110, rsi_1, 0, 0, 0)
            rbx = arg2
            rdi = arg4
            rsi = var_198
        
        i_1 += 1
        r15_1 = rol.d(r15_1, 1)
        r12_1 += 8
    while (i_1 s< rbx[1].d)

__security_check_cookie(rax_1 ^ &var_218)
return result
