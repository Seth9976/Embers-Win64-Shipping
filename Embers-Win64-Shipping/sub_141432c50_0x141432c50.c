// 函数: sub_141432c50
// 地址: 0x141432c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9f8
int64_t rax_1 = __security_cookie ^ &var_9f8
int64_t rdx = arg2[0x53]
int64_t* r15 = arg1
int64_t rcx

if (rdx != 0)
    rcx = arg2[0x54]

char r8

if (rdx == 0 || rcx == 0 || arg2[0x55] == 0)
    rcx = arg2[0x54]
    r8 = 0
else
    r8 = 1

bool cond:0 = arg2[0x52].b == 0
void* result = arg2[0x51]
float zmm12[0x4] = *(arg2 + 0x1c0)
float zmm0[0x4] = *(arg2 + 0x1d0)
float zmm11[0x4] = *(arg2 + 0x1e0)
uint64_t r13 = zx.q(r8)
int32_t var_984 = r13.d
void* result_2 = result
int32_t i = ((r13 << 1) + 1).d
int64_t var_f0 = rdx
int32_t i_1 = i
int64_t var_e8 = rcx
float var_8f8[0x4] = zmm12
float var_8e8[0x4] = zmm0
float var_8d8[0x4] = zmm11
float zmm3[0x4]

if (not(cond:0))
    zmm0 = data_143dbb200
    zmm3 = data_143dbb1f8
    zmm11 = data_14399f668
    float temp0_1[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm0 = data_14399f670
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    zmm11 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, zmm0[0].q), temp0_4[0].q)
    var_8d8 = zmm11
    var_8e8 = temp0_3

void* rdi = nullptr

if (r13.d u< i)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    result = &(&result_2)[r13]
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    void* result_1 = result
    
    do
        if (r15[1].d s>= 1)
            int64_t* r15_1 = *result
            
            if (r15_1 != 0)
                for (int32_t j = 0; j s< 6; j += 1)
                    float zmm1[0x4] = *(arg2 + 0x1d0)
                    float var_910 = zmm1[0]
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float var_738_1[0x4] = zmm1
                    float var_908_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    float var_90c_1 = temp0_7[0]
                    uint32_t var_838[0x4]
                    uint32_t zmm0_1[0x4]
                    uint32_t zmm1_1[0x4]
                    uint32_t zmm2_1[0x4]
                    uint32_t zmm3_1[0x4]
                    float zmm6_1[0x4]
                    float zmm13_1[0x4]
                    int32_t zmm14_1
                    int32_t zmm15_1
                    
                    if (arg2[0x52].b == 0)
                        float var_678[0x4][0x4]
                        float (* rax_3)[0x4]
                        rax_3, zmm13_1, zmm14_1, zmm15_1 = sub_1414190a0(&var_678, j)
                        zmm1_1 = rax_3[1]
                        var_838 = *rax_3
                        zmm0_1 = rax_3[2]
                        uint32_t var_828_2[0x4] = zmm1_1
                        zmm1_1 = rax_3[3]
                        uint32_t var_818_2[0x4] = zmm0_1
                        uint32_t var_808_2[0x4] = zmm1_1
                    else
                        float zmm4[0x4] = data_143ecec90
                        float temp0_9[0x4] = _mm_add_ps(zmm12, zmm12)
                        float temp0_10[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
                        float temp0_11[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                        float temp0_13[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x29), temp0_10)
                        float temp0_14[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        float temp0_15[0x4] = _mm_mul_ps(temp0_9, zmm12)
                        float temp0_17[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x12), temp0_14)
                        float temp0_20[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x1a), 
                            _mm_shuffle_ps(temp0_15, temp0_15, 1))
                        float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_13)
                        float temp0_22[0x4] = _mm_sub_ps(temp0_13, temp0_17)
                        float temp0_23[0x4] = _mm_sub_ps(zmm4, temp0_20)
                        float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm11)
                        float temp0_25[0x4] = _mm_mul_ps(temp0_11, temp0_22)
                        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_23, zmm11), data_143ececa0)
                        float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0x32)
                        float temp0_30[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm3, 0), temp0_28, 0x82)
                        float temp0_31[0x4] = _mm_shuffle_ps(temp0_24, zmm3, 0x31)
                        float temp0_33[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm3, 0x10), temp0_31, 0x88)
                        zmm4[0].q = var_8e8 u>> 0x40
                        float temp0_34[0x4] = _mm_shuffle_ps(temp0_24, temp0_25, 0x12)
                        float temp0_35[0x4] = _mm_shuffle_ps(var_8e8, zmm4, 0xc4)
                        float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, zmm3, 0xe8)
                        float var_7c8_1[0x4] = temp0_35
                        float var_7f8[0x4] = temp0_30
                        float var_7e8_1[0x4] = temp0_33
                        float var_7d8_1[0x4] = temp0_36
                        uint32_t var_7b8[0x4]
                        sub_140631b10(&var_7f8, &var_7b8)
                        float var_6b8[0x4][0x4]
                        float (* rax_2)[0x4]
                        rax_2, zmm13_1, zmm14_1, zmm15_1 = sub_1414190a0(&var_6b8, j)
                        zmm2_1 = var_7b8
                        uint32_t zmm10_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                        float zmm7_1[0x4] = rax_2[1]
                        zmm6_1 = *rax_2
                        float zmm8_1[0x4] = rax_2[2]
                        float zmm9_1[0x4] = rax_2[3]
                        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm7_1)
                        zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        zmm10_1 = _mm_mul_ps(zmm10_1, zmm6_1)
                        zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9_1)
                        zmm10_1 = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(zmm10_1, zmm0_1), _mm_mul_ps(zmm1_1, zmm8_1)), 
                            zmm2_1)
                        uint32_t var_7a8[0x4]
                        uint32_t zmm5_1[0x4] = _mm_shuffle_ps(var_7a8, var_7a8, 0)
                        zmm0_1 = _mm_shuffle_ps(var_7a8, var_7a8, 0x55)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm6_1)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                        uint32_t var_728_1[0x4] = zmm10_1
                        var_838 = zmm10_1
                        zmm1_1 = _mm_shuffle_ps(var_7a8, var_7a8, 0xaa)
                        zmm5_1 = _mm_add_ps(zmm5_1, zmm0_1)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                        zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(var_7a8, var_7a8, 0xff), zmm9_1)
                        zmm5_1 = _mm_add_ps(_mm_add_ps(zmm5_1, zmm1_1), zmm2_1)
                        uint32_t var_798[0x4]
                        uint32_t zmm4_1[0x4] = _mm_shuffle_ps(var_798, var_798, 0)
                        zmm0_1 = _mm_shuffle_ps(var_798, var_798, 0x55)
                        zmm1_1 = _mm_shuffle_ps(var_798, var_798, 0xaa)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                        zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(var_798, var_798, 0xff), zmm9_1)
                        uint32_t var_718_1[0x4] = zmm5_1
                        uint32_t var_828_1[0x4] = zmm5_1
                        zmm4_1 = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm4_1, zmm6_1), zmm0_1), zmm1_1), 
                            zmm2_1)
                        uint32_t var_788[0x4]
                        zmm3_1 = _mm_shuffle_ps(var_788, var_788, 0)
                        zmm0_1 = _mm_shuffle_ps(var_788, var_788, 0x55)
                        zmm3_1 = _mm_mul_ps(zmm3_1, zmm6_1)
                        zmm1_1 = _mm_shuffle_ps(var_788, var_788, 0xaa)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                        zmm2_1 = _mm_shuffle_ps(var_788, var_788, 0xff)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                        zmm2_1 = _mm_mul_ps(zmm2_1, zmm9_1)
                        uint32_t var_708_1[0x4] = zmm4_1
                        uint32_t var_818_1[0x4] = zmm4_1
                        zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm2_1)
                        uint32_t var_6f8_1[0x4] = zmm3_1
                        uint32_t var_808_1[0x4] = zmm3_1
                    
                    (*(*r15_1 + 0x340))(r15_1, zmm1_1)
                    int32_t rbx_1 = int.d(zmm0_1[0])
                    (*(*r15_1 + 0x338))(r15_1)
                    zmm1_1 = data_142d3f660
                    zmm3_1 = data_14399fa0c
                    int32_t rax_6 = int.d(zmm0_1[0])
                    int32_t var_92c_1 = rbx_1
                    int32_t var_868_1 = 0
                    int64_t var_860_1 = 0
                    int64_t var_848_1 = 0
                    int32_t var_83c_1 = 0
                    uint32_t var_858_1[0x4] = zmm1_1
                    int64_t rbx_2 = rax_6.q
                    uint32_t var_758_1[0x4] = zmm1_1
                    zmm2_1 = _mm_cvtepi32_ps(zx.o(rax_6))
                    zmm0_1 = _mm_cvtepi32_ps(zx.o((rbx_2 u>> 0x20).d))
                    zmm2_1[0] = zmm2_1[0] f/ zmm0_1[0]
                    zmm0_1 = data_142f79450
                    zmm2_1[0] = zmm2_1[0] f* 0.99999994f
                    uint32_t var_878_1[0x4] = zmm0_1
                    uint128_t var_778 = zmm0_1
                    zmm0_1 = var_868_1.o
                    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                    zmm0_1[0] = zmm2_1[0]
                    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                    var_868_1.o = zmm0_1
                    uint32_t var_768_1[0x4] = zmm0_1
                    zmm0_1 = var_848_1.o
                    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
                    zmm0_1[0] = zmm3_1[0]
                    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                    var_848_1.o = zmm0_1
                    uint32_t var_748_1[0x4] = zmm0_1
                    void var_638
                    sub_1422d7fd0(&var_638)
                    zmm6_1 = zmm13_1
                    
                    if (r8 != 0)
                        zmm6_1 = arg2[0x56].d
                        
                        if (r13.d != 1)
                            zmm6_1[0] = zmm6_1[0] f* zmm15_1
                        else
                            zmm6_1[0] = zmm6_1[0] f* zmm14_1
                    
                    int64_t rax_9 = sub_140cbe180(r15_1)
                    int64_t r14_1 = rax_9 + 0x48
                    
                    if (rax_9 == 0)
                        r14_1 = 0
                    
                    int64_t rax_11 = (*(*arg2 + 0x520))(arg2)
                    int32_t var_9d8
                    var_9d8.q = &var_838
                    void*** rax_12
                    rax_12, zmm11, zmm12 = sub_14141b2f0(arg1, arg2, r14_1, rbx_2, var_9d8, 
                        &var_910, &var_778, *(arg2 + 0x23c), 1, &var_638, zmm13_1[0], rax_11, 
                        zmm6_1[0])
                    rax_12[0xb].d = zx.d(*(arg2 + 0x1f1))
                    int64_t rax_13 = sub_140cbe180(r15_1)
                    int32_t rdx_5 = arg2[0x4e].d
                    int32_t rbx_3 = 0
                    uint64_t var_980 = 0
                    int32_t var_978_1 = 0
                    int32_t var_974_1 = 0
                    
                    if (rdx_5 s<= 1)
                        void* rax_15 = arg2[0x14]
                        
                        if (rax_15 != 0)
                            int64_t var_900 = *(rax_15 + 0x18)
                            sub_140b63e00(&var_900, &var_980)
                            rbx_3 = var_978_1
                    else if (&var_980 != &arg2[0x4d])
                        int64_t r13_1 = arg2[0x4d]
                        rbx_3 = rdx_5
                        
                        if (rdx_5 != 0)
                            sub_1405a4c70(&var_980, rdx_5, 0)
                            memcpy(var_980, r13_1, rbx_3 * 2)
                        
                        r13 = zx.q(var_984)
                    
                    void*** var_970 = rax_12
                    uint64_t r14_3 = var_980
                    uint64_t var_960 = 0
                    int32_t var_954
                    
                    if (rbx_3 != 0)
                        sub_1405a4c70(&var_960, rbx_3, 0)
                        memcpy(var_960, r14_3, rbx_3 * 2)
                    else
                        var_954 = 0
                    
                    if (sub_140a80f40() == 0)
                        uint32_t rax_18
                        
                        if (data_143f138f4 == 0 && data_143de5480 != 0)
                            rax_18.b = GetCurrentThreadId() == data_143de5470
                        
                        int32_t var_958_1
                        
                        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_18.b == 0))
                            void var_6e8
                            void** rax_25 = sub_14141bb80(&var_6e8, nullptr, 0xff)
                            void* rdx_10 = *rax_25
                            *(rdx_10 + 0x10) = var_970
                            *(rdx_10 + 0x18) = rax_13
                            *(rdx_10 + 0x20) = 0
                            *(rdx_10 + 0x20) = var_960
                            var_960 = 0
                            *(rdx_10 + 0x28) = rbx_3
                            *(rdx_10 + 0x2c) = var_954
                            var_958_1.q = 0
                            *(rdx_10 + 0x30) = j
                            void* rcx_26 = *rax_25
                            int32_t rax_28 = rax_25[2].d
                            int64_t* rdx_11 = rax_25[1]
                            int64_t* rbx_4 = *(rcx_26 + 0x40)
                            int64_t* var_928_1 = rbx_4
                            void* r14_4 = &rbx_4[9]
                            
                            if (rbx_4 != 0)
                                *r14_4 += 1
                                zmm11 = var_8d8
                                zmm12 = var_8f8
                                rbx_4 = var_928_1
                            
                            sub_1405e4b20(rcx_26, rdx_11, rax_28, 1)
                            
                            if (rbx_4 != 0)
                                int32_t rax_29 = *r14_4
                                *r14_4 -= 1
                                
                                if (rax_29 == 1)
                                    sub_140a2f6e0(var_928_1)
                                
                                zmm12 = var_8f8
                                zmm11 = var_8d8
                        else
                            void*** var_8c8 = var_970
                            int64_t var_8c0_1 = rax_13
                            uint64_t rax_21 = var_960
                            int32_t var_8b0_1 = rbx_3
                            int32_t var_8ac_1 = var_954
                            int32_t j_1 = j
                            var_960 = 0
                            var_958_1.q = 0
                            zmm11, zmm12 = sub_1414152d0(&var_8c8, &data_143f02b98)
                            
                            if (rax_21 != 0)
                                sub_140a74f90(rax_21)
                    else
                        zmm11, zmm12 = sub_1414152d0(&var_970, &data_143f02b98)
                    
                    uint64_t rcx_28 = var_960
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    uint64_t rcx_29 = var_980
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    int64_t var_108
                    
                    if (var_108 != 0)
                        sub_140a74f90(var_108)
                
                result = result_1
                i = i_1
            
            r15 = arg1
        
        r13 = zx.q(r13.d + 1)
        result += 8
        var_984 = r13.d
        result_1 = result
    while (r13.d u< i)

if (r8 != 0)
    void* rax_30 = sub_140cbe180(arg2[0x53])
    void* rax_31 = sub_140cbe180(arg2[0x54])
    void* rax_32 = sub_140cbe180(arg2[0x55])
    int32_t rsi_1 = r15[1].d
    int32_t var_888_1 = rsi_1
    void* var_898_1 = rax_31
    
    if (sub_140a80f40() == 0)
        uint32_t rax_34
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_34.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_34.b == 0))
            void var_6d0
            void** rax_35 = sub_14141c210(&var_6d0, nullptr, 0xff)
            void* rcx_35 = *rax_35
            *(rcx_35 + 0x10) = rax_30.o
            *(rcx_35 + 0x20) = rax_32.o
            void* rcx_36 = *rax_35
            int32_t r8_10 = rax_35[2].d
            int64_t* rdx_14 = rax_35[1]
            int64_t* rbx_6 = *(rcx_36 + 0x38)
            int64_t* var_918_1 = rbx_6
            void* rdi_1 = &rbx_6[9]
            
            if (rbx_6 != 0)
                *rdi_1 += 1
                rbx_6 = var_918_1
            
            result = sub_1407c96b0(rcx_36, rdx_14, r8_10, 1)
            
            if (rbx_6 != 0)
                int32_t r14_5 = *rdi_1
                *rdi_1 -= 1
                
                if (r14_5 == 1)
                    result = sub_140a2f6e0(var_918_1)
        else
            int64_t* r9_3 = rax_32 + 0x48
            
            if (rax_32 == 0)
                r9_3 = nullptr
            
            result = sub_141421bd0(&data_143f02b98, rax_30, rax_31, r9_3, rsi_1)
    else
        if (rax_32 != 0)
            rdi = rax_32 + 0x48
        
        result = sub_141421bd0(&data_143f02b98, rax_30, rax_31, rdi, rsi_1)

__security_check_cookie(rax_1 ^ &var_9f8)
return result
