// 函数: sub_142426320
// 地址: 0x142426320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
float zmm1 = *(arg1 + 0x30)
uint64_t result

if (zmm1 < 0f || 0f f> *(arg1 + 0x34) || arg7 == 0)
    result = 0
else
    uint64_t* var_2f0
    __builtin_memset(&var_2f0, 0, 0x14)
    void* rcx = *(arg1 + 0x260)
    zmm1 = zmm1 - (arg4.d f+ *(arg1 + 0x28))
    int32_t var_2b0_1 = arg8.d
    int32_t var_2ac_1 = arg9.d
    int64_t var_2c0 = 0
    float var_2b8_1 = zmm1
    int32_t var_2b4_1 = 0
    void* var_2a8_1 = arg7
    int64_t var_2a0_1 = 0
    void* i_2
    int512_t zmm2
    int512_t zmm3_1
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    float zmm9_1
    int128_t zmm10_1
    int128_t zmm12_1
    int128_t zmm13_1
    zmm2, zmm3_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1, zmm13_1 =
        sub_1424260c0(rcx, &var_2c0, arg3, arg12, &i_2, var_2f0)
    zmm8_1.d = zmm8_1.d f+ *(arg1 + 0x28)
    zmm7_1.d = zmm7_1.d f+ *(arg1 + 0x2c)
    int32_t i_4
    
    if (arg11 != 0)
        int32_t zmm0_1 = (zx.o(0)).d
        void* i = i_2
        
        for (void* rdx_1 = i + sx.q(i_4) * 0x18; i != rdx_1; i += 0x18)
            zmm0_1 = zmm0_1 f+ *(i + 0x14)
        
        zmm7_1.d = zmm7_1.d f+ zmm0_1 f* -0.5f
    
    float zmm11_1 = zmm9_1
    void var_298
    sub_140acc920(&var_298, arg1 + 0x38)
    sub_1405d9400()
    int32_t* var_2f8_2 = &var_298
    void** var_270
    int64_t rdx_3
    int64_t r8
    rdx_3, r8 = sub_1420767c0(&var_270, &data_143dbb1f0, &data_143cd6fd8, arg7, var_2f8_2)
    void* i_6 = i_2
    int64_t i_7 = sx.q(i_4)
    int32_t var_25c_1 = 2
    uint128_t var_230_1 = *arg13
    void* r13_1 = i_6 + i_7 * 0x18
    int32_t var_1d0_1 = zmm13_1.d
    int32_t var_1cc_1 = zmm10_1.d
    uint64_t var_210_1 = arg13[2].q
    int128_t var_220_1 = arg13[1]
    
    if (i_6 != r13_1)
        int128_t var_48_1 = zmm6_1
        int128_t var_a8_1 = zmm12_1
        zmm12_1 = 0x3f000000
        
        do
            zmm6_1 = zmm8_1
            uint128_t zmm0_2
            
            if (arg10 != 0)
                zmm0_2.d = (*(i_6 + 0x10)).d f* zmm12_1.d
                zmm6_1.d = zmm6_1.d f- zmm0_2.d
            
            uint128_t zmm0_3
            
            if (arg2 == 0)
                uint64_t* rax_12
                
                if (*(i_6 + 8) == 0)
                    rax_12 = &data_142d40450
                else
                    rax_12 = *i_6
                
                var_2f0 = rax_12
                zmm2.o = zmm10_1
                void var_2d4
                var_2f8_2 = &var_2d4
                int32_t var_2d8
                zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
                    sub_142403870(arg7, rdx_3, r8, &var_2d8, var_2f8_2, var_2f0)
                zmm0_3 = _mm_cvtepi32_ps(zx.o(var_2d8))
            else
                void var_288
                int64_t* rax_5 = sub_140aae420(&var_288, i_6)
                int64_t var_140
                int64_t rdx_5 = var_140
                var_140 = *rax_5
                *rax_5 = rdx_5
                int64_t var_138
                int64_t rdx_6 = var_138
                var_138 = rax_5[1]
                rax_5[1] = rdx_6
                int32_t var_130_1 = rax_5[2].d
                int64_t* var_280
                
                if (var_280 != 0)
                    var_280[1].d -= 1
                    
                    if (var_280[1].d == 1)
                        (**var_280)(var_280)
                        int32_t rax_9 = *(var_280 + 0xc)
                        *(var_280 + 0xc) -= 1
                        
                        if (rax_9 == 1)
                            (*(*var_280 + 8))(var_280, 1)
                
                void* rbx_2 = *(arg1 + 0x260)
                zmm3_1.o = zmm7_1
                zmm2.o = zmm6_1
                var_270[1](&var_270, rbx_2, zmm2, zmm3_1, var_2f8_2, var_2f0)
                
                if (*(rbx_2 + 0xa0) == 1)
                    sub_14240e030(rbx_2, 0)
                
                int32_t var_1f0
                zmm0_3 = var_1f0
            
            _mm_max_ss(zmm0_3.d, zmm9_1)
            float zmm0_4
            float zmm7_2
            zmm0_4, zmm7_2 = sub_142005cc0(arg7)
            zmm0_2, rdx_3, r8, zmm2, zmm3_1, zmm7_1, zmm8_1, zmm9_1 = sub_142005cc0(arg7)
            zmm0_2.d = zmm0_2.d f* zmm10_1.d
            i_6 += 0x18
            zmm11_1 = zmm11_1 f+ zmm0_2.d
        while (i_6 != r13_1)
        
        i_7 = zx.q(i_4)
    
    *arg5 = int.d(zmm9_1)
    *arg6 = int.d(zmm11_1)
    sub_141fa61e0(&var_270)
    int32_t i_3 = i_4
    void* i_5 = i_2
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_18 = *i_5
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            i_5 += 0x18
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_5 = i_2
    
    if (i_5 != 0)
        sub_140a74f90(i_5)
    
    result = zx.q(i_7.d)

__security_check_cookie(rax_1 ^ &var_318)
return result
