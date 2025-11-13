// 函数: sub_142239320
// 地址: 0x142239320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* rsi = nullptr
*arg1 = 0
void* r15 = &arg1[3]
arg1[1] = arg2
int16_t* r13 = arg4
__builtin_memset(&arg1[2], 0, 0x20)
uint128_t zmm1 = data_14399f66c
float var_268 = data_14399f668[0]
int32_t var_264 = zmm1.d
uint128_t var_158
int128_t* var_290 = &var_158
float var_260 = data_14399f670[0]
float zmm0[0x4] = data_143dbb0d0
var_158 = data_143dbb0c0
uint128_t var_138 = data_143dbb0e0
int32_t var_270 = 0
char rax_3
int64_t zmm6_1
rax_3, zmm6_1 =
    sub_142244020(r13, zx.q(arg3), &data_14399f668, &var_270, &var_268, var_290, r15, &arg1[4])

if (rax_3 != 0)
    int64_t* rcx_4
    
    if (arg3 == 0)
        int64_t* rbx_6 = arg1[1]
        void var_277
        void* var_290_2 = &var_277
        int64_t* var_168
        zmm6_1 = sub_1417c6070(rbx_6, &var_168, 1, 0, rbx_6)
        sub_14175b460(rbx_6)
        rcx_4 = var_168
    label_14223965a:
        arg1[2] = *rcx_4
        sub_140a74f90(rcx_4)
        r15 = &arg1[3]
    else
        int32_t var_274
        
        if (arg3 == 1)
            int64_t* r13_1 = arg1[1]
            void* rcx_5 = r13_1[2]
            int32_t r12_1 = *(rcx_5 + 0x18)
            sub_1417502a0(rcx_5, r12_1 + 1)
            int64_t** var_238 = nullptr
            int64_t var_230_1 = 1
            sub_1405a4d70(&var_238)
            int64_t rbx_3 = sx.q(r13_1[0x4b].d)
            int32_t rdx_5 = r13_1[0x4b].d + 1
            var_274 = rbx_3.d
            sub_1417502a0(&r13_1[0x48], rdx_5)
            void* rbx_4 = r13_1[2]
            int64_t* rax_5 = j_sub_140a82f30(0x18)
            int64_t* r12_2
            void var_278
            
            if (rax_5 == 0)
                r12_2 = nullptr
            else
                r12_2 = sub_1417a0c20(rax_5, rbx_4, r12_1, var_274, &var_278)
            sub_141755ea0(rbx_4, r12_1, r12_2)
            int64_t** rbx_5 = var_238
            *(*(*r12_2 + 0x1a0) + (sx.q(r12_2[1].d) << 2)) = r13_1[0x57].d
            r13_1[0x57].d += 1
            *rbx_5 = r12_2
            int32_t* rax_9
            rax_9, zmm6_1 = sub_1417b1d50(&r13_1[0x51])
            int32_t rcx_13
            
            if (rax_9 != 0)
            label_142239590:
                rcx_13 = *rax_9
            else
                while (true)
                    bool z_1
                    
                    if (0 == r13_1[0x56].b)
                        r13_1[0x56].b = 1
                        z_1 = true
                    else
                        int64_t rax_10
                        rax_10.b = r13_1[0x56].b
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_15
                        rax_15, zmm6_1 = sub_1417c7d10(&r13_1[0x4f], 1)
                        rcx_13 = rax_15
                        bool z_2
                        
                        do
                            if (1 == r13_1[0x56].b)
                                r13_1[0x56].b = 0
                                z_2 = true
                            else
                                int64_t rax_16
                                rax_16.b = r13_1[0x56].b
                                z_2 = false
                        while (not(z_2))
                        rbx_5 = var_238
                        break
                    
                    rax_9, zmm6_1 = sub_1417b1d50(&r13_1[0x51])
                    
                    if (rax_9 != 0)
                        rbx_5 = var_238
                        goto label_142239590
            
            int64_t* rax_11 = *rbx_5
            *(*(*rax_11 + 0x50) + (sx.q(rax_11[1].d) << 2)) = rcx_13
            int64_t rax_13 = r13_1[0x4d]
            int64_t* rdi_2 = *(rax_13 + (rbx_3 << 3))
            *(rax_13 + (rbx_3 << 3)) = r12_2
            
            if (rdi_2 != 0)
                sub_1417a2540(rdi_2)
                j_sub_140a74f90(rdi_2)
            
            sub_14175b460(r13_1)
            arg1[2] = *rbx_5
            sub_140a74f90(rbx_5)
            r13 = arg4
            r15 = &arg1[3]
        else if (arg3 == 2)
            int64_t* rbx_2 = arg1[1]
            int32_t* var_290_1 = &var_274
            int64_t* var_188
            zmm6_1 = sub_1417c6350(rbx_2, &var_188, 1, 0, &rbx_2[4])
            sub_141791250(rbx_2, &var_188, &rbx_2[0x12], &rbx_2[0x1c])
            sub_14175b460(rbx_2)
            rcx_4 = var_188
            goto label_14223965a
    
    if (arg1[2] != 0)
        sub_142253090(arg1, arg5)
        int64_t* rax_18 = arg1[2]
        void* rdi_3 = *rax_18
        int64_t rbx_7 = sx.q(rax_18[1].d)
        int64_t rdx_12 = rbx_7 * 3
        *(*(rdi_3 + 0x80) + (rbx_7 << 3)) = *r15
        int64_t rcx_24 = *(rdi_3 + 0x28)
        int128_t* rax_22 = (rbx_7 << 4) + *(rdi_3 + 0x68)
        float zmm2_1[0x4] = _mm_unpacklo_ps(data_14399f66c, zmm6_1)
        int64_t rax_23 = *(rdi_3 + 0xf8)
        float var_d8[0x4] = *rax_22
        int64_t rdx_13 = *(rdi_3 + 0x80)
        float zmm3_1[0x4] = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(rcx_24 + (rdx_12 << 2)), *(rcx_24 + (rdx_12 << 2) + 8)), 
            _mm_unpacklo_ps(*(rcx_24 + (rdx_12 << 2) + 4), zmm6_1)[0].q)
        void* rdx_14 = *(rdx_13 + (rbx_7 << 3))
        float var_c8_1[0x4] = zmm3_1
        float var_b8_1[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), zmm2_1[0].q)
        float zmm6_2[0x4]
        int128_t zmm7_1
        int128_t zmm8_1
        zmm6_2, zmm7_1, zmm8_1 = sub_141700b70(rax_23 + rbx_7 * 0x18, rdx_14, &var_d8)
        sub_141744270(rdi_3, rbx_7.d)
        sub_141744270(rdi_3, rbx_7.d)
        void* rax_24 = *r15
        float zmm2_2[0x4]
        
        if (rax_24 != 0 && *(rax_24 + 0xc) != 0)
            int64_t* rax_25 = arg1[2]
            *(sx.q(rax_25[1].d) + *(*rax_25 + 0x158)) = 1
            int64_t* rcx_29 = *r15
            void var_128
            int64_t* rax_28 = (*(*rcx_29 + 0x28))(rcx_29, &var_128)
            int64_t* rdx_19 = arg1[2]
            int64_t r8_6 = sx.q(rdx_19[1].d) * 3
            int64_t rdx_20 = *(*rdx_19 + 0x128)
            *(rdx_20 + (r8_6 << 3)) = *rax_28
            *(rdx_20 + (r8_6 << 3) + 8) = rax_28[1].d
            *(rdx_20 + (r8_6 << 3) + 0xc) = *(rax_28 + 0xc)
            *(rdx_20 + (r8_6 << 3) + 0x14) = *(rax_28 + 0x14)
            int64_t* rax_30 = arg1[2]
            int64_t* r9_4 = *r15
            zmm2_2 = _mm_unpacklo_ps(data_14399f66c, zmm6_2[0].q)
            int64_t rdx_21 = sx.q(rax_30[1].d)
            void* rcx_33 = *rax_30
            int64_t r8_7 = rdx_21 * 3
            int64_t rax_31 = *(rcx_33 + 0x28)
            uint128_t var_a8 = *((rdx_21 << 4) + *(rcx_33 + 0x68))
            float var_98_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rax_31 + (r8_7 << 2)), (*(rax_31 + (r8_7 << 2) + 8))[0].q), 
                _mm_unpacklo_ps(*(rax_31 + (r8_7 << 2) + 4), zmm6_2[0].q).q)
            float var_88_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), zmm2_2[0].q)
            void var_110
            void var_f8
            int64_t* rax_34 = sub_1417598c0((*(*r9_4 + 0x28))(r9_4, &var_110), &var_f8, &var_a8)
            void** rcx_36 = arg1[2]
            zmm6_2, zmm7_1, zmm8_1 = sub_141756120(*rcx_36, rcx_36[1].d, rax_34)
        
        int64_t* rax_45 = arg1[2]
        int64_t* r8_10 = nullptr
        
        if (*(rax_45 + 0xc) u>= 1)
            r8_10 = rax_45
        
        uint128_t zmm0_2
        float zmm1_2[0x4]
        
        if (r8_10 != 0)
            zmm0_2 = zx.o(data_143dbb1f8.q)
            int64_t rdx_27 = sx.q(r8_10[1].d) * 3
            zmm1_2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            int64_t rcx_38 = *(*r8_10 + 0x1b8)
            *(rcx_38 + (rdx_27 << 2)) = zmm0_2.q
            *(rcx_38 + (rdx_27 << 2) + 8) = data_143dbb200
            int64_t rdx_28 = sx.q(r8_10[1].d) * 3
            int64_t rcx_39 = *(*r8_10 + 0x1d0)
            *(rcx_39 + (rdx_28 << 2)) = data_143dbb1f8.q
            *(rcx_39 + (rdx_28 << 2) + 8) = data_143dbb200
            int64_t rax_41 = sx.q(r8_10[1].d)
            int32_t var_170_1 = _mm_shuffle_ps(zmm0, zmm0, 0xaa).d
            zmm0_2 = _mm_unpacklo_ps(zmm0, zmm1_2[0].q)
            int64_t rdx_29 = rax_41 * 3
            int64_t rcx_40 = *(*r8_10 + 0x200)
            *(rcx_40 + (rdx_29 << 2)) = zmm0_2.q
            zmm0_2 = var_158
            *(rcx_40 + (rdx_29 << 2) + 8) = var_170_1
            *(*(*r8_10 + 0x218) + sx.q(r8_10[1].d) * 0x10) = zmm0_2
            rax_45 = arg1[2]
        
        if (*(rax_45 + 0xc) u>= 2)
            rsi = rax_45
        
        if (rsi != 0)
            void* rdx_32 = *rsi
            int64_t rcx_42 = sx.q(rsi[1].d)
            
            if (*(rcx_42 + *(rdx_32 + 0x398)) == 4)
                float zmm3_2[0x4] = var_270
                zmm3_2[0] - zmm6_2[0]
                bool cond:1_1 = zmm3_2[0] <= zmm6_2[0]
                zmm1_2 = 0x3f800000
                int128_t var_58_1 = zmm7_1
                int128_t var_68_1 = zmm8_1
                
                if (zmm3_2[0] <= zmm6_2[0])
                    zmm2_2 = zmm6_2
                else
                    zmm2_2 = 0x3f800000
                    zmm2_2[0] = 1f / zmm3_2[0]
                
                int128_t zmm4_1 = var_260
                zmm7_1 = var_264
                zmm8_1 = var_268
                int32_t* rax_47
                
                if (cond:1_1)
                    int32_t var_240_1 = data_143dbb200
                    uint64_t var_248
                    rax_47 = &var_248
                    var_248 = data_143dbb1f8.q
                else
                    int32_t var_258
                    
                    if (zmm8_1.d f== zmm6_2[0])
                        var_258 = 0x7f7fc99e
                    else
                        zmm0_2.d = 1f f/ zmm8_1.d
                        var_258 = zmm0_2.d
                    
                    if (zmm7_1.d f== zmm6_2[0])
                        int32_t var_254_2 = 0x7f7fc99e
                    else
                        zmm0_2.d = 1f f/ zmm7_1.d
                        int32_t var_254_1 = zmm0_2.d
                    
                    if (zmm4_1.d f== zmm6_2[0])
                        int32_t var_250_2 = 0x7f7fc99e
                        rax_47 = &var_258
                    else
                        zmm1_2[0] = 1f f/ zmm4_1.d
                        rax_47 = &var_258
                        float var_250_1 = zmm1_2[0]
                
                uint128_t zmm5_1 = zx.o(*rax_47)
                int32_t rax_49 = rax_47[2]
                int64_t var_1fc_1 = 0
                int64_t var_1bc_1 = 0
                int64_t var_204_1 = 0
                *(*(rdx_32 + 0x2c0) + (rcx_42 << 2)) = zmm3_2[0]
                zmm0_2.d = zmm8_1.d
                int64_t rdx_33 = sx.q(rsi[1].d)
                int64_t rcx_43 = *(*rsi + 0x2d8)
                int64_t var_1f0_1 = 0
                zmm1_2 = var_1fc_1:4.o
                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
                *(rcx_43 + (rdx_33 << 2)) = zmm2_2[0]
                zmm1_2[0] = zmm7_1.d
                zmm2_2 = data_142d3f660
                int64_t rcx_44 = *(*rsi + 0x290)
                int64_t rdx_35 = sx.q(rsi[1].d) << 6
                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
                int64_t var_1e8_1 = 0
                int32_t var_1dc_1 = 0
                *(rdx_35 + rcx_44) = zmm0_2
                zmm0_2 = var_1e8_1.o
                *(rdx_35 + rcx_44 + 0x10) = zmm1_2
                _mm_shuffle_ps(zmm0_2, zmm0_2, 0xd2)
                zmm0_2.d = zmm4_1.d
                int64_t var_1c4_1 = 0
                zmm4_1 = data_142d3f660
                *(rdx_35 + rcx_44 + 0x20) = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
                *(rdx_35 + rcx_44 + 0x30) = zmm2_2
                zmm0_2.d = zmm5_1.d
                zmm2_2 = zmm5_1
                int64_t rdx_37 = sx.q(rsi[1].d) << 6
                int64_t var_1b0_1 = 0
                int64_t rcx_45 = *(*rsi + 0x2a8)
                float var_1b8[0x4]
                zmm1_2 = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
                int64_t var_1a8_1 = 0
                *(rdx_37 + rcx_45) = zmm0_2
                int32_t var_19c_1 = 0
                zmm0_2 = var_1a8_1.o
                _mm_shuffle_ps(zmm0_2, zmm0_2, 0xd2)
                zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                zmm0_2.d = rax_49[0]
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
                zmm1_2[0] = zmm2_2[0]
                *(rdx_37 + rcx_45 + 0x10) = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
                *(rdx_37 + rcx_45 + 0x20) = zmm0_2
                *(rdx_37 + rcx_45 + 0x30) = zmm4_1
                
                if (r13 != 0)
                    *(*(*rsi + 0x2f0) + (sx.q(rsi[1].d) << 2)) = *(r13 + 0x68)
                    *(*(*rsi + 0x308) + (sx.q(rsi[1].d) << 2)) = *(r13 + 0x6c)
                
                *(sx.q(rsi[1].d) + *(*rsi + 0x368)) = 1

__security_check_cookie(rax_1 ^ &var_2b8)
return arg1
