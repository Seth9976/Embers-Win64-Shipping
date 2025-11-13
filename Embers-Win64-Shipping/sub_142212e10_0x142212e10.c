// 函数: sub_142212e10
// 地址: 0x142212e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rcx = *(arg1 + 0x98)

if (rcx != 0)
    sub_1422352a0(rcx)
    sub_14222ee40(*(arg1 + 0x98))
    *(arg1 + 0x98) = 0

float zmm9[0x4] = 0x3f800000
int64_t var_e8
int32_t var_e0
uint128_t zmm1
uint128_t zmm6
uint128_t zmm7
uint32_t zmm8[0x4]

switch (sub_14221f8c0(zx.d(*(arg1 + 0xb))) - 1)
    case 1
        zmm6 = 0x3f800000
        zmm7 = zx.o(0)
        zmm8 = zx.o(0)
    case 2
        zmm6 = zx.o(0)
        zmm7 = 0x3f800000
        zmm8 = zx.o(0)
    case 3
        zmm6 = zx.o(0)
        zmm7 = zx.o(0)
        zmm8 = 0x3f800000
    case 4
        zmm1 = zx.o(*(arg1 + 0x70))
        var_e0 = *(arg1 + 0x78)
        zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm8 = var_e0
        var_e8 = zmm1.q
        zmm6 = var_e8.d
    default
        zmm6 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm8 = data_143dbb200

int32_t rax_6 = sub_14221f8c0(zx.d(*(arg1 + 0xb)))
char result = sub_1422714e0(arg1 + 0xf0)

if (result != 0)
    if (_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_142212f76:
        
        if (rax_6 != 1)
        label_142212f97:
            int32_t* rax_8 = sub_14222bb00()
            *(arg1 + 0x98) = rax_8
            char var_100 = 0
            char var_108 = 0
            rax_8[0x32].b &= 0xfe
            void* rax_9 = *(arg1 + 0x98)
            void* var_a8_1 = arg1
            *(rax_9 + 0xe8) &= 0xfe
            void* rax_10 = *(arg1 + 0x98)
            *(rax_10 + 0xac) &= 0xfe
            uint128_t zmm0_3 = data_143dbb0c0
            zmm1 = data_143dbb0d0
            uint128_t var_88
            int128_t* var_b0 = &var_88
            char* var_a0_1 = &var_108
            char* var_98_1 = &var_100
            int128_t** var_c0_1 = &var_b0
            var_88 = zmm0_3
            zmm0_3 = data_143dbb0e0
            int128_t* (* var_c8)(int64_t* arg1) = sub_142212540
            uint128_t var_78_1 = zmm1
            uint128_t var_68_1 = zmm0_3
            sub_142269e40(arg1 + 0xf0, &var_c8)
            uint64_t var_d8 = 0x3f800000
            uint32_t var_d0_1 = 0
            var_e8.d = 0
            var_e8 = 0x3f800000
            uint128_t zmm2_1
            
            if (rax_6 == 1)
                void* rcx_15 = *(arg1 + 0x98)
                *(rcx_15 + 0xf0) = (*(arg1 + 0xe) & 1) * 2
                sub_142235440(rcx_15)
                void* rcx_16 = *(arg1 + 0x98)
                *(rcx_16 + 0xd5) = *(arg1 + 0xe) & 2
                sub_142235440(rcx_16)
                void* rcx_17 = *(arg1 + 0x98)
                *(rcx_17 + 0xd4) = *(arg1 + 0xe) u>> 1 & 2
                sub_142235440(rcx_17)
                void* rcx_18 = *(arg1 + 0x98)
                *(rcx_18 + 0xb4) = *(arg1 + 0xd) u>> 4 & 2
                sub_142235580(rcx_18)
                void* rcx_19 = *(arg1 + 0x98)
                *(rcx_19 + 0xb5) = *(arg1 + 0xd) u>> 5 & 2
                sub_142235580(rcx_19)
                void* rcx_20 = *(arg1 + 0x98)
                *(rcx_20 + 0xb6) = *(arg1 + 0xd) s>> 7 & 2
                sub_142235580(rcx_20)
            else
                char rax_11
                
                if ((*(arg1 + 0xd) & 0x10) != 0 || *(arg1 + 0xb) != 5)
                    rax_11 = 2
                else
                    rax_11 = 0
                
                void* rcx_8 = *(arg1 + 0x98)
                *(rcx_8 + 0xd4) = rax_11
                sub_142235440(rcx_8)
                char rax_12
                
                if ((*(arg1 + 0xd) & 0x10) != 0 || *(arg1 + 0xb) != 5)
                    rax_12 = 2
                else
                    rax_12 = 0
                
                void* rcx_9 = *(arg1 + 0x98)
                *(rcx_9 + 0xd5) = rax_12
                sub_142235440(rcx_9)
                void* rcx_10 = *(arg1 + 0x98)
                *(rcx_10 + 0xf0) = 0
                sub_142235440(rcx_10)
                char rax_13
                
                if ((*(arg1 + 0xd) & 8) != 0 || *(arg1 + 0xb) != 5)
                    rax_13 = 2
                else
                    rax_13 = 0
                
                void* rcx_11 = *(arg1 + 0x98)
                *(rcx_11 + 0xb4) = rax_13
                sub_142235580(rcx_11)
                void* rcx_12 = *(arg1 + 0x98)
                *(rcx_12 + 0xb5) = 0
                sub_142235580(rcx_12)
                void* rcx_13 = *(arg1 + 0x98)
                *(rcx_13 + 0xb6) = 0
                sub_142235580(rcx_13)
                zmm2_1.d = zmm7.d f* zmm7.d
                zmm0_3.d = zmm6.d f* zmm6.d
                zmm1.d = zmm8.d f* zmm8[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_3.d
                zmm2_1.d = zmm2_1.d f+ zmm1.d
                
                if (zmm2_1.d f== 1f)
                    goto label_1422131c7
                
                int32_t var_f8_1
                uint32_t var_f0_1
                
                if (zmm2_1.d f>= 9.99999994e-09f)
                    float zmm3_1[0x4] = zx.o(0)
                    zmm3_1[0] = zmm2_1.d
                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm0_3.d = temp0_5.d f* temp0_5[0]
                    zmm1.d = zmm3_1.d f* zmm0_3.d
                    zmm2_1.d = 0.5f f- zmm1.d
                    zmm0_3.d = temp0_5.d f* zmm2_1.d
                    temp0_5[0] = temp0_5[0] f+ zmm0_3.d
                    zmm1.d = temp0_5.d f* temp0_5[0]
                    zmm3_1[0] = zmm3_1[0] f* zmm1.d
                    zmm0_3.d = temp0_5.d f* (0.5f - zmm3_1[0])
                    temp0_5[0] = temp0_5[0] f+ zmm0_3.d
                    zmm6.d = zmm6.d f* temp0_5[0]
                    zmm7.d = zmm7.d f* temp0_5[0]
                    zmm8[0] = zmm8[0] f* temp0_5[0]
                label_1422131c7:
                    var_f0_1 = zmm8[0]
                    int32_t var_f4_2 = zmm7.d
                    var_f8_1 = zmm6.d
                else
                    var_f8_1 = data_143dbb1f8.d
                    var_f0_1 = data_143dbb200.d
                    int32_t var_f4_1 = data_143dbb1fc.d
                
                var_d8 = var_f8_1.q
                var_d0_1 = var_f0_1
                zmm9 = sub_140ad6430(&var_d8, &var_c8, &var_e8)
            
            uint128_t zmm5_2 = __mulps_xmmps_memps(var_88, data_143f510c0)
            void* rcx_21 = *(arg1 + 0x98)
            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8.d, var_d0_1.q), 
                _mm_unpacklo_ps(var_d8:4.d, zx.o(0).q).q)
            zmm1 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_13)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_3)
            zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
            zmm5_2 = _mm_mul_ps(zmm5_2, zmm2_1)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
            zmm5_2 = _mm_add_ps(zmm5_2, zmm6)
            float temp0_26[0x4] =
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_22, temp0_13), zmm0_3), zmm5_2)
            int32_t var_f0_2 = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa).d
            *(rcx_21 + 0x3c) =
                (_mm_unpacklo_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x55).q)).q
            *(rcx_21 + 0x44) = var_f0_2
            zmm5_2 = __mulps_xmmps_memps(var_88, data_143f510c0)
            void* rcx_22 = *(arg1 + 0x98)
            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8.d, var_e0.q), 
                _mm_unpacklo_ps(var_e8:4.d, 0).q)
            zmm1 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm2_1 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2_1)
            float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1)
            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_41[0x4] = _mm_sub_ps(temp0_39, zmm0_3)
            float temp0_42[0x4] = _mm_add_ps(temp0_41, temp0_41)
            zmm5_2 = _mm_mul_ps(zmm5_2, temp0_42)
            float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd2), zmm1)
            zmm0_3 = _mm_shuffle_ps(temp0_42, temp0_42, 0xc9)
            zmm5_2 = _mm_add_ps(zmm5_2, zmm6)
            float temp0_50[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_45, _mm_mul_ps(zmm0_3, zmm2_1)), zmm5_2)
            int32_t var_f0_3 = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa).d
            *(rcx_22 + 0x48) =
                (_mm_unpacklo_ps(temp0_50, _mm_shuffle_ps(temp0_50, temp0_50, 0x55).q)).q
            *(rcx_22 + 0x50) = var_f0_3
            void* rcx_23 = *(arg1 + 0x98)
            zmm0_3 = zx.o(var_d8)
            var_c8 = nullptr
            var_c0_1.d = 0
            *(rcx_23 + 0x60) = zmm0_3.q
            *(rcx_23 + 0x68) = var_d0_1
            void* rcx_24 = *(arg1 + 0x98)
            *(rcx_24 + 0x6c) = var_e8
            *(rcx_24 + 0x74) = var_e0
            void* rcx_25 = *(arg1 + 0x98)
            int32_t var_f0_4 = _mm_shuffle_ps(var_78_1, var_78_1, 0xaa).d
            *(rcx_25 + 0x54) =
                (_mm_unpacklo_ps(var_78_1, _mm_shuffle_ps(var_78_1, var_78_1, 0x55).q)).q
            *(rcx_25 + 0x5c) = var_f0_4
            int64_t* rax_26 = sub_140d3c6e0(arg1 + 0xf8)
            int128_t* (** var_110_1)(int64_t* arg1) = &var_c8
            result = sub_142233a30(*(arg1 + 0x98), arg1, nullptr, zmm9[0], rax_26)
        else
        label_142212f7b:
            char rax_7 = *(arg1 + 0xd)
            
            if ((rax_7 & 0x60) != 0 || rax_7 s< 0)
                goto label_142212f97
            
            result = *(arg1 + 0xe)
            
            if ((result & 3) != 0 || (result & 4) != 0)
                goto label_142212f97
    else
        if (_mm_and_ps(zmm7, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_142212f76
        
        if (_mm_and_ps(zmm8, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_142212f76
        
        if (rax_6 == 1)
            goto label_142212f7b

__security_check_cookie(rax_1 ^ &var_138)
return result
