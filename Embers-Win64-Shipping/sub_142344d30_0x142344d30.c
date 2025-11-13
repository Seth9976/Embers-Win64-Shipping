// 函数: sub_142344d30
// 地址: 0x142344d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
uint64_t rsi = zx.q(arg2)
uint64_t rdi = zx.q(arg3)
TEB* gsbase
void* result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cd80cc s> *(0x14 + result))
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && rsi.d != 0 && rdi.d != 0)
    int64_t* rcx_2 = data_143e29f28
    int64_t* rbx_1 = arg1[0x4b]
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 != 0)
            rbx_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_1 = nullptr
    
    int64_t rax_4 = 0
    
    if (rbx_1 != 0)
        rax_4 = arg1[0x4a]
    
    int64_t var_178 = rax_4
    int64_t* var_170_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* var_188
    result = (*(*rcx_2 + 0x28))(rcx_2, &var_188, &var_178)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (var_188 != 0)
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int32_t rax_8 = sub_142007a80(arg4)
        float var_168
        uint128_t zmm0_1 = sub_140e15940(var_188, &var_168)
        float var_190
        uint128_t zmm0_2
        uint128_t zmm1_1
        zmm0_2, zmm1_1 = sub_140e12930(var_188, &var_190, zmm0_1)
        int64_t* rcx_9 = *(var_188 + 0x910)
        int64_t rdx_3 = *rcx_9
        int32_t rax_9 = (*(rdx_3 + 0x68))(rcx_9, rdx_3)
        
        if (rax_8 != rax_9)
            zmm0_2 = sub_140e25450(var_188, rax_8)
            *(arg1 + 0xbc) = rax_8
        
        void* rcx_11 = data_143e29f28
        rbx_1.b = 0
        uint128_t zmm9_1
        zmm9_1.d = float.s(rsi)
        uint128_t zmm8_1
        zmm8_1.d = float.s(rdi)
        int32_t var_198 = zmm9_1.d
        int32_t var_194_1 = zmm8_1.d
        int32_t var_18c
        int32_t var_164
        float var_b8
        int32_t var_b4_1
        uint128_t zmm6_1
        uint128_t zmm7_1
        float zmm10_1
        
        if (*(rcx_11 + 0x172) != 0)
            zmm7_1 = zx.o(0)
            zmm6_1 = zx.o(0)
            var_b8 = 0f
            zmm10_1 = (zx.o(0)).d
            var_b4_1 = 0
            rbx_1.b = 1
        else
            float zmm2_1 = var_168
            zmm0_2 = var_164
            var_b8 = zmm2_1
            var_b4_1 = zmm0_2.d
            zmm1_1.d = zmm0_2.d f+ var_18c
            float var_b0_1 = zmm2_1 + var_190
            int32_t var_ac_1 = zmm1_1.d
            float var_158
            zmm1_1 = sub_140e69d90(rcx_11, &var_158, &var_b8)
            zmm10_1 = (zx.o(0)).d
            float var_154
            
            if (rax_8 != 2)
                int64_t* rcx_12 = data_143e29f28
                void* const var_110 = nullptr
                int32_t var_108_1 = 0
                int128_t var_d8
                __builtin_memset(&var_d8, 0, 0x20)
                (*(*rcx_12 + 0x1b0))(zx.o(0), zx.o(0))
                
                if (var_108_1 s<= 0)
                    zmm7_1 = zx.o(0)
                    zmm6_1 = zx.o(0)
                    var_b8 = 0f
                    var_b4_1 = 0
                    
                    if (rax_8 == 1)
                        int32_t var_118
                        zmm9_1 = zx.o(var_118)
                        int32_t var_114
                        zmm8_1 = zx.o(var_114)
                    label_1423450f5:
                        zmm8_1 = _mm_cvtepi32_ps(zmm8_1)
                        zmm9_1 = _mm_cvtepi32_ps(zmm9_1)
                        int32_t var_194_2 = zmm8_1.d
                        var_198 = zmm9_1.d
                else
                    void* const rcx_13 = var_110
                    var_178.o = *(rcx_13 + 0x28)
                    
                    if (var_108_1 s> 1)
                        uint64_t i_1 = zx.q(var_108_1 - 1)
                        float zmm3_1 = var_158
                        int32_t* rcx_14 = rcx_13 + 0x8c
                        uint64_t i
                        
                        do
                            if (not(zmm3_1 f!= _mm_cvtepi32_ps(zx.o(rcx_14[-1])).d)
                                    && not(var_154 f!= _mm_cvtepi32_ps(zx.o(*rcx_14)).d))
                                var_178.o = *(rcx_14 - 0x14)
                            
                            rcx_14 = &rcx_14[0x14]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    int64_t r8_2 = var_178
                    uint32_t rdx_7 = (r8_2 u>> 0x20).d
                    zmm7_1 = _mm_cvtepi32_ps(zx.o(r8_2.d))
                    var_b8 = zmm7_1.d
                    zmm6_1 = _mm_cvtepi32_ps(zx.o(rdx_7))
                    var_b4_1 = zmm6_1.d
                    
                    if (rax_8 == 1)
                        zmm9_1 = zx.o(var_170_1.d - r8_2.d)
                        zmm8_1 = zx.o((var_170_1 u>> 0x20).d - rdx_7)
                        goto label_1423450f5
                
                zmm1_1 = sub_140d72800(&var_110)
                rbx_1.b = 1
            else if (rax_9 != rax_8 || zmm9_1.d f!= var_190 || zmm8_1.d f!= var_18c)
                zmm7_1 = var_158
                int32_t var_150
                zmm1_1.d = var_150.d f- zmm7_1.d
                zmm6_1 = var_154
                int32_t var_14c
                zmm0_2.d = var_14c.d f- zmm6_1.d
                
                if (not(zmm9_1.d f>= zmm1_1.d))
                    zmm1_1.d = zmm1_1.d f- zmm9_1.d
                    zmm1_1.d = zmm1_1.d f* 0.5f
                    zmm1_1.d = _mm_max_ss(zmm1_1.d, 0).d f+ zmm7_1.d
                    zmm7_1 = zmm1_1
                
                if (not(zmm8_1.d f>= zmm0_2.d))
                    zmm0_2.d = zmm0_2.d f- zmm8_1.d
                    zmm0_2.d = zmm0_2.d f* 0.5f
                    zmm0_2.d = _mm_max_ss(zmm0_2.d, 0).d f+ zmm6_1.d
                    zmm6_1 = zmm0_2
                
                var_b8 = zmm7_1.d
                var_b4_1 = zmm6_1.d
                rbx_1.b = 1
            else
                zmm6_1 = var_b4_1
                zmm7_1 = var_b8
            void* rax_14 = data_143f5b298
            zmm0_2 = zx.o(0)
            int64_t var_148
            __builtin_memset(&var_148, 0, 0x30)
            int64_t* rcx_19 = *(rax_14 + 0xb08)
            
            if (rcx_19 != 0)
                if ((*(*rcx_19 + 0x100))(rcx_19) != 0)
                    int64_t* rcx_20 = *(data_143f5b298 + 0xb08)
                    int64_t* rax_19 = (*(*rcx_20 + 0x100))(rcx_20)
                    int64_t r8_3 = *rax_19
                    
                    if ((*(r8_3 + 0x60))(rax_19, &var_148, r8_3) != 0)
                        int128_t var_130
                        int32_t rcx_22 = var_130.d
                        int32_t rax_21 = var_130:4.d
                        
                        if (rcx_22 s> 0 || rax_21 s> 0)
                            rbx_1.b = 1
                            zmm9_1 = _mm_cvtepi32_ps(zx.o(var_130:8.d))
                            zmm8_1 = _mm_cvtepi32_ps(zx.o(var_130:0xc.d))
                            zmm7_1 = _mm_cvtepi32_ps(zx.o(rcx_22))
                            zmm6_1 = _mm_cvtepi32_ps(zx.o(rax_21))
                            var_198 = zmm9_1.d
                            int32_t var_194_3 = zmm8_1.d
                            var_b8 = zmm7_1.d
                            var_b4_1 = zmm6_1.d
                
                int64_t rcx_23 = var_148
                
                if (rcx_23 != 0)
                    zmm0_2, zmm1_1 = sub_140a74f90(rcx_23)
        
        if (zmm9_1.d f!= var_190 || zmm8_1.d f!= var_18c)
            rdi.b = 1
        else
            rdi.b = 0
        
        if (rbx_1.b == 0 || (rbx_1.b == 1 && not(zmm7_1.d f!= var_168) && zmm6_1.d f== var_164))
            rbx_1.b = 0
        else
            rbx_1.b = 1
        
        rsi.b = rax_8 != rax_9
        
        if (rdi.b != 0 || rbx_1.b != 0 || rsi.b != 0)
            if (((*(arg1 + 0x194) u>> 4).b & 1) != 0)
                (*(arg1[1] + 0x78))(&arg1[1], 0)
            
            if (rsi.b != 0)
                zmm10_1 = sub_140e21b40(var_188, var_b8.q, var_198.q)
            else if (rdi.b == 0)
                sub_140e1c780(var_188, var_b8.q)
            else if (rbx_1.b != 0)
                zmm10_1 = sub_140e21b40(var_188, var_b8.q, var_198.q)
            else
                sub_140e21d50(var_188, var_198.q, zmm0_2, zmm1_1.d)
        
        void* rcx_28 = var_188
        var_b4_1.b = 0
        zmm0_2.d = float.s(zx.q(arg1[0x16].d))
        zmm1_1.d = float.s(zx.q(*(arg1 + 0xb4)))
        zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        float var_160
        sub_140e19290(rcx_28, &var_160, zmm0_2.q, &var_b8, zmm0_2, zmm1_1.d)
        void* rax_27 = var_188
        int32_t* rcx_29 = rax_27 + 0x7a8
        
        if (not(zmm10_1 f!= *rcx_29))
            rcx_29 = rax_27 + 0x7a0
        
        char rcx_30 = *(rax_27 + 0x779)
        float* rax_28 = &var_190
        var_b8.q = *rcx_29
        zmm11 = var_b8
        zmm8_1 = var_b4_1
        
        if (rcx_30 s>= 0)
            rax_28 = &var_160
        
        zmm10_1 = *rax_28
        zmm9_1 = rax_28[1]
        int32_t* rax_29 = &var_198
        
        if (rcx_30 s>= 0)
            rax_29 = &var_b8
        
        float zmm7_2 = *rax_29
        int32_t zmm6_2 = rax_29[1]
        int32_t var_15c
        int32_t rbx_2
        uint128_t zmm0_3
        
        if (zmm11.d f!= var_160 || zmm8_1.d f!= var_15c || rax_8 != rax_9)
            zmm0_3 = var_188.o
            int64_t* rcx_31 = *(data_143e20d08 + 0x20)
            var_178.o = zmm0_3
            void* rax_31 = _mm_bsrli_si128(zmm0_3, 8).q
            
            if (rax_31 != 0)
                *(rax_31 + 8) += 1
            
            rbx_2 = (int.q(zmm6_2)).d
            (*(*rcx_31 + 0x30))(rcx_31, &var_178, int.q(zmm7_2), zx.q(rbx_2))
            (*(*arg1 + 0x18))(arg1, int.q(zmm11.d), int.q(zmm8_1.d), zx.q(rax_8))
        else
            rbx_2 = (int.q(zmm6_2)).d
        
        if (zmm7_2 != zmm10_1 || not(zmm6_2 f== zmm9_1.d))
            zmm0_3 = var_188.o
            int64_t* rcx_33 = *(data_143e20d08 + 0x20)
            var_178.o = zmm0_3
            void* rax_35 = _mm_bsrli_si128(zmm0_3, 8).q
            
            if (rax_35 != 0)
                *(rax_35 + 8) += 1
            
            (*(*rcx_33 + 0x30))(rcx_33, &var_178, int.q(zmm7_2), zx.q(rbx_2))
        
        result = sub_1424243a0()
    
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            result = (**var_180)(var_180)
            int32_t temp3_1 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_180 + 8))(var_180, 1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
