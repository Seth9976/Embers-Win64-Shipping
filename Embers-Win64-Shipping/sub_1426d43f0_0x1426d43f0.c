// 函数: sub_1426d43f0
// 地址: 0x1426d43f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_88
sub_140b63b70(arg1 + 0x80, &var_88)
int16_t* const rdi = &data_142d40450
int64_t var_a8
int64_t* rax
float zmm6[0x4]
rax, zmm6 = sub_1426b3750(arg1, &var_a8)

if (rax[1].d != 0)
    rdi = *rax

int64_t var_98
sub_140a2e390(&var_98, u"%s: %s", rdi)
int64_t rdi_1 = sx.q(arg3[1].d)
int32_t rax_1 = (rdi_1 + 1).d
arg3[1].d = rax_1

if (rax_1 s> *(arg3 + 0xc))
    sub_1405a4f90(arg3)

int64_t* rcx_6 = (rdi_1 << 4) + *arg3
*rcx_6 = 0
*rcx_6 = var_98
var_98 = 0
int32_t var_90
rcx_6[1].d = var_90
int32_t result_1
*(rcx_6 + 0xc) = result_1
int64_t rcx_7 = var_98
var_90.q = 0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_a8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rdi_2 = *(arg2 + 0xc0)
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
void* rax_5

if (rdi_2 != 0)
    rax_5 = rdi_2[0x4a]

int64_t* result
wchar16 const* const rdx_6
int32_t result_2
int32_t rdi_3
uint32_t r8_3

if (rdi_2 == 0 || rax_5 == 0)
    var_98 = 0
    var_90.q = 0
    sub_1405947f0(&var_98, 0x1b)
    result_2 = result_1
    rdi_3 = var_90 + 0x1b
    
    if (rdi_3 s> result_2)
        sub_140594770(&var_98)
        result_2 = result_1
    
    r8_3 = 0x36
    rdx_6 = u"Controller or Pawn is NULL"
label_1426d48cd:
    int64_t r15_1 = var_98
    UnDecorator::getReferenceType(r15_1, rdx_6, r8_3)
    int64_t r14_1 = sx.q(arg3[1].d)
    int32_t rax_15 = (r14_1 + 1).d
    arg3[1].d = rax_15
    
    if (rax_15 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    result = (r14_1 << 4) + *arg3
    *result = r15_1
    *(result + 0xc) = result_2
    result[1].d = rdi_3
else
    void* rcx_9 = *(rax_5 + 0x130)
    float* rax_6
    
    if (rcx_9 == 0)
        var_90 = data_14399f6a0
        rax_6 = &var_98
        var_98 = data_14399f698.q
    else
        rax_6, zmm6 = sub_141f133e0(rcx_9, &var_98)
    
    int64_t zmm0_1 = *rax_6
    int32_t rax_8 = rax_6[2]
    sub_1426b1cc0(rdi_2, &var_a8, 2)
    zmm8 = var_a8.d
    int32_t var_a0
    uint32_t zmm3[0x4] = var_a0
    zmm7 = var_a8:4.d
    
    if (not(zmm8[0] f!= data_143b58058) && not(zmm7[0] f!= data_143b5805c)
            && not(zmm3[0] f!= data_143b58060))
        var_98 = 0
        var_90.q = 0
        sub_1405947f0(&var_98, 0x22)
        result_2 = result_1
        rdi_3 = var_90 + 0x22
        
        if (rdi_3 s> result_2)
            sub_140594770(&var_98)
            result_2 = result_1
        
        r8_3 = 0x44
        rdx_6 = u"FocalPoint is an Invalid Location"
        goto label_1426d48cd
    
    float var_28_1[0x4] = zmm6
    void* rcx_13 = *(rdi_2[0x4a] + 0x130)
    float var_90_2
    float zmm1_1[0x4]
    
    if (rcx_13 == 0)
        float rax_10 = data_143dbb200
        var_98 = data_143dbb1f8.q
        var_90_2 = rax_10
    else
        zmm1_1 = *(rcx_13 + 0x1d0)
        var_98.d = zmm1_1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_90_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_98:4.d = temp0_1[0]
    
    float zmm9[0x4] = zmm0_1.d
    zmm1_1 = zx.o(var_98)
    zmm8[0] = zmm8[0] - zmm1_1[0]
    zmm6 = zmm0_1:4.d
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    zmm7[0] = zmm7[0] - temp0_3[0]
    var_98 = zmm1_1.q
    bool cond:2_1 = _mm_and_ps(zmm9, 0x7fffffff)[0] > 9.99999975e-05f
    zmm3[0] = zmm3[0] f- var_90_2
    float zmm0_2[0x4]
    
    if (cond:2_1)
    label_1426d4686:
        
        if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
        label_1426d46bd:
            float zmm10[0x4] = zmm9
            float zmm11[0x4] = zmm6
            zmm6[0] = zmm6[0] * zmm11[0]
            zmm9[0] = zmm9[0] * zmm10[0]
            zmm6[0] = zmm6[0] + zmm9[0]
            double zmm2_1
            
            if (not(zmm6[0] <= 9.99999994e-09f))
                float zmm5_1[0x4] = 0x3f000000
                zmm3 = zmm6
                float temp0_10[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3[0])
                zmm3[0] = zmm3[0] f* 0.5f
                temp0_10[0] = temp0_10[0] * temp0_10[0]
                zmm1_1 = zmm3
                zmm1_1[0] = zmm1_1[0] * temp0_10[0]
                zmm2_1.d = 0.5f - zmm1_1[0]
                temp0_10[0] = temp0_10[0] f* zmm2_1.d
                temp0_10[0] = temp0_10[0] + temp0_10[0]
                zmm6 = temp0_10
                temp0_10[0] = temp0_10[0] * temp0_10[0]
                zmm3[0] = zmm3[0] f* temp0_10[0]
                zmm5_1[0] = 0.5f f- zmm3[0]
                zmm6[0] = zmm6[0] * zmm5_1[0]
                zmm6[0] = zmm6[0] + temp0_10[0]
                zmm9 = zmm6
                zmm6[0] = zmm6[0] * zmm11[0]
                zmm9[0] = zmm9[0] * zmm10[0]
            
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7[0] = zmm7[0] + zmm8[0]
            
            if (not(zmm7[0] <= 9.99999994e-09f))
                float zmm4_1[0x4] = 0x3f000000
                zmm3 = zmm7
                float temp0_11[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3[0])
                zmm3[0] = zmm3[0] f* 0.5f
                temp0_11[0] = temp0_11[0] * temp0_11[0]
                zmm1_1 = zmm3
                zmm1_1[0] = zmm1_1[0] * temp0_11[0]
                zmm2_1.d = 0.5f - zmm1_1[0]
                temp0_11[0] = temp0_11[0] f* zmm2_1.d
                temp0_11[0] = temp0_11[0] + temp0_11[0]
                temp0_11[0] = temp0_11[0] * temp0_11[0]
                zmm3[0] = zmm3[0] f* temp0_11[0]
                zmm4_1[0] = 0.5f f- zmm3[0]
                temp0_11[0] = temp0_11[0] * zmm4_1[0]
                temp0_11[0] = temp0_11[0] + temp0_11[0]
                temp0_11[0] = temp0_11[0] * zmm7[0]
                temp0_11[0] = temp0_11[0] * zmm8[0]
                zmm7 = temp0_11
                zmm8 = temp0_11
            
            zmm0_2 = 0xbf800000
            zmm6[0] = zmm6[0] * zmm7[0]
            zmm9[0] = zmm9[0] * zmm8[0]
            zmm6[0] = zmm6[0] + zmm9[0]
            
            if (not(zmm6[0] < -1f))
                zmm0_2 = __minss_xmmss_memss(zmm6[0], 0x3f800000)
        else
            if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-05f)
                goto label_1426d46bd
            
            if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
                goto label_1426d46bd
            
            zmm0_2 = __minss_xmmss_memss(0x3f800000[0], 0x3f800000)
    else
        if (_mm_and_ps(zmm6, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_1426d4686
        
        if (not(_mm_and_ps(rax_8, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_1426d4686
        
        zmm0_2 = __minss_xmmss_memss(0x3f800000[0], 0x3f800000)
    
    sub_140a2e390(&var_98, u"Current angle: %.2f", fconvert.d(acosf(zmm0_2[0]) * 57.2957764f))
    int64_t rdi_4 = sx.q(arg3[1].d)
    int32_t rax_12 = (rdi_4 + 1).d
    arg3[1].d = rax_12
    
    if (rax_12 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    int64_t* rcx_18 = (rdi_4 << 4) + *arg3
    *rcx_18 = 0
    *rcx_18 = var_98
    var_98 = 0
    rcx_18[1].d = var_90_2
    result = zx.q(result_1)
    *(rcx_18 + 0xc) = result.d
    int64_t rcx_19 = var_98
    float var_90_3
    var_90_3.q = 0
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
int16_t* rcx_24 = var_88

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
