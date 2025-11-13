// 函数: sub_1422a5c00
// 地址: 0x1422a5c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1ad0)
void var_1af8
int64_t rax_1 = __security_cookie ^ &var_1af8
void** result = *arg1

if (*result != 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int128_t zmm6 = arg2[1]
    float zmm7[0x4] = *arg2
    float zmm9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    zmm9[0] = zmm9[0] f- arg1[4].d
    float zmm11[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    zmm11[0] = zmm11[0] f- *(arg1 + 0x1c)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    zmm7[0] = zmm7[0] f- arg1[3].d
    uint64_t rcx = zx.q(data_14401b1a0)
    zmm7[1] = zmm11[0]
    zmm7[2] = zmm9[0]
    int64_t rax_2 = *(ThreadLocalStoragePointer + (rcx << 3))
    zmm7[0] = zmm7[0]
    zmm7[3] = temp0_3[0]
    int96_t var_1ab8_1 = zmm6.12
    
    if (data_143f52fe8 s> *(0x14 + rax_2))
        _Init_thread_header(&data_143f52fe8)
        
        if (data_143f52fe8 == 0xffffffff)
            atexit(sub_142d0b080)
            _Init_thread_footer(&data_143f52fe8)
    
    int32_t rax_3 = data_143f52fe4
    data_143f52fe0 = 0
    
    if (rax_3 s< 0x64)
        sub_1405c5570(&data_143f52fd8, 0x64)
    
    void* i = arg1[2]
    float var_1a28[0x4] = zmm7
    int128_t var_1a18_1 = zmm6
    float var_19f8_1[0x4] = *(i + 0x60)
    int128_t var_19e8_1 = *(i + 0x70)
    float var_19d8_1[0x4] = *(i + 0x80)
    int64_t var_108_1 = 0
    int32_t var_f8_1 = 0
    int32_t var_f4_1 = 0x63
    int32_t var_e0_1 = 0
    sub_1422a7cd0(&var_1a28)
    float zmm7_1[0x4]
    uint128_t zmm8_1
    result, zmm7_1, zmm8_1 = sub_14228fab0(&var_1a28)
    
    while (i != 0)
        int64_t rdi_1 = sx.q(data_143f52fe0)
        int64_t rsi_2 = sx.q(var_e0_1) * 0xb0 + *i
        int32_t rax_6 = (rdi_1 + 1).d
        bool cond:1_1 = rax_6 s<= data_143f52fe4
        data_143f52fe0 = rax_6
        
        if (not(cond:1_1))
            sub_1405a4d70(&data_143f52fd8)
        
        *(data_143f52fd8 + (rdi_1 << 3)) = rsi_2
        var_e0_1 += 1
        result, zmm7_1, zmm8_1 = sub_14228fab0(&var_1a28)
    
    if (var_108_1 != 0)
        result = sub_140a74f90(var_108_1)
    
    int32_t rdi_2 = 0
    int32_t rcx_6 = data_143f52fe0
    int32_t r11_5 = (*(arg5 + 8) * arg4[1] + *(arg5 + 4)) * *arg4 + *arg5
    
    if (rcx_6 s> 0)
        uint128_t zmm1_1 = var_1ab8_1.d
        int32_t** r14_1 = nullptr
        float zmm2_1[0x4] = var_1ab8_1:4.d
        zmm7_1[0] = zmm7_1[0] f- zmm1_1.d
        float zmm3_1[0x4] = var_1ab8_1:8.d
        zmm11[0] = zmm11[0] - zmm2_1[0]
        uint128_t var_58_1 = zmm8_1
        zmm9[0] = zmm9[0] - zmm3_1[0]
        uint128_t zmm10
        uint128_t var_78_1 = zmm10
        float zmm12[0x4]
        float var_98_1[0x4] = zmm12
        float zmm13[0x4]
        float var_a8_1[0x4] = zmm13
        int128_t zmm14
        int128_t var_b8_1 = zmm14
        float var_1a98_1[0x4] = zmm7_1
        float var_1a78_1[0x4] = zmm11
        float var_1a88_1[0x4] = zmm9
        int128_t zmm15
        int128_t var_c8_1 = zmm15
        
        do
            zmm8_1 = zmm1_1
            zmm12 = zmm2_1
            int32_t i_1 = 0
            int32_t* r10_1 = *(r14_1 + data_143f52fd8)
            zmm1_1 = _mm_cvtepi32_ps(zx.o(arg3[2]))
            zmm10 = r10_1[3]
            zmm7_1[0] = zmm7_1[0] f- *r10_1
            zmm10.d = zmm10.d f* zmm10.d
            uint128_t zmm0_1
            zmm0_1.d = zmm10.d f* zmm10.d
            zmm14.d = 1f f/ zmm10.d
            zmm15.d = -1f f/ zmm0_1.d
            uint64_t var_1aa8_1 = *arg3
            zmm0_1 = _mm_cvtepi32_ps(zx.o(var_1aa8_1.d))
            result = var_1aa8_1 u>> 0x20
            bool cond:2_1 = arg3[2] s<= 0
            zmm8_1.d = zmm8_1.d f/ zmm0_1.d
            zmm0_1 = _mm_cvtepi32_ps(zx.o(result.d))
            zmm8_1.d = zmm8_1.d f+ zmm8_1.d
            zmm12[0] = zmm12[0] f/ zmm0_1.d
            zmm0_1.d = zmm3_1.d f/ zmm1_1.d
            zmm12[0] = zmm12[0] + zmm12[0]
            zmm1_1.d = zmm11.d f- r10_1[1]
            zmm0_1.d = zmm0_1.d f+ zmm0_1.d
            zmm11 = zmm9
            zmm11[0] = zmm11[0] f- r10_1[2]
            int64_t var_1ad0
            var_1ad0.d = zmm1_1.d
            int32_t var_1ad4_1 = zmm0_1.d
            
            if (not(cond:2_1))
                do
                    int32_t j = 0
                    
                    if (arg3[1] s> 0)
                        zmm9 = zmm1_1
                        
                        do
                            int32_t k = 0
                            
                            if (*arg3 s> 0)
                                float zmm6_1 = zmm9[0] * zmm9[0]
                                float zmm5_1 = zmm7_1[0]
                                zmm11[0] = zmm11[0] * zmm11[0]
                                
                                do
                                    float zmm4_1 = zmm5_1 * zmm5_1 + zmm6_1 + zmm11[0]
                                    
                                    if (not(zmm4_1 f>= zmm10.d))
                                        zmm1_1 = *(r10_1 + 0x10)
                                        zmm2_1 = *(r10_1 + 0x40)
                                        zmm3_1 = *(r10_1 + 0x70)
                                        zmm4_1 = zmm4_1 f* zmm15.d f+ zmm14.d
                                        zmm0_1 = zmm4_1
                                        int32_t rax_14 = (arg4[1] * i_1 + j) * *arg4 + k
                                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
                                        int64_t rcx_7 = sx.q(rax_14 + r11_5)
                                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm0_1)
                                        float temp0_9[0x4] = _mm_mul_ps(zmm2_1, zmm0_1)
                                        float temp0_10[0x4] = _mm_mul_ps(zmm3_1, zmm0_1)
                                        uint128_t* rax_18 = rcx_7 * 0x30 + *arg7
                                        *rax_18 = _mm_add_ps(*rax_18, zmm1_1)
                                        rax_18[1] = _mm_add_ps(rax_18[1], temp0_9)
                                        rax_18[2] = _mm_add_ps(rax_18[2], temp0_10)
                                        result = *arg6
                                        *(result + (rcx_7 << 2)) =
                                            zmm4_1 f+ *(result + (rcx_7 << 2))
                                    
                                    k += 1
                                    zmm5_1 = zmm5_1 f+ zmm8_1.d
                                while (k s< *arg3)
                            
                            j += 1
                            zmm9[0] = zmm9[0] + zmm12[0]
                        while (j s< arg3[1])
                        
                        zmm0_1 = var_1ad4_1
                        zmm1_1 = var_1ad0.d
                    
                    i_1 += 1
                    zmm11[0] = zmm11[0] f+ zmm0_1.d
                while (i_1 s< arg3[2])
                
                rcx_6 = data_143f52fe0
                zmm7_1 = var_1a98_1
                zmm9 = var_1a88_1
                zmm2_1 = var_1ab8_1:4.d
                zmm3_1 = var_1ab8_1:8.d
            
            zmm11 = var_1a78_1
            rdi_2 += 1
            zmm1_1 = var_1ab8_1.d
            r14_1 = &r14_1[1]
        while (rdi_2 s< rcx_6)

__security_check_cookie(rax_1 ^ &var_1af8)
return result
