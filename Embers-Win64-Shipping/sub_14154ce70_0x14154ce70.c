// 函数: sub_14154ce70
// 地址: 0x14154ce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* r14 = arg3
uint64_t result = arg6

if (*(arg3 + 8) != 3)
    r14 = nullptr

int128_t* result_1 = result

if (r14 != 0)
    result = zx.q(*(arg4 + 8))
    void* rdi_1 = arg4
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    if (result.b != 0x8b)
        rdi_1 = nullptr
    
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int64_t var_238
    float var_218[0x4]
    int96_t var_208_1
    int128_t var_1e8
    int128_t var_158_1
    float var_108[0x4]
    float var_d8[0x3][0x4]
    float var_a8[0x3][0x4]
    float zmm0[0x4]
    float zmm2[0x4]
    
    if (rdi_1 == 0)
        void* const rdi_2 = arg4
        
        if (result.b != 0xb)
            rdi_2 = nullptr
        
        if (rdi_2 != 0)
            var_238 = arg1
            float (* rax_10)[0x4] = sub_141746340(&var_238)
            var_108 = *sub_141749180(&var_238)
            zmm2 = (*rax_10)[1]
            float temp0_13[0x4] = _mm_unpacklo_ps(*rax_10, (*rax_10)[2][0].q)
            zmm0 = data_14399f670
            float var_f8_2[0x4] = _mm_unpacklo_ps(temp0_13, _mm_unpacklo_ps(zmm2, 0)[0].q)
            float var_e8_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0[0].q), 
                _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
            float (* rax_12)[0x4]
            int512_t zmm6_3
            int512_t zmm7_3
            int512_t zmm8_3
            rax_12, zmm6_3, zmm7_3, zmm8_3 = sub_140ad7d70(arg5, &var_a8, &var_108)
            var_238 = arg2
            zmm8_3.o = *rax_12
            zmm7_3.o = rax_12[1]
            zmm6_3.o = rax_12[2]
            float (* rax_13)[0x4] = sub_141746340(&var_238)
            var_218 = *sub_141749180(&var_238)
            float zmm0_4[0x4] = (*rax_13)[1]
            float temp0_19[0x4] = _mm_unpacklo_ps(*rax_13, (*rax_13)[2])
            float temp0_20[0x4] = _mm_unpacklo_ps(zmm0_4, 0)
            float zmm2_3[0x4] = data_14399f66c
            var_208_1 = _mm_unpacklo_ps(temp0_19, temp0_20[0].q)[0].12
            float var_1f8_2[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2_3, 0)[0].q)
            float (* rax_15)[0x4]
            int128_t zmm6_4
            int128_t zmm7_4
            int128_t zmm8_4
            rax_15, zmm6_4, zmm7_4, zmm8_4 = sub_140ad7d70(result_1, &var_d8, &var_218)
            int64_t var_178_2 = 0
            int32_t var_170_2 = 0
            float zmm3_4[0x4] = *rax_15
            int128_t zmm2_4 = rax_15[1]
            int128_t zmm1_5 = rax_15[2]
            int64_t var_120_2 = 0
            char var_168_2 = 1
            int64_t var_164_2 = 0
            int32_t var_15c_2 = 0
            var_158_1 = data_142fc5a80
            int64_t var_148_2 = 0
            int32_t var_140_2 = 0
            int32_t var_128_2 = 0x80000001
            int32_t var_118_2 = 1
            var_1e8 = zmm8_4
            int128_t var_1d8_2 = zmm7_4
            int128_t var_1c8_2 = zmm6_4
            float var_1b8_2[0x4] = zmm3_4
            int128_t var_1a8_2 = zmm2_4
            int128_t var_198_2 = zmm1_5
            void* var_138_2 = arg3
            void* var_130_2 = arg4
            int32_t var_13c_2 = 0xb
            int64_t var_188_2 = arg1
            int64_t var_180_2 = arg2
            zmm6 = sub_1415e4d40(&var_218, r14, arg5, rdi_2, result_1, arg7.d)
            goto label_14154d2b3
    else
        var_238 = arg1
        int128_t* rax_3 = sub_141746340(&var_238)
        var_218 = *sub_141749180(&var_238)
        zmm2 = *(rax_3 + 4)
        float temp0_1[0x4] = _mm_unpacklo_ps(*rax_3, (*(rax_3 + 8))[0].q)
        zmm0 = data_14399f670
        var_208_1 = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)[0].12
        float var_1f8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0[0].q), 
            _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
        float (* rax_5)[0x4]
        int512_t zmm6_1
        int512_t zmm7_1
        int512_t zmm8_1
        rax_5, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_d8, &var_218)
        var_238 = arg2
        zmm8_1.o = *rax_5
        zmm7_1.o = rax_5[1]
        zmm6_1.o = rax_5[2]
        int128_t* rax_6 = sub_141746340(&var_238)
        var_108 = *sub_141749180(&var_238)
        float zmm0_1[0x4] = *(rax_6 + 4)
        float (* result_2)[0x4] = result_1
        float temp0_7[0x4] = _mm_unpacklo_ps(*rax_6, *(rax_6 + 8))
        float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
        float zmm2_1[0x4] = data_14399f66c
        float var_f8_1[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
        float var_e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
            _mm_unpacklo_ps(zmm2_1, 0)[0].q)
        float (* rax_8)[0x4]
        int128_t zmm6_2
        int128_t zmm7_2
        int128_t zmm8_2
        rax_8, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(result_2, &var_a8, &var_108)
        int64_t var_178_1 = 0
        int32_t var_170_1 = 0
        float zmm3_2[0x4] = *rax_8
        int128_t zmm2_2 = rax_8[1]
        int128_t zmm1_2 = rax_8[2]
        int64_t var_120_1 = 0
        char var_168_1 = 1
        int64_t var_164_1 = 0
        int32_t var_15c_1 = 0
        var_158_1 = data_142fc5a80
        int64_t var_148_1 = 0
        int32_t var_140_1 = 0
        int32_t var_128_1 = 0x80000001
        int32_t var_118_1 = 1
        var_1e8 = zmm8_2
        int128_t var_1d8_1 = zmm7_2
        int128_t var_1c8_1 = zmm6_2
        float var_1b8_1[0x4] = zmm3_2
        int128_t var_1a8_1 = zmm2_2
        int128_t var_198_1 = zmm1_2
        void* var_138_1 = arg3
        void* var_130_1 = arg4
        int32_t var_13c_1 = 0xb
        int64_t var_188_1 = arg1
        int64_t var_180_1 = arg2
        zmm6 = sub_1415e46c0(&var_218, r14, arg5, rdi_1, result_2, arg7.d)
    label_14154d2b3:
        int128_t zmm1_3 = var_208_1:8.d
        
        if (not(zmm1_3.d f>= 3.40282347e+38f))
            int64_t var_164_3 = var_218[0].q
            float var_15c_3 = var_218[2]
            var_158_1.q = var_218[3].q
            var_158_1:0xc.d = zmm1_3.d
            var_158_1:8.d = var_208_1:4.d
        
        result = sub_1417599c0(arg8, zmm6, &var_1e8)

__security_check_cookie(rax_1 ^ &var_268)
return result
