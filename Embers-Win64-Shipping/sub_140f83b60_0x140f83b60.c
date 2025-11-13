// 函数: sub_140f83b60
// 地址: 0x140f83b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r13

if (arg7 == 0)
    r13.b = 0x20
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
        r13.b = 0x20
    else
        r13.b = 0

void* r15 = *(arg1 + 0x2e0)
char var_168 = r13.b

if (r15 == 0)
    r15 = *(arg1 + 0x2a8) + 0x90

uint32_t rcx_2 = zx.d(*(r15 + 0x30))
void* rdx = r15 + 0x20

if (rcx_2 != 0)
    if (rcx_2 == 1)
        rdx = *(rdx + 0x18)
    else if (rcx_2 == 3)
        rdx = &arg6[2]
    else
        rdx = &arg6[1]

float var_140[0x4] = *rdx
int128_t* rax_6 = sub_140e11270(arg1 + 0x2f0, arg2)
uint32_t rdx_1 = zx.d(rax_6[1].b)

if (rdx_1 != 0)
    if (rdx_1 == 1)
        rax_6 = *(rax_6 + 0x18)
    else if (rdx_1 == 3)
        rax_6 = &arg6[2]
    else
        rax_6 = &arg6[1]

float zmm1[0x4] = *(rax_6 + 4)
float zmm2[0x4] = *(rax_6 + 8)
float zmm3 = *(rax_6 + 0xc)
float zmm0_1[0x4] = *arg6
zmm0_1[0] = zmm0_1[0] f* *rax_6
zmm1[0] = zmm1[0] f* *(arg6 + 4)
zmm0_1[0] = zmm0_1[0] * var_140[0]
zmm2[0] = zmm2[0] f* *(arg6 + 8)
zmm3 = zmm3 f* *(arg6 + 0xc)
zmm1[0] = zmm1[0] * var_140[1]
zmm2[0] = zmm2[0] * var_140[2]
zmm3 = zmm3 * var_140[3]
float var_108 = zmm0_1[0]
float var_104 = zmm1[0]
float var_128[0x4] = *arg6
float var_100 = zmm2[0]
float var_fc = zmm3
int32_t* rax_7 = sub_140f466a0(arg1 + 0x2b0)
char rcx_6 = rax_7[1].b
float zmm7[0x4]

if (rcx_6 == 0)
    zmm7 = var_140[0]
else
    zmm7 = *rax_7

if (*(arg1 + 0x348) != 0)
    int64_t* rcx_7 = *(arg1 + 0x340)
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
        int64_t* rcx_8
        
        if (*(arg1 + 0x348) == 0)
            rcx_8 = nullptr
        else
            rcx_8 = *(arg1 + 0x340)
        
        (*(*rcx_8 + 0x48))(rcx_8, &var_140)
        *(arg1 + 0x330) = var_140[0].q

void* r9_1 = *(arg1 + 0x2d8)
zmm1 = *(arg1 + 0x334)
var_140[0] = (*(arg1 + 0x330)).d
var_140[1] = zmm1[0]

if (r9_1 == 0)
    r9_1 = *(arg1 + 0x2a8) + 8

uint32_t rcx_9 = zx.d(*(r9_1 + 0x30))
void* rdx_4 = r9_1 + 0x20

if (rcx_9 != 0)
    if (rcx_9 == 1)
        rdx_4 = *(rdx_4 + 0x18)
    else if (rcx_9 == 3)
        rdx_4 = &arg6[2]
    else
        rdx_4 = &arg6[1]

zmm2 = *rdx_4
uint128_t zmm0_2
zmm0_2.d = zmm2.d f* *arg6
char rcx_11 = *(arg3 + 0x34) & 1
int64_t var_ec = 0
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm1[0] = zmm1[0] f* *(arg6 + 4)
char var_c4
rcx_11 = (rcx_11 * 2) | (var_c4 & 0xfc)
float var_158 = zmm0_2.d
zmm0_2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* *(arg6 + 8)
int128_t* var_170 = &var_158
float var_154 = zmm1[0]
zmm1 = *(arg3 + 0xc)
int32_t var_150 = zmm0_2.d
zmm0_2 = arg3[1].d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm2[0] = zmm2[0] f* *(arg6 + 0xc)
int32_t var_f4 = zmm0_2.d
zmm0_2 = *arg3
float var_f8 = zmm1[0]
int32_t var_e4 = zmm0_2.d
float var_14c = zmm2[0]
float var_e0 = (*(arg3 + 4))[0]
uint128_t var_dc = *(arg3 + 0x1c)
float var_f0 = (*(arg3 + 8))[0]
int64_t var_cc = *(arg3 + 0x2c)
int64_t zmm6_1 = sub_140db3600(arg4, arg5, &var_f8, r9_1, r13.b, var_170)
int32_t r13_1 = arg5 + 1
char var_178
int128_t* rax_14
void* r9_3
float zmm0_3[0x4]
int32_t zmm10_1

if (rcx_6 == 0)
    void* rbx_2 = *(arg1 + 0x2e8)
    
    if (rbx_2 == 0)
        rbx_2 = *(arg1 + 0x2a8) + 0x118
    
    zmm0_3 = data_142d5beb0
    zmm7 = *(rbx_2 + 8)
    int64_t r8_2 = var_140[0].q
    zmm7[0] = zmm7[0] f* *(arg1 + 0x350)
    var_178.q = &var_158
    var_158.o = zmm0_3
    char rax_18
    float zmm7_4
    int512_t zmm9_4
    float zmm11_3
    rax_18, zmm7_4, zmm9_4, zmm11_3 =
        sub_140f87840(arg4, arg3, r8_2, _mm_unpacklo_ps(zx.o(0), zmm6_1)[0].q, var_178)
    
    if (rax_18 != 0)
        float (* rax_19)[0x4] = *(rbx_2 + 0x38)
        float zmm0_6[0x4]
        
        if (rax_19 == 0)
            zmm0_6 = *(rbx_2 + 0x20)
        else
            zmm0_6 = *rax_19
        
        *(arg3 + 8)
        zmm9_4.o = *(arg3 + 4)
        int32_t zmm6_5 = arg3[1].d
        var_140 = zmm0_6
        int32_t var_114_1 = 0
        zmm0_6 = var_140[0]
        zmm0_6[0] = zmm0_6[0] * var_128[0]
        int64_t zmm1_4
        zmm1_4.d = var_140[1].d f* var_128[1]
        *arg3
        var_158 = zmm0_6[0]
        zmm0_6 = var_140[2]
        zmm0_6[0] = zmm0_6[0] * var_128[2]
        int32_t var_154_4 = zmm1_4.d
        zmm1_4.d = var_140[3].d f* var_128[3]
        float var_150_5 = zmm0_6[0]
        var_128 = data_142d8c9b0
        *(arg3 + 0xc)
        int32_t var_14c_6 = zmm1_4.d
        float var_118_1 = zmm11_3 - zmm7_4
        float zmm7_5
        int32_t zmm8_5
        int32_t zmm9_5
        zmm7_5, zmm8_5, zmm9_5, zmm10_1 = sub_1408b8950(&var_140, &var_128, arg3 + 0x1c)
        r9_3 = rbx_2
        float zmm0_7[0x4] = var_140
        char rcx_22 = *(arg3 + 0x34) & 1
        var_f8 = zmm7_5
        char var_c4_4 = (rcx_22 * 2) | (rcx_11 & 0xfc)
        rax_14 = &var_158
        int32_t var_f4_4 = zmm6_5
        int32_t var_f0_4 = zmm8_5
        int32_t var_e0_4 = zmm9_5
        float var_dc_4[0x4] = zmm0_7
        int64_t var_130
        int64_t var_cc_3 = var_130
        goto label_140f8443d
else
    int32_t rcx_13 = *(arg1 + 0x2d0)
    
    if (data_143e20cf4 == 1)
        if (rcx_13 == 0)
            rcx_13 = 1
        else if (rcx_13 == 1)
            rcx_13 = 0
    
    if (zmm7[0] f>= zmm6_1.d)
        zmm7 = _mm_min_ss(zmm7[0], 0x3f800000)
    else
        zmm7 = zx.o(0)
    
    int64_t r8_1 = var_140[0].q
    var_178.q = &var_128
    int32_t* rdx_6 = arg3
    void* rcx_17
    float zmm0_5[0x4]
    
    if (rcx_13 == 1)
        var_154.q = 0
        rcx_17 = arg4
        int32_t var_14c_5 = 0x3f800000
        zmm0_3 = var_158.o
        zmm0_3[0] = zmm7[0]
        var_158.o = zmm0_3
        var_128 = zmm0_3
        zmm0_3 = _mm_unpacklo_ps(0x3f800000, zmm6_1)
    label_140f84083:
        
        if (sub_140f87840(rcx_17, rdx_6, r8_1, zmm0_3[0].q, var_178) != 0)
            float zmm6_3 = data_143dbb1f0.d
            float zmm7_2 = data_143dbb1f0:4.d
            float zmm11_2 = *(arg3 + 8)
            float zmm4_2[0x4] = *(arg3 + 0x24)
            float zmm2_2[0x4] = *(arg3 + 0x1c)
            float zmm3_2[0x4] = *(arg3 + 0x28)
            int64_t zmm1_2 = arg3[2].d
            int32_t zmm12_2 = *arg3
            int32_t zmm13_1 = *(arg3 + 4)
            zmm4_2[0] = zmm4_2[0] * zmm7_2
            zmm2_2[0] = zmm2_2[0] * zmm6_3
            int64_t zmm5_2
            zmm5_2.d = zmm1_2.d f* zmm6_3
            zmm2_2[0] = zmm2_2[0] + zmm4_2[0]
            float zmm10_2 = zmm6_3 * zmm11_2 f+ *(arg3 + 0xc)
            zmm2_2[0] = zmm2_2[0] f+ *(arg3 + 0x2c)
            float zmm9_2 = zmm7_2 * zmm11_2 f+ arg3[1].d
            zmm3_2[0] = zmm3_2[0] * zmm7_2
            var_158 = zmm2_2[0]
            int32_t var_154_2 = zmm1_2.d
            zmm5_2.d = zmm5_2.d f+ zmm3_2[0]
            float var_150_2 = zmm4_2[0]
            float var_14c_3 = zmm3_2[0]
            zmm0_5 = var_158.o
            var_f8 = zmm10_2
            zmm5_2.d = zmm5_2.d f+ arg3[3].d
            float var_dc_2[0x4] = zmm0_5
            float var_f4_2 = zmm9_2
            float var_f0_2 = zmm11_2
            zmm0_5 = _mm_unpacklo_ps(zmm2_2, zmm5_2)
            int32_t var_e4_1 = zmm12_2
            int32_t var_e0_2 = zmm13_1
        label_140f8415f:
            r9_3 = r15
            int64_t var_cc_2 = zmm0_5.q
            rax_14 = &var_108
            char var_c4_3 = ((*(arg3 + 0x34) & 1) * 2) | (rcx_11 & 0xfc)
            goto label_140f8445b
    else if (rcx_13 == 2)
        zmm7[0] = zmm7[0] * 0.5f
        zmm0_3 = _mm_shuffle_ps(zmm7, zmm7, 0)
        var_158.o = zmm0_3
        var_128 = zmm0_3
        char rax_17
        float zmm7_3
        int32_t zmm10_3
        rax_17, zmm7_3, zmm10_3 =
            sub_140f87840(arg4, rdx_6, r8_1, _mm_unpacklo_ps(0x3f000000, 0x3f000000)[0].q, var_178)
        
        if (rax_17 != 0)
            float zmm6_4[0x4] = *arg3
            int64_t zmm1_3 = arg3[2].d
            int32_t zmm8_3 = *(arg3 + 4)
            int64_t zmm2_3 = zmm1_3
            int32_t zmm3_3 = arg3[1].d
            zmm6_4[0] = zmm6_4[0] * zmm7_3
            zmm7_3 = *(arg3 + 8)
            zmm6_4[0] = zmm6_4[0] f* zmm10_3
            int32_t var_154_3 = zmm1_3.d
            zmm1_3 = *(arg3 + 0x28)
            zmm6_4[0] = zmm6_4[0] f* zmm10_3
            int32_t var_14c_4 = zmm1_3.d
            int32_t var_f4_3 = zmm3_3
            zmm6_4[0] = zmm6_4[0] - zmm6_4[0]
            float var_f0_3 = zmm7_3
            zmm0_5 = *(arg3 + 0x1c)
            float zmm4_3[0x4] = zmm0_5
            var_158 = zmm0_5[0]
            float var_150_4 = (*(arg3 + 0x24))[0]
            zmm0_5 = var_158.o
            zmm4_3[0] = zmm4_3[0] * zmm6_4[0]
            float zmm5_3 = zmm6_4[0]
            float var_dc_3[0x4] = zmm0_5
            zmm4_3[0] = zmm4_3[0] f+ *(arg3 + 0x2c)
            zmm2_3.d = zmm2_3.d f* zmm6_4[0]
            float var_e4_2 = zmm6_4[0]
            zmm2_3.d = zmm2_3.d f+ arg3[3].d
            int32_t var_e0_3 = zmm8_3
            var_f8 = zmm5_3 * zmm7_3 f+ *(arg3 + 0xc)
            zmm0_5 = _mm_unpacklo_ps(zmm4_3, zmm2_3)
            goto label_140f8415f
    else
        if (rcx_13 == 3)
            var_158.q = 0
            rcx_17 = arg4
            int32_t var_150_3 = 0x3f800000
            zmm0_3 = var_158.o
            zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x93)
            zmm0_3[0] = zmm7[0]
            zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x39)
            var_158.o = zmm0_3
            var_128 = zmm0_3
            zmm0_3 = _mm_unpacklo_ps(zx.o(0), zmm6_1)
            goto label_140f84083
        
        rcx_17 = arg4
        
        if (rcx_13 == 4)
            var_158 = 0f
            var_150.q = 0x3f800000
            zmm0_3 = var_158.o
            zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
            zmm0_3[0] = zmm7[0]
            zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
            var_158.o = zmm0_3
            var_128 = zmm0_3
            zmm0_3 = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
            goto label_140f84083
        
        var_158.q = 0
        int32_t var_14c_1 = 0x3f800000
        zmm0_3 = var_158.o
        zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xd2)
        zmm0_3[0] = zmm7[0]
        zmm0_3 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xc9)
        var_158.o = zmm0_3
        var_128 = zmm0_3
        
        if (sub_140f87840(rcx_17, rdx_6, r8_1, _mm_unpacklo_ps(zx.o(0), zmm6_1)[0].q, var_178) != 0)
            float zmm12_1[0x4] = data_143dbb1f0.d
            r9_3 = r15
            float zmm5_1[0x4] = data_143dbb1f0:4.d
            float zmm9_1 = *(arg3 + 8)
            float zmm8_1 = zmm12_1[0]
            int32_t zmm4_1 = *(arg3 + 0x24)
            float zmm7_1 = zmm5_1[0]
            float zmm2_1 = *(arg3 + 0x1c)
            int32_t zmm3_1 = *(arg3 + 0x28)
            int32_t zmm1_1 = arg3[2].d
            int32_t zmm11_1 = *(arg3 + 4)
            char rdx_7 = *(arg3 + 0x34) & 1
            zmm10_1 = *arg3
            zmm5_1[0] = zmm5_1[0] f* zmm4_1
            rax_14 = &var_108
            char var_c4_2 = (rdx_7 * 2) | (rcx_11 & 0xfc)
            zmm12_1[0] = zmm12_1[0] * zmm2_1
            zmm12_1[0] = zmm12_1[0] f* zmm1_1
            zmm12_1[0] = zmm12_1[0] + zmm5_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm3_1
            zmm12_1[0] = zmm12_1[0] + zmm5_1[0]
            zmm12_1[0] = zmm12_1[0] f+ *(arg3 + 0x2c)
            zmm8_1 = zmm8_1 * zmm9_1 f+ *(arg3 + 0xc)
            zmm7_1 = zmm7_1 * zmm9_1 f+ arg3[1].d
            zmm12_1[0] = zmm12_1[0] f+ arg3[3].d
            var_158 = zmm2_1
            int32_t var_154_1 = zmm1_1
            int32_t var_150_1 = zmm4_1
            int32_t var_14c_2 = zmm3_1
            float zmm0_4[0x4] = var_158.o
            var_f8 = zmm8_1
            float var_dc_1[0x4] = zmm0_4
            float var_f4_1 = zmm7_1
            int64_t var_cc_1 = (_mm_unpacklo_ps(zmm12_1, zmm12_1[0].q)).q
            float var_f0_1 = zmm9_1
            int32_t var_e0_1 = zmm11_1
        label_140f8443d:
            int32_t var_e4_3 = zmm10_1
        label_140f8445b:
            int64_t var_ec_1 = 0
            sub_140db3600(arg4, r13_1, &var_f8, r9_3, var_168, rax_14)
            r13_1 += 1
            sub_140db7b50(arg4)
__security_check_cookie(rax_1 ^ &var_198)
return zx.q(r13_1 - 1)
