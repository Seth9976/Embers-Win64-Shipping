// 函数: sub_140822b60
// 地址: 0x140822b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_5 = *(arg1 + 8)
bool cond:0 = *(result_5 + 0x10) == 0
void* rax = *(result_5 + 0x18)
void* var_1c8 = rax
uint64_t result_1 = result_5

if (not(cond:0))
    var_1c8 = *(rax + 0x140)

uint32_t rcx = zx.d(*(arg1 + 0x21a))
uint64_t r14
r14.b = 0
float zmm6[0x4] = data_14396f060
int32_t rdi = data_14396f064
int128_t zmm12 = data_14396f068
float arg_10 = zmm6[0]
int32_t arg_8 = rdi

if (rcx == 1)
    int32_t rax_2 = *(arg1 + 0x220)
    zmm6 = *(arg1 + 0x228)
    r14 = zx.q(*(arg1 + 0x224))
    
    if (rdi s<= rax_2)
        rax_2 = rdi
    
    rdi = rax_2
    arg_8 = rax_2
    arg_10 = zmm6[0]
    
    if (*(arg1 + 0x22c) == 0 || r14.b != 0)
        zmm12 = zx.o(0)
else if (rcx == 2)
    rdi = rcx - 1
    arg_8 = rcx - 1

int32_t rsi = 1
int32_t rax_3 = *(arg2 + 0x614)
uint64_t r12 = zx.q(*(result_5 + 0x30))
uint64_t var_1b8 = *(arg2 + 0x60c)
float zmm1[0x4]
uint128_t zmm2
float zmm3[0x4]

if (rdi s> 1 && not(9.99999994e-09f f>= *(arg1 + 0x238)) && sub_1422e48a0(arg3) == 3)
    if (zmm6[0] == 0f || r14.b != 0)
        zmm3 = _mm_cvtepi32_ps(zx.o(rdi))
    else
        zmm3 = *(arg1 + 0x23c)
        float temp0_1[0x4] = _mm_max_ss(zmm6[0], 0x322bcc77)
        float temp0_2[0x4] = __maxss_xmmss_memss(zmm3[0], *(arg1 + 0x234))
        temp0_2[0] = temp0_2[0] / temp0_1[0]
        zmm3 = _mm_max_ss(temp0_2[0], 0x3f800000)
    
    zmm1 = *(arg4 + 0xc4)
    uint128_t zmm0 = *(arg4 + 0xc8)
    zmm6 = zmm1
    zmm2 = *(arg4 + 0xc0)
    float zmm4 = *(arg4 + 0xcc)
    float zmm5[0x4] = *(arg4 + 0xd0)
    uint128_t zmm11
    zmm11.d = zmm2.d f- zmm4
    int128_t zmm9 = *(arg4 + 0xd4)
    zmm6[0] = zmm6[0] - zmm5[0]
    zmm5[0] = zmm5[0] + zmm1[0]
    zmm1 = var_1b8.d
    uint128_t zmm10
    zmm10.d = zmm0.d f- zmm9.d
    zmm9.d = zmm9.d f+ zmm0.d
    zmm0 = zx.o(0)
    zmm4 = zmm4 f+ zmm2.d
    
    if (not(zmm1[0] f>= zmm11.d))
        zmm0.d = zmm1.d f- zmm11.d
        zmm0.d = zmm0.d f* zmm0.d
    else if (not(zmm1[0] <= zmm4))
        zmm0.d = zmm1.d f- zmm4
        zmm0.d = zmm0.d f* zmm0.d
    
    zmm1 = var_1b8:4.d
    
    if (not(zmm1[0] >= zmm6[0]))
        zmm1[0] = zmm1[0] - zmm6[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0.d = zmm0.d f+ zmm1[0]
    else if (not(zmm1[0] <= zmm5[0]))
        zmm1[0] = zmm1[0] - zmm5[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0.d = zmm0.d f+ zmm1[0]
    
    zmm1 = rax_3
    
    if (not(zmm1[0] f>= zmm10.d))
        zmm1[0] = zmm1[0] f- zmm10.d
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0.d = zmm0.d f+ zmm1[0]
    else if (not(zmm1[0] f<= zmm9.d))
        zmm1[0] = zmm1[0] f- zmm9.d
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0.d = zmm0.d f+ zmm1[0]
    
    zmm2 = *(arg1 + 0x238)
    zmm10.d = _mm_sqrt_ss(0, zmm0.d).d f* zmm12.d
    zmm10.d = zmm10.d f/ *(arg2 + 0xd5c)
    zmm10 = __maxss_xmmss_memss(zmm10.d, data_14396f06c)
    zmm0.d = zmm2.d f+ zmm10.d
    zmm2.d = zmm2.d f/ zmm0.d
    zmm1 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
    zmm0.d = 1f - zmm1[0]
    zmm1[0] = zmm1[0] * 0.156582996f
    float temp0_9 = _mm_sqrt_ss(0, _mm_max_ss(zmm0.d, 0).d)
    zmm0.d = 1.57079637f - zmm1[0]
    zmm4 = temp0_9 f* zmm0.d
    
    if (not(zmm2.d f>= 0f))
        zmm0.d = 3.14159274f - zmm4
        zmm4 = zmm0.d
    
    zmm5 = *(arg1 + 0x23c)
    float temp0_10 = _mm_max_ss(zmm4, 0x3b03126f)
    zmm2.d = (*(arg1 + 0x234)).d f/ temp0_10
    
    if (not(zmm5[0] <= 0f))
        zmm6 = *(arg1 + 0x240)
        
        if (not(zmm6[0] <= 0f))
            zmm0.d = zmm6.d f+ zmm10.d
            zmm6[0] = zmm6[0] f/ zmm0.d
            bool cond:10_1 = zmm6[0] >= 0f
            zmm1 = __andps_xmmxud_memxud(zmm6, data_142d3f770)
            zmm0.d = 1f - zmm1[0]
            zmm1[0] = zmm1[0] * 0.156582996f
            zmm12.d = 1.57079637f - zmm1[0]
            zmm4 = _mm_sqrt_ss(0, _mm_max_ss(zmm0.d, 0).d) f* zmm12.d
            
            if (not(cond:10_1))
                zmm9.d = 3.14159274f - zmm4
                zmm4 = zmm9.d
            
            float temp0_14 = _mm_max_ss(zmm4, 0x3b03126f)
            zmm5[0] = zmm5[0] / temp0_14
            zmm2 = _mm_max_ss(zmm5[0], zmm2.d)
    
    zmm3[0] = zmm3[0] + zmm3[0]
    zmm2.d = zmm2.d f+ zmm2.d
    zmm3[0] = zmm3[0] + 0.5f
    zmm2.d = zmm2.d f+ 0.5f
    rsi = int.d(zmm3[0]) s>> 1
    int32_t rax_6 = int.d(zmm2.d) s>> 1
    
    if (rax_6 s>= rsi)
        rsi = rdi
        
        if (rax_6 s< rdi)
            rsi = rax_6
    
    r12 = zx.q(r12.d * rsi)

void* r14_1 = var_1c8
uint32_t rdi_2 = (r12 * 3).d * 2
uint64_t result_2
int64_t rcx_3 = *(result_2 + 0xd0)
float zmm7
uint128_t zmm8

if (*(r14_1 + 0xb0) * rsi * 2 u>= 0xffff)
    void var_d0
    int64_t* rax_12 = sub_141996c30(rcx_3, &var_d0, rdi_2, 4)
    int64_t var_dc_1 = 4
    uint32_t var_e0_1 = rdi_2
    zmm1 = zx.o(rax_12[2])
    uint64_t result_4 = result_1
    *arg6 = *rax_12
    uint128_t zmm0_3
    zmm0_3.q = zmm1.q
    *(arg6 + 0x10) = zmm0_3
    uint128_t var_e8_1 = zmm0_3
    arg6[4] = var_dc_1
    zmm0_3 = *(arg2 + 0x358)
    float var_1a8 = (*(arg2 + 0x348))[0]
    zmm1 = *(arg2 + 0x368)
    float var_1a0_1 = zmm1[0]
    int32_t var_1a4_1 = zmm0_3.d
    zmm7, zmm8 = sub_1408182f0(arg1, arg6, rsi, &var_1a8, zmm1[0], &var_1b8, result_4)
else
    void var_f8
    int64_t* rax_11 = sub_141996c30(rcx_3, &var_f8, rdi_2, 2)
    int64_t var_b4_1 = 2
    uint32_t var_b8_1 = rdi_2
    zmm1 = zx.o(rax_11[2])
    uint64_t result_3 = result_1
    *arg6 = *rax_11
    uint128_t zmm0_1
    zmm0_1.q = zmm1.q
    *(arg6 + 0x10) = zmm0_1
    uint128_t var_c0_1 = zmm0_1
    arg6[4] = var_b4_1
    var_1c8.d = (*(arg2 + 0x348))[0]
    zmm1 = *(arg2 + 0x368)
    float var_1c0_1 = zmm1[0]
    var_1c8:4.d = (*(arg2 + 0x358)).d
    zmm7, zmm8 = sub_140818080(arg1, arg6, rsi, &var_1c8, zmm1[0], &var_1b8, result_3)

void* r8_3 = arg1 + 0xb0
zmm2 = *(arg2 + 0x354)
void* r9_2 = *(r8_3 + 0x100)
void* rcx_6 = r8_3
int32_t rdx_4 = data_14396fef8
int64_t var_120 = 0
int64_t var_100 = 0
int32_t rax_14 = *(arg1 + 0xa0) & 1
int32_t var_1cc = 0x3f800000
zmm3 = result_1.o
zmm3[0] = *(arg2 + 0x344)
int32_t var_108 = rax_14
float zmm1_1 = *(arg2 + 0x350)

if (r9_2 != 0)
    rcx_6 = r9_2

float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_194 = zmm1_1
temp0_16[0] = zmm2.d
zmm2 = *(arg2 + 0x360)
int32_t var_104 = (*(arg3 + 0x34)).d
uint128_t zmm0_2 = *(arg2 + 0x364)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
int32_t var_190 = zmm2.d
temp0_17[0] = zmm0_2.d
int32_t var_198 = (*(arg2 + 0x340)).d
int128_t var_178 = zx.o(0)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
float var_188[0x4] = temp0_18
int32_t var_18c = 0x3f800000
result_1.o = temp0_18
int32_t var_134 = *(r14_1 + 0xb0)
int32_t var_130 = rsi
float var_12c = zmm8.d f/ _mm_cvtepi32_ps(zx.o(rsi)).d
int32_t rax_17

if (rdx_4 == 0)
    rax_17 = *rcx_6
else
    rax_17 = *(rcx_6 + 4)

int32_t var_168 = rax_17
int32_t rax_18

if (rdx_4 == 0)
    rax_18 = *(rcx_6 + 0x10)
else
    rax_18 = *(rcx_6 + 0x14)

int32_t var_164 = rax_18
int32_t rax_19

if (rdx_4 == 0)
    rax_19 = *(rcx_6 + 0x20)
else
    rax_19 = *(rcx_6 + 0x24)

int32_t var_158 = rax_19
int32_t rax_20

if (rdx_4 == 0)
    rax_20 = *(rcx_6 + 0x30)
else
    rax_20 = *(rcx_6 + 0x34)

int32_t var_160 = rax_20
int32_t rax_21

if (rdx_4 == 0)
    rax_21 = *(rcx_6 + 0x40)
else
    rax_21 = *(rcx_6 + 0x44)

int32_t var_15c = rax_21
int32_t rax_22

if (rdx_4 == 0)
    rax_22 = *(rcx_6 + 0x60)
else
    rax_22 = *(rcx_6 + 0x64)

int32_t var_150 = rax_22
int32_t rax_23

if (rdx_4 == 0)
    rax_23 = *(rcx_6 + 0x70)
else
    rax_23 = *(rcx_6 + 0x74)

int32_t var_14c = rax_23
int32_t rax_24

if (rdx_4 == 0)
    rax_24 = *(rcx_6 + 0x80)
else
    rax_24 = *(rcx_6 + 0x84)

int32_t var_144 = rax_24
int32_t rax_25

if (rdx_4 == 0)
    rax_25 = *(rcx_6 + 0x90)
else
    rax_25 = *(rcx_6 + 0x94)

int32_t var_140 = rax_25

if (r9_2 != 0)
    r8_3 = r9_2

int32_t rax_26

if (rdx_4 == 0)
    rax_26 = *(r8_3 + 0xa0)
else
    rax_26 = *(r8_3 + 0xa4)

int32_t var_13c = rax_26
int32_t rax_27

if (rdx_4 == 0)
    rax_27 = *(r8_3 + 0xb0)
else
    rax_27 = *(r8_3 + 0xb4)

int32_t var_138 = rax_27
int32_t var_148 = *(arg1 + 0x230)

if (*(arg1 + 0x1e8) - 1 u> 1)
    int32_t var_154_2 = 0xffffffff
else if (rdx_4 == 0)
    int32_t var_154_1 = *(r8_3 + 0x50)
else
    int32_t var_154 = *(r8_3 + 0x54)

zmm1_1 = *(arg1 + 0x1ec)

if (zmm1_1 == zmm7)
    int32_t var_128_1 = 0
else
    zmm0_2.d = zmm8.d f/ zmm1_1
    int32_t var_128 = zmm0_2.d

zmm0_2 = *(arg1 + 0x204)

if (zmm0_2.d f== zmm7)
    int32_t var_124_1 = 0
else
    zmm8.d = zmm8.d f/ zmm0_2.d
    int32_t var_124 = zmm8.d

zmm3 = *(arg1 + 0x1f4)
zmm0_2 = *(arg1 + 0x1fc)
zmm1_1 = *(arg1 + 0x20c)
zmm2 = *(arg1 + 0x214)
int64_t* rcx_7 = data_143f0f180
float temp0_20[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_20[0] = zmm0_2.d
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
temp0_21[0] = zmm1_1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x27)
temp0_22[0] = zmm2.d
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x39)
result_1.o = temp0_23
float var_118[0x4] = temp0_23
(*(*rcx_7 + 0xf8))(rcx_7, &result_1, &var_198, &data_143ce8d90, 1, 1, result_1)
uint64_t result = result_1
result_2 = result

if (result != 0)
    *(result + 8) += 1
    uint64_t result_6 = result_1
    
    if (result_6 != 0)
        int32_t rax_33 = *(result_6 + 8)
        *(result_6 + 8) -= 1
        
        if (rax_33 == 1)
            char rax_34
            
            if (*(result_6 + 0x10) == 0 && data_143f0f1d0 == 0)
                rax_34 = sub_1405949a0()
            
            if (*(result_6 + 0x10) != 0 || (data_143f0f1d0 == 0 && rax_34 != 0))
                (**result_6)(result_6, 1)
            else
                bool z_1
                
                if (0 == *(result_6 + 0xc))
                    *(result_6 + 0xc) = 1
                    z_1 = true
                else
                    *(result_6 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, result_6)
    
    result = result_2

uint64_t result_7

if (arg5 != &result_2)
    result_7 = *arg5
    *arg5 = result
    
    if (result_7 != 0)
        int32_t rdi_3 = *(result_7 + 8)
        *(result_7 + 8) -= 1
        
        if (rdi_3 == 1)
            if (*(result_7 + 0x10) != 0)
                return (**result_7)(result_7, 1)
            
            char rax_37
            
            if (data_143f0f1d0 == 0)
                rax_37 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_37 != 0)
                return (**result_7)(result_7, 1)
            
            result = 0
            bool z_2
            
            if (0 == *(result_7 + 0xc))
                *(result_7 + 0xc) = 1
                z_2 = true
            else
                result = zx.q(*(result_7 + 0xc))
                z_2 = false
            
            if (z_2)
                return sub_1405dcc10(&data_143f02390, result_7)
else if (result != 0)
    int32_t rdi_4 = *(result + 8)
    *(result + 8) -= 1
    
    if (rdi_4 == 1)
        result_7 = result_2
        
        if (*(result_7 + 0x10) != 0)
            return (**result_7)(result_7, 1)
        
        char rax_39
        
        if (data_143f0f1d0 == 0)
            rax_39 = sub_1405949a0()
        
        if (data_143f0f1d0 == 0 && rax_39 != 0)
            return (**result_7)(result_7, 1)
        
        result = 0
        bool z_3
        
        if (0 == *(result_7 + 0xc))
            *(result_7 + 0xc) = 1
            z_3 = true
        else
            result = zx.q(*(result_7 + 0xc))
            z_3 = false
        
        if (z_3)
            return sub_1405dcc10(&data_143f02390, result_2)
return result
