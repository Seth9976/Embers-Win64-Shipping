// 函数: sub_140f11240
// 地址: 0x140f11240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rbx = data_143e243c8
void var_108
int64_t* rax_2 = sub_140b58170(&var_108, "GenericWhiteBox", 1)
int64_t r9 = *rbx
void* rax_3 = (*(r9 + 0x48))(rbx, *rax_2, 0, r9)
float var_158[0x4]

if (*(arg1 + 0x2c8) != 0)
    int64_t* rcx_2 = *(arg1 + 0x2c0)
    
    if (rcx_2 != 0)
        int64_t rdx_1 = *rcx_2
        
        if ((*(rdx_1 + 0x28))(rcx_2, rdx_1) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x2c8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x2c0)
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_158)
            *(arg1 + 0x2a8) = var_158

float var_148[0x4] = *(arg1 + 0x2a8)

if (*(arg1 + 0x2e0) != 0)
    int64_t* rcx_4 = *(arg1 + 0x2d8)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        int64_t* rcx_5
        
        if (*(arg1 + 0x2e0) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(arg1 + 0x2d8)
        
        *(arg1 + 0x2d0) = (*(*rcx_5 + 0x48))(rcx_5)

if (*(arg1 + 0x2d0) != 0)
    var_148 = *sub_140ad9100(&var_148, &var_158)

if (*(arg1 + 0x2f8) != 0)
    int64_t* rcx_7 = *(arg1 + 0x2f0)
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
        int64_t* rcx_8
        
        if (*(arg1 + 0x2f8) == 0)
            rcx_8 = nullptr
        else
            rcx_8 = *(arg1 + 0x2f0)
        
        *(arg1 + 0x2e8) = (*(*rcx_8 + 0x48))(rcx_8)

if (*(arg1 + 0x2e8) != 0)
    var_148[3] = 0x3f800000

if (*(arg1 + 0x328) != 0)
    int64_t* rcx_9 = *(arg1 + 0x320)
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        int64_t* rcx_10
        
        if (*(arg1 + 0x328) == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *(arg1 + 0x320)
        
        *(arg1 + 0x318) = (*(*rcx_10 + 0x48))(rcx_10)

void var_138
int64_t zmm7_1
float zmm8
float zmm9
zmm7_1, zmm8, zmm9 = sub_140ae16d0(&var_148, &var_138, *(arg1 + 0x318))

if (*(arg1 + 0x310) != 0)
    int64_t* rcx_12 = *(arg1 + 0x308)
    
    if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
        int64_t* rcx_13
        
        if (*(arg1 + 0x310) == 0)
            rcx_13 = nullptr
        else
            rcx_13 = *(arg1 + 0x308)
        
        *(arg1 + 0x300) = (*(*rcx_13 + 0x48))(rcx_13)

float var_168
char var_135
float var_f0
char var_bc

if (*(arg1 + 0x300) != 0 && var_135 u< 0xff)
    int64_t* rbx_1 = data_143e243c8
    int64_t* rax_23 = sub_140b58170(&var_168, "ColorPicker.AlphaBackground", 1)
    int64_t r9_1 = *rbx_1
    void* rax_24 = (*(r9_1 + 0x48))(rbx_1, *rax_23, 0, r9_1)
    char rcx_16 = *(arg3 + 0x34) & 1
    int64_t zmm1_2 = arg3[1].d
    int32_t zmm2_2 = *(arg3 + 8)
    var_f0 = (*(arg3 + 0xc)).d
    int32_t var_ec_1 = zmm1_2.d
    int32_t var_dc_1 = (*arg3).d
    var_bc = (rcx_16 * 2) | (var_bc & 0xfc)
    int32_t var_d8_1 = (*(arg3 + 4)).d
    int128_t var_d4_1 = *(arg3 + 0x1c)
    int32_t var_e8_1 = zmm2_2
    int64_t var_e4_1 = 0
    int64_t var_c4_1 = *(arg3 + 0x2c)
    sub_140db3600(arg4, arg5, &var_f0, rax_24, 0, &data_14399f5c0)

int64_t zmm1_1 = var_148[0]
float zmm2_1 = var_148[1]
float zmm3 = var_148[2]
int32_t temp0_1 = _mm_max_ss(_mm_max_ss(zmm1_1.d, zmm2_1), zmm3)
float var_130

if (temp0_1 f<= zmm7_1.d)
    sub_140acc920(&var_158, &var_138)
    int128_t zmm0_7
    zmm0_7.d = var_158[0].d f* *arg6
    char rcx_36 = *(arg3 + 0x34) & 1
    int64_t var_e4_3 = 0
    zmm1_1.d = var_158[2].d f* arg6[2]
    zmm2_1 = *(arg3 + 8)
    var_130 = zmm0_7.d
    zmm0_7.d = var_158[1].d f* arg6[1]
    int32_t var_128_1 = zmm1_1.d
    int32_t var_12c_1 = zmm0_7.d
    zmm0_7.d = var_158[3].d f* arg6[3]
    int32_t var_ec_3 = arg3[1].d.d
    zmm1_1 = *(arg3 + 4)
    int32_t var_124_1 = zmm0_7.d
    var_f0 = (*(arg3 + 0xc)).d
    int32_t var_dc_3 = (*arg3).d
    char var_bc_2 = (rcx_36 * 2) | (var_bc & 0xfc)
    int32_t var_d8_3 = zmm1_1.d
    int128_t var_d4_3 = *(arg3 + 0x1c)
    float var_e8_3 = zmm2_1
    int64_t var_c4_3 = *(arg3 + 0x2c)
    sub_140db3600(arg4, arg5 + 1, &var_f0, rax_3, 0, &var_130)
else
    zmm7_1.d = zmm7_1.d f/ temp0_1
    float var_68_1 = zmm8
    float var_78_1 = zmm9
    float zmm0_3 = zmm7_1.d f* zmm1_1.d
    zmm1_1.d = zmm7_1.d f* zmm2_1
    zmm7_1.d = zmm7_1.d f* zmm3
    float var_100 = zmm0_3
    int32_t var_fc_1 = zmm1_1.d
    float var_f4_1 = var_148[3]
    int32_t var_f8_1 = zmm7_1.d
    
    if (*(arg1 + 0x328) != 0)
        int64_t* rcx_18 = *(arg1 + 0x320)
        
        if (rcx_18 != 0 && (*(*rcx_18 + 0x28))(rcx_18) != 0)
            int64_t* rcx_19
            
            if (*(arg1 + 0x328) == 0)
                rcx_19 = nullptr
            else
                rcx_19 = *(arg1 + 0x320)
            
            *(arg1 + 0x318) = (*(*rcx_19 + 0x48))(rcx_19)
    
    char* rax_30
    float zmm6_1
    rax_30, zmm6_1 = sub_140ae16d0(&var_100, &var_108, *(arg1 + 0x318))
    sub_140acc920(&var_168, rax_30)
    float* rbx_2 = arg6
    zmm6_1 = zmm6_1 * var_148[3]
    float var_160
    float zmm1_3 = var_160 * rbx_2[2]
    var_158[0] = var_168 * *rbx_2
    float var_164
    float zmm0_5 = var_164 * rbx_2[1]
    var_158[2] = zmm1_3
    zmm1_3 = var_148[1]
    var_158[1] = zmm0_5
    float var_12c = zmm1_3
    float var_124 = zmm6_1
    float var_15c
    var_158[3] = var_15c * rbx_2[3]
    var_130 = var_148[0]
    float var_128 = var_148[2]
    
    if (*(arg1 + 0x328) != 0)
        int64_t* rcx_22 = *(arg1 + 0x320)
        
        if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
            int64_t* rcx_23
            
            if (*(arg1 + 0x328) == 0)
                rcx_23 = nullptr
            else
                rcx_23 = *(arg1 + 0x320)
            
            *(arg1 + 0x318) = (*(*rcx_23 + 0x48))(rcx_23)
    
    sub_140acc920(&var_168, sub_140ae16d0(&var_130, &var_108, *(arg1 + 0x318)))
    float zmm11[0x4] = var_168
    float zmm9_1 = var_160
    float zmm12[0x4] = var_158
    var_168.q = 0
    zmm11[0] = zmm11[0] * *rbx_2
    var_160.q = 1
    float zmm8_1 = var_164 * rbx_2[1]
    zmm9_1 = zmm9_1 * rbx_2[2]
    int128_t zmm10
    zmm10.d = var_15c.d f* rbx_2[3]
    int32_t zmm6_2 = data_143dbb1f0.d
    int32_t zmm7_2 = data_143dbb1f0:4.d
    float var_118_1[0x4] = zmm12
    sub_1405a4df0(&var_168)
    float (* rbx_3)[0x4] = var_168.q
    int64_t rdi_1 = sx.q(var_160)
    float rdx_12 = var_15c
    float var_120[0x4]
    var_120[0] = zmm6_2
    float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
    temp0_2[0] = zmm8_1
    float temp0_3[0x4] = _mm_shuffle_ps(var_120, var_120, 0xe1)
    int32_t r15_1 = (rdi_1 + 1).d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm7_2
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
    temp0_4[0] = zmm9_1
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
    temp0_6[0] = zmm10.d
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
    *rbx_3 = temp0_5
    rbx_3[1][0].q = (_mm_unpackhi_pd(zmm12, zmm12[0].q)).q
    float zmm0_6[0x4] = *(arg3 + 4)
    zmm3 = *arg3 * 0.5f
    zmm0_6[0] = zmm0_6[0] * 0.5f
    temp0_5[0] = zmm3
    temp0_5[1] = zmm0_6[0]
    
    if (r15_1 s> rdx_12)
        sub_1405a4df0(&var_168)
        rdx_12 = var_15c
        rbx_3 = var_168.q
    
    int64_t rcx_28 = rdi_1 * 3
    int64_t zmm1_4 = temp0_7[2].q
    int32_t rdi_2 = r15_1 + 1
    *(rbx_3 + (rcx_28 << 3)) = temp0_5
    *(rbx_3 + (rcx_28 << 3) + 0x10) = zmm1_4
    zmm1_4 = *(arg3 + 4)
    temp0_5[0] = (*arg3)[0]
    temp0_5[1] = zmm1_4.d
    
    if (rdi_2 s> rdx_12)
        sub_1405a4df0(&var_168)
        rbx_3 = var_168.q
    
    zmm1_4 = zmm12[2].q
    var_168.q = 0
    int32_t var_160_3 = rdi_2
    int64_t rcx_30 = sx.q(r15_1) * 3
    *(rbx_3 + (rcx_30 << 3)) = temp0_5
    *(rbx_3 + (rcx_30 << 3) + 0x10) = zmm1_4
    
    if (rdi_2 != 0)
        sub_140808f70(&var_168, rdi_2, 0)
        memcpy(var_168.q, rbx_3, rdi_2 * 0x18)
    else
        int32_t var_15c_1 = 0
    
    zmm3 = *arg3
    zmm1_4 = arg3[1].d
    float var_e8_2 = *(arg3 + 8)
    float zmm2_3 = *(arg3 + 4)
    int64_t var_e4_2 = 0
    char var_bc_1 = ((*(arg3 + 0x34) & 1) * 2) | (var_bc & 0xfc)
    int128_t* var_170
    var_170.b = 0
    var_f0 = (*(arg3 + 0xc))[0]
    int32_t r14
    r14.b = zmm3 > zmm2_3
    int32_t var_ec_2 = zmm1_4.d
    char var_178
    var_178.d = r14
    float var_dc_2 = zmm3
    float var_d8_2 = zmm2_3
    float var_d4_2[0x4] = *(arg3 + 0x1c)
    int64_t var_c4_2 = *(arg3 + 0x2c)
    sub_140db39e0(arg4, arg5 + 1, &var_f0, &var_168, var_178, var_170.b)
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
__security_check_cookie(rax_1 ^ &var_198)
return zx.q(arg5 + 1)
