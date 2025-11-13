// 函数: sub_141eeade0
// 地址: 0x141eeade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
float zmm6[0x4] = arg2
void* rax_2 = sub_1405be820(arg1)
int64_t rdx = *arg1
int32_t result = (*(rdx + 0x5c0))(arg1, rdx)

if (result.b != 0 && rax_2 != 0)
    if (arg1[0x2d].b == 0)
    label_141eeb7a0:
        void* rcx_53 = arg1[0x29]
        int32_t rax_76 = *(rcx_53 + 0x330)
        
        if ((rax_76.b & 8) == 0 && not(test_bit(rax_76, 9)))
            if (sub_141ea5ff0(rcx_53) != 0 && *(arg1[0x29] + 0x280) != 0)
                sub_141efcd30(arg1, zmm6)
                arg1[0xb4].b = 0
                *(arg1 + 0x5a4) = 0
            
            if (sub_142008300(&arg1[0x9b]) != 0)
                sub_141ffd2b0(&arg1[0x9b])
        
        result = (*(*arg1 + 0x710))(arg1)
    else
        int64_t* rcx_1 = arg1[0x16]
        
        if (*(rcx_1 + 0x14f) != 2)
            goto label_141eeb7a0
        
        int64_t rax_3 = *rcx_1
        uint64_t var_458 = 0
        
        if ((*(rax_3 + 0x3e8))(rcx_1, 0) != 0)
            goto label_141eeb7a0
        
        void* rax_6 = (*(*arg1 + 0x550))(arg1)
        uint128_t var_448
        uint128_t zmm0_1
        bool cond:0_1
        
        if (rax_6.b != 0)
            zmm0_1 = *(arg1[0x16] + 0x1d0)
            cond:0_1 = zmm0_1.d f!= arg1[0x4a].d
            var_448 = zmm0_1
        
        if (rax_6.b != 0 && (cond:0_1 || var_448:4.d.d f!= *(arg1 + 0x254)
                || not(var_448:8.d.d f== arg1[0x4b].d)))
            rax_6.b = 8
        else
            rax_6.b = 0
        
        *(arg1 + 0x1f1) |= rax_6.b
        float zmm3[0x4]
        
        if (sub_141ded590(&arg1[0x9b]) != 0)
            zmm0_1.d = (*(arg1 + 0xc4)).d f- *(arg1 + 0x25c)
            zmm3 = arg1[0x19].d
            float zmm4_1 = *(arg1 + 0xcc)
            zmm0_1.d = zmm0_1.d f+ *(arg1 + 0x504)
            *(arg1 + 0x504) = zmm0_1.d
            zmm3[0] = zmm3[0] f- arg1[0x4c].d
            zmm3[0] = zmm3[0] f+ arg1[0xa1].d
            arg1[0xa1].d = zmm3[0]
            *(arg1 + 0x50c) = zmm4_1 f- *(arg1 + 0x264) f+ *(arg1 + 0x50c)
        
        void var_3c8
        sub_141f2db80(&var_3c8, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
        int64_t rdx_2 = (*(*arg1 + 0x5f8))(arg1, zmm6)
        char rax_9 = sub_142008300(&arg1[0x9b])
        char rax_10
        void* rcx_7
        
        if (rax_9 == 0)
            rcx_7 = arg1[0x29]
            
            if (rcx_7 != 0)
                rax_10, rdx_2 = sub_141ea5ff0(rcx_7)
        
        int64_t r13
        
        if (rax_9 == 0 && (rcx_7 == 0 || rax_10 == 0 || *(arg1[0x29] + 0x280) == 0))
            r13.b = 0
        else
            void* r8_3 = arg1[0x29]
            r13.b = 1
            
            if ((*(r8_3 + 0x330) & 0x208) == 0)
                zmm6, arg3 = sub_141ffd270(&arg1[0x9b], rdx_2, r8_3)
        
        int32_t rax_12 = *(arg1 + 0xcc)
        uint64_t var_438 = *(arg1 + 0xc4)
        uint128_t zmm2_1 = *(arg1[0x16] + 0x1d0)
        var_448:8.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
        int32_t rax_14 = var_448:8.d
        uint128_t zmm0_2 = _mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)
        int32_t var_418_1 = rax_14
        int64_t rax_15 = *arg1
        uint64_t var_420 = zmm0_2.q
        (*(rax_15 + 0x708))(arg1, zmm6)
        (*(*arg1 + 0x718))(arg1, zmm6)
        
        if (arg1[0x2d].b == 2 && (*(arg1 + 0x389) & 8) != 0)
            (*(*arg1 + 0x770))(arg1)
        
        (*(*arg1 + 0x640))(arg1)
        (*(*arg1 + 0x710))(arg1)
        float zmm1[0x4]
        
        if (sub_141ded590(&arg1[0x9b]) != 0)
            zmm1 = arg1[0x19].d
            zmm2_1 = *(arg1 + 0xcc)
            zmm0_2.d = (*(arg1 + 0xc4)).d f- var_438.d
            zmm1[0] = zmm1[0] f- var_438:4.d
            zmm2_1.d = zmm2_1.d f- rax_12
            zmm0_2.d = zmm0_2.d f+ *(arg1 + 0x504)
            zmm1[0] = zmm1[0] f+ arg1[0xa1].d
            zmm2_1.d = zmm2_1.d f+ *(arg1 + 0x50c)
            *(arg1 + 0x504) = zmm0_2.d
            arg1[0xa1].d = zmm1[0]
            *(arg1 + 0x50c) = zmm2_1.d
        
        float var_58_1[0x4] = arg3
        int512_t zmm7
        void* var_468
        
        if (r13.b == 0)
        label_141eeb20f:
            
            if (sub_142008320(&arg1[0x9b]) != 0 || arg1[0xb4].b != 0)
                if (arg1[0xb4].b != 0)
                    arg3 = zx.o(0)
                    
                    if (*(arg1[0x29] + 0x280) != 0)
                        void var_3f8
                        int128_t* rax_35
                        rax_35, zmm6, arg3 = sub_141eddef0(arg1, &var_3f8, &arg1[0xb6])
                        arg1[0xb4].b = 1
                        *(arg1 + 0x5b0) = *rax_35
                        *(arg1 + 0x5c0) = rax_35[1]
                        *(arg1 + 0x5d0) = rax_35[2]
                        *(arg1 + 0x5d0) = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8[0].q), 
                            _mm_unpacklo_ps(data_143a2d2d4, 0).q)
                        *(arg1 + 0x5a4) = 0x3f800000
                    
                    if (not(zmm6[0] <= arg3[0]))
                        zmm1 = *(arg1 + 0x5c0)
                        int64_t rax_36 = *arg1
                        var_458.d = zmm1[0]
                        zmm0_2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        float var_450_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        var_458:4.d = zmm0_2.d
                        var_468 = arg1 + 0xc4
                        int64_t* rax_37 =
                            (*(rax_36 + 0xaa8))(arg1, &var_448, &var_458, zmm6, var_468)
                        arg1[0xbc] = *rax_37
                        arg1[0xbd].d = rax_37[1].d
                        int64_t* rax_40 =
                            (*(*arg1 + 0xab8))(arg1, &var_448, &arg1[0xbc], arg1 + 0xc4)
                        *(arg1 + 0xc4) = *rax_40
                        *(arg1 + 0xcc) = rax_40[1].d
                else if (not(zmm6[0] <= 0f))
                    int32_t rax_42 = *(arg1 + 0xcc)
                    int64_t* r8_8 = arg1[0x29]
                    var_468 = &var_458
                    var_458 = *(arg1 + 0xc4)
                    zmm6 = sub_141ffa8c0(&arg1[0x9b], zmm6, r8_8, arg1, var_468)
                    *(arg1 + 0xc4) = var_458
                    *(arg1 + 0xcc) = rax_42
            
            int64_t* rcx_30 = arg1[0x29]
            (*(*rcx_30 + 0x840))(rcx_30, zmm6)
            arg1[0x53].d = 0
            (*(*arg1 + 0x620))(arg1, zmm6, 0)
            
            if ((*(*arg1 + 0x5c0))(arg1) != 0)
                (*(*arg1 + 0x720))(arg1, zmm6)
                int64_t r9_6
                
                if ((*(arg1 + 0x38a) & 1) != 0 || arg1[0xb4].b == 0)
                    char rax_48
                    rax_48, r9_6 = sub_141dce090(arg1[0x29])
                    
                    if (rax_48 == 0)
                        (*(*arg1 + 0x7c0))(arg1, zmm6)
                
                char var_460
                
                if (((*(arg1 + 0x38a) & 1) == 0 && arg1[0xb4].b != 0) || arg1[0xb4].b != 0)
                    void* rax_50 = arg1[0x16]
                    float zmm4_2[0x4] = *(arg1 + 0x5b0)
                    zmm3 = data_14399f720
                    uint32_t zmm5_1[0x4] = data_143f3a9d0
                    float temp0_9[0x4] = _mm_sub_ps(zmm4_2, zmm3)
                    arg3 = *(rax_50 + 0x1c0)
                    var_458.d = 0x322bcc77
                    zmm2_1 = var_458.d
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2_1, _mm_and_ps(temp0_9, zmm5_1), 1)) != 0
                            && _mm_movemask_ps(_mm_cmpeq_ps(zmm2_1, 
                            _mm_and_ps(_mm_add_ps(zmm3, zmm4_2), zmm5_1), 1)) != 0)
                        int64_t rax_53 = *arg1
                        var_460 = 0
                        zmm2_1 = _mm_shuffle_ps(arg3, arg3, 0x1b)
                        var_468 = nullptr
                        float temp0_19[0x4] = _mm_shuffle_ps(arg3, arg3, 0x4e)
                        r9_6.b = 1
                        zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm4_2, zmm4_2, 0))
                        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xff), arg3)
                        zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f3ab50)
                        float temp0_25[0x4] = _mm_shuffle_ps(arg3, arg3, 0xb1)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm0_2)
                        float temp0_28[0x4] =
                            _mm_mul_ps(temp0_19, _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55))
                        float temp0_30[0x4] =
                            _mm_mul_ps(temp0_25, _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa))
                        float temp0_31[0x4] = __mulps_xmmps_memps(temp0_28, data_143f3ab40)
                        float temp0_32[0x4] = __mulps_xmmps_memps(temp0_30, data_143f3ab30)
                        var_448 = _mm_add_ps(_mm_add_ps(zmm2_1, temp0_31), temp0_32)
                        (*(rax_53 + 0x478))(arg1, &data_143dbb1f8, &var_448, r9_6, var_468, var_460)
                    
                    arg1[0xb4].b = 0
                    *(arg1 + 0x5a4) = 0
                
                int64_t rax_54 = *arg1
                *(arg1 + 0x38a) &= 0xfd
                (*(rax_54 + 0x908))(arg1, zmm6, &var_420, &var_438, var_468, var_460)
                float zmm6_1[0x4]
                zmm6_1, zmm7 = sub_141f2f2c0(&var_3c8)
                (*(*arg1 + 0x910))(arg1, zmm6_1, &var_420, &var_438)
                (*(*arg1 + 0x618))(arg1)
                (*(*arg1 + 0x460))(arg1)
                void* rax_58 = arg1[0x29]
                
                if (rax_58 == 0 || *(rax_58 + 0xf0) != 3)
                    r13.b = 0
                else
                    r13.b = 1
                    
                    if (sub_14216b750() != 0 && arg1[0x16] != 0)
                        int64_t* rsi_3 = *(rax_2 + 0x38)
                        
                        if (rsi_3 != 0 && (*(*rsi_3 + 0x368))(rsi_3) != 0)
                            int64_t* rax_62 = sub_142167760(rsi_3, arg1[0x29])
                            
                            if (rax_62 != 0
                                    && not(_mm_cvtps_pd((*(rax_2 + 0x520)).q).q f> rax_62[2])
                                    && sub_14216bac0(rsi_3, rax_62) != 0
                                    && (*(*arg1 + 0x9b8))(arg1) != 0)
                                sub_142161460(rsi_3, rax_62)
                
                void* rcx_50 = arg1[0x16]
                
                if (rcx_50 == 0)
                    var_448.q = data_143dbb1f8.q
                    var_448:8.d = data_143dbb200
                else
                    float zmm1_1[0x4] = *(rcx_50 + 0x1d0)
                    var_448.d = zmm1_1[0]
                    uint128_t zmm0_4 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    var_448:8.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    var_448:4.d = zmm0_4.d
                
                int32_t rax_68 = var_448:8.d
                var_458 = var_448.q
                float var_408_1[0x4]
                
                if (rcx_50 == 0)
                    var_408_1 = data_14399f720
                else
                    var_408_1 = *(rcx_50 + 0x1c0)
                
                if (r13.b != 0 && rcx_50 != 0)
                    int64_t* rcx_51 = arg1[0x14]
                    int32_t rax_69
                    
                    if (rcx_51 != 0)
                        rax_69, zmm7 = sub_141dcdc50(rcx_51)
                    
                    if (rcx_51 == 0 || rax_69 != 3)
                        if (var_458.d.d f!= arg1[0x4a].d || var_458:4.d.d f!= *(arg1 + 0x254)
                            || rax_68.d f!= arg1[0x4b].d)
                        label_141eeb718:
                            char rdi_2 = *(arg1[0x29] + 0x5f)
                            void* rax_72
                            
                            if (rdi_2 == 2)
                                rax_72 = sub_141ee5ee0(arg1)
                            
                            if (rdi_2 != 2 || rdi_2 != rdi_2 || rax_72 == 0 || data_143a2d680 == 0)
                                arg1[0x4d].d = *(rax_2 + 0x520)
                            else
                                arg1[0x4d].d = _mm_cvtpd_ps(zx.o(*(rax_72 + 0x68))).d
                        else if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(*(arg1 + 0x240), 
                                var_408_1, 4)) != 0)
                            goto label_141eeb718
                
                int32_t rax_75 = var_448:8.d
                arg1[0x4a] = var_448.q
                *(arg1 + 0x240) = var_408_1
                arg1[0x4b].d = rax_75
                result = *(arg1 + 0xcc)
                *(arg1 + 0x25c) = *(arg1 + 0xc4)
                *(arg1 + 0x264) = result
            else
                result, zmm7 = sub_141f2f2c0(&var_3c8)
        else
            void* rcx_15 = arg1[0x29]
            int32_t rax_21 = *(rcx_15 + 0x330)
            
            if ((rax_21.b & 8) != 0 || test_bit(rax_21, 9))
                goto label_141eeb20f
            
            if (sub_141ea5ff0(rcx_15) == 0 || *(arg1[0x29] + 0x280) == 0)
            label_141eeb1cd:
                var_468.b = 1
                zmm6 = sub_14200b740(&arg1[0x9b], zmm6, arg1[0x29], arg1, var_468.b)
                int64_t* rcx_22 = arg1[0x29]
                
                if ((*(*rcx_22 + 0x6b0))(rcx_22) != 0)
                    void* rcx_23 = arg1[0x29]
                    
                    if (*(rcx_23 + 0xf0) == 2)
                        sub_141ff71c0(rcx_23 + 0x390, &arg1[0x9b])
                
                goto label_141eeb20f
            
            zmm6 = sub_141efcd30(arg1, zmm6)
            
            if ((*(*arg1 + 0x5c0))(arg1) != 0)
                int64_t* rcx_18 = arg1[0x29]
                
                if ((*(*rcx_18 + 0x6b0))(rcx_18) != 0)
                    void* rcx_19 = arg1[0x29]
                    
                    if (*(rcx_19 + 0xf0) == 2 && sub_141ea5fd0(rcx_19) != 0)
                        void* rcx_20 = arg1[0x29]
                        *(rcx_20 + 0x3d0) = arg1[0xb4].b
                        *(rcx_20 + 0x3d4) = *(arg1 + 0x5a4)
                        *(rcx_20 + 0x3e0) = *(arg1 + 0x5b0)
                        *(rcx_20 + 0x3f0) = *(arg1 + 0x5c0)
                        *(rcx_20 + 0x400) = *(arg1 + 0x5d0)
                
                goto label_141eeb1cd
            
            result, zmm7 = sub_141f2f2c0(&var_3c8)
        zmm7.o = var_58_1

__security_check_cookie(rax_1 ^ &var_488)
return result
