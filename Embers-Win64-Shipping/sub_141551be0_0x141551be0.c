// 函数: sub_141551be0
// 地址: 0x141551be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* var_248 = arg1
int128_t* rax_3 = sub_141746340(&var_248)
float var_118[0x4] = *sub_141749180(&var_248)
float zmm2[0x4] = *(rax_3 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*rax_3, (*(rax_3 + 8))[0].q)
float zmm0[0x4] = data_14399f670
float var_108[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_f8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0[0].q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float var_e8[0x3][0x4]
float (* rax_5)[0x4]
int512_t zmm6
int512_t zmm7
int512_t zmm8
rax_5, zmm6, zmm7, zmm8 = sub_140ad7d70(arg5, &var_e8, &var_118)
var_248 = arg2
zmm6.o = *rax_5
zmm7.o = rax_5[1]
zmm8.o = rax_5[2]
int128_t* rax_6 = sub_141746340(&var_248)
float var_228[0x4] = *sub_141749180(&var_248)
float zmm0_1[0x4] = *(rax_6 + 4)
float temp0_6[0x4] = _mm_unpacklo_ps(*rax_6, *(rax_6 + 8))
float temp0_7[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
float zmm2_1[0x4] = data_14399f66c
int96_t var_218 = _mm_unpacklo_ps(temp0_6, temp0_7[0].q)[0].12
float var_208[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float var_b8[0x3][0x4]
float (* result)[0x4]
uint32_t zmm6_1[0x4]
int128_t zmm7_1
int128_t zmm8_1
result, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg6, &var_b8, &var_228)
float zmm4[0x4] = *result
int128_t zmm5 = result[1]
int128_t zmm9 = result[2]

if (*(arg3 + 0xa) != 0)
    void* rax_8 = *arg1
    int64_t rcx_6 = sx.q(arg1[1].d)
    void* const r9 = arg4
    int64_t rdx_2 = *(rax_8 + 0x28)
    int64_t r8_2 = rcx_6 * 3
    result = zx.q(*(arg4 + 8))
    var_118 = *((rcx_6 << 4) + *(rax_8 + 0x68))
    float zmm0_2[0x4] = *(rdx_2 + (r8_2 << 2) + 4)
    float temp0_12[0x4] = _mm_unpacklo_ps(*(rdx_2 + (r8_2 << 2)), (*(rdx_2 + (r8_2 << 2) + 8)).q)
    float temp0_13[0x4] = _mm_unpacklo_ps(zmm0_2, 0)
    uint32_t zmm2_2[0x4] = data_14399f66c
    
    if (result.b != 0x8b)
        r9 = nullptr
    
    float var_108_1[0x4] = _mm_unpacklo_ps(temp0_12, temp0_13[0].q)
    float var_f8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_2, 0)[0].q)
    
    if (r9 != 0)
    label_141551e17:
        zmm0_2 = data_142fc5a80
        void* const rax_9 = r9
        char rcx_9 = *(r9 + 8)
        
        if (rcx_9 != 0x8b)
            rax_9 = nullptr
        
        int128_t var_1e8_1 = zmm7_1
        zmm7_1 = arg7
        uint32_t var_1f8[0x4] = zmm6_1
        zmm6_1 = arg9
        var_248.d = 0x3f800000
        char var_178_1 = 1
        int32_t var_180_1 = 0
        int64_t var_188_1 = 0
        int32_t var_120_1 = 0
        int64_t* var_190_1 = arg2
        int64_t* var_198_1 = arg1
        int32_t var_14c_1 = 0x13
        void* var_140_1 = arg4
        void* var_148_1 = arg3
        int128_t var_1a8_1 = zmm9
        int128_t var_1b8_1 = zmm5
        float var_1c8_1[0x4] = zmm4
        int128_t var_1d8_1 = zmm8_1
        int32_t var_128_1 = 2
        int64_t var_130_1 = 0
        int32_t var_138_1 = 0x80000001
        int32_t var_150_1 = 0
        int64_t var_158_1 = 0
        int32_t var_16c_1 = 0
        int64_t var_174_1 = 0
        
        if (rax_9 == 0)
            if (rcx_9 != 0xb)
                r9 = nullptr
            
            if (r9 != 0)
                int64_t* var_258_2 = &var_248
                int32_t var_260_2 = zmm7_1.d
                zmm6_1 = sub_1415e85b0(&var_228, arg3, &var_118, r9, arg6, arg8, zmm6_1[0])
                goto label_141551f2c
        else
            int64_t* var_258_1 = &var_248
            int32_t var_260_1 = zmm7_1.d
            zmm6_1 = sub_1415e7390(&var_228, arg3, &var_118, rax_9, arg6, arg8, zmm6_1[0])
        label_141551f2c:
            int128_t zmm1_1 = var_218:8.d
            
            if (not(zmm1_1.d f>= 3.40282347e+38f))
                int64_t var_174_2 = var_228[0].q
                float var_16c_2 = var_228[2]
                zmm0_2[0].q = var_228[3].q
                zmm0_2[3] = zmm1_1.d
                zmm0_2[2] = var_218:4.d
        
        result =
            sub_141759ad0(arg10, sub_1416f43d0(arg1, var_248.d, zmm6_1, arg8, &var_1f8), &var_1f8)
    else
        r9 = arg4
        
        if (result.b != 0xb)
            r9 = nullptr
        
        if (r9 != 0)
            goto label_141551e17

__security_check_cookie(rax_1 ^ &var_298)
return result
