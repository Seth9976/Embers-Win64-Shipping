// 函数: sub_141f286c0
// 地址: 0x141f286c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = arg2
uint64_t result
int512_t zmm1
int512_t zmm2
float zmm6[0x4]
result, zmm1, zmm2, zmm6 = sub_141efce60(arg1, arg2.d)
void* r8 = arg1[0x16]

if (r8 != 0)
    int32_t rax = *(r8 + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) != 0)
        result = (*(*arg1 + 0x440))(arg1, 0)
        r8 = arg1[0x16]
    
    if (r8 != 0)
        zmm1.o = zmm9
        result = (*(*arg1 + 0x428))(arg1, zmm1, r8)
        
        if (result.b == 0)
            result = arg1[0x16]
            void* rbx_1 = *(result + 0xa0)
            void* var_5a8_1 = rbx_1
            
            if (rbx_1 != 0)
                result = (*(*arg1 + 0x508))(arg1)
                
                if (result.b != 0)
                    int64_t* rcx_7 = arg1[0x16]
                    result = (*(*rcx_7 + 0x3e8))(rcx_7, 0)
                    
                    if (result.b == 0 && *(arg1 + 0x175) != 1)
                        int32_t rax_13 = *(rbx_1 + 0xc)
                        void* const rax_20
                        
                        if (rax_13 s>= data_143e1d9b4)
                            rax_20 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_13)
                            uint32_t rdx_5 = zx.d(temp2_1)
                            int32_t rax_15 = temp3_1 + rdx_5
                            rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_15.w) - rdx_5) * 0x18
                        
                        result = zx.q(*(rax_20 + 8) u>> 0x1d)
                        
                        if ((result.b & 1) == 0 && arg1[0x2c].d != 0)
                            float var_38_1[0x4] = zmm6
                            int128_t zmm7
                            int128_t var_48_1 = zmm7
                            float zmm8[0x4]
                            float var_58_1[0x4] = zmm8
                            int128_t zmm10
                            int128_t var_78_1 = zmm10
                            int128_t zmm13
                            int128_t var_a8_1 = zmm13
                            int128_t zmm14
                            int128_t var_b8_1 = zmm14
                            (*(*arg1 + 0x528))(arg1, 0)
                            int32_t r13_1 = 0
                            int32_t r12_1 = 0
                            char var_588
                            memset(&var_588, 0, 0x88)
                            int32_t var_580_1 = 0x3f800000
                            
                            if (not(zmm9.d f< 0.000199999995f))
                                do
                                    int32_t rsi_2 = r12_1
                                    int32_t arg_8 = r12_1
                                    
                                    if (r12_1 s>= *(arg1 + 0x154))
                                        break
                                    
                                    int32_t rax_23 = *(rbx_1 + 0xc)
                                    void* const rax_27
                                    
                                    if (rax_23 s>= data_143e1d9b4)
                                        rax_27 = nullptr
                                    else
                                        uint32_t rdx_7 = zx.d(rax_23.w)
                                        
                                        if (rax_23 s< 0)
                                            rax_23 += 0xffff
                                            rdx_7 -= 0x10000
                                        
                                        rax_27 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                                            + sx.q(rdx_7) * 0x18
                                    
                                    if (((*(rax_27 + 8) u>> 0x1d).b & 1) != 0)
                                        break
                                    
                                    if (arg1[0x16] == 0)
                                        break
                                    
                                    if ((*(arg1 + 0x8a) & 1) == 0)
                                        break
                                    
                                    r12_1 += 1
                                    zmm7 = zmm9
                                    float zmm0_1[0x4]
                                    
                                    if ((*(*arg1 + 0x510))(arg1) != 0)
                                        zmm0_1 = arg1[0x2a].d
                                        
                                        if (not(zmm9.d f<= zmm0_1[0]) && r12_1 s< *(arg1 + 0x154))
                                            zmm7.d = zmm7.d f* 0.5f
                                            zmm7 = _mm_min_ss(zmm7.d, zmm0_1[0])
                                        
                                        zmm7 = _mm_max_ss(zmm7.d, 0x3951b717)
                                    
                                    zmm2.o = zmm7
                                    zmm9.d = zmm9.d f- zmm7.d
                                    zmm2.d = zmm2.d f* *(arg1 + 0x16c)
                                    zmm2.d = zmm2.d f* arg1[0x2e].d
                                    zmm2.d = zmm2.d f+ arg1[0x2d].d
                                    
                                    if (zmm2.d f>= 0f)
                                        zmm2.o = _mm_min_ss(zmm2.d, 0x3f800000)
                                    else
                                        zmm2.o = zx.o(0)
                                    
                                    int32_t var_5b8
                                    (*(*arg1 + 0x520))(arg1, &var_5b8, zmm2)
                                    int128_t zmm3_1 = var_5b8
                                    zmm1.o = 0x3f800000
                                    int32_t var_5b0
                                    zmm0_1 = var_5b0
                                    void* rbx_2 = arg1[0x16]
                                    zmm1.d = 1f f/ zmm7.d
                                    zmm0_1[0] = zmm0_1[0] f* zmm1.d
                                    zmm2.o = zmm1.o
                                    int32_t var_5b4
                                    zmm2.d = zmm2.d f* var_5b4
                                    zmm3_1.d = zmm3_1.d f* zmm1.d
                                    float var_4f0_1 = zmm0_1[0]
                                    zmm1.o = zmm3_1
                                    zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm2.q)
                                    *(arg1 + 0xc4) = (zmm1.o).q
                                    *(arg1 + 0xcc) = var_4f0_1
                                    zmm1.o = *(rbx_2 + 0x1c0)
                                    uint32_t temp0_7 =
                                        _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1.o, 4))
                                    int128_t var_458 = zmm1.o
                                    
                                    if (temp0_7 != 0)
                                        *(rbx_2 + 0x180) = zmm1.o
                                        void var_448
                                        int32_t* rax_35
                                        rax_35, zmm9 = sub_140adf5d0(&var_458, &var_448)
                                        *(rbx_2 + 0x190) = *rax_35
                                        *(rbx_2 + 0x198) = rax_35[2]
                                    
                                    bool cond:1_1 = (*(arg1 + 0xf4) & 1) != 0
                                    int64_t var_5a0 = *(rbx_2 + 0x190)
                                    int32_t var_598_1 = *(rbx_2 + 0x198)
                                    char* var_5c8_1
                                    char var_5c0_1
                                    
                                    if (cond:1_1 || *(arg1 + 0xfa) == 0)
                                        int32_t r14_1 = arg1[0x18].d
                                        arg1[0x18].d = r14_1 | 4
                                        char rbx_4 = *(arg1 + 0xf9)
                                        char rdi_2 = arg1[0x1f].b
                                        int64_t rsi_1 = *arg1
                                        float var_c8[0x4]
                                        float (* rax_41)[0x4]
                                        rax_41, zmm1, zmm2, zmm7 = sub_140ade170(&var_5a0, &var_c8)
                                        var_5c0_1 = rbx_4
                                        var_5c8_1 = &var_588
                                        (*(rsi_1 + 0x478))(arg1, &var_5b8, rax_41, zx.q(rdi_2), 
                                            var_5c8_1, var_5c0_1)
                                        rsi_2 = arg_8
                                        arg1[0x18].d = r14_1
                                    else
                                        char rbx_3 = *(arg1 + 0xf9)
                                        char rdi_1 = arg1[0x1f].b
                                        float var_d8[0x4]
                                        float (* rax_38)[0x4]
                                        int64_t zmm0_2
                                        rax_38, zmm0_2, zmm1, zmm2, zmm7 =
                                            sub_140ade170(&var_5a0, &var_d8)
                                        var_5c0_1 = rbx_3
                                        var_5c8_1 = &var_588
                                        sub_141f231f0(arg1, &var_5b8, rax_38, rdi_1, zmm0_2, zmm1, 
                                            zmm2, var_5c8_1, var_5c0_1)
                                    
                                    rbx_1 = var_5a8_1
                                    int32_t rax_42 = *(rbx_1 + 0xc)
                                    void* const rax_46
                                    
                                    if (rax_42 s>= data_143e1d9b4)
                                        rax_46 = nullptr
                                    else
                                        uint32_t rdx_15 = zx.d(rax_42.w)
                                        
                                        if (rax_42 s< 0)
                                            rax_42 += 0xffff
                                            rdx_15 -= 0x10000
                                        
                                        rax_46 = *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                                            + sx.q(rdx_15) * 0x18
                                    
                                    result = zx.q(*(rax_46 + 8) u>> 0x1d)
                                    
                                    if ((result.b & 1) != 0)
                                        return result
                                    
                                    if (arg1[0x16] == 0)
                                        return result
                                    
                                    if ((*(arg1 + 0x8a) & 1) == 0)
                                        return result
                                    
                                    zmm8 = zx.o(0)
                                    int128_t var_578
                                    float var_568[0x4]
                                    int128_t var_558
                                    float var_548[0x4]
                                    int128_t var_538
                                    float var_528[0x4]
                                    int128_t var_518
                                    int64_t var_508
                                    float var_4e8[0x4]
                                    
                                    if (*(arg1 + 0x174) == 0)
                                        zmm6 = arg1[0x2d].d
                                        zmm0_1 = var_580_1
                                        zmm0_1[0] = zmm0_1[0] f* zmm7.d
                                        *(arg1 + 0x175) = 0
                                        zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x16c)
                                        zmm0_1[0] = zmm0_1[0] f* arg1[0x2e].d
                                        zmm6[0] = zmm6[0] + zmm0_1[0]
                                        
                                        if (not(zmm6[0] < 1f))
                                            char rax_48 = *(arg1 + 0xfa)
                                            zmm8 = zmm6
                                            zmm8[0] = zmm8[0] - 1f
                                            
                                            if (rax_48 == 0)
                                                zmm1.o = var_578
                                                float var_318[0x4] = var_588.o
                                                float var_2f8_1[0x4] = var_568
                                                int128_t var_308_1 = zmm1.o
                                                zmm1.o = var_558
                                                float var_2d8_1[0x4] = var_548
                                                int128_t var_2e8_1 = zmm1.o
                                                zmm1.o = var_538
                                                float var_2b8_1[0x4] = var_528
                                                int128_t var_2c8_1 = zmm1.o
                                                zmm1.o = var_518
                                                int64_t var_298_1 = var_508
                                                *(arg1 + 0x175) = 1
                                                int128_t var_2a8_1 = zmm1.o
                                                int32_t var_290_1 = 0x3f800000
                                                zmm1, zmm2, zmm6 =
                                                    sub_1405a9f90(&arg1[0x22], &var_318)
                                            else if (rax_48 != 2)
                                                float var_438[0x4]
                                                memset(&var_438, 0, 0x88)
                                                int128_t var_428
                                                zmm1.o = var_428
                                                int128_t var_1e8_1 = zmm1.o
                                                int128_t var_408
                                                zmm1.o = var_408
                                                int128_t var_1c8_1 = zmm1.o
                                                int128_t var_3e8
                                                zmm1.o = var_3e8
                                                int32_t var_430_1 = 0x3f800000
                                                float var_1f8[0x4] = var_438
                                                float var_418[0x4]
                                                float var_1d8_1[0x4] = var_418
                                                float var_3f8[0x4]
                                                float var_1b8_1[0x4] = var_3f8
                                                float var_3d8[0x4]
                                                float var_198_1[0x4] = var_3d8
                                                int128_t var_1a8_1 = zmm1.o
                                                int128_t var_3c8
                                                zmm1.o = var_3c8
                                                int64_t var_3b8
                                                int64_t var_178_1 = var_3b8
                                                int128_t var_188_1 = zmm1.o
                                                int32_t var_170_1 = 0x3f800000
                                                zmm1, zmm2, zmm6 =
                                                    sub_1405a9f90(&arg1[0x20], &var_1f8)
                                                arg1[0x2e].d = (arg1[0x2e].d ^ 0x80000000)[0]
                                            else
                                                zmm1.o = var_578
                                                float var_288[0x4] = var_588.o
                                                float var_268_1[0x4] = var_568
                                                int128_t var_278_1 = zmm1.o
                                                zmm1.o = var_558
                                                float var_248_1[0x4] = var_548
                                                int128_t var_258_1 = zmm1.o
                                                zmm1.o = var_538
                                                float var_228_1[0x4] = var_528
                                                int128_t var_238_1 = zmm1.o
                                                zmm1.o = var_518
                                                int64_t var_208_1 = var_508
                                                int128_t var_218_1 = zmm1.o
                                                int32_t var_200_1 = 0
                                                zmm1, zmm2, zmm6 =
                                                    sub_1405a9f90(&arg1[0x28], &var_288)
                                        else if (not(zmm6[0] >= 0f))
                                            char rax_49 = *(arg1 + 0xfa)
                                            zmm8 = zmm6 ^ 0x80000000
                                            
                                            if (rax_49 == 1)
                                                zmm1.o = var_578
                                                float var_168[0x4] = var_588.o
                                                float var_148_1[0x4] = var_568
                                                int128_t var_158_1 = zmm1.o
                                                zmm1.o = var_558
                                                float var_128_1[0x4] = var_548
                                                int128_t var_138_1 = zmm1.o
                                                zmm1.o = var_538
                                                float var_108_1[0x4] = var_528
                                                int128_t var_118_1 = zmm1.o
                                                zmm1.o = var_518
                                                int64_t var_e8_1 = var_508
                                                *(arg1 + 0x175) = rax_49
                                                int128_t var_f8_1 = zmm1.o
                                                int32_t var_e0_1 = 0
                                                zmm1, zmm2, zmm6 =
                                                    sub_1405a9f90(&arg1[0x22], &var_168)
                                            else if (rax_49 == 3)
                                                float var_3a8[0x4]
                                                memset(&var_3a8, 0, 0x88)
                                                int128_t var_398
                                                zmm1.o = var_398
                                                int128_t var_4d8_1 = zmm1.o
                                                int128_t var_378
                                                zmm1.o = var_378
                                                int128_t var_4b8_1 = zmm1.o
                                                int128_t var_358
                                                zmm1.o = var_358
                                                int32_t var_3a0_1 = 0x3f800000
                                                var_4e8 = var_3a8
                                                float var_388[0x4]
                                                float var_4c8_1[0x4] = var_388
                                                float var_368[0x4]
                                                float var_4a8_1[0x4] = var_368
                                                float var_348[0x4]
                                                float var_488_1[0x4] = var_348
                                                int128_t var_498_1 = zmm1.o
                                                int128_t var_338
                                                zmm1.o = var_338
                                                int64_t var_328
                                                int64_t var_468_1 = var_328
                                                int128_t var_478_1 = zmm1.o
                                                int32_t var_460_1 = 0
                                                zmm1, zmm2, zmm6 =
                                                    sub_1405a9f90(&arg1[0x20], &var_4e8)
                                                arg1[0x2e].d = (arg1[0x2e].d ^ 0x80000000)[0]
                                        
                                        arg1[0x2d].d = zmm6[0]
                                    
                                    if (not(var_580_1[0] == 0f) && *(arg1 + 0x174) == 1)
                                        zmm1.o = var_578
                                        var_4e8 = var_588.o
                                        int128_t var_4d8_2 = zmm1.o
                                        zmm1.o = var_558
                                        float var_4c8_2[0x4] = var_568
                                        int128_t var_4b8_2 = zmm1.o
                                        zmm1.o = var_538
                                        float var_4a8_2[0x4] = var_548
                                        int128_t var_498_2 = zmm1.o
                                        zmm1.o = var_518
                                        float var_488_2[0x4] = var_528
                                        int128_t var_478_2 = zmm1.o
                                        zmm1.o = arg1[0x2d].d
                                        int32_t var_460_2 = zmm1.d
                                        int64_t var_468_2 = var_508
                                        zmm1, zmm2 = sub_1405a9f90(&arg1[0x26], &var_4e8)
                                        *(arg1 + 0x174) = 0
                                    
                                    zmm0_1 = zx.o(0)
                                    
                                    if ((var_588 & 1) != 0)
                                        void* rbx_5 = arg1[0x16]
                                        
                                        if (rbx_5 != 0)
                                            rbx_5 = *(rbx_5 + 0xa0)
                                        
                                        if ((*(*arg1 + 0x508))(arg1) == 0)
                                            break
                                        
                                        if (rbx_5 == 0)
                                            break
                                        
                                        int32_t rax_52 = *(rbx_5 + 0xc)
                                        void* const rax_56
                                        
                                        if (rax_52 s>= data_143e1d9b4)
                                            rax_56 = nullptr
                                        else
                                            uint32_t rdx_22 = zx.d(rax_52.w)
                                            
                                            if (rax_52 s< 0)
                                                rax_52 += 0xffff
                                                rdx_22 -= 0x10000
                                            
                                            rax_56 =
                                                *(data_143e1d9a0 + (sx.q(rax_52 s>> 0x10) << 3))
                                                + sx.q(rdx_22) * 0x18
                                        
                                        if (((*(rax_56 + 8) u>> 0x1d).b & 1) != 0)
                                            break
                                        
                                        zmm2.o = zmm7
                                        (*(*arg1 + 0x458))(arg1, &var_588, zmm2, &var_5b8, 
                                            var_5c8_1, var_5c0_1)
                                        int32_t rax_60 = *(rbx_5 + 0xc)
                                        void* const rax_64
                                        
                                        if (rax_60 s>= data_143e1d9b4)
                                            rax_64 = nullptr
                                        else
                                            uint32_t rdx_25 = zx.d(rax_60.w)
                                            
                                            if (rax_60 s< 0)
                                                rax_60 += 0xffff
                                                rdx_25 -= 0x10000
                                            
                                            rax_64 =
                                                *(data_143e1d9a0 + (sx.q(rax_60 s>> 0x10) << 3))
                                                + sx.q(rdx_25) * 0x18
                                        
                                        if (((*(rax_64 + 8) u>> 0x1d).b & 1) != 0)
                                            break
                                        
                                        if (arg1[0x16] == 0)
                                            break
                                        
                                        rbx_1 = var_5a8_1
                                        zmm0_1 = 0x3f800000
                                        zmm0_1[0] = 1f f- var_580_1
                                        zmm0_1[0] = zmm0_1[0] f* zmm7.d
                                        r13_1 += 1
                                    else
                                        if (*(arg1 + 0x175) == 1)
                                            *(arg1 + 0xc4) = data_143dbb1f8.q
                                            *(arg1 + 0xcc) = data_143dbb200
                                            break
                                        
                                        if (not(zmm8[0] == 0f))
                                            zmm0_1 = zmm8
                                            zmm0_1[0] = zmm0_1[0] f* arg1[0x1e].d
                                            r13_1 += 1
                                    
                                    if (r13_1 s<= 2 && not(zmm0_1[0] < 0.000199999995f))
                                        zmm9.d = zmm9.d f+ zmm0_1[0]
                                        r12_1 = rsi_2
                                while (zmm9.d f>= 0.000199999995f)
                            
                            result = (*(*arg1 + 0x460))(arg1)

return result
