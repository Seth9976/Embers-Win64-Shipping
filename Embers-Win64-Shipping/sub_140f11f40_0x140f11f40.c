// 函数: sub_140f11f40
// 地址: 0x140f11f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rsi = nullptr
int64_t r12

if (arg7 == 0)
    r12.b = 0x20
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx = *(arg1 + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (*(arg1 + 0x190) == 0)
        r12.b = 0x20
    else
        r12.b = 0

void* r15 = *(arg1 + 0x2d8)
void* r9 = *(arg1 + 0x2a8)
uint32_t rcx_2 = zx.d(*(r9 + 0x30))
void* rdx = r9 + 0x20
float zmm9[0x4] = *(r15 + 8)
float zmm11[0x4] = *(r15 + 0xc)
int128_t zmm10
zmm10.d = (*arg3).d f- zmm9[0]
int128_t zmm13
zmm13.d = (*(arg3 + 4)).d f- zmm11[0]

if (rcx_2 != 0)
    if (rcx_2 == 1)
        rdx = *(rdx + 0x18)
    else if (rcx_2 == 3)
        rdx = &arg6[8]
    else
        rdx = &arg6[4]

float zmm2[0x4] = *rdx
int128_t zmm8 = *(arg3 + 8)
int32_t zmm4 = *(arg3 + 0x24)
zmm2[0] = zmm2[0] f* *arg6
int32_t zmm3 = *(arg3 + 0x28)
char rcx_4 = *(arg3 + 0x34) & 1
float var_128 = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0_2[0] = temp0_2[0] f* arg6[1]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_3[0] = temp0_3[0] f* arg6[2]
int128_t* var_140 = &var_128
zmm9[0] = zmm9[0] * 0.5f
int64_t var_ec = 0
float var_120 = temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
temp0_4[0] = temp0_4[0] f* arg6[3]
char var_148 = r12.b
zmm11[0] = zmm11[0] * 0.5f
float var_124 = temp0_2[0]
float zmm1[0x4] = arg3[2].d
zmm9[0] = zmm9[0] * zmm1[0]
zmm11[0] = zmm11[0] f* zmm4
float var_11c = temp0_4[0]
zmm2 = *(arg3 + 0x1c)
zmm9[0] = zmm9[0] * zmm2[0]
zmm11[0] = zmm11[0] f* zmm3
zmm9[0] = zmm9[0] + zmm11[0]
float var_138 = zmm2[0]
float var_134 = zmm1[0]
int32_t var_130 = zmm4
zmm9[0] = zmm9[0] + zmm11[0]
int32_t var_12c = zmm3
zmm1 = var_138.o
zmm9[0] = zmm9[0] f+ *(arg3 + 0x2c)
zmm9[0] = zmm9[0] f+ arg3[3].d
zmm9[0] = zmm9[0] f* zmm8.d
zmm11[0] = zmm11[0] f* zmm8.d
int32_t var_f0 = zmm8.d
zmm9[0] = zmm9[0] f+ *(arg3 + 0xc)
zmm11[0] = zmm11[0] f+ arg3[1].d
int64_t var_cc = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
int32_t var_e4 = zmm10.d
float var_f8 = zmm9[0]
float var_f4 = zmm11[0]
int32_t var_e0 = zmm13.d
float var_dc[0x4] = zmm1
sub_140db3600(arg4, arg5, &var_f8, r9, var_148, var_140)
void* rcx_7 = *(arg1 + 0x2d8) + 0x20
uint32_t rdx_2 = zx.d(*(rcx_7 + 0x10))

if (rdx_2 != 0)
    if (rdx_2 == 1)
        rcx_7 = *(rcx_7 + 0x18)
    else if (rdx_2 == 3)
        rcx_7 = &arg6[8]
    else
        rcx_7 = &arg6[4]

float zmm2_1[0x4] = *rcx_7
zmm2_1[0] = zmm2_1[0] f* *arg6
float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
temp0_6[0] = temp0_6[0] f* arg6[1]
var_138 = zmm2_1[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
temp0_7[0] = temp0_7[0] f* arg6[2]
float temp0_8[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
temp0_8[0] = temp0_8[0] f* arg6[3]
float var_134_1 = temp0_6[0]
float var_130_1 = temp0_7[0]
float var_12c_1 = temp0_8[0]

if (*(arg1 + 0x2d0) != 0)
    int64_t* rcx_8 = *(arg1 + 0x2c8)
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        int64_t* rcx_9
        
        if (*(arg1 + 0x2d0) == 0)
            rcx_9 = nullptr
        else
            rcx_9 = *(arg1 + 0x2c8)
        
        float var_118[0x4]
        (*(*rcx_9 + 0x48))(rcx_9, &var_118)
        *(arg1 + 0x2b0) = var_118

float zmm7[0x4] = *(arg1 + 0x2b0)

if (*(arg1 + 0x2d0) != 0)
    int64_t* rcx_10 = *(arg1 + 0x2c8)
    
    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
        if (*(arg1 + 0x2d0) != 0)
            rsi = *(arg1 + 0x2c8)
        
        float var_108[0x4]
        (*(*rsi + 0x48))(rsi, &var_108)
        *(arg1 + 0x2b0) = var_108

zmm7[0] = zmm7[0] * 0.0174532924f
int512_t zmm6_1
zmm6_1.o = *(arg1 + 0x2b4)
float zmm0_2[0x4]
float zmm6_2
int32_t zmm10_1
int32_t zmm13_1
int32_t zmm14
zmm0_2, zmm6_2, zmm10_1, zmm13_1, zmm14 = __libm_sse2_sincosf_(zmm7)
float zmm8_1 = *(arg3 + 8)
float zmm9_1[0x4] = zmm0_2
int32_t zmm11_1 = *(r15 + 8)
int32_t zmm4_1 = *(arg3 + 0x24)
float zmm2_2 = *(arg3 + 0x1c)
int32_t zmm3_1 = *(arg3 + 0x28)
int32_t zmm1_2 = arg3[2].d
char rdx_6 = *(arg3 + 0x34) & 1
void* r9_1 = *(arg1 + 0x2d8)
float temp0_9[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
temp0_9[0] = temp0_9[0] * zmm6_2
char var_c4
char var_c4_2 = (rdx_6 * 2) | (((rcx_4 * 2) | (var_c4 & 0xfc)) & 0xfc)
zmm9_1[0] = zmm9_1[0] * zmm6_2
float* var_140_1 = &var_138
temp0_9[0] = temp0_9[0] f* zmm10_1
int64_t var_ec_1 = 0
zmm10_1 = *(r15 + 0xc)
zmm9_1[0] = zmm9_1[0] f* zmm13_1
char var_148_1 = r12.b
temp0_9[0] = temp0_9[0] f+ *arg3
var_128 = zmm2_2
zmm9_1[0] = zmm9_1[0] f+ *(arg3 + 4)
int32_t var_124_1 = zmm1_2
int32_t var_120_1 = zmm4_1
temp0_9[0] = temp0_9[0] f- zmm11_1
int32_t var_11c_1 = zmm3_1
float var_f0_1 = zmm8_1
zmm9_1[0] = zmm9_1[0] f- zmm10_1
int32_t var_e4_1 = zmm11_1
int32_t var_e0_1 = zmm10_1
temp0_9[0] = temp0_9[0] f* zmm14
zmm9_1[0] = zmm9_1[0] f* zmm14
float zmm7_1 = temp0_9[0]
temp0_9[0] = temp0_9[0] * zmm2_2
temp0_9[0] = temp0_9[0] f* zmm1_2
zmm9_1[0] = zmm9_1[0] f* zmm4_1
zmm6_2 = zmm9_1[0]
zmm9_1[0] = zmm9_1[0] f* zmm3_1
temp0_9[0] = temp0_9[0] + zmm9_1[0]
zmm0_2 = var_128.o
temp0_9[0] = temp0_9[0] + zmm9_1[0]
temp0_9[0] = temp0_9[0] f+ *(arg3 + 0x2c)
zmm7_1 = zmm7_1 * zmm8_1 f+ *(arg3 + 0xc)
zmm6_2 = zmm6_2 * zmm8_1 f+ arg3[1].d
temp0_9[0] = temp0_9[0] f+ arg3[3].d
float var_dc_1[0x4] = zmm0_2
var_f8 = zmm7_1
float var_f4_1 = zmm6_2
int64_t var_cc_1 = (_mm_unpacklo_ps(temp0_9, temp0_9[0].q)).q
sub_140db3600(arg4, arg5 + 1, &var_f8, r9_1, var_148_1, var_140_1)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(arg5 + 1)
