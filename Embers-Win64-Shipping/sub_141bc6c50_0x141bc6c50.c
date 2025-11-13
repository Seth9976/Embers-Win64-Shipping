// 函数: sub_141bc6c50
// 地址: 0x141bc6c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
float zmm6[0x4]
float var_48[0x4] = zmm6
*(arg2 + 0x64) = 0
*(arg2 + 0x6c) = 0
*(arg2 + 0x74) = 0
*(arg2 + 0x7c) = 0
*(arg2 + 0x84) = 0
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
memset(arg2, 0, 0x88)
*(arg2 + 8) = 0x3f800000
*(arg2 + 0x88) = data_143dbb1f0.d.d
*(arg2 + 0x8c) = data_143dbb1f0:4.d[0]
arg2[9].q = 0
sub_140d947e0(arg2 + 0x98)
*(arg2 + 0x1f8) = 0
*(arg2 + 0x1fc) = data_143dbb1f8.q
*(arg2 + 0x204) = data_143dbb200
*(arg2 + 0x208) = data_143dbb1f8.q
arg2[0x21].d = data_143dbb200
char rax_4 = arg1[0x44].b
void* i_1 = nullptr
int32_t var_2a8 = 0
uint64_t var_2f8
int64_t var_2e8
float var_2e0
float var_2d8
int64_t var_2c8
int64_t var_2c0
uint128_t zmm0
char var_318_1
void* var_310_1
int128_t* var_308_1
void var_258
float rax_17
void* rcx_11
int64_t* r8_3
void* r9_3
float zmm2[0x4]
float zmm5_1[0x4]

if (rax_4 == 0)
    zmm2 = data_142d4cc00
    zmm5_1 = *(arg1 + 0x1c0)
    zmm8 = *(arg1 + 0x1d0)
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_27[0x4] = _mm_mul_ps(temp0_24, temp0_26)
    var_2c8 = 0
    float temp0_28[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, temp0_28)
    var_2c0 = 0
    float temp0_30[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
    float var_2d0_3 = temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
    float temp0_32[0x4] = _mm_sub_ps(temp0_27, zmm0)
    float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
    zmm0 = _mm_add_ps(_mm_mul_ps(temp0_33, temp0_25), zmm2)
    float temp0_41[0x4] = _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd2), temp0_26), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc9), temp0_28)), 
        zmm0)
    float var_2f0_2 = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa).d
    var_2e8 = (_mm_unpacklo_ps(temp0_41, _mm_shuffle_ps(temp0_41, temp0_41, 0x55)[0].q)).q
    var_2e0 = var_2f0_2
    sub_141bafd30(arg1, &var_2c8)
    sub_141b7af80(&var_258, &data_143f3a6a0)
    sub_141eb8d30(&var_258, &var_2c8)
    *(arg2 + 0x1fc) = (_mm_unpacklo_ps(zmm8, temp0_31[0].q)).q
    *(arg2 + 0x204) = var_2d0_3
    zmm2 = *(arg1 + 0x21c)
    int64_t zmm1_1 = zmm2[0].q
    zmm0.d = zmm2.d f* var_2e0
    zmm2[0] = zmm2[0] f* var_2e8.d
    zmm1_1.d = zmm1_1.d f* var_2e8:4.d
    zmm0.d = zmm0.d f+ temp0_30[0]
    zmm2[0] = zmm2[0] + zmm8[0]
    zmm1_1.d = zmm1_1.d f+ temp0_31[0]
    rax_17 = zmm0.d
    zmm0 = _mm_unpacklo_ps(zmm2, zmm1_1)
label_141bc722a:
    *(arg2 + 0x208) = zmm0.q
    arg2[0x21].d = rax_17
    rcx_11 = arg1[0x15]
    char r15_2 = arg1[0x43].b
    
    if (rcx_11 == 0)
        rcx_11 = sub_141ee69e0(arg1)
    
    r8_3 = arg2 + 0x1fc
    var_308_1 = &data_143f3a660
    r9_3 = arg2 + 0x208
    var_310_1 = &var_258
    var_318_1 = r15_2
label_141bc7274:
    sub_141ec6850(rcx_11, &i_1, r8_3, r9_3, var_318_1, var_310_1, var_308_1)
label_141bc7280:
    int64_t var_1f8
    
    if (var_1f8 != 0)
        sub_140a74f90(var_1f8)
    
    int64_t var_218
    
    if (var_218 != 0)
        sub_140a74f90(var_218)
    
    int64_t rcx_19 = var_2c8
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
else
    if (rax_4 u<= 2)
        var_2c8 = 0
        var_2c0 = 0
        sub_141bafd30(arg1, &var_2c8)
        sub_141b7af80(&var_258, &data_143f3a6a0)
        sub_141eb8d30(&var_258, &var_2c8)
        void* rax_9 = arg1[0x15]
        
        if (rax_9 == 0)
            rax_9 = sub_141ee69e0(arg1)
        
        void* rax_10 = sub_142436900(rax_9)
        void* rax_11 = sub_14226dd50(rax_10)
        
        if (rax_11 == 0)
            goto label_141bc7280
        
        int64_t* rcx_8 = *(rax_11 + 0x70)
        
        if (rcx_8 == 0)
            goto label_141bc7280
        
        char rax_12 = arg1[0x44].b
        float var_2f0
        float zmm1[0x4]
        
        if (rax_12 == 1)
            if ((*(*rcx_8 + 0x2d8))(rcx_8, &var_2d8) == 0)
                goto label_141bc7280
            
            if (sub_142022d00(rax_10, &var_2d8, &var_2f8, &var_2e8) != 1)
                goto label_141bc7280
            
            *(arg2 + 0x1fc) = var_2f8
            zmm0 = var_2f8.d
            *(arg2 + 0x204) = var_2f0
            zmm1 = *(arg1 + 0x21c)
            float zmm2_1 = zmm1[0] * var_2e0
            int64_t zmm3_1
            zmm3_1.d = zmm1[0].q.d f* var_2e8:4.d
            zmm1[0] = zmm1[0] f* var_2e8.d
            zmm3_1.d = zmm3_1.d f+ var_2f8:4.d
            zmm0.d = zmm0.d f+ zmm1[0]
            rax_17 = zmm2_1 + var_2f0
            zmm0 = _mm_unpacklo_ps(zmm0, zmm3_1)
            goto label_141bc722a
        
        if (rax_12 != 2)
            goto label_141bc7280
        
        float var_2a0
        sub_14202bf60(rcx_8, &var_2a0)
        int32_t var_29c
        zmm2 = var_29c
        float zmm0_1 = var_2a0
        zmm2[0] = zmm2[0] * 0.5f
        float var_2d4_1 = zmm2[0]
        var_2d8 = zmm0_1 * 0.5f
        char rax_18
        int128_t zmm9_1
        rax_18, zmm9_1 = sub_142022d00(rax_10, &var_2d8, &var_2f8, &var_2e8)
        
        if (rax_18 != 1)
            goto label_141bc7280
        
        uint128_t zmm5_2 = var_2f8.d
        *(arg2 + 0x1fc) = var_2f8
        *(arg2 + 0x204) = var_2f0
        zmm1 = *(arg1 + 0x21c)
        int128_t var_78_1 = zmm9_1
        int64_t zmm2_2
        zmm2_2.d = zmm1[0].q.d f* var_2e8:4.d
        float zmm3_2 = zmm1[0]
        zmm1[0] = zmm1[0] f* var_2e8.d
        zmm2_2.d = zmm2_2.d f+ var_2f8:4.d
        zmm0.d = zmm5_2.d f+ zmm1[0]
        *(arg2 + 0x208) = (_mm_unpacklo_ps(zmm0, zmm2_2)).q
        arg2[0x21].d = zmm3_2 * var_2e0 + var_2f0
        zmm1 = *(arg1 + 0x21c)
        rcx_11 = arg1[0x15]
        zmm2_2.d = zmm1[0].q.d f* var_2e0
        char rdi_1 = arg1[0x43].b
        zmm0.d = zmm1.d f* var_2e8:4.d
        zmm1[0] = zmm1[0] f* var_2e8.d
        zmm2_2.d = zmm2_2.d f+ var_2f0
        zmm0.d = zmm0.d f+ var_2f8:4.d
        zmm1[0] = zmm1[0] f+ zmm5_2.d
        int32_t var_2d0_2 = zmm2_2.d
        int32_t var_2d4_2 = zmm0.d
        var_2d8 = zmm1[0]
        
        if (rcx_11 == 0)
            rcx_11 = sub_141ee69e0(arg1)
        
        var_308_1 = &data_143f3a660
        r9_3 = &var_2d8
        var_310_1 = &var_258
        r8_3 = &var_2f8
        var_318_1 = rdi_1
        goto label_141bc7274
    
    if (rax_4 == 3)
        zmm5_1 = *(arg1 + 0x1c0)
        zmm6 = data_142d4cc00
        float temp0_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_5[0x4] = _mm_mul_ps(temp0_3, temp0_2)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_8[0x4] = _mm_sub_ps(temp0_5, _mm_mul_ps(zmm0, temp0_6))
        float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
        zmm0 = _mm_mul_ps(temp0_9, temp0_1)
        float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xd2), temp0_2)
        float temp0_13[0x4] = _mm_add_ps(zmm6, zmm0)
        float temp0_17[0x4] = _mm_add_ps(
            _mm_sub_ps(temp0_12, _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xc9), temp0_6)), 
            temp0_13)
        float var_2f0_1 = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa).d
        var_2e8 = (_mm_unpacklo_ps(temp0_17, _mm_shuffle_ps(temp0_17, temp0_17, 0x55)[0].q)).q
        var_2e0 = var_2f0_1
        *arg2 = *(arg1 + 0x2b0)
        arg2[1] = *(arg1 + 0x2c0)
        arg2[2] = *(arg1 + 0x2d0)
        arg2[3] = *(arg1 + 0x2e0)
        arg2[4] = *(arg1 + 0x2f0)
        arg2[5] = *(arg1 + 0x300)
        arg2[6] = *(arg1 + 0x310)
        arg2[7] = *(arg1 + 0x320)
        arg2[8].q = arg1[0x66]
        *(arg2 + 0x1f8) = arg1[0x56].b & 1
        *(arg2 + 0x1fc) = arg1[0x5e]
        *(arg2 + 0x204) = arg1[0x5f].d
        *(arg2 + 0x208) = *(arg1 + 0x2fc)
        arg2[0x21].d = *(arg1 + 0x304)

if (arg1[0x44].b != 3)
    void* i = i_1
    
    for (void* r15_4 = sx.q(var_2a8) * 0x88 + i; i != r15_4; i += 0x88)
        int64_t* rax_26 = sub_140d3c6e0(i + 0x70)
        
        if (rax_26 == 0)
            break
        
        void* rax_27 = sub_141c20480()
        void* rdx_9 = rax_26[2]
        int64_t rax_28 = sx.q(*(rax_27 + 0x38))
        
        if (rax_28.d s> *(rdx_9 + 0x38))
            break
        
        if (*(*(rdx_9 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
            break
        
        if ((*(*rax_26 + 0x448))(rax_26, rdx_9) != 0)
            *(arg2 + 0x1f8) = 1
            *arg2 = *i
            arg2[1] = *(i + 0x10)
            arg2[2] = *(i + 0x20)
            arg2[3] = *(i + 0x30)
            arg2[4] = *(i + 0x40)
            arg2[5] = *(i + 0x50)
            arg2[6] = *(i + 0x60)
            arg2[7] = *(i + 0x70)
            arg2[8].q = *(i + 0x80)
            break

if (*(arg2 + 0x1f8) != 0)
    int64_t* rax_32 = sub_140d3c6e0(&arg2[7])
    int64_t* rdi_2 = rax_32
    void* rax_33
    int64_t rax_34
    void* rdx_10
    
    if (rax_32 != 0)
        rax_33 = sub_141c20480()
        rdx_10 = rdi_2[2]
        rax_34 = sx.q(*(rax_33 + 0x38))
    
    if (rax_32 == 0 || rax_34.d s> *(rdx_10 + 0x38)
            || *(*(rdx_10 + 0x30) + (rax_34 << 3)) != rax_33 + 0x30)
        rdi_2 = nullptr
    
    arg2[9].q = rdi_2
    
    if (rdi_2 != 0)
        if (rdi_2[0xa4].b != 1)
            zmm0 = zx.o(*(arg2 + 0x1c))
            int32_t var_2f0_5 = *(arg2 + 0x24)
            int64_t rax_40 = *rdi_2
            var_2f8 = zmm0.q
            (*(rax_40 + 0x8c0))(zmm0, &var_2f8, arg2 + 0x88)
        else
            var_2f8 = var_2e8
            float var_2f0_4 = var_2e0
            var_2d8.q = *(arg2 + 0x1c)
            int32_t var_2d0_4 = *(arg2 + 0x24)
            sub_141babb60(rdi_2, &var_2c8, &var_2d8, &var_2f8)
            *(arg2 + 0x1c) = var_2c8
            *(arg2 + 0x88) = var_2c0:4.d.d
            int32_t var_2b8
            *(arg2 + 0x8c) = var_2b8
            *(arg2 + 0x24) = var_2c0.d
        
        void var_1e8
        sub_140d963a0(arg2 + 0x98, (*(*arg1 + 0x558))(arg1, &var_1e8, arg2))
        void var_98
        sub_140596d80(&var_98)
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t temp1_1 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_9 = *var_a0
                    (*(r8_9 + 8))(var_a0, 1, r8_9)
        
        void var_1e0
        sub_140d94d20(&var_1e0)

void* i_2 = i_1

if (i_2 != 0)
    sub_140a74f90(i_2)

__security_check_cookie(rax_1 ^ &var_338)
return arg2
