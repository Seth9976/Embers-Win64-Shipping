// 函数: sub_1413d7d70
// 地址: 0x1413d7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t result = __security_cookie ^ &var_3c8
int64_t result_1 = result
void* r15 = *(arg3 + 0x78)
int32_t rdi = arg2

if (r15 != 0)
    int64_t* var_330_1 = &data_143ec4c60
    char var_3a8 = 0
    char* var_390_1 = &var_3a8
    void*** (* var_398)() = j_sub_140597fc0
    int64_t* rax_2 = sub_140a756e0(&var_398, &data_143958018) + 0x10
    int64_t* var_378 = rax_2
    int64_t rcx_1 = *rax_2
    int64_t rcx_2 = rax_2[2]
    char var_360_1 = 0
    int64_t result_2 = rax_2[3]
    rax_2[3] = &var_378
    int64_t* rax_3 = var_378
    rax_3[4].d += 1
    void var_2e8
    sub_1419928d0(&var_2e8, arg1)
    void*** rax_4 = sub_1410fccd0(&var_2e8, &data_143ec4d80, u"ReflectionColorScratchCubemap", 0)
    int32_t i = 0
    int32_t var_380_1 = 0
    float zmm0_2[0x4]
    int512_t zmm6_1
    zmm0_2, zmm6_1 = __libm_sse2_sincosf_(arg7)
    zmm6_1.o = 0x3f800000
    float zmm7_1 = zmm0_2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
    
    do
        int64_t* var_2e0
        int64_t* rax_5
        uint128_t zmm6_2
        rax_5, zmm6_2 = sub_14081d830(0xd0, var_2e0, 1, 0)
        int64_t* rbx_1 = rax_5
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            *(rbx_1 + 0x2c) = 0x3f800000
            *rbx_1 = 0
            rbx_1[1] = 0
            rbx_1[4] = 0
            rbx_1[5].d = 0
            sub_14117af20(&rbx_1[8])
        
        memset(rbx_1, 0, 0xd0)
        int16_t var_340_1 = 0
        char var_33e_1 = 0
        int32_t i_1 = i
        *(rbx_1 + 0x40) = rax_4.o
        float zmm3_1[0x4] = *arg8
        int32_t zmm1_1 = *(arg8 + 4)
        uint128_t zmm0_3 = *(arg8 + 8)
        int32_t zmm2_1 = *(arg8 + 0xc)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        temp0_2[0] = zmm1_1
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        temp0_3[0] = zmm0_3.d
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
        temp0_4[0] = zmm2_1
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
        var_398.o = temp0_5
        *(rbx_1 + 0x20) = temp0_5
        
        if (arg6 == 0)
            zmm0_3 = zx.o(0)
        else
            zmm0_3 = zmm6_2
        
        if (arg5 == 0)
            zmm1_1 = (zx.o(0)).d
        else
            zmm1_1 = zmm6_2.d
        
        int32_t var_37c_1 = zmm0_3.d
        zmm0_3.d = zmm1_1
        rbx_1[2] = zmm0_3.q
        rbx_1[3].d = var_37c_1
        rbx_1[1] = data_14395f4d0
        *rbx_1 = *(r15 + 0x10)
        rbx_1[6].d = zmm7_1
        *(rbx_1 + 0x34) = temp0_1[0]
        *(rbx_1 + 0x1c) = i
        int64_t* var_320_1 = var_330_1
        uint64_t var_384 = zmm0_3.q
        int64_t* var_310_1 = rbx_1
        void*** rax_11
        char rcx_7
        rax_11, rcx_7 = sub_14081d830(0x60, var_2e0, 1, 0)
        void*** rdi_1 = rax_11
        
        if (rax_11 == 0)
            rdi_1 = nullptr
        else
            sub_1413ea550(rcx_7)
            void* var_2f0_1 = &data_143ecd820
            var_398.o = rbx_1.o
            sub_141992bd0(rdi_1, &var_3a8, &var_398, 1)
            *rdi_1 = &data_142f78f58
            *(rdi_1 + 0x38) = arg4.o
            *(rdi_1 + 0x48) = r15.o
            rdi_1[0xb] = rdi.q
        
        sub_1419968d0(&var_2e8, rdi_1)
        rdi = arg2
        i += 1
    while (i u< 6)
    
    sub_14199ef00(&var_2e8)
    result = sub_1410eb9e0(&var_2e8)
    
    if (var_360_1 == 0)
        int64_t* rax_12 = var_378
        char var_360_2 = 1
        rax_12[4].d -= 1
        int64_t* rcx_12 = var_378
        
        if (rcx_2 != rcx_12[2])
            sub_140b16b40(rcx_12, rcx_2)
            rcx_12 = var_378
        
        *rcx_12 = rcx_1
        result = result_2
        var_378[3] = result

__security_check_cookie(result_1 ^ &var_3c8)
return result
