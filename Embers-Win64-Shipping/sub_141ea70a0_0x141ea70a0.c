// 函数: sub_141ea70a0
// 地址: 0x141ea70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b != 1)
    return 

int64_t* rcx = arg1[0x50]
int64_t rax

if (rcx != 0)
    rax = (*(*rcx + 0x968))(rcx)

if (rcx != 0 && rax.b != 0)
    return 

void* rax_2 = arg1[0x51]
*(rax_2 + 0x387) |= 0x40
char rsi_1 = *(arg1 + 0x329)
*(arg1 + 0x329) = 1
int64_t* rcx_1 = arg1[0x59]
int64_t rbx

if (arg1[0x53] != rcx_1 || arg1[0x54] != arg1[0x5a])
    rbx.b = 1
    (*(*arg1 + 0x758))(arg1, rcx_1, arg1[0x5a], 1)
    rcx_1 = arg1[0x59]
else
    rbx.b = 0

float zmm1[0x4] = *(arg1 + 0x2d8)
*(arg1 + 0x298) = *(arg1 + 0x2c8)
float zmm0[0x4] = *(arg1 + 0x2e8)
*(arg1 + 0x2a8) = zmm1
*(arg1 + 0x2b8) = zmm0

if (rcx_1 != 0 && *(rcx_1 + 0x14f) == 2)
    void* rdx_2 = arg1[0x26]
    int64_t var_198
    float var_190_1
    
    if (rdx_2 == 0)
        float rax_4 = data_143dbb200
        var_198 = data_143dbb1f8.q
        var_190_1 = rax_4
    else
        zmm1 = *(rdx_2 + 0x1d0)
        var_198.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_190_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_198:4.d = temp0_1[0]
    
    int64_t var_178 = var_198
    
    if (rdx_2 == 0)
        zmm0 = data_142d3f660
    else
        zmm0 = *(rdx_2 + 0x1c0)
    
    void* r8_2 = arg1[0x51]
    int64_t rdx_3 = arg1[0x5a]
    float var_168[0x4] = zmm0
    var_168 = var_168
    sub_141ea3bd0(rcx_1, rdx_3, r8_2 + 0x180, r8_2 + 0x170)
    bool cond:1_1 = *(arg1 + 0x2f1) == 0
    void* rcx_3 = arg1[0x51]
    float zmm2_1[0x4] = arg1[0x5b].d
    uint128_t zmm1_1
    zmm1_1.d = arg1[0x5c].d.d f+ *(rcx_3 + 0x188)
    uint128_t zmm3
    zmm3.d = (*(arg1 + 0x2dc)).d f+ *(rcx_3 + 0x184)
    zmm2_1[0] = zmm2_1[0] f+ *(rcx_3 + 0x180)
    int32_t var_190_2 = zmm1_1.d
    var_198:4.d = zmm3.d
    var_198.d = zmm2_1[0]
    void* rax_6
    
    if (not(cond:1_1))
        rax_6 = arg1[0x59]
    
    uint64_t var_188
    float var_108[0x4]
    int32_t rax_11
    
    if (cond:1_1 || rax_6 == 0 || *(rax_6 + 0x14f) != 2)
        rax_11 = *(arg1 + 0x2ec)
        var_188 = *(arg1 + 0x2e4)
        int32_t var_180_3 = rax_11
    else
        uint128_t zmm0_1 = *(rcx_3 + 0x170)
        zmm2_1 = *(rcx_3 + 0x174)
        zmm1_1 = *(rcx_3 + 0x178)
        uint128_t zmm6
        zmm6.d = zmm1_1.d f+ zmm1_1.d
        zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
        zmm3.d = zmm6.d f* zmm1_1.d
        zmm2_1[0] = zmm2_1[0] f* zmm0_1.d
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        uint128_t zmm14
        zmm14.d = zmm0_1.d f+ zmm0_1.d
        uint128_t zmm5_1
        zmm5_1.d = zmm6.d f* zmm2_1[0]
        uint128_t zmm15
        zmm15.d = zmm6.d f* zmm0_1.d
        uint128_t zmm9
        zmm9.d = zmm14.d f* zmm0_1.d
        zmm0_1 = *(rcx_3 + 0x17c)
        zmm6.d = zmm6.d f* zmm0_1.d
        int32_t var_14c_1 = 0
        zmm14.d = zmm14.d f* zmm0_1.d
        int32_t var_13c_1 = 0
        zmm2_1[0] = zmm2_1[0] f* zmm0_1.d
        zmm2_1[0] = zmm2_1[0] f- zmm6.d
        int32_t var_12c_1 = 0
        int32_t var_11c_1 = 0x3f800000
        zmm6.d = zmm6.d f+ zmm2_1[0]
        zmm0_1.d = zmm3.d f+ zmm2_1[0]
        zmm2_1[0] = zmm2_1[0] f+ zmm9.d
        zmm3.d = zmm3.d f+ zmm9.d
        zmm2_1[0] = zmm2_1[0] f+ zmm15.d
        int32_t arg_8 = zmm6.d
        uint128_t zmm12
        zmm12.d = zmm5_1.d f- zmm14.d
        int128_t zmm11
        zmm11.d = 1f f- zmm0_1.d
        zmm1_1.d = 1f - zmm2_1[0]
        data_143dbb200
        zmm6.d = 1f f- zmm3.d
        zmm15.d = zmm15.d f- zmm2_1[0]
        zmm14.d = zmm14.d f+ zmm5_1.d
        float var_f8[0xc]
        float* rax_7
        float zmm6_1[0x4]
        int32_t zmm7_1
        int32_t zmm8_1
        rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_14077e760(&var_f8, arg1 + 0x2e4)
        float var_148[0x4]
        var_148[0] = zmm8_1
        float temp0_3[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
        float zmm0_2[0x4] = *(rax_7 + 0x20)
        temp0_3[0] = zmm6_1[0]
        float zmm9_1[0x4] = *(rax_7 + 0x10)
        float var_118[0x4] = zmm0_2
        float zmm2_2[0x4] = *rax_7
        float zmm1_2[0x4] = *(rax_7 + 0x30)
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
        temp0_4[0] = zmm14.d
        float temp0_5[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
        float var_148_1[0x4] = temp0_6
        float temp0_7[0x4] = _mm_mul_ps(temp0_5, temp0_6)
        var_108 = zmm1_2
        float var_158[0x4]
        zmm6_1 = var_158
        zmm6_1[0] = zmm11.d
        float var_138[0x4]
        var_138[0] = zmm2_1[0]
        float temp0_8[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
        temp0_9[0] = arg_8[0]
        float temp0_10[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
        temp0_10[0] = zmm12.d
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
        temp0_11[0] = zmm15.d
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
        float temp0_15[0x4] = _mm_mul_ps(temp0_8, temp0_14)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        var_158 = temp0_14
        float temp0_17[0x4] = _mm_add_ps(temp0_7, temp0_15)
        temp0_16[0] = zmm1_1.d[0]
        float var_128[0x4]
        var_128[0] = data_143dbb1f8[0]
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
        zmm0_2 = data_143dbb1fc
        float temp0_19[0x4] = _mm_mul_ps(temp0_12, temp0_18)
        float temp0_20[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
        temp0_20[0] = zmm0_2[0]
        float var_138_1[0x4] = temp0_18
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc6)
        float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_19)
        float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0), temp0_14)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
        temp0_21[0] = zmm7_1
        float temp0_26[0x4] = _mm_mul_ps(temp0_25, temp0_18)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
        float var_128_1[0x4] = temp0_27
        float temp0_29[0x4] = _mm_add_ps(temp0_22, _mm_mul_ps(temp0_13, temp0_27))
        float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0x55), temp0_6)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
        var_158 = temp0_29
        float temp0_33[0x4] = _mm_mul_ps(temp0_32, temp0_27)
        float var_148_2[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_31, temp0_24), temp0_26), temp0_33)
        zmm2_2 = var_118
        float temp0_37[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
        float temp0_39[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), temp0_27)
        float temp0_42[0x4] = _mm_mul_ps(temp0_37, temp0_14)
        float temp0_43[0x4] = _mm_mul_ps(temp0_38, temp0_6)
        float temp0_44[0x4] = _mm_mul_ps(temp0_39, temp0_18)
        float var_138_2[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_42, temp0_43), temp0_44), temp0_41)
        float zmm3_1[0x4] = var_108
        float temp0_48[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
        float temp0_49[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
        float temp0_50[0x4] = _mm_mul_ps(temp0_48, temp0_6)
        float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_14)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        float temp0_53[0x4] = _mm_add_ps(temp0_50, temp0_51)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_18)
        float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_27)
        float var_128_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_53, temp0_54), temp0_56)
        float* rax_8 = sub_140adf440(&var_158, &var_118)
        int64_t* rcx_6 = arg1[0x51]
        var_188 = *rax_8
        int32_t var_180_1 = rax_8[2]
        
        if ((*(*rcx_6 + 0x7c8))(rcx_6).b != 0)
            var_188.d = 0
            int32_t var_180_2 = 0
        
        rcx_3 = arg1[0x51]
        zmm1_1 = var_190_2
        zmm3 = var_198:4.d
        zmm2_1 = var_198.d
    
    if (rbx.b != 0 || zmm2_1[0] f!= var_178.d || zmm3.d f!= var_178:4.d || zmm1_1.d f!= var_190_1)
        rax_11.b = 0x20
    else
        rax_11.b = 0
    
    *(rcx_3 + 0x387) |= rax_11.b
    void* rax_12 = arg1[0x51]
    *(rax_12 + 0x1f1) &= 0x7f
    int64_t rbx_1 = *(arg1[0x51] + 0x140)
    float (* rax_14)[0x4] = sub_140ade170(&var_188, &var_108)
    (*(rbx_1 + 0x20))(arg1[0x51] + 0x140, &var_178, &var_168, &var_198, rax_14)
    (*(*arg1 + 0x870))(arg1, &var_178, &var_168)

*(arg1 + 0x329) = rsi_1
