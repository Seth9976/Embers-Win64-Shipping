// 函数: sub_14154d350
// 地址: 0x14154d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void* const rdi = arg3
char result = 0
bool cond:0 = *(arg3 + 8) != 3
int64_t* var_268 = arg2

if (cond:0)
    rdi = nullptr

if (rdi != 0)
    int64_t rcx = sx.q(arg1[1].d)
    void* rax_4 = *arg1
    float zmm6[0x4] = data_14399f668
    int64_t r8 = rcx * 3
    int64_t rdx = *(rax_4 + 0x28)
    int128_t* rcx_2 = (rcx << 4) + *(rax_4 + 0x68)
    int64_t* var_260 = arg1
    float var_138[0x4] = *rcx_2
    float zmm0[0x4] = *(rdx + (r8 << 2) + 8)
    float zmm3[0x4] = *(rdx + (r8 << 2))
    float temp0_1[0x4] = _mm_unpacklo_ps(*(rdx + (r8 << 2) + 4), 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm0 = data_14399f670
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_4[0].q)
    float var_118_1[0x4] = temp0_6
    float var_128_1[0x4] = temp0_3
    float (* rax_5)[0x4] = sub_141746340(&var_260)
    float var_248[0x4] = *sub_141749180(&var_260)
    int96_t var_238_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_5, (*rax_5)[2]), 
        _mm_unpacklo_ps((*rax_5)[1], 0)[0].q)[0].12
    float var_228_1[0x4] = temp0_6
    float var_d8[0x3][0x4]
    float (* rax_7)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_d8, &var_248)
    zmm6_1.o = *rax_7
    zmm7_1.o = rax_7[1]
    zmm8_1.o = rax_7[2]
    var_260 = var_268
    int128_t* rax_9 = sub_141746340(&var_260)
    float var_108[0x4] = *sub_141749180(&var_260)
    float zmm0_1[0x4] = *(rax_9 + 4)
    float temp0_10[0x4] = _mm_unpacklo_ps(*rax_9, *(rax_9 + 8))
    float temp0_11[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float var_f8_1[0x4] = _mm_unpacklo_ps(temp0_10, temp0_11[0].q)
    float var_e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_a8[0x3][0x4]
    float (* rax_11)[0x4]
    uint32_t zmm6_2[0x4]
    int128_t zmm7_2
    int128_t zmm8_2
    rax_11, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_a8, &var_108)
    float zmm1_2[0x4] = *rax_11
    uint32_t zmm2_2[0x4] = rax_11[1]
    void* const r9 = arg4
    int128_t zmm3_2 = rax_11[2]
    result = *(arg4 + 8)
    
    if (result != 0x8b)
        r9 = nullptr
    
    if (r9 != 0)
    label_14154d589:
        char rcx_9 = *(r9 + 8)
        int64_t* var_1b0_1 = var_268
        void* const rax_13 = r9
        int128_t var_188_1 = data_142fc5a80
        
        if (rcx_9 != 0x8b)
            rax_13 = nullptr
        
        int128_t var_208_1 = zmm7_2
        zmm7_2 = arg7
        uint32_t var_218[0x4] = zmm6_2
        zmm6_2 = arg9
        var_268.d = 0x3f800000
        int64_t var_194_1 = 0
        char var_198_1 = 1
        int32_t var_1a0_1 = 0
        int64_t var_1a8_1 = 0
        int32_t var_140_1 = 0
        int64_t* var_1b8_1 = arg1
        int32_t var_16c_1 = 0xb
        void* var_160_1 = arg4
        void* var_168_1 = arg3
        int128_t var_1c8_1 = zmm3_2
        uint32_t var_1d8_1[0x4] = zmm2_2
        float var_1e8_1[0x4] = zmm1_2
        int128_t var_1f8_1 = zmm8_2
        int32_t var_148_1 = 2
        int64_t var_150_1 = 0
        int32_t var_158_1 = 0x80000001
        int32_t var_170_1 = 0
        int64_t var_178_1 = 0
        int32_t var_18c_1 = 0
        
        if (rax_13 == 0)
            if (rcx_9 != 0xb)
                r9 = nullptr
            
            if (r9 != 0)
                int64_t** var_278_2 = &var_268
                int32_t var_280_2 = zmm7_2.d
                zmm6_2 = sub_1415e85b0(&var_248, rdi, &var_138, r9, arg6, arg8, zmm6_2[0])
                goto label_14154d696
        else
            int64_t** var_278_1 = &var_268
            int32_t var_280_1 = zmm7_2.d
            zmm6_2 = sub_1415e7390(&var_248, rdi, &var_138, rax_13, arg6, arg8, zmm6_2[0])
        label_14154d696:
            zmm1_2 = var_238_1:8.d
            
            if (not(zmm1_2[0] >= 3.40282347e+38f))
                int64_t var_194_2 = var_248[0].q
                float var_18c_2 = var_248[2]
                var_188_1.q = var_248[3].q
                var_188_1:0xc.d = zmm1_2[0]
                var_188_1:8.d = var_238_1:4.d
        
        result =
            sub_141759ad0(arg10, sub_1416f43d0(arg1, var_268.d, zmm6_2, arg8, &var_218), &var_218)
    else
        r9 = arg4
        
        if (result != 0xb)
            r9 = nullptr
        
        if (r9 != 0)
            goto label_14154d589

__security_check_cookie(rax_1 ^ &var_2b8)
return result
