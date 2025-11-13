// 函数: sub_140829b30
// 地址: 0x140829b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg4 + 0x778)
void* rax = rsi[0x13]
void*** result_1 = j_sub_140a82f30(0x30)
int32_t i = 0
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *result = &data_142dd6c10
    result[1] = 0
    void* rcx = *(arg4 + 0x778)
    char rax_1 = *(rcx + 0x38)
    result[2].b = rax_1
    
    if (rax_1 != 0)
        result[3] = *(arg4 + 0x728)
    else
        void* rax_2 = *(rcx + 0x98)
        result[3] = rax_2
        *(rax_2 + 8) += 1
    
    *result = &data_142dd8f28
    result[4] = 0
    result[5] = 0

if (arg3 != 0)
    void var_198
    int64_t* rax_4 = sub_140745220(&var_198, arg3 + 0x180)
    int32_t var_426_1 = 0xffffffff
    int64_t var_420 = 0
    int64_t var_418_1 = 0
    int64_t rcx_2 = rax_4[1]
    int64_t var_438 = *rax_4
    int16_t rax_6 = rax_4[2].w
    int64_t var_430_1 = rcx_2
    
    if (rcx_2 != 0 && sub_140834710(rax_4) != 0)
        sub_1407c87e0(&var_438, rax_4[3])
    
    int128_t zmm0_1 = var_438.o
    int64_t* var_3d8 = rsi
    int128_t var_3c8_1 = zmm0_1
    int64_t var_3b0 = 0
    int64_t var_3a8_1 = 0
    int64_t var_3b8_1 = rax_6.q
    sub_14081d8c0(&var_3b0, &var_420)
    int64_t rax_8 = sub_1408011e0(var_3d8, &var_438)
    int64_t rcx_7 = var_420
    int64_t var_3d0_1 = rax_8
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_140833690(&var_3d8)
    int64_t rcx_9 = rax_4[3]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    void* var_308
    void var_170
    sub_14077dbe0(&var_308, rsi, sub_140745220(&var_170, arg3 + 0x1f8))
    void* var_1e8
    void var_148
    sub_14077db30(&var_1e8, rsi, sub_140745220(&var_148, arg3 + 0x270))
    void* var_238
    void var_120
    sub_14077db30(&var_238, rsi, sub_140745220(&var_120, arg3 + 0x108))
    void* var_288
    void var_f8
    sub_14077db30(&var_288, rsi, sub_140745220(&var_f8, arg3 + 0x2e8))
    void var_d0
    int64_t* rax_13 = sub_140745220(&var_d0, arg3 + 0x90)
    int32_t var_476_1 = 0xffffffff
    int64_t var_470 = 0
    int64_t var_468_1 = 0
    int64_t rcx_19 = rax_13[1]
    int64_t var_488 = *rax_13
    int16_t rax_15 = rax_13[2].w
    int64_t var_480_1 = rcx_19
    
    if (rcx_19 != 0 && sub_140834710(rax_13) != 0)
        sub_1407c87e0(&var_488, rax_13[3])
    
    int128_t var_358_1 = var_488.o
    int64_t var_340 = 0
    int64_t var_338_1 = 0
    int64_t var_348_1 = rax_15.q
    sub_14081d8c0(&var_340, &var_470)
    void* rax_17 = sub_1408011e0(rsi, &var_488)
    int64_t rcx_24 = var_470
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t r12_1 = 0
    
    if (rsi != 0 && rax_17 != 0)
        void* rcx_25 = rsi[0x13]
        
        if (rcx_25 != 0)
            r12_1 = zx.q(*(rax_17 + 4) * *(rcx_25 + 0xbc)) + *(rcx_25 + 0x28)
    
    int64_t rcx_26 = rax_13[3]
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int16_t rax_20 = *(arg3 + 0x232)
    
    if (rax_20 == 0xffff)
        if (*(arg3 + 0x228) == 0 || *(arg3 + 0x230) == 1)
            *(arg3 + 0x232) = 0
            rax_20 = 0
        else
            void* rax_21 = sub_140761a70(arg3 + 0x228)
            int16_t rcx_28 = *(rax_21 + 0x5c)
            rax_20 = (*(rax_21 + 0x58) - 1 + rcx_28) & neg.w(rcx_28)
            *(arg3 + 0x232) = rax_20
    
    int32_t var_448
    memcpy(&var_448, *(arg3 + 0x238), sx.d(rax_20))
    void* rdi_4 = arg2
    int32_t var_410 = var_448
    float zmm10[0x4] = *(rdi_4 + 0xb0)
    int128_t zmm11 = *(rdi_4 + 0xb4)
    float zmm12[0x4] = *(rdi_4 + 0xb8)
    int32_t var_440
    int32_t var_408_1 = var_440
    int32_t var_444
    int32_t var_40c_1 = var_444.d
    float zmm0_4[0x4] = sub_140818560(arg3 + 0x298)
    int64_t rcx_32
    float zmm0_5[0x4]
    int128_t zmm6_1
    zmm0_5, rcx_32, zmm6_1 = sub_140818560(arg3 + 0x310)
    float zmm7[0x4] = zmm0_5
    
    if (*(rax + 0xb0) u> 0)
        int128_t var_48_1 = zmm6_1
        
        do
            void* rax_23
            
            if ((*(arg3 + 0x50) & 4) != 0 && r12_1 != 0)
                rax_23 = rsi[0x13]
            
            if ((*(arg3 + 0x50) & 4) == 0 || r12_1 == 0 || rax_23 == 0 || i s< 0
                    || i u>= *(rax_23 + 0xb0) || *(r12_1 + (sx.q(i) << 2)) != 0)
                rcx_32.b = 1
            else
                rcx_32.b = 0
            
            int64_t var_1b0
            void* rax_26
            
            if (var_1b0 != 0)
                rax_26 = *(var_1e8 + 0x98)
            
            if (var_1b0 == 0 || rax_26 == 0 || i s< 0 || i u>= *(rax_26 + 0xb0))
                zmm0_5 = zmm0_4
            else
                zmm0_5 = *(var_1b0 + (sx.q(i) << 2))
            
            zmm0_5[0] = zmm0_5[0] f* *(arg3 + 0x54)
            
            if (rcx_32.b != 0 && not(zmm0_5[0] <= 0f))
                var_480_1:4.d = zmm0_5[0]
                void var_318
                int96_t var_458_1 = (*sub_140acc990(&var_318, &var_410))[0].12
                int64_t var_2d0
                int64_t var_2c8
                int64_t var_2c0
                int64_t var_2b8
                void* rax_30
                
                if (var_2d0 != 0 && var_2c8 != 0 && var_2c0 != 0 && var_2b8 != 0)
                    rax_30 = *(var_308 + 0x98)
                
                float zmm1_3[0x4]
                float zmm2_1[0x4]
                
                if (var_2d0 == 0 || var_2c8 == 0 || var_2c0 == 0 || var_2b8 == 0 || rax_30 == 0
                        || i s< 0 || i u>= *(rax_30 + 0xb0))
                    zmm1_3 = var_458_1.d
                    zmm2_1 = var_458_1:4.d
                    zmm0_5 = var_458_1:8.d
                else
                    int64_t i_1 = sx.q(i)
                    zmm1_3 = *(var_2d0 + (i_1 << 2))
                    zmm2_1 = *(var_2c8 + (i_1 << 2))
                    zmm0_5 = *(var_2c0 + (i_1 << 2))
                
                zmm0_5[0] = zmm0_5[0] f+ *(arg3 + 0x60)
                zmm1_3[0] = zmm1_3[0] f+ *(arg3 + 0x58)
                zmm2_1[0] = zmm2_1[0] f+ *(arg3 + 0x5c)
                int32_t rcx_35 = *(arg3 + 0x50)
                float var_440_1 = zmm0_5[0]
                var_488 = (_mm_unpacklo_ps(zmm1_3, zmm2_1[0].q)).q
                var_480_1.d = var_440_1
                
                if ((rcx_35.b & 1) == 0)
                    int64_t var_200
                    void* rax_33
                    
                    if (var_200 != 0)
                        rax_33 = *(var_238 + 0x98)
                    
                    if (var_200 == 0 || rax_33 == 0 || i s< 0 || i u>= *(rax_33 + 0xb0))
                        zmm0_5 = 0x3f800000
                    else
                        zmm0_5 = *(var_200 + (sx.q(i) << 2))
                else
                    zmm0_5 = zx.o(0)
                
                int16_t var_478_1
                var_478_1.d = zmm0_5[0]
                var_470.b = (rcx_35 u>> 1).b & 1
                int64_t var_250
                void* rax_36
                
                if (var_250 != 0)
                    rax_36 = *(var_288 + 0x98)
                
                if (var_250 == 0 || rax_36 == 0 || i s< 0 || i u>= *(rax_36 + 0xb0))
                    zmm0_5 = zmm7
                else
                    zmm0_5 = *(var_250 + (sx.q(i) << 2))
                
                var_476_1 = zmm0_5[0]
                int64_t var_3a0
                int64_t var_398
                int64_t var_390
                void* rax_39
                
                if (var_3a0 != 0 && var_398 != 0 && var_390 != 0)
                    rax_39 = var_3d8[0x13]
                
                float zmm3[0x4]
                int64_t zmm4_1
                
                if (var_3a0 == 0 || var_398 == 0 || var_390 == 0 || rax_39 == 0 || i s< 0
                        || i u>= *(rax_39 + 0xb0))
                    zmm3 = zmm10
                    zmm4_1 = zmm11.q
                    zmm1_3 = zmm12
                else
                    int64_t i_2 = sx.q(i)
                    zmm3 = *(var_3a0 + (i_2 << 2))
                    zmm4_1 = *(var_398 + (i_2 << 2))
                    zmm1_3 = *(var_390 + (i_2 << 2))
                
                var_468_1:4.d = zmm1_3[0]
                var_470 = (_mm_unpacklo_ps(zmm3, zmm4_1)).q
                
                if ((*(arg1 + 0xa0) & 1) != 0)
                    int32_t var_3ec_1 = 0x3f800000
                    float var_3f8[0x4]
                    var_3f8[0] = zmm3[0]
                    var_458_1.q = 0
                    float temp0_3[0x4] = _mm_shuffle_ps(var_3f8, var_3f8, 0xe1)
                    temp0_3[0] = zmm4_1.d
                    var_458_1:8.d = 0
                    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
                    temp0_4[0] = zmm1_3[0]
                    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
                    var_3f8 = temp0_5
                    float temp0_7[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(rdi_4 + 0x90))
                    float temp0_9[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(rdi_4 + 0x80))
                    float temp0_11[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), *(rdi_4 + 0xa0))
                    float temp0_16[0x4] = _mm_add_ps(_mm_add_ps(temp0_7, temp0_9), 
                        _mm_add_ps(temp0_11, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), 
                                *(rdi_4 + 0xb0))))
                    var_470:4.d = temp0_16[0]
                    float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
                    var_468_1:4.d = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)[0]
                    var_468_1.d = temp0_17[0]
                
                int64_t rsi_2 = sx.q(result[5].d)
                int32_t rax_42 = (rsi_2 + 1).d
                result[5].d = rax_42
                
                if (rax_42 s> *(result + 0x2c))
                    sub_1405c4ec0(&result[4])
                
                int64_t rax_43 = result[4]
                rcx_32 = rsi_2 * 5
                rdi_4 = arg2
                *(rax_43 + (rcx_32 << 3)) = var_488.o
                *(rax_43 + (rcx_32 << 3) + 0x10) = var_478_1.o
                *(rax_43 + (rcx_32 << 3) + 0x20) = var_468_1
            
            i += 1
        while (i u< *(rax + 0xb0))
    
    int64_t rcx_40 = var_340
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    int64_t var_260
    
    if (var_260 != 0)
        sub_140a74f90(var_260)
    
    int64_t var_210
    
    if (var_210 != 0)
        sub_140a74f90(var_210)
    
    int64_t var_1c0
    
    if (var_1c0 != 0)
        sub_140a74f90(var_1c0)
    
    int64_t var_2e0
    
    if (var_2e0 != 0)
        sub_140a74f90(var_2e0)
    
    int64_t rcx_45 = var_3b0
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)

return result
