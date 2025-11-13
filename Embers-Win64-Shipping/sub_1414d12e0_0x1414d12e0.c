// 函数: sub_1414d12e0
// 地址: 0x1414d12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t rax_2 = *(arg1 + 0xd0)
int32_t i = 0
int32_t r13 = 0
int32_t result_1 = arg3

if (rax_2 != 4)
    r13 = rax_2

int32_t var_1f4 = r13
int32_t i_3 = 0x20
uint64_t rdi = arg1
uint64_t r12 = arg2
int32_t var_1ec
uint128_t var_188
int64_t var_170
float zmm6

if (r13 s< 1 && arg3 s>= 1 && data_1439c8b00 != 0)
    char var_200_1 = 0
    int32_t var_178_1 = data_143f02318
    wchar16 const* const var_148_1 = u"UnknownTexture2D"
    char var_208_1 = 1
    char var_210_1 = 1
    var_188 = data_143f02308
    int16_t var_150_1 = 0
    int32_t var_174_1 = 0x20
    var_170 = 0x10
    int32_t var_168_1 = 1
    int32_t var_164_1 = 0x10000
    int16_t var_160_1 = 1
    int32_t var_15c_1 = 0x20
    int32_t var_158_1 = 0x200000
    int32_t var_154_1 = 0x2000008
    int16_t var_13f_1 = 0
    char var_140_1 = 0
    zmm6 = sub_1419a0ce0(&data_1439c9260, arg2, &var_188, rdi + 0x38, SobolSampling", var_210_1, 
        var_208_1, var_200_1)
    int64_t* rcx = data_143f0f180
    var_210_1.q = &var_1ec
    wchar16 const* const var_218_1
    var_218_1.d = 1
    int64_t rax_5 =
        (*(*rcx + 0x510))(rcx, arg2, *(*(rdi + 0x38) + 0x10), 0, var_218_1, var_210_1, 0, 1)
    
    do
        int16_t* rbx_3 = zx.q(i * var_1ec) + rax_5
        
        for (int32_t j = 0; j s< 0x10; )
            *rbx_3 = sub_140acfe40(j.w, i.w, 0)
            j += 1
            rbx_3 = &rbx_3[1]
        
        for (int32_t j_1 = 0; j_1 s< 0x10; )
            int16_t rax_7 = sub_140acfe40(j_1.w, i.w, 1)
            j_1 += 1
            *rbx_3 = rax_7
            rbx_3 = &rbx_3[1]
        
        i += 1
    while (i s< 0x10)
    
    int64_t* rcx_3 = data_143f0f180
    r12 = arg2
    var_218_1.b = 0
    (*(*rcx_3 + 0x518))(rcx_3, r12, *(*(rdi + 0x38) + 0x10), 0, var_218_1, 1)
    rdi = arg1
    arg3 = result_1

int32_t var_1f8
int64_t var_138

if (r13 s< 3 && arg3 s>= 3)
    char var_200_3 = 0
    int32_t var_178_2 = data_1439c7b30
    wchar16 const* const var_148_2 = u"UnknownTextureVolume"
    char var_208_3 = 0
    char var_210_3 = 1
    var_188 = data_1439c7b20
    wchar16 const* const var_218_2 = u"VolumetricBlackDummy"
    int16_t var_150_2 = 0
    int16_t var_13f_2 = 0
    int32_t var_174_2
    __builtin_memcpy(&var_174_2, 
        "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 
        0x16)
    int32_t var_15c_2 = 2
    int32_t var_158_2 = 0x200000
    int32_t var_154_2 = 0x2000009
    char var_140_2 = 0
    zmm6 = sub_1419a0ce0(&data_1439c9260, r12, &var_188, rdi + 0xb0, var_218_2, var_210_3, 
        var_208_3, var_200_3)
    uint64_t r8_5 = zx.q(var_174_2)
    int32_t rdx_5 = var_170.d
    int64_t* rcx_4 = data_143f0f180
    int32_t var_11c_1 = rdx_5
    int32_t var_118_1 = var_170:4.d
    var_200_3.q = &var_1f8
    int32_t var_120_1 = r8_5.d
    void* r8_6 = *(rdi + 0xb0)
    var_208_3.d = (r8_5.d * rdx_5) << 2
    var_1f8 = 0
    __builtin_memset(&var_138, 0, 0x18)
    var_210_3.d = (r8_5 << 2).d
    (*(*rcx_4 + 0x548))(rcx_4, r12, *(r8_6 + 0x10), 0, &var_138, var_210_3, var_208_3, var_200_3, 
        var_1f8, result_1, arg1, arg2)

int64_t* rbx_4 = rdi + 0x50
float var_48 = zmm6
int32_t rcx_5 = 0x28

if (data_1439c8830 != 0)
    rcx_5 = 0xe

uint128_t zmm7
uint128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
int32_t var_178_3 = data_143f02318
float zmm10[0x4]
float var_88[0x4] = zmm10
char var_200_4 = 0
wchar16 const* const var_148_3 = u"UnknownTexture2D"
uint128_t zmm11
uint128_t var_98 = zmm11
char var_208_4 = 0
uint128_t zmm12
uint128_t var_a8 = zmm12
char var_210_4 = 1
wchar16 const* const var_218_4 = u"PreintegratedGF"
uint128_t zmm13
uint128_t var_b8 = zmm13
int16_t var_150_3 = 0
var_188 = data_143f02308
int32_t var_174_3 = 0x80
int64_t var_170_1 = 0x20
int32_t var_168_2 = 1
int32_t var_164_2 = 0x10000
int16_t var_160_2 = 1
int32_t var_158_3 = 0
int32_t var_154_3 = 8
int16_t var_13f_3 = 0
char var_140_3 = 0
int64_t* var_1d8 = rbx_4
sub_1419a0ce0(&data_1439c9260, r12, &var_188, rbx_4, var_218_4, var_210_4, var_208_4, var_200_4)
int64_t* rcx_6 = data_143f0f180
var_210_4.q = &var_1f8
var_218_4.d = 1
int64_t rax_14 = (*(*rcx_6 + 0x510))(rcx_6, r12, *(*rbx_4 + 0x10), 0, var_218_4, var_210_4, 0, 1)
int32_t rcx_7 = var_170_1.d
int32_t rsi = 0
uint128_t zmm9 = 0x3f800000

if (rcx_7 s> 0)
    uint128_t zmm5_1 = 0x3f000000
    int32_t rax_15 = var_174_3
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    
    do
        int32_t rdi_1 = 0
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(rsi)).d f+ zmm5_1.d
        zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(rcx_7)).d
        int32_t var_1bc_1 = zmm2.d
        uint128_t zmm1_1
        zmm1_1.d = zmm2.d f* zmm2.d
        int32_t var_1c0_1 = zmm1_1.d
        
        if (rax_15 s> 0)
            uint128_t zmm3
            zmm3.d = zmm1_1.d f* zmm1_1.d
            int64_t r15_2 = 0
            int64_t r12_2 = 0
            int64_t r13_1 = 0
            zmm1_1.d = zmm5_1.d
            zmm3.d = zmm3.d f- zmm9.d
            uint128_t var_198_1 = zmm1_1
            var_1ec = zmm3.d
            
            do
                int32_t i_1 = 0
                zmm12.d = _mm_cvtepi32_ps(zx.o(rdi_1)).d f+ zmm5_1.d
                zmm12.d = zmm12.d f/ _mm_cvtepi32_ps(zx.o(rax_15)).d
                zmm1_1.d = zmm12.d f* zmm12.d
                uint128_t zmm0_1
                zmm0_1.d = zmm9.d f- zmm1_1.d
                zmm1_1.d = zmm9.d f- zmm12.d
                zmm2 = _mm_sqrt_ss(zx.o(0).d, zmm0_1.d)
                int32_t var_1b8_1 = zmm1_1.d
                zmm0_1.d = zmm1_1.d f* zmm1_1.d
                int32_t var_1c8_1 = zmm2.d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm0_1.d = zmm0_1.d f* zmm1_1.d
                int64_t var_1b0
                var_1b0.d = zmm0_1.d
                
                do
                    int32_t rcx_9 = rol.d(i_1, 0x10)
                    int32_t rdx_13 = ((rcx_9 u>> 8 ^ rcx_9 << 8) & 0xff00ff) ^ rcx_9 << 8
                    uint64_t rcx_15 =
                        ((zx.q(rdx_13 u>> 4) ^ zx.q(rdx_13 << 4)) & 0xf0f0f0f) ^ zx.q(rdx_13 << 4)
                    int32_t rdx_19 =
                        ((rcx_15.d u>> 2 ^ (rcx_15 << 2).d) & 0x33333333) ^ (rcx_15 << 2).d
                    zmm0_1.q = float.d(zx.q(rdx_19 * 2)
                        ^ ((zx.q(rdx_19 u>> 1) ^ zx.q(rdx_19 * 2)) & 0x55555555))
                    zmm0_1.q = zmm0_1.q f* 2.3283064365386963e-10
                    zmm1_1 = _mm_cvtpd_ps(zmm0_1)
                    zmm0_1.d = zmm3.d f* zmm1_1.d
                    zmm11.d = zmm9.d f- zmm1_1.d
                    int32_t var_1c4_1 = zmm1_1.d
                    zmm1_1.d = float.s(zx.q(i_1))
                    zmm0_1.d = zmm0_1.d f+ zmm9.d
                    zmm1_1.d = zmm1_1.d f* 0.0490873866f
                    _mm_sqrt_ss(zx.o(0)[0], zmm11.d f/ zmm0_1.d)
                    float zmm6_1
                    zmm0_1, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                        __libm_sse2_sincosf_(zmm1_1)
                    zmm5_1 = var_1c8_1
                    uint128_t var_1a8_1 = zmm0_1
                    zmm1_1.d = zmm9.d f- zmm6_1
                    zmm13 = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
                    zmm14[0] = zmm14[0] f* zmm12.d
                    zmm2 = _mm_sqrt_ss(0, zmm1_1.d)
                    zmm3.d = zmm14.d f+ zmm14[0]
                    zmm2.d = zmm2.d f* zmm13.d
                    zmm2.d = zmm2.d f* zmm5_1.d
                    zmm14[0] = zmm14[0] f+ zmm2.d
                    zmm0_1.d = zmm2.d f+ zmm2.d
                    float temp0_10[0x4] = _mm_max_ss(zmm14[0], zmm10[0])
                    zmm3.d = zmm3.d f+ zmm0_1.d
                    zmm3.d = zmm3.d f* zmm14[0]
                    zmm3.d = zmm3.d f- zmm12.d
                    zmm3 = _mm_max_ss(zmm3.d, zmm10[0])
                    
                    if (not(zmm3.d f<= zmm10[0]))
                        zmm2 = var_1c0_1
                        float temp0_12[0x4] = _mm_max_ss(zmm14[0], zmm10[0])
                        zmm1_1.d = zmm9.d f- zmm2.d
                        zmm0_1 = zmm1_1
                        zmm1_1.d = zmm1_1.d f* zmm12.d
                        zmm0_1.d = zmm0_1.d f* zmm3.d
                        zmm1_1.d = zmm1_1.d f+ zmm2.d
                        zmm0_1.d = zmm0_1.d f+ zmm2.d
                        zmm1_1.d = zmm1_1.d f* zmm3.d
                        zmm0_1.d = zmm0_1.d f* zmm12.d
                        zmm0_1.d = zmm0_1.d f+ zmm1_1.d
                        zmm1_1.d = zmm9.d f- temp0_10[0]
                        zmm2.d = 0.5f f/ zmm0_1.d
                        zmm0_1.d = 4f / temp0_12[0]
                        zmm2.d = zmm2.d f* zmm3.d
                        zmm0_1.d = zmm0_1.d f* temp0_10[0]
                        zmm2.d = zmm2.d f* zmm0_1.d
                        zmm0_1.d = zmm1_1.d f* zmm1_1.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm1_1.d = zmm1_1.d f* zmm0_1.d
                        zmm0_1.d = zmm9.d f- zmm1_1.d
                        zmm1_1.d = zmm1_1.d f* zmm2.d
                        zmm8[0] = zmm8[0] f+ zmm1_1.d
                        zmm0_1.d = zmm0_1.d f* zmm2.d
                        zmm7.d = zmm7.d f+ zmm0_1.d
                    
                    float temp0_13 = __sqrtss_xmmss_memss(zmm6_1, var_1c4_1)
                    i_1 += 1
                    zmm13.d = zmm13.d f* _mm_sqrt_ss(0, zmm11.d).d
                    zmm11.d = zmm11.d f* var_1a8_1.d
                    zmm13.d = zmm13.d f+ zmm5_1.d
                    zmm5_1.d = zmm12.d f+ temp0_13
                    zmm11.d = zmm11.d f* var_1a8_1.d
                    float temp0_15 = _mm_max_ss(temp0_13, zmm10[0])
                    zmm0_1.d = zmm13.d f* zmm13.d
                    zmm1_1.d = zmm5_1.d f* zmm5_1.d
                    zmm11.d = zmm11.d f+ zmm0_1.d
                    zmm11.d = zmm11.d f+ zmm1_1.d
                    zmm3.d = zmm11.d
                    float temp0_16[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* var_198_1.d
                    zmm0_1.d = temp0_16.d f* temp0_16[0]
                    zmm1_1.d = zmm3.d f* zmm0_1.d
                    zmm2.d = var_198_1.d f- zmm1_1.d
                    zmm0_1.d = temp0_16.d f* zmm2.d
                    temp0_16[0] = temp0_16[0] f+ zmm0_1.d
                    zmm1_1.d = temp0_16.d f* temp0_16[0]
                    zmm3.d = zmm3.d f* zmm1_1.d
                    zmm0_1.d = var_198_1.d f- zmm3.d
                    zmm3.d = zmm9.d f- temp0_15
                    zmm1_1.d = temp0_16.d f* zmm0_1.d
                    zmm2.d = zmm3.d f* zmm3.d
                    temp0_16[0] = temp0_16[0] f+ zmm1_1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    float var_1c4_2 = temp0_16[0]
                    zmm0_1.d = temp0_16.d f* zmm5_1.d
                    zmm5_1 = 0x3f000000
                    temp0_16[0] = temp0_16[0] f* zmm13.d
                    zmm0_1.d = zmm0_1.d f* zmm12.d
                    zmm2.d = zmm2.d f* zmm3.d
                    temp0_16[0] = temp0_16[0] f* var_1c8_1
                    zmm0_1.d = zmm0_1.d f+ temp0_16[0]
                    zmm0_1 = _mm_max_ss(zmm0_1.d, zmm10[0])
                    float zmm4_1[0x4] = zmm0_1
                    zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
                    zmm4_1[0] = zmm4_1[0] f* zmm0_1.d
                    zmm0_1.d = zmm3.d f* var_1b8_1
                    zmm3 = var_1ec
                    zmm4_1[0] = zmm4_1[0] f* var_1bc_1
                    zmm1_1.d = zmm0_1.d f* zmm0_1.d
                    zmm4_1[0] = zmm4_1[0] - 0.5f
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm1_1.d = zmm1_1.d f* zmm0_1.d
                    zmm1_1.d = zmm1_1.d f* zmm4_1[0]
                    zmm1_1.d = zmm1_1.d f+ var_1b0.d
                    zmm1_1.d = zmm1_1.d f+ zmm2.d
                    zmm1_1.d = zmm1_1.d f* zmm4_1[0]
                    zmm1_1.d = zmm1_1.d f+ zmm9.d
                    zmm15[0] = zmm15[0] f+ zmm1_1.d
                while (i_1 u< 0x80)
                
                uint64_t rcx_21 = zx.q(rsi * var_1f8)
                zmm7.d = zmm7.d f* 0.0078125f
                zmm8[0] = zmm8[0] * 0.0078125f
                zmm15[0] = zmm15[0] * 0.0078125f
                
                if (rcx_5 == 0x13)
                    void* rcx_22 = rcx_21 + r13_1
                    
                    if (zmm7.d f>= zmm10[0])
                        zmm7 = _mm_min_ss(zmm7.d, zmm9.d)
                    else
                        zmm7 = zmm10
                    
                    bool cond:2_1 = zmm8[0] >= zmm10[0]
                    zmm7.d = zmm7.d f* 65535f
                    zmm7.d = zmm7.d f+ 0.5f
                    *(rcx_22 + rax_14) = (int.d(zmm7.d)).w
                    
                    if (cond:2_1)
                        zmm8 = _mm_min_ss(zmm8[0], zmm9.d)
                    else
                        zmm8 = zmm10
                    
                    bool cond:5_1 = zmm15[0] >= zmm10[0]
                    zmm8[0] = zmm8[0] * 65535f
                    zmm8[0] = zmm8[0] + 0.5f
                    *(rcx_22 + rax_14 + 2) = (int.d(zmm8[0])).w
                    
                    if (cond:5_1)
                        zmm15 = _mm_min_ss(zmm15[0], zmm9.d)
                    else
                        zmm15 = zmm10
                    
                    zmm15[0] = zmm15[0] * 65535f
                    zmm15[0] = zmm15[0] + 0.5f
                    *(rcx_22 + rax_14 + 4) = (int.d(zmm15[0])).w
                else if (rcx_5 != 0xe)
                    void* rcx_24 = rcx_21 + r15_2
                    
                    if (zmm7.d f>= zmm10[0])
                        zmm7 = _mm_min_ss(zmm7.d, zmm9.d)
                    else
                        zmm7 = zmm10
                    
                    bool cond:3_1 = zmm8[0] >= zmm10[0]
                    zmm7.d = zmm7.d f* 255.999893f
                    *(rcx_24 + rax_14) = (int.d(zmm7.d)).b
                    
                    if (cond:3_1)
                        zmm8 = _mm_min_ss(zmm8[0], zmm9.d)
                    else
                        zmm8 = zmm10
                    
                    zmm8[0] = zmm8[0] * 255.999893f
                    *(rcx_24 + rax_14 + 1) = (int.d(zmm8[0])).b
                else
                    int16_t* rcx_23 = rcx_21 + r12_2
                    
                    if (zmm7.d f>= zmm10[0])
                        zmm7 = _mm_min_ss(zmm7.d, zmm9.d)
                    else
                        zmm7 = zmm10
                    
                    bool cond:4_1 = zmm8[0] >= zmm10[0]
                    zmm7.d = zmm7.d f* 65535f
                    zmm7.d = zmm7.d f+ 0.5f
                    *(rcx_23 + rax_14) = (int.d(zmm7.d)).w
                    
                    if (cond:4_1)
                        zmm8 = _mm_min_ss(zmm8[0], zmm9.d)
                    else
                        zmm8 = zmm10
                    
                    zmm8[0] = zmm8[0] * 65535f
                    zmm8[0] = zmm8[0] + 0.5f
                    *(rcx_23 + rax_14 + 2) = (int.d(zmm8[0])).w
                
                rax_15 = var_174_3
                rdi_1 += 1
                zmm3 = var_1ec
                r13_1 += 8
                r12_2 += 4
                r15_2 += 2
            while (rdi_1 s< rax_15)
            
            rcx_7 = var_170_1.d
        
        rsi += 1
    while (rsi s< rcx_7)
    
    r13 = var_1f4
    i_3 = 0x20
    rbx_4 = var_1d8
    r12 = arg2
    rdi = arg1

int64_t* rcx_25 = data_143f0f180
var_218_4.b = 0
uint64_t result = (*(*rcx_25 + 0x518))(rcx_25, r12, *(*rbx_4 + 0x10), 0, var_218_4, 1)

if (r13 s>= 3)
    *(rdi + 0xd0) = result_1
else
    result = zx.q(result_1)
    
    if (result.d s< 3)
        *(rdi + 0xd0) = result.d
    else
        int32_t var_178_4 = data_143f02318
        char var_200_6 = 0
        int64_t* r15_3 = rdi + 0x30
        wchar16 const* const var_148_4 = u"UnknownTextureVolume"
        char var_208_6 = 0
        char var_210_6 = 1
        wchar16 const* const var_218_5 = u"PerlinNoise3D"
        int16_t var_150_4 = 0
        int16_t var_13f_4 = 0
        var_188 = data_143f02308
        int32_t var_174_4
        __builtin_memcpy(&var_174_4, 
            "\x10\x00\x00\x00\x10\x00\x00\x00\x10\x00\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 
            0x16)
        int32_t var_15c_4 = 2
        int32_t var_158_4 = 0x200048
        int32_t var_154_4 = 8
        char var_140_4 = 0
        sub_1419a0ce0(&data_1439c9260, r12, &var_188, r15_3, var_218_5, var_210_6, var_208_6, 
            var_200_6)
        int32_t rsi_1 = 0
        int64_t var_1d0_1 = 0x1000
        var_1d8 = nullptr
        sub_1405a4cf0(&var_1d8)
        int64_t* rbx_5 = var_1d8
        memset(rbx_5, 0, 0x4000)
        int32_t rdx_23 = 0x1234
        float zmm0_2[0x4]
        
        for (int32_t i_2 = 0; i_2 u< 0xf00; i_2 += 0x100)
            for (int32_t j_2 = 0; j_2 u< 0xf0; )
                var_1f8 = (rdx_23 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                int64_t r9_8 = sx.q(i_2 + j_2)
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2)) = *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 =
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 4) = *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = (((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 8) = *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = ((((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0xc) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = (((
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                    | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x10) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = ((((
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x14) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                int32_t rax_63 = (((((
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                var_1f8 = rax_63
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                int32_t r8_19 = ((((((
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x18) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                uint32_t rax_66 = ((((((
                    ((rdx_23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                var_1f8 = rax_66 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x1c) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = (r8_19 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x20) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = ((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x24) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 =
                    (((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                    | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x28) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = (0x9d6f2492
                    - ((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0x4b9b4d07) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x2c) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = ((0x9d6f2492
                    - ((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0x4b9b4d07) * 0xbb38435
                    + 0x3619636b) u>> 9 | 0x3f800000
                j_2 += 0x10
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x30) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = (((0x9d6f2492
                    - ((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0x4b9b4d07) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                rdx_23 = (((0x9d6f2492
                    - ((r8_19 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0x4b9b4d07) * 0xbb38435
                    + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x34) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
                var_1f8 = rdx_23 u>> 9 | 0x3f800000
                zmm0_2 = var_1f8
                zmm0_2[0] = zmm0_2[0] f- zmm9.d
                zmm0_2[0] = zmm0_2[0] * 12f
                *(rbx_5 + (r9_8 << 2) + 0x38) =
                    *(&data_1439b7200 + (zx.q((int.q(zmm0_2[0])).d) << 2))
        
        do
            int64_t i_10 = sx.q(i_3)
            *(rbx_5 + (i_10 << 2) - 0x44) = *(rbx_5 + (i_10 << 2) - 0x80)
            int64_t i_11 = sx.q(i_3)
            *(rbx_5 + (i_11 << 2) - 4) = *(rbx_5 + (i_11 << 2) - 0x40)
            int64_t i_12 = sx.q(i_3)
            *(rbx_5 + (i_12 << 2) + 0x3c) = *(rbx_5 + (i_12 << 2))
            int64_t i_13 = sx.q(i_3)
            *(rbx_5 + (i_13 << 2) + 0x7c) = *(rbx_5 + (i_13 << 2) + 0x40)
            int64_t i_14 = sx.q(i_3)
            *(rbx_5 + (i_14 << 2) + 0xbc) = *(rbx_5 + (i_14 << 2) + 0x80)
            int64_t i_15 = sx.q(i_3)
            *(rbx_5 + (i_15 << 2) + 0xfc) = *(rbx_5 + (i_15 << 2) + 0xc0)
            int64_t i_16 = sx.q(i_3)
            *(rbx_5 + (i_16 << 2) + 0x13c) = *(rbx_5 + (i_16 << 2) + 0x100)
            int64_t i_17 = sx.q(i_3)
            *(rbx_5 + (i_17 << 2) + 0x17c) = *(rbx_5 + (i_17 << 2) + 0x140)
            int64_t i_18 = sx.q(i_3)
            *(rbx_5 + (i_18 << 2) + 0x1bc) = *(rbx_5 + (i_18 << 2) + 0x180)
            int64_t i_19 = sx.q(i_3)
            *(rbx_5 + (i_19 << 2) + 0x1fc) = *(rbx_5 + (i_19 << 2) + 0x1c0)
            int64_t i_20 = sx.q(i_3)
            *(rbx_5 + (i_20 << 2) + 0x23c) = *(rbx_5 + (i_20 << 2) + 0x200)
            int64_t i_21 = sx.q(i_3)
            *(rbx_5 + (i_21 << 2) + 0x27c) = *(rbx_5 + (i_21 << 2) + 0x240)
            int64_t i_22 = sx.q(i_3)
            *(rbx_5 + (i_22 << 2) + 0x2bc) = *(rbx_5 + (i_22 << 2) + 0x280)
            int64_t i_23 = sx.q(i_3)
            *(rbx_5 + (i_23 << 2) + 0x2fc) = *(rbx_5 + (i_23 << 2) + 0x2c0)
            int64_t i_24 = sx.q(i_3)
            *(rbx_5 + (i_24 << 2) + 0x33c) = *(rbx_5 + (i_24 << 2) + 0x300)
            int64_t i_25 = sx.q(i_3)
            i_3 += 0x100
            *(rbx_5 + (i_25 << 2) + 0x37c) = *(rbx_5 + (i_25 << 2) + 0x340)
        while (i_3 u< 0x1020)
        
        for (int32_t i_4 = 0; i_4 u< 0x1000; )
            int64_t i_28 = sx.q(i_4)
            *(rbx_5 + (sx.q(i_4) << 2) + 0x3c0) = *(rbx_5 + (i_28 << 2))
            *(rbx_5 + (sx.q(i_4) << 2) + 0x3c4) = *(rbx_5 + (i_28 << 2) + 4)
            int64_t i_26 = sx.q(i_4)
            i_4 += 0x100
            *(rbx_5 + (i_26 << 2) + 0x3c8) = *(rbx_5 + (i_28 << 2) + 8)
            *(rbx_5 + (i_28 << 2) + 0x3cc) = *(rbx_5 + (i_28 << 2) + 0xc)
            *(rbx_5 + (i_28 << 2) + 0x3d0) = *(rbx_5 + (i_28 << 2) + 0x10)
            *(rbx_5 + (i_28 << 2) + 0x3d4) = *(rbx_5 + (i_28 << 2) + 0x14)
            *(rbx_5 + (i_28 << 2) + 0x3d8) = *(rbx_5 + (i_28 << 2) + 0x18)
            *(rbx_5 + (i_28 << 2) + 0x3dc) = *(rbx_5 + (i_28 << 2) + 0x1c)
            *(rbx_5 + (i_28 << 2) + 0x3e0) = *(rbx_5 + (i_28 << 2) + 0x20)
            *(rbx_5 + (i_28 << 2) + 0x3e4) = *(rbx_5 + (i_28 << 2) + 0x24)
            *(rbx_5 + (i_28 << 2) + 0x3e8) = *(rbx_5 + (i_28 << 2) + 0x28)
            *(rbx_5 + (i_28 << 2) + 0x3ec) = *(rbx_5 + (i_28 << 2) + 0x2c)
            *(rbx_5 + (i_28 << 2) + 0x3f0) = *(rbx_5 + (i_28 << 2) + 0x30)
            *(rbx_5 + (i_28 << 2) + 0x3f4) = *(rbx_5 + (i_28 << 2) + 0x34)
            *(rbx_5 + (i_28 << 2) + 0x3f8) = *(rbx_5 + (i_28 << 2) + 0x38)
            *(rbx_5 + (i_28 << 2) + 0x3fc) = *(rbx_5 + (i_28 << 2) + 0x3c)
        
        for (int32_t i_5 = 0; i_5 u< 0x100; )
            int64_t i_29 = sx.q(i_5)
            *(rbx_5 + (sx.q(i_5) << 2) + 0x3c00) = *(rbx_5 + (i_29 << 2))
            *(rbx_5 + (sx.q(i_5) << 2) + 0x3c04) = *(rbx_5 + (i_29 << 2) + 4)
            int64_t i_27 = sx.q(i_5)
            i_5 += 0x10
            *(rbx_5 + (i_27 << 2) + 0x3c08) = *(rbx_5 + (i_29 << 2) + 8)
            *(rbx_5 + (i_29 << 2) + 0x3c0c) = *(rbx_5 + (i_29 << 2) + 0xc)
            *(rbx_5 + (i_29 << 2) + 0x3c10) = *(rbx_5 + (i_29 << 2) + 0x10)
            *(rbx_5 + (i_29 << 2) + 0x3c14) = *(rbx_5 + (i_29 << 2) + 0x14)
            *(rbx_5 + (i_29 << 2) + 0x3c18) = *(rbx_5 + (i_29 << 2) + 0x18)
            *(rbx_5 + (i_29 << 2) + 0x3c1c) = *(rbx_5 + (i_29 << 2) + 0x1c)
            *(rbx_5 + (i_29 << 2) + 0x3c20) = *(rbx_5 + (i_29 << 2) + 0x20)
            *(rbx_5 + (i_29 << 2) + 0x3c24) = *(rbx_5 + (i_29 << 2) + 0x24)
            *(rbx_5 + (i_29 << 2) + 0x3c28) = *(rbx_5 + (i_29 << 2) + 0x28)
            *(rbx_5 + (i_29 << 2) + 0x3c2c) = *(rbx_5 + (i_29 << 2) + 0x2c)
            *(rbx_5 + (i_29 << 2) + 0x3c30) = *(rbx_5 + (i_29 << 2) + 0x30)
            *(rbx_5 + (i_29 << 2) + 0x3c34) = *(rbx_5 + (i_29 << 2) + 0x34)
            *(rbx_5 + (i_29 << 2) + 0x3c38) = *(rbx_5 + (i_29 << 2) + 0x38)
            *(rbx_5 + (i_29 << 2) + 0x3c3c) = *(rbx_5 + (i_29 << 2) + 0x3c)
        
        int32_t rcx_62 = var_170_1:4.d
        int64_t* r11_1 = rbx_5
        int32_t r8_23 = var_170_1.d
        uint64_t rax_147 = zx.q(var_174_4)
        
        if (rcx_62 != 0)
            do
                int32_t rdi_2 = 0
                
                if (r8_23 != 0)
                    do
                        int32_t i_6 = 0
                        
                        if (rax_147.d != 0)
                            do
                                int32_t r9_9 = *r11_1
                                uint32_t rcx_63 = zx.d((r9_9 u>> 8).b)
                                int32_t temp0_25
                                int32_t temp1_1
                                temp0_25:temp1_1 = muls.dp.d(0x81020409, rcx_63)
                                uint32_t rcx_65 = r9_9 u>> 0x10
                                int32_t rdx_42 = (temp0_25 + rcx_63) s>> 6
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = muls.dp.d(0x81020409, rcx_65)
                                int32_t rdx_45 = (temp2_1 + rcx_65) s>> 6
                                int32_t rcx_70 = ((rdx_45 u>> 0x1f) - 1 + rdx_45) * i_6
                                i_6 += 1
                                *r11_1 = ((zx.d(r9_9.b) u/ 0x7f - 1) * rsi_1
                                    + ((rdx_42 u>> 0x1f) - 1 + rdx_42) * rdi_2 + rcx_70 + 0x7f) << 0x18
                                    | r9_9
                                r11_1 += 4
                                rax_147 = zx.q(var_174_4)
                            while (i_6 u< rax_147.d)
                            
                            r8_23 = var_170_1.d
                        
                        rdi_2 += 1
                    while (rdi_2 u< r8_23)
                    
                    rcx_62 = var_170_1:4.d
                
                rsi_1 += 1
            while (rsi_1 u< rcx_62)
            
            rdi = arg1
        
        int32_t var_120_2 = rax_147.d
        int32_t var_118_2 = rcx_62
        int64_t* rcx_74 = data_143f0f180
        int32_t var_11c_2 = r8_23
        void* r8_31 = *r15_3
        __builtin_memset(&var_138, 0, 0x18)
        var_200_6.q = rbx_5
        var_208_6.d = (rax_147.d * r8_23) << 2
        var_210_6.d = (rax_147 << 2).d
        (*(*rcx_74 + 0x548))(rcx_74, r12, *(r8_31 + 0x10), 0, &var_138, var_210_6, var_208_6, 
            var_200_6)
        
        if (rbx_5 != 0)
            sub_140a74f90(rbx_5)
        
        zmm11 = 0x3ffd70a3
        int64_t i_7 = 0
        zmm12 = 0x3deb851e
        zmm13 = 0x3f628f5c
        zmm8 = 0x3e490fdb
        var_1f8.b = 0
        var_1f8:3.b = 0
        
        do
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x03\x00\x00\x00\x0a\x00\x00\x00\x04\x"
            "00\x00\x00\x0f\x00\x00\x00\x0c\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00"
            "00\x0e\x00\x00\x00\x0d\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x05\x00\x00\x
                    00", 
                0x40)
            float temp0_26[0x4] = _mm_cvtepi32_ps(zx.o(*(&var_138 + i_7)))
            temp0_26[0] = temp0_26[0] f* zmm11.d
            float zmm0_3[0x4] = sinf(temp0_26[0])
            zmm0_3[0] = zmm0_3[0] f* zmm12.d
            temp0_26[0] = temp0_26[0] * zmm8[0]
            zmm7.d = zmm13.d f- zmm0_3[0]
            float zmm0_4[0x4]
            float zmm7_1
            int32_t zmm8_1
            int32_t zmm9_1
            int32_t zmm10_1
            int32_t zmm11_1
            int32_t zmm12_1
            float zmm13_1
            zmm0_4, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
                __libm_sse2_sincosf_(temp0_26)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
            temp0_27[0] = temp0_27[0] * zmm7_1
            zmm0_4[0] = zmm0_4[0] * zmm7_1
            temp0_27[0] = temp0_27[0] f+ zmm9_1
            zmm0_4[0] = zmm0_4[0] f+ zmm9_1
            temp0_27[0] = temp0_27[0] f* zmm10_1
            zmm0_4[0] = zmm0_4[0] f* zmm10_1
            var_1f8:1.b = (int.d(zmm0_4[0])).b
            char rax_159 = (int.d(temp0_27[0])).b
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x03\x00\x00\x00\x0a\x00\x00\x00\x04\x"
            "00\x00\x00\x0f\x00\x00\x00\x0c\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00"
            "00\x0e\x00\x00\x00\x0d\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x05\x00\x00\x
                    00", 
                0x40)
            var_1f8:2.b = rax_159
            int32_t rax_160 = var_1f8
            float temp0_28[0x4] = _mm_cvtepi32_ps(zx.o(*(&var_138:4 + i_7)))
            *(&var_188 + i_7) = rax_160
            temp0_28[0] = temp0_28[0] f* zmm11_1
            float zmm0_5[0x4] = sinf(temp0_28[0])
            zmm0_5[0] = zmm0_5[0] f* zmm12_1
            temp0_28[0] = temp0_28[0] f* zmm8_1
            zmm0_5[0]
            float zmm0_6[0x4]
            float zmm7_2
            int32_t zmm8_2
            int32_t zmm9_2
            int32_t zmm10_2
            int32_t zmm11_2
            int32_t zmm12_2
            float zmm13_2
            zmm0_6, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_2 =
                __libm_sse2_sincosf_(temp0_28)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm0_6, zmm0_6, 1)
            temp0_29[0] = temp0_29[0] * zmm7_2
            zmm0_6[0] = zmm0_6[0] * zmm7_2
            temp0_29[0] = temp0_29[0] f+ zmm9_2
            zmm0_6[0] = zmm0_6[0] f+ zmm9_2
            temp0_29[0] = temp0_29[0] f* zmm10_2
            zmm0_6[0] = zmm0_6[0] f* zmm10_2
            var_1f8:1.b = (int.d(zmm0_6[0])).b
            char rax_162 = (int.d(temp0_29[0])).b
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x03\x00\x00\x00\x0a\x00\x00\x00\x04\x"
            "00\x00\x00\x0f\x00\x00\x00\x0c\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00"
            "00\x0e\x00\x00\x00\x0d\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x05\x00\x00\x
                    00", 
                0x40)
            var_1f8:2.b = rax_162
            int32_t rax_163 = var_1f8
            int64_t var_130
            float temp0_30[0x4] = _mm_cvtepi32_ps(zx.o(*(&var_130 + i_7)))
            *(&var_188:4 + i_7) = rax_163
            temp0_30[0] = temp0_30[0] f* zmm11_2
            float zmm0_7[0x4] = sinf(temp0_30[0])
            zmm0_7[0] = zmm0_7[0] f* zmm12_2
            zmm0_7[0]
            temp0_30[0] = temp0_30[0] f* zmm8_2
            float zmm0_8[0x4]
            float zmm7_3
            int32_t zmm8_3
            int32_t zmm9_3
            int32_t zmm10_3
            int32_t zmm11_3
            int32_t zmm12_3
            float zmm13_3
            zmm0_8, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_3, zmm12_3, zmm13_3 =
                __libm_sse2_sincosf_(temp0_30)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm0_8, zmm0_8, 1)
            temp0_31[0] = temp0_31[0] * zmm7_3
            zmm0_8[0] = zmm0_8[0] * zmm7_3
            temp0_31[0] = temp0_31[0] f+ zmm9_3
            zmm0_8[0] = zmm0_8[0] f+ zmm9_3
            temp0_31[0] = temp0_31[0] f* zmm10_3
            zmm0_8[0] = zmm0_8[0] f* zmm10_3
            var_1f8:1.b = (int.d(zmm0_8[0])).b
            char rax_165 = (int.d(temp0_31[0])).b
            __builtin_memcpy(&var_138, 
                "\x00\x00\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x03\x00\x00\x00\x0a\x00\x00\x00\x04\x"
            "00\x00\x00\x0f\x00\x00\x00\x0c\x00\x00\x00\x06\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00"
            "00\x0e\x00\x00\x00\x0d\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x05\x00\x00\x
                    00", 
                0x40)
            var_1f8:2.b = rax_165
            int32_t rax_166 = var_1f8
            float temp0_32[0x4] = _mm_cvtepi32_ps(zx.o(*(&var_130:4 + i_7)))
            *(&var_188:8 + i_7) = rax_166
            temp0_32[0] = temp0_32[0] f* zmm11_3
            float zmm0_9[0x4] = sinf(temp0_32[0])
            zmm0_9[0] = zmm0_9[0] f* zmm12_3
            temp0_32[0] = temp0_32[0] f* zmm8_3
            zmm0_9[0]
            int32_t zmm9_4
            zmm0_2, zmm7, zmm8, zmm9_4, zmm10, zmm11, zmm12, zmm13 = __libm_sse2_sincosf_(temp0_32)
            float temp0_33[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
            zmm0_2[0] = zmm0_2[0] f* zmm7.d
            temp0_33[0] = temp0_33[0] f* zmm7.d
            zmm0_2[0] = zmm0_2[0] f+ zmm9_4
            temp0_33[0] = temp0_33[0] f+ zmm9_4
            zmm0_2[0] = zmm0_2[0] * zmm10[0]
            temp0_33[0] = temp0_33[0] * zmm10[0]
            var_1f8:1.b = (int.d(zmm0_2[0])).b
            var_1f8:2.b = (int.d(temp0_33[0])).b
            *(&var_188:0xc + i_7) = var_1f8
            i_7 += 0x10
        while (i_7 s< 0x40)
        
        int64_t var_128
        var_128.d = data_143f02318
        var_138.o = data_143f02308
        int128_t var_108
        var_108:8.w = 0
        var_128:4.d = 0x40
        var_120_2.q = 0x40
        int32_t var_118_3 = 1
        int32_t var_114_1 = 0x10000
        int16_t var_110_1 = 1
        int32_t var_10c_1 = 0x28
        var_108.d = 0x200000
        var_108:4.d = 0x2000008
        wchar16 const* const var_f8_1 = u"UnknownTexture2D"
        int16_t var_ef_1 = 0
        char var_f0_1 = 0
        sub_1419a0ce0(&data_1439c9260, r12, &var_138, rdi + 0x40, u"SSAORandomization", 1, 0, 0)
        int64_t* rcx_76 = data_143f0f180
        char var_210_7
        var_210_7.q = &var_1f4
        wchar16 const* const var_218_7
        var_218_7.d = 1
        int64_t rax_172 = (*(*rcx_76 + 0x510))(rcx_76, r12, *(*(rdi + 0x40) + 0x10), 0, var_218_7, 
            var_210_7, 0, 1)
        int32_t r11_2 = 0
        int32_t rax_173 = var_120_2
        
        if (rax_173 s> 0)
            int32_t rcx_77 = var_128:4.d
            
            do
                int32_t r8_35 = 0
                
                if (rcx_77 s> 0)
                    int32_t r9_12 = r11_2 & 0x80000003
                    
                    if (r9_12 s< 0)
                        r9_12 = ((r9_12 - 1) | 0xfffffffc) + 1
                    
                    int64_t r10_6 = 0
                    
                    do
                        char* rdx_55 = zx.q(r11_2 * var_1f4) + rax_172
                        int32_t rax_175 = r8_35 & 0x80000003
                        
                        if (rax_175 s< 0)
                            rax_175 = ((rax_175 - 1) | 0xfffffffc) + 1
                        
                        uint64_t rax_178 = zx.q(rax_175 + (r9_12 << 2))
                        r8_35 += 1
                        rdx_55[r10_6] = *(&var_188:2 + (rax_178 << 2))
                        rdx_55[r10_6 + 1] = *(&var_188:1 + (zx.q(rax_178.d) << 2))
                        r10_6 += 2
                        rcx_77 = var_128:4.d
                    while (r8_35 s< rcx_77)
                    
                    rax_173 = var_120_2
                
                r11_2 += 1
            while (r11_2 s< rax_173)
        
        int64_t* rcx_79 = data_143f0f180
        var_218_7.b = 0
        (*(*rcx_79 + 0x518))(rcx_79, r12, *(*(rdi + 0x40) + 0x10), 0, var_218_7, 1)
        char var_200_9 = 0
        int64_t* rbx_8 = arg1 + 0x48
        int32_t var_178_5 = data_143f02318
        char var_208_9 = 0
        char var_210_9 = 1
        var_188 = data_143f02308
        wchar16 const* const var_218_8 = u"GTAORandomization"
        int16_t var_150_5 = 0
        int32_t var_174_5 = 4
        int32_t i_9 = 4
        int32_t var_168_3 = 1
        int32_t var_164_3 = 0x10000
        int16_t var_160_3 = 1
        int32_t var_15c_5 = 0x25
        int32_t var_158_5 = 0x200000
        int32_t var_154_5 = 0x2000000
        wchar16 const* const var_148_5 = u"UnknownTexture2D"
        int16_t var_13f_5 = 0
        char var_140_5 = 0
        var_1d8 = rbx_8
        sub_1419a0ce0(&data_1439c9260, r12, &var_188, rbx_8, var_218_8, var_210_9, var_208_9, 
            var_200_9)
        int64_t* rcx_80 = data_143f0f180
        var_210_9.q = &var_1f4
        var_218_8.d = 1
        int64_t rax_184 =
            (*(*rcx_80 + 0x510))(rcx_80, r12, *(*rbx_8 + 0x10), 0, var_218_8, var_210_9, 0, 1)
        uint64_t r12_3 = 0
        int32_t i_8 = i_9
        
        if (i_8 s> 0)
            int512_t zmm6_6
            zmm6_6.o = 0x42ff0000
            int32_t rcx_81 = var_174_5
            
            do
                int32_t rdi_3 = 0
                
                if (rcx_81 s> 0)
                    int64_t rsi_2 = 0
                    int32_t r15_4 = (r12_3 << 2).d
                    int32_t r14_1 = r12_3.d
                    
                    do
                        char* rbx_12 = zx.q(r12_3.d * var_1f4) + rax_184 + rsi_2
                        uint128_t zmm1_6
                        zmm1_6.d = _mm_cvtepi32_ps(zx.o((rdi_3 & 3) + (r15_4 & 0xc))).d f* zmm8[0]
                        float zmm0_11[0x4]
                        int32_t zmm6_7
                        int32_t zmm9_5
                        zmm0_11, zmm6_7, zmm7, zmm8, zmm9_5 = __libm_sse2_sincosf_(zmm1_6)
                        rbx_12[3] = 0
                        zmm1_6 = _mm_shuffle_ps(zmm0_11, zmm0_11, 1)
                        rdi_3 += 1
                        zmm0_11[0] = zmm0_11[0] f+ zmm9_5
                        r15_4 += 4
                        zmm1_6.d = zmm1_6.d f+ zmm9_5
                        rsi_2 += 4
                        zmm0_11[0] = zmm0_11[0] f* zmm6_7
                        zmm1_6.d = zmm1_6.d f* zmm6_7
                        *rbx_12 = (int.d(zmm1_6.d)).b
                        rbx_12[1] = (int.d(zmm0_11[0])).b
                        int32_t rax_190 = r14_1 & 3
                        r14_1 -= 1
                        float temp0_36[0x4] = _mm_cvtepi32_ps(zx.o(rax_190))
                        temp0_36[0] = temp0_36[0] f* zmm7.d
                        rbx_12[2] = (int.d(temp0_36[0])).b
                        rcx_81 = var_174_5
                    while (rdi_3 s< rcx_81)
                    
                    i_8 = i_9
                
                r12_3 = zx.q(r12_3.d + 1)
            while (r12_3.d s< i_8)
            
            rbx_8 = var_1d8
        
        int64_t* rcx_85 = data_143f0f180
        uint64_t r13_3 = arg2
        var_218_8.b = 0
        (*(*rcx_85 + 0x518))(rcx_85, r13_3, *(*rbx_8 + 0x10), 0, var_218_8, 1)
        char var_200_11 = 0
        int64_t* r12_5 = arg1 + 0x70
        int32_t var_178_6 = data_143f02318
        char var_208_11 = 1
        char var_210_11 = 1
        var_188 = data_143f02308
        wchar16 const* const var_218_9 = u"LTCMat"
        int16_t var_150_6 = 0
        int32_t var_174_6 = 0x40
        int32_t var_170_2 = 0x40
        int32_t var_168_4 = 1
        int32_t var_164_4 = 0x10000
        int16_t var_160_4 = 1
        int32_t var_15c_6 = 0xa
        int32_t var_158_6 = 0x100000
        int32_t var_154_6 = 8
        wchar16 const* const var_148_6 = u"UnknownTexture2D"
        int16_t var_13f_6 = 0
        char var_140_6 = 0
        var_1d8 = r12_5
        sub_1419a0ce0(&data_1439c9260, r13_3, &var_188, r12_5, var_218_9, var_210_11, var_208_11, 
            var_200_11)
        int64_t* rcx_86 = data_143f0f180
        var_210_11.q = &var_1f4
        var_218_9.d = 1
        int64_t rax_195 =
            (*(*rcx_86 + 0x510))(rcx_86, r13_3, *(*r12_5 + 0x10), 0, var_218_9, var_210_11, 0, 1)
        int32_t rdx_62 = var_170_2
        int32_t rsi_3 = 0
        
        if (rdx_62 s> 0)
            int32_t rcx_87 = var_174_6
            void* r15_5 = &data_142f97834
            
            do
                int32_t rbx_13 = 0
                
                if (rcx_87 s> 0)
                    int64_t rdi_4 = 0
                    void* r10_9 = r15_5
                    
                    do
                        uint64_t r9_19 = zx.q(rsi_3 * var_1f4)
                        var_1f8 = (*(r10_9 - 4)).d
                        int32_t rax_196 = var_1f8
                        uint16_t rcx_89 = (rax_196 u>> 0x17).w
                        uint16_t rdx_64 = (rax_196 u>> 0x1f).w << 0xf
                        uint16_t* r9_21 = r9_19 + rdi_4 + rax_195
                        uint32_t r8_44 = zx.d(rcx_89.b)
                        
                        if (r8_44 u> 0x70)
                            if (r8_44 u< 0x8f)
                                rdx_64 |=
                                    ((rax_196 u>> 0xd).w & 0x3ff) | ((rcx_89 - 0x10) & 0x1f) << 0xa
                            else
                                rdx_64 |= 0x7bff
                        else if (0x70 - r8_44 + 0xe s<= 0x18)
                            int32_t rax_198 = (rax_196 & 0x7fffff) | 0x800000
                            uint16_t r8_46 =
                                ((rax_198 u>> (0x70 - r8_44 + 0xe).b).w & 0x3ff) | rdx_64
                            rdx_64 = r8_46
                            
                            if (((rax_198 u>> ((0x70 - r8_44).b + 0xd)).b & 1) != 0)
                                rdx_64 = r8_46 + 1
                        
                        uint128_t zmm0_12 = *r10_9
                        *r9_21 = rdx_64
                        var_1f8 = zmm0_12.d
                        int32_t rax_201 = var_1f8
                        uint16_t rcx_93 = (rax_201 u>> 0x17).w
                        uint16_t rdx_66 = (rax_201 u>> 0x1f).w << 0xf
                        uint32_t r8_47 = zx.d(rcx_93.b)
                        
                        if (r8_47 u> 0x70)
                            if (r8_47 u< 0x8f)
                                rdx_66 |=
                                    ((rax_201 u>> 0xd).w & 0x3ff) | ((rcx_93 - 0x10) & 0x1f) << 0xa
                            else
                                rdx_66 |= 0x7bff
                        else if (0x70 - r8_47 + 0xe s<= 0x18)
                            int32_t rax_203 = (rax_201 & 0x7fffff) | 0x800000
                            uint16_t r8_49 =
                                ((rax_203 u>> (0x70 - r8_47 + 0xe).b).w & 0x3ff) | rdx_66
                            rdx_66 = r8_49
                            
                            if (((rax_203 u>> ((0x70 - r8_47).b + 0xd)).b & 1) != 0)
                                rdx_66 = r8_49 + 1
                        
                        zmm0_12 = *(r10_9 + 4)
                        r9_21[1] = rdx_66
                        var_1f8 = zmm0_12.d
                        int32_t rax_206 = var_1f8
                        uint16_t rcx_97 = (rax_206 u>> 0x17).w
                        uint16_t rdx_68 = (rax_206 u>> 0x1f).w << 0xf
                        uint32_t r8_50 = zx.d(rcx_97.b)
                        
                        if (r8_50 u> 0x70)
                            if (r8_50 u< 0x8f)
                                rdx_68 |=
                                    ((rax_206 u>> 0xd).w & 0x3ff) | ((rcx_97 - 0x10) & 0x1f) << 0xa
                            else
                                rdx_68 |= 0x7bff
                        else if (0x70 - r8_50 + 0xe s<= 0x18)
                            int32_t rax_208 = (rax_206 & 0x7fffff) | 0x800000
                            uint16_t r8_52 =
                                ((rax_208 u>> (0x70 - r8_50 + 0xe).b).w & 0x3ff) | rdx_68
                            rdx_68 = r8_52
                            
                            if (((rax_208 u>> ((0x70 - r8_50).b + 0xd)).b & 1) != 0)
                                rdx_68 = r8_52 + 1
                        
                        zmm0_12 = *(r10_9 + 8)
                        r9_21[2] = rdx_68
                        var_1f8 = zmm0_12.d
                        int32_t rax_211 = var_1f8
                        uint16_t rcx_101 = (rax_211 u>> 0x17).w
                        uint16_t rdx_70 = (rax_211 u>> 0x1f).w << 0xf
                        uint32_t r8_53 = zx.d(rcx_101.b)
                        
                        if (r8_53 u> 0x70)
                            if (r8_53 u< 0x8f)
                                rdx_70 |=
                                    ((rax_211 u>> 0xd).w & 0x3ff) | ((rcx_101 - 0x10) & 0x1f) << 0xa
                            else
                                rdx_70 |= 0x7bff
                        else if (0x70 - r8_53 + 0xe s<= 0x18)
                            int32_t rax_213 = (rax_211 & 0x7fffff) | 0x800000
                            uint16_t r8_55 =
                                ((rax_213 u>> (0x70 - r8_53 + 0xe).b).w & 0x3ff) | rdx_70
                            rdx_70 = r8_55
                            
                            if (((rax_213 u>> ((0x70 - r8_53).b + 0xd)).b & 1) != 0)
                                rdx_70 = r8_55 + 1
                        
                        r9_21[3] = rdx_70
                        rbx_13 += 1
                        rcx_87 = var_174_6
                        r10_9 += 0x10
                        rdi_4 += 8
                    while (rbx_13 s< rcx_87)
                    
                    rdx_62 = var_170_2
                
                rsi_3 += 1
                r15_5 += 0x400
            while (rsi_3 s< rdx_62)
            
            r12_5 = var_1d8
            r13_3 = arg2
        
        int64_t* rcx_104 = data_143f0f180
        var_218_9.b = 0
        (*(*rcx_104 + 0x518))(rcx_104, r13_3, *(*r12_5 + 0x10), 0, var_218_9, 1)
        int32_t var_178_7 = data_143f02318
        int64_t* r12_7 = arg1 + 0x78
        char var_200_13 = 0
        wchar16 const* const var_148_7 = u"UnknownTexture2D"
        char var_208_13 = 1
        char var_210_13 = 1
        wchar16 const* const var_218_10 = u"LTCAmp"
        int16_t var_150_7 = 0
        var_188 = data_143f02308
        int32_t var_174_7 = 0x40
        int32_t var_170_3 = 0x40
        int32_t var_168_5 = 1
        int32_t var_164_5 = 0x10000
        int16_t var_160_5 = 1
        int32_t var_15c_7 = 0xf
        int32_t var_158_7 = 0x100000
        int32_t var_154_7 = 8
        int16_t var_13f_7 = 0
        char var_140_7 = 0
        var_1d8 = r12_7
        sub_1419a0ce0(&data_1439c9260, r13_3, &var_188, r12_7, var_218_10, var_210_13, var_208_13, 
            var_200_13)
        int64_t* rcx_105 = data_143f0f180
        var_210_13.q = &var_1f4
        var_218_10.d = 1
        int64_t rax_219 =
            (*(*rcx_105 + 0x510))(rcx_105, r13_3, *(*r12_7 + 0x10), 0, var_218_10, var_210_13, 0, 1)
        int32_t rsi_4 = 0
        int32_t rax_220 = var_170_3
        
        if (rax_220 s> 0)
            int32_t rcx_106 = var_174_7
            void* const r15_6 = &data_142fa7834
            
            do
                int32_t rbx_14 = 0
                
                if (rcx_106 s> 0)
                    int64_t rdi_5 = 0
                    void* const r11_7 = r15_6
                    
                    do
                        uint64_t r9_24 = zx.q(rsi_4 * var_1f4)
                        var_1f8 = *(r11_7 - 4)
                        int32_t rax_221 = var_1f8
                        uint16_t rcx_108 = (rax_221 u>> 0x17).w
                        uint16_t* r9_25 = r9_24 + rdi_5
                        uint16_t rdx_75 = (rax_221 u>> 0x1f).w << 0xf
                        uint32_t r8_60 = zx.d(rcx_108.b)
                        
                        if (r8_60 u> 0x70)
                            if (r8_60 u< 0x8f)
                                rdx_75 |=
                                    ((rcx_108 - 0x10) & 0x1f) << 0xa | ((rax_221 u>> 0xd).w & 0x3ff)
                            else
                                rdx_75 |= 0x7bff
                        else if (0x70 - r8_60 + 0xe s<= 0x18)
                            int32_t rax_223 = (rax_221 & 0x7fffff) | 0x800000
                            uint16_t r8_62 =
                                ((rax_223 u>> (0x70 - r8_60 + 0xe).b).w & 0x3ff) | rdx_75
                            rdx_75 = r8_62
                            
                            if (((rax_223 u>> ((0x70 - r8_60).b + 0xd)).b & 1) != 0)
                                rdx_75 = r8_62 + 1
                        
                        int32_t zmm0_13 = *r11_7
                        *(r9_25 + rax_219) = rdx_75
                        var_1f8 = zmm0_13
                        int32_t rax_226 = var_1f8
                        uint16_t rcx_112 = (rax_226 u>> 0x17).w
                        uint16_t rdx_77 = (rax_226 u>> 0x1f).w << 0xf
                        uint32_t r8_63 = zx.d(rcx_112.b)
                        
                        if (r8_63 u> 0x70)
                            if (r8_63 u< 0x8f)
                                rdx_77 |=
                                    ((rcx_112 - 0x10) & 0x1f) << 0xa | ((rax_226 u>> 0xd).w & 0x3ff)
                            else
                                rdx_77 |= 0x7bff
                        else if (0x70 - r8_63 + 0xe s<= 0x18)
                            int32_t rax_228 = (rax_226 & 0x7fffff) | 0x800000
                            uint16_t r8_65 =
                                ((rax_228 u>> (0x70 - r8_63 + 0xe).b).w & 0x3ff) | rdx_77
                            rdx_77 = r8_65
                            
                            if (((rax_228 u>> ((0x70 - r8_63).b + 0xd)).b & 1) != 0)
                                rdx_77 = r8_65 + 1
                        
                        *(r9_25 + rax_219 + 2) = rdx_77
                        rbx_14 += 1
                        rcx_106 = var_174_7
                        rdi_5 += 4
                        r11_7 += 0x10
                    while (rbx_14 s< rcx_106)
                    
                    rax_220 = var_170_3
                
                rsi_4 += 1
                r15_6 += 0x400
            while (rsi_4 s< rax_220)
            
            r12_7 = var_1d8
            r13_3 = arg2
        
        int64_t* rcx_115 = data_143f0f180
        var_218_10.b = 0
        (*(*rcx_115 + 0x518))(rcx_115, r13_3, *(*r12_7 + 0x10), 0, var_218_10, 1)
        result = arg1
        *(result + 0xd0) = result_1

__security_check_cookie(rax_1 ^ &var_238)
return result
