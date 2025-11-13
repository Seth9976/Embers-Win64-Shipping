// 函数: sub_14225b4c0
// 地址: 0x14225b4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
uint64_t result_1 = **arg1
uint64_t result = *(result_1 + 0xa0)

if (result != 0)
    result_1 = result

int64_t* rcx = *(result_1 + 0xf0)

if (rcx != 0)
    result = (*(*rcx + 0xc8))(rcx)
    
    if (result.d != 0)
        int128_t zmm1 = data_143312000
        float zmm6[0x4] = 0x7f7fc99e
        int16_t var_250_1 = 0
        int32_t var_24c_1
        __builtin_memset(&var_24c_1, 0, 0x14)
        void* var_78_1 = nullptr
        int32_t var_70_1 = 0
        float var_268[0x4] = zx.o(0)
        int32_t var_258_1 = 0xffffffff
        int128_t var_238_1 = zmm1
        int32_t var_6c_1 = 0x20
        void var_178
        result = sub_142215230(&var_178, arg2)
        int64_t r12_1 = sx.q(result.d)
        
        if (result.d s> 0)
            int64_t r14_1 = 0
            int64_t var_290
            float var_1d8[0x4]
            float zmm1_1[0x4]
            
            do
                void* rcx_2 = &var_178
                
                if (var_78_1 != 0)
                    rcx_2 = var_78_1
                
                int64_t* rdi_1 = *(rcx_2 + (r14_1 << 3))
                void* rbx_1 = rcx_2 + (r14_1 << 3)
                result = sub_14221b2d0(result_1, rbx_1)
                
                if (result.b != 0)
                    float var_1e8_1[0x4] = data_143312000
                    float var_218[0x4] = zx.o(0)
                    int32_t var_208_1 = 0xffffffff
                    int16_t var_200_1 = 0
                    int32_t var_1fc
                    __builtin_memset(&var_1fc, 0, 0x14)
                    void var_228
                    (*(*rdi_1 + 0xb0))(rdi_1, &var_228)
                    result = arg1[1]
                    int32_t var_21c
                    
                    if (*result == 0)
                        if ((var_21c.b & 1) != 0)
                        label_14225b656:
                            float var_1a8[0x3][0x4]
                            float (* rax_6)[0x4]
                            float zmm8_1[0x4]
                            rax_6, zmm6, zmm8_1 = sub_14226ecf0(&var_1a8, rbx_1)
                            float zmm2[0x4] = *rax_6
                            uint128_t zmm3 = rax_6[1]
                            var_1d8[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                            float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                            int16_t var_298 = 0x407
                            int64_t rax_7 = *rdi_1
                            var_1d8[0] = zmm2[0]
                            int128_t var_1c8
                            var_1c8.d = zmm3.d
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                            float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            var_1c8:8.d = zmm3.d
                            var_1d8[2] = temp0_2[0]
                            var_1d8[3] = temp0_5[0]
                            var_1c8:4.d = temp0_3[0]
                            class physx::PxGeometry* rax_8 = (*(rax_7 + 0x40))(rdi_1, &var_1a8)
                            float (* rdx_6)[0x4] = arg1[4]
                            int32_t* rcx_9 = arg1[3]
                            float (* rax_9)[0x4] = arg1[2]
                            zmm8_1[0] = zmm8_1[0] / *rdx_6
                            zmm8_1[0] = zmm8_1[0] f* rcx_9[1]
                            zmm8_1[0] = zmm8_1[0] f* *rcx_9
                            zmm8_1[0] = zmm8_1[0] f* rcx_9[2]
                            float var_280 = zmm8_1[0]
                            float var_27c_1 = zmm8_1[0]
                            float var_278_1 = zmm8_1[0]
                            var_290.d = (*rax_9)[0]
                            var_290:4.d = (*rax_9)[1][0]
                            int64_t var_288
                            var_288.d = (*rax_9)[2][0]
                            result = physx::PxGeometryQuery::raycast(&var_290, &var_280, rax_8, 
                                &var_1d8, (*rdx_6)[0], &var_298, 1, &var_218)
                            int64_t i_1 = sx.q(result.d)
                            
                            if (i_1 == 1)
                                int128_t var_1f8
                                void* rbx_2 = &var_1f8:4
                                int64_t i
                                
                                do
                                    zmm2 = *(rbx_2 + 0x10)
                                    
                                    if (not(zmm2[0] >= zmm6[0]))
                                        int16_t rax_10 = *(rbx_2 - 0xc)
                                        zmm1_1 = zx.o(*(rbx_2 - 0x14))
                                        zmm6 = zmm2
                                        var_268 = *(rbx_2 - 0x24)
                                        int16_t var_250_2 = rax_10
                                        var_258_1.q = zmm1_1.q
                                        var_24c_1.o = *(rbx_2 - 8)
                                        var_268[2].q = rdi_1
                                        int128_t var_248_1
                                        var_248_1:0xc.d = (*(rbx_2 + 8))[0]
                                        var_238_1.d = (*(rbx_2 + 0xc))[0]
                                        var_238_1:8.d = (*(rbx_2 + 0x14))[0]
                                        var_238_1:4.d = zmm2[0]
                                        var_238_1:0xc.d = (*(rbx_2 + 0x18))[0]
                                        result = (*(*rdi_1 + 0x80))(rdi_1)
                                        var_268[0].q = result
                                    
                                    rbx_2 += 0x40
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                    else if (((var_21c u>> 1).b & 1) != 0)
                        goto label_14225b656
                
                r14_1 += 1
            while (r14_1 s< r12_1)
            
            if (not(zmm6[0] >= 3.39999995e+38f))
                uint128_t* rax_12 = arg1[2]
                zmm1_1 = zx.o(0)
                uint32_t zmm4_1[0x4] = data_143f522c0
                float zmm0_1[0x4] = zmm4_1
                int64_t var_288_1 = 0xfffff
                uint32_t temp0_6[0x4] = __andps_xmmxud_memxud(zmm4_1, data_143f522d0)
                var_290 = 0
                zmm0_1[0].q = zmm1_1 u>> 0x40
                var_1d8 = _mm_shuffle_ps(zmm1_1, zmm0_1, 0xc4)
                int64_t* rax_13 = *arg1
                uint128_t var_1c8_1 = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(*rax_12, (*(rax_12 + 8))[0].q), 
                    _mm_unpacklo_ps(*(rax_12 + 4), 0)[0].q)
                uint32_t var_1b8_1[0x4] = temp0_6
                void* rax_14 = sub_140d3c6e0(*rax_13 + 0xf8)
                void* const r9_2
                
                if (rax_14 == 0)
                    r9_2 = nullptr
                else
                    r9_2 = *(rax_14 + 0xa8)
                    
                    if (r9_2 == 0)
                        r9_2 = sub_141ee69e0(rax_14)
                
                uint32_t var_2c8
                var_2c8.q = arg1[6]
                float var_2d8
                var_2d8.q = &var_290
                sub_141ebeee0(r9_2, &var_268, arg1[5], *arg1[4], var_2d8, arg1[2], var_2c8, 
                    nullptr, &var_1d8, 1, *arg1[7])
                result = arg1[8]
                *result = 1
        
        if (var_78_1 != 0)
            result = sub_140a74f90(var_78_1)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
