// 函数: sub_141246cf0
// 地址: 0x141246cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rax_2 = arg4[3]
int64_t var_178 = arg2
int32_t rbx_2 = rax_2 * rax_2 * rax_2
float var_108[0x4]
memset(&var_108, 0, 0x90)
int64_t var_158
int64_t* var_190 = &var_158
int32_t var_168[0x4]
var_168[0] = 0x3f800000
float (* var_198)[0x4] = &var_108
var_158 = 0
int32_t var_150 = 0x3f800000
float zmm7_1 = sub_14122bf50(arg1, arg2, arg4, &var_168, var_198, var_190)
char rax_3 = *(arg1 + 0xc)
uint32_t rax_4

if (rax_3 != 4)
    rax_4 = zx.d(rax_3)
else
    rax_4 = data_1439c7a08

float zmm2_1[0x4]

if (rax_4 s>= 3 && data_1439c7a15 != 0 && *(*(arg4 + 0x30) + 0x181) == 0)
    TEB* gsbase
    void* r12_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143e83e60 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143e83e60)
        
        if (data_143e83e60 == 0xffffffff)
            atexit(sub_142cd7790)
            _Init_thread_footer(&data_143e83e60)
    
    int32_t rcx_3 = data_143e83e5c
    int32_t r14_1 = 0
    
    if (rbx_2 s> rcx_3)
        data_143e83e58 = 0
        
        if (rcx_3 != rbx_2)
            sub_1405dadb0(&data_143e83e50, rbx_2)
            rcx_3 = data_143e83e5c
            r14_1 = data_143e83e58
    
    int32_t rax_8 = rbx_2 + r14_1
    data_143e83e58 = rax_8
    
    if (rax_8 s> rcx_3)
        sub_1406105e0(&data_143e83e50)
    
    memset(data_143e83e50 + (sx.q(r14_1) << 2), 0, sx.q(rbx_2) << 2)
    
    if (data_143e83e78 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143e83e78)
        
        if (data_143e83e78 == 0xffffffff)
            atexit(sub_142cd7770)
            _Init_thread_footer(&data_143e83e78)
    
    int32_t rcx_6 = data_143e83e74
    int32_t r14_2 = 0
    
    if (rbx_2 s> rcx_6)
        data_143e83e70 = 0
        
        if (rbx_2 != rcx_6)
            sub_1405a5220(&data_143e83e68, rbx_2)
            rcx_6 = data_143e83e74
            r14_2 = data_143e83e70
    
    int32_t rax_12 = rbx_2 + r14_2
    data_143e83e70 = rax_12
    
    if (rax_12 s> rcx_6)
        sub_1405c4f50(&data_143e83e68)
    
    memset(sx.q(r14_2) * 0x30 + data_143e83e68, 0, sx.q(rbx_2) * 0x30)
    sub_14122b980(arg1, var_178, arg4, &data_143e83e50, &data_143e83e68)
    
    if (data_143e83e90 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143e83e90)
        
        if (data_143e83e90 == 0xffffffff)
            atexit(sub_142cd8a60)
            _Init_thread_footer(&data_143e83e90)
    
    if (data_143e83ea8 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143e83ea8)
        
        if (data_143e83ea8 == 0xffffffff)
            atexit(sub_142cd8a80)
            _Init_thread_footer(&data_143e83ea8)
    
    if (data_143e83ec0 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143e83ec0)
        
        if (data_143e83ec0 == 0xffffffff)
            atexit(sub_142cd8aa0)
            _Init_thread_footer(&data_143e83ec0)
    
    bool cond:1_1 = rbx_2 s<= data_143e83e8c
    data_143e83e88 = 0
    
    if (not(cond:1_1))
        sub_1405c5570(&data_143e83e80, rbx_2)
    
    bool cond:2_1 = rbx_2 s<= data_143e83ea4
    data_143e83ea0 = 0
    
    if (not(cond:2_1))
        sub_1405c5570(&data_143e83e98, rbx_2)
    
    bool cond:3_1 = rbx_2 s<= data_143e83ebc
    data_143e83eb8 = 0
    
    if (not(cond:3_1))
        sub_1405c5570(&data_143e83eb0, rbx_2)
    
    int32_t rax_18 = rbx_2 + data_143e83e88
    bool cond:4_1 = rax_18 s<= data_143e83e8c
    data_143e83e88 = rax_18
    
    if (not(cond:4_1))
        sub_1405a4d70(&data_143e83e80)
    
    int32_t rax_19 = rbx_2 + data_143e83ea0
    bool cond:5_1 = rax_19 s<= data_143e83ea4
    data_143e83ea0 = rax_19
    
    if (not(cond:5_1))
        sub_1405a4d70(&data_143e83e98)
    
    int32_t rax_20 = rbx_2 + data_143e83eb8
    bool cond:6_1 = rax_20 s<= data_143e83ebc
    data_143e83eb8 = rax_20
    
    if (not(cond:6_1))
        sub_1405a4d70(&data_143e83eb0)
    
    int32_t rbx_3 = data_1439c8784
    zmm7_1 = sub_141224d40(arg1, arg3, arg4, &data_143e83e50, &data_143e83e68, &data_143e83e80, 
        &data_143e83e98, &data_143e83eb0)
    int32_t r9_1 = arg4[3]
    int64_t* rcx_12 = data_143f0f180
    void* r8_6 = *(arg1 + 0x18)
    int32_t var_148 = *arg4
    int32_t var_144_1 = arg4[1]
    int32_t var_130_1 = r9_1
    int32_t var_12c_1 = r9_1
    int32_t var_128_1 = r9_1
    int32_t var_140_1 = arg4[2]
    int64_t var_13c_1 = 0
    int32_t var_134_1 = 0
    int64_t* var_188_1
    var_188_1.d = r9_1 * r9_1 * rbx_3
    int64_t* var_190_1
    var_190_1.d = r9_1 * rbx_3
    (*(*rcx_12 + 0x548))(rcx_12, &data_143f02b98, *(r8_6 + 0x10), 0, &var_148, var_190_1, 
        var_188_1, data_143e83e80)
    int32_t r9_3 = arg4[3]
    int64_t* rcx_13 = data_143f0f180
    var_188_1.d = r9_3 * r9_3 * rbx_3
    var_190_1.d = r9_3 * rbx_3
    (*(*rcx_13 + 0x548))(rcx_13, &data_143f02b98, *(*(arg1 + 0x20) + 0x10), 0, &var_148, var_190_1, 
        var_188_1, data_143e83e98)
    int32_t r10_3 = arg4[3]
    int64_t* rcx_14 = data_143f0f180
    var_188_1.d = r10_3 * r10_3 * rbx_3
    var_190_1.d = r10_3 * rbx_3
    (*(*rcx_14 + 0x548))(rcx_14, &data_143f02b98, *(*(arg1 + 0x28) + 0x10), 0, &var_148, var_190_1, 
        var_188_1, data_143e83eb0)
else if (data_143e813b8 != 0 && arg3 != 0)
    int32_t rax_27 = arg4[6]
    zmm2_1 = 0x41200000
    var_178 = *(arg4 + 0x10)
    float var_120[0x4] = data_142d5beb0
    int32_t var_170_1 = rax_27
    
    if (not(zmm7_1 f> *(arg3 + 0x2bc)))
        zmm2_1[0] = 10f / __minss_xmmss_memss((*(arg3 + 0x294))[0], *(arg3 + 0x280))[0]
    
    var_198.d = 0xffffffff
    zmm7_1 = sub_141e932a0(arg3 + 0x18e0, &var_178, zmm2_1, &var_120, var_198.d)

float zmm3[0x4] = arg4[7]
float zmm0_1[0x4] = arg4[9]
zmm2_1 = arg4[8]
void* rcx_16 = *(arg4 + 0x30)
float zmm5[0x4] = var_158:4.d
float zmm6[0x4] = var_158.d
float zmm4[0x4] = var_150
zmm0_1[0] = zmm0_1[0] * 0.5f
zmm2_1[0] = zmm2_1[0] * 0.5f
zmm0_1[0] = zmm0_1[0] f+ arg4[6]
zmm3[0] = zmm3[0] * 0.5f
zmm2_1[0] = zmm2_1[0] f+ arg4[5]
zmm3[0] = zmm3[0] f+ arg4[4]
float var_170_2 = zmm0_1[0]
zmm0_1 = zmm3
int32_t var_88
zmm3 = var_88
float temp0_2[0x4] = _mm_unpacklo_ps(zmm0_1, zmm2_1[0].q)
zmm2_1 = data_142d3f630
*(rcx_16 + 0x40) = temp0_2.q
zmm0_1 = var_108
float var_d8[0x4]
float temp0_3[0x4] = _mm_mul_ps(var_d8, zmm2_1)
*(rcx_16 + 0x48) = var_170_2
void* rax_29 = *(arg4 + 0x30)
float temp0_4[0x4] = _mm_mul_ps(zmm0_1, zmm2_1)
zmm3[0] = zmm3[0] * zmm2_1[0]
*(rax_29 + 0x50) = temp0_4
var_178.o = temp0_4
var_178.o = temp0_3
*(*(arg4 + 0x30) + 0x60) = temp0_3
void* rax_31 = *(arg4 + 0x30)
float var_a8[0x4]
float temp0_5[0x4] = _mm_mul_ps(var_a8, zmm2_1)
*(rax_31 + 0x70) = temp0_5
void* rax_32 = *(arg4 + 0x30)
var_178.o = temp0_5
float var_f8[0x4]
float temp0_6[0x4] = _mm_mul_ps(var_f8, zmm2_1)
*(rax_32 + 0x80) = temp0_6
void* rax_33 = *(arg4 + 0x30)
var_178.o = temp0_6
float var_c8[0x4]
float temp0_7[0x4] = _mm_mul_ps(var_c8, zmm2_1)
*(rax_33 + 0x90) = temp0_7
void* rax_34 = *(arg4 + 0x30)
var_178.o = temp0_7
float var_98[0x4]
float temp0_8[0x4] = _mm_mul_ps(var_98, zmm2_1)
*(rax_34 + 0xa0) = temp0_8
void* rax_35 = *(arg4 + 0x30)
var_178.o = temp0_8
int32_t var_e8
float zmm1[0x4] = var_e8
int32_t var_b8
zmm0_1 = var_b8
zmm0_1[0] = zmm0_1[0] * zmm2_1[0]
int32_t var_16c = 0
zmm1[0] = zmm1[0] * zmm2_1[0]
zmm2_1 = var_178.o
zmm2_1[0] = zmm1[0]
float temp0_9[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
temp0_9[0] = zmm0_1[0]
zmm0_1 = var_168[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm3[0]
*(rax_35 + 0xb0) = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
void* rax_36 = *(arg4 + 0x30)
zmm5[0] = zmm5[0] * zmm5[0]
*(rax_36 + 0xc0) = zmm0_1[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm6[0]
void* result = *(arg4 + 0x30)
zmm4[0] = zmm4[0] * zmm4[0]
zmm5[0] = zmm5[0] + zmm4[0]
float temp0_12[0x4] = _mm_sqrt_ss(0, zmm5[0])
zmm7_1 = zmm7_1 / __maxss_xmmss_memss(temp0_12[0], 0x38d1b717)[0]
zmm6[0] = zmm6[0] * zmm7_1
zmm5[0] = zmm5[0] * zmm7_1
float temp0_14[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
zmm4[0] = zmm4[0] * zmm7_1
temp0_14[0] = zmm5[0]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc6)
temp0_15[0] = zmm4[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
temp0_16[0] = temp0_12[0]
*(result + 0xd0) = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
void* rcx_17 = *(arg4 + 0x30)

if (*(rcx_17 + 0x180) == 0)
    *(rcx_17 + 0xe0) = *(rcx_17 + 0x40)
    *(rcx_17 + 0xe8) = *(rcx_17 + 0x48)
    void* rax_38 = *(arg4 + 0x30)
    *(rax_38 + 0xf0) = *(rax_38 + 0x50)
    void* rax_39 = *(arg4 + 0x30)
    *(rax_39 + 0x120) = *(rax_39 + 0x80)
    void* rax_40 = *(arg4 + 0x30)
    *(rax_40 + 0x100) = *(rax_40 + 0x60)
    void* rax_41 = *(arg4 + 0x30)
    *(rax_41 + 0x130) = *(rax_41 + 0x90)
    void* rax_42 = *(arg4 + 0x30)
    *(rax_42 + 0x110) = *(rax_42 + 0x70)
    void* rax_43 = *(arg4 + 0x30)
    *(rax_43 + 0x140) = *(rax_43 + 0xa0)
    void* rax_44 = *(arg4 + 0x30)
    *(rax_44 + 0x150) = *(rax_44 + 0xb0)
    void* rcx_18 = *(arg4 + 0x30)
    *(rcx_18 + 0x160) = *(rcx_18 + 0xc0)
    void* rax_46 = *(arg4 + 0x30)
    *(rax_46 + 0x170) = *(rax_46 + 0xd0)
    result = *(arg4 + 0x30)
    *(result + 0x180) = 1

arg4[0xa].b = 1
__security_check_cookie(rax_1 ^ &var_1b8)
return result
