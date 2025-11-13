// 函数: sub_1421a0ce0
// 地址: 0x1421a0ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_140b33630("Effects")
void* rax_2 = arg1[0x15]

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg1)

void var_b0
sub_142076cb0(&var_b0, rax_2, 0, 0, *(arg1 + 0x431) u>> 7)
(*(*arg1 + 0x390))(arg1)
void* rcx_4 = arg1[0x81]

if (rcx_4 == 0 || *(rcx_4 + 0x48) == 0)
    (*(*arg1 + 0x340))(arg1, 0)
else
    uint64_t r8 = zx.q(*(arg1 + 0x664))
    uint128_t zmm0_1
    zmm0_1.d = arg2.d f* 1000f
    int32_t rdx_2 = (int.q(zmm0_1.d)).d + r8.d
    
    if (rdx_2 u>= *(rcx_4 + 0xb8))
        zmm0_1.d = float.s(r8)
        *(arg1 + 0x664) = 0
        zmm0_1.d = zmm0_1.d f* 0.00100000005f
        uint128_t zmm6
        zmm6.d = arg2.d f+ zmm0_1.d
        float zmm8[0x4]
        float zmm9[0x4]
        
        if (arg1[0x86].b s< 0)
            zmm0_1, zmm6, zmm8, zmm9 = sub_14218b3c0(arg1, zmm0_1.d)
            
            if ((arg1[0x86].b & 0x10) != 0)
                zmm0_1, zmm6 = sub_14217efa0(arg1 + 0x8e, arg1)
        
        void* rcx_7 = arg1[0xca]
        
        if (rcx_7 != 0)
            int64_t rax_4 = 0
            
            if (0 == *(rcx_7 + 8))
                *(rcx_7 + 8) = 0
            else
                rax_4 = *(rcx_7 + 8)
            
            if (((rax_4 u>> 0x1a).b & 1) == 0)
                int32_t zmm0_2 = sub_14218eae0(&data_143a2edd8)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                
                while (*(arg1 + 0x434) != 0)
                    zmm0_2 = sub_140b732d0((zx.o(0)).d)
                
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                zmm0_1, zmm6, zmm8, zmm9 = sub_14218e220(arg1, zmm0_2)
        
        char rcx_11 = *(arg1 + 0x432)
        uint8_t rdx_4 = *(arg1 + 0x431) u>> 7
        
        if ((rcx_11 & 1) != rdx_4)
            *(arg1 + 0x432) = (rcx_11 & 0xfe) | rdx_4
            zmm0_1 = sub_141ee8490(arg1)
        
        if ((*(arg1 + 0x8a) & 1) != 0 || *(arg1 + 0x89) s< 0)
            void* r15_1 = arg1[0x15]
            arg1[0xcb].d = zmm6.d
            
            if (r15_1 == 0)
                void* rax_9
                rax_9, zmm0_1 = sub_141ee69e0(arg1)
                r15_1 = rax_9
            
            char rbx_1 = arg1[0x86].b
            arg1[0x86].b = rbx_1 & 0xbf
            
            if (zx.d(arg1[0x2a].b) s<= data_143a30368:4.d)
                if ((rbx_1 & 0x40) != 0)
                    char rbx_2 = *(arg1 + 0x8a)
                    sub_142199780(arg1, 1, zmm0_1.d)
                    
                    if ((rbx_2 & 1) == 0)
                        zmm0_1, zmm6, zmm8, zmm9 = sub_142195230(arg1)
                    else
                        zmm0_1, zmm6, zmm8, zmm9 = sub_142185b40(arg1, 0)
                
                if ((*(arg1 + 0x432) & 2) != 0)
                label_1421a1156:
                    zmm6.d = zmm6.d f* arg1[0x9f].d
                    *(arg1 + 0x432) &= 0xef
                    arg1[0xcb].d = zmm6.d
                    zmm6.d = zmm6.d f+ *(arg1 + 0x4c4)
                    *(arg1 + 0x4c4) = zmm6.d
                    int32_t rax_24 = *(arg1 + 0x5bc)
                    arg1[0xb7].d = 0
                    
                    if (rax_24 s< 0 && rax_24 != 0)
                        zmm0_1 = sub_140638cc0(&arg1[0xb6], 0)
                    
                    int32_t rax_25 = *(arg1 + 0x5cc)
                    arg1[0xb9].d = 0
                    
                    if (rax_25 s< 0 && rax_25 != 0)
                        zmm0_1 = sub_1405dadb0(&arg1[0xb8], 0)
                    
                    if (sub_14243ade0(r15_1) != 0)
                        int64_t* var_f8
                        sub_1424373a0(r15_1, &var_f8)
                        int32_t i_8
                        int32_t i = i_8
                        
                        while (i s>= 0)
                            int64_t* rdx_11 = var_f8
                            
                            if (i s>= rdx_11[1].d)
                                break
                            
                            int64_t* rax_28 = sub_140d3c6e0(*rdx_11 + (sx.q(i) << 3))
                            
                            if (rax_28 != 0 && (*(rax_28 + 0x294) & 2) != 0)
                                int64_t rdx_12 = *rax_28
                                
                                if ((*(rdx_12 + 0x6a8))(rax_28, rdx_12) != 0)
                                    int64_t var_d0
                                    void var_a0
                                    (*(*rax_28 + 0x6f8))(rax_28, &var_d0, &var_a0)
                                    int64_t r15_2 = sx.q(arg1[0xb7].d)
                                    int32_t rax_31 = (r15_2 + 1).d
                                    arg1[0xb7].d = rax_31
                                    
                                    if (rax_31 s> *(arg1 + 0x5bc))
                                        sub_140638a00(&arg1[0xb6])
                                    
                                    int64_t rcx_45 = arg1[0xb6]
                                    int64_t rdx_15 = r15_2 * 3
                                    zmm0_1 = zx.o(var_d0)
                                    *(rcx_45 + (rdx_15 << 2)) = zmm0_1.q
                                    int32_t var_c8
                                    *(rcx_45 + (rdx_15 << 2) + 8) = var_c8
                                    int64_t r15_3 = sx.q(arg1[0xb9].d)
                                    int32_t rax_33 = (r15_3 + 1).d
                                    arg1[0xb9].d = rax_33
                                    
                                    if (rax_33 s> *(arg1 + 0x5cc))
                                        zmm0_1 = sub_1406105e0(&arg1[0xb8])
                                    
                                    *(arg1[0xb8] + (r15_3 << 2)) = rax_28[0x5d].d
                            
                            i = i_8 + 1
                            i_8 = i
                    
                    if ((*(arg1[0x81] + 0xb0) & 1) != 0)
                        zmm0_1 = sub_1421963b0(arg1, zmm8, zmm9)
                    
                    if (*(arg1 + 0x50c) s< 0)
                        zmm0_1 = sub_14218ca00(&arg1[0xa0], 0)
                    else
                        int32_t i_10 = arg1[0xa1].d
                        
                        if (i_10 != 0)
                            int64_t* rbx_6 = arg1[0xa0] + 0x28
                            int32_t i_1
                            
                            do
                                int64_t rcx_49 = *rbx_6
                                
                                if (rcx_49 != 0)
                                    zmm0_1 = sub_140a74f90(rcx_49)
                                
                                rbx_6 = &rbx_6[7]
                                i_1 = i_10
                                i_10 -= 1
                            while (i_1 != 1)
                        
                        arg1[0xa1].d = 0
                    
                    if (*(arg1 + 0x51c) s< 0)
                        zmm0_1 = sub_14218c990(&arg1[0xa2], 0)
                    else
                        int32_t i_11 = arg1[0xa3].d
                        
                        if (i_11 != 0)
                            int64_t* rbx_8 = arg1[0xa2] + 0x28
                            int32_t i_2
                            
                            do
                                int64_t rcx_51 = *rbx_8
                                
                                if (rcx_51 != 0)
                                    zmm0_1 = sub_140a74f90(rcx_51)
                                
                                rbx_8 = &rbx_8[9]
                                i_2 = i_11
                                i_11 -= 1
                            while (i_2 != 1)
                        
                        arg1[0xa3].d = 0
                    
                    if (*(arg1 + 0x52c) s< 0)
                        zmm0_1 = sub_14218c920(&arg1[0xa4], 0)
                    else
                        int32_t i_12 = arg1[0xa5].d
                        
                        if (i_12 != 0)
                            int64_t* rbx_10 = arg1[0xa4] + 0x28
                            int32_t i_3
                            
                            do
                                int64_t rcx_53 = *rbx_10
                                
                                if (rcx_53 != 0)
                                    zmm0_1 = sub_140a74f90(rcx_53)
                                
                                rbx_10 = &rbx_10[0xe]
                                i_3 = i_12
                                i_12 -= 1
                            while (i_3 != 1)
                        
                        arg1[0xa5].d = 0
                    
                    int32_t rax_37 = *(arg1 + 0x53c)
                    uint64_t rsi_2 = arg1[0xa6]
                    int32_t i_9 = arg1[0xa7].d
                    
                    if (rax_37 s< 0)
                        if (i_9 != 0)
                            int64_t* rsi_4 = rsi_2 + 0x28
                            int32_t i_4
                            
                            do
                                int64_t rcx_56 = *rsi_4
                                
                                if (rcx_56 != 0)
                                    zmm0_1 = sub_140a74f90(rcx_56)
                                
                                rsi_4 = &rsi_4[8]
                                i_4 = i_9
                                i_9 -= 1
                            while (i_4 != 1)
                            rax_37 = *(arg1 + 0x53c)
                        
                        arg1[0xa7].d = 0
                        
                        if (rax_37 != 0)
                            zmm0_1 = sub_1405a52a0(&arg1[0xa6], 0)
                    else
                        if (i_9 != 0)
                            int64_t* rsi_3 = rsi_2 + 0x28
                            int32_t i_5
                            
                            do
                                int64_t rcx_55 = *rsi_3
                                
                                if (rcx_55 != 0)
                                    zmm0_1 = sub_140a74f90(rcx_55)
                                
                                rsi_3 = &rsi_3[8]
                                i_5 = i_9
                                i_9 -= 1
                            while (i_5 != 1)
                        
                        arg1[0xa7].d = 0
                    
                    int32_t rcx_58 = arg1[0x87].d
                    *(arg1 + 0x433) |= 0x10
                    *(arg1 + 0x65c) = 0
                    
                    if ((rcx_58 & 0x3fffffff) == 0x3fffffff || rcx_58 s< 0
                            || (*(arg1 + 0x432) & 2) != 0)
                        if (arg4 == 0)
                        label_1421a179b:
                            
                            if (data_143f4d2c8 != 0)
                                sub_14218e220(arg1, zmm0_1.d)
                            else
                                sub_14218e220(arg1, sub_142188fc0(arg1).d)
                        else
                            void* rax_40 = *(arg4 + 0x20)
                            
                            if (rax_40 == 0 || *(rax_40 + 0x10) == 0)
                                goto label_1421a179b
                            
                            char rax_41 = arg1[0x86].b
                            
                            if ((rax_41 & 8) == 0)
                                zmm0_1 = sub_142188f50(arg1)
                                rax_41 = arg1[0x86].b
                            
                            if ((rax_41 & 4) == 0)
                                goto label_1421a179b
                            
                            if (data_143f4d2c8 != 0)
                                sub_14218e220(arg1, zmm0_1.d)
                            else if (data_143a2ece0 == 0)
                                sub_14218e220(arg1, sub_142188fc0(arg1).d)
                            else
                                char rax_42
                                rax_42, zmm0_1 = sub_140b011d0()
                                
                                if (rax_42 == 0 || data_143a2dc68 == 0)
                                    goto label_1421a179b
                                
                                *(arg1 + 0x433) |= 4
                                *(arg1 + 0x620) = *(arg1 + 0x1c0)
                                *(arg1 + 0x630) = *(arg1 + 0x1d0)
                                *(arg1 + 0x640) = *(arg1 + 0x1e0)
                                int32_t rax_43 = *(arg1 + 0x5ac)
                                arg1[0xb5].d = 0
                                
                                if (rax_43 s< 0 && rax_43 != 0)
                                    sub_140888ba0(&arg1[0xb4], 0)
                                
                                int64_t rsi_5 = sx.q(arg1[0x89].d)
                                
                                if (rsi_5.d != 0)
                                    int32_t rax_44 = arg1[0xb5].d
                                    int32_t rdx_17 = rsi_5.d + rax_44
                                    
                                    if (rdx_17 s> *(arg1 + 0x5ac))
                                        sub_140888ba0(&arg1[0xb4], rdx_17)
                                        rax_44 = arg1[0xb5].d
                                    
                                    memcpy((sx.q(rax_44) << 7) + arg1[0xb4], arg1[0x88], 
                                        (rsi_5 << 7).d)
                                    arg1[0xb5].d += rsi_5.d
                                
                                int32_t rax_45 = arg1[0x23].d
                                uint128_t zmm1_1 = zx.o(arg1[0x22])
                                *(arg1 + 0x5d0) = *(arg1 + 0x100)
                                zmm0_1 = zx.o(arg1[0x94])
                                arg1[0xbc] = zmm1_1.q
                                arg1[0xbd].d = rax_45
                                int32_t rax_46 = arg1[0x95].d
                                *(arg1 + 0x5ec) = zmm0_1.q
                                *(arg1 + 0x5f4) = rax_46
                                void* rsi_6 = arg1[0xb4]
                                void* r14_5 = (sx.q(arg1[0xb5].d) << 7) + rsi_6
                                
                                if (rsi_6 != r14_5)
                                    uint128_t* rbx_12 = rsi_6 + 0x60
                                    
                                    do
                                        void* rax_47 = rbx_12[-3].q
                                        
                                        if (rax_47 != 0)
                                            void* rax_48 = *(rax_47 + 0x130)
                                            uint128_t* rax_49
                                            
                                            if (rax_48 == 0)
                                                rax_49 = &data_143dbb0c0
                                            else
                                                rax_49 = rax_48 + 0x1c0
                                            
                                            rbx_12[-2] = *rax_49
                                            rbx_12[-1] = rax_49[1]
                                            *rbx_12 = rax_49[2]
                                            int64_t* rcx_65 = rbx_12[-3].q
                                            void var_90
                                            int64_t* rax_51 = (*(*rcx_65 + 0x2f0))(rcx_65, &var_90)
                                            rbx_12[1].q = *rax_51
                                            *(rbx_12 + 0x18) = rax_51[1].d
                                        
                                        *(rbx_12 + 0x1c) = 1
                                        rsi_6 -= -0x80
                                        rbx_12 -= -0x80
                                    while (rsi_6 != r14_5)
                                
                                *(arg1 + 0x434) = 1
                                int64_t* var_130 = nullptr
                                int64_t var_128 = 0
                                void var_68
                                void** rax_54 = sub_14218b010(&var_68, 
                                    sub_1421912d0(&data_143a2edd8, &var_130, &var_128), 2)
                                int64_t* rcx_67 = var_130
                                void* rdx_22 = *rax_54
                                *(rdx_22 + 0x10) = arg1
                                *(rdx_22 + 0x18) = rcx_67
                                
                                if (rcx_67 != 0)
                                    rcx_67[9].d += 1
                                
                                *(rdx_22 + 0x20) = var_128
                                void* rcx_69 = *rax_54
                                int32_t r8_7 = rax_54[2].d
                                int64_t* rdx_23 = rax_54[1]
                                int64_t* rsi_7 = *(rcx_69 + 0x30)
                                int64_t* var_120 = rsi_7
                                
                                if (rsi_7 != 0)
                                    rsi_7[9].d += 1
                                
                                sub_14219f0e0(rcx_69, rdx_23, r8_7, 1)
                                
                                if (&arg1[0xca] != &var_120)
                                    int64_t* rcx_70 = arg1[0xca]
                                    arg1[0xca] = rsi_7
                                    
                                    if (rcx_70 != 0)
                                        rcx_70[9].d -= 1
                                        
                                        if (rcx_70[9].d == 1)
                                            sub_140a2f6e0(rcx_70)
                                else if (rsi_7 != 0)
                                    rsi_7[9].d -= 1
                                    
                                    if (rsi_7[9].d == 1)
                                        sub_140a2f6e0(var_120)
                                
                                int64_t* var_e8
                                *(*sub_1423c0d30(arg4, &var_e8) + 0x4c) = 2
                                int64_t* rcx_73 = var_e8
                                
                                if (rcx_73 != 0)
                                    rcx_73[9].d -= 1
                                    
                                    if (rcx_73[9].d == 1)
                                        sub_140a2f6e0(rcx_73)
                                
                                void* rax_59 = arg1[0xca]
                                void* var_e0 = rax_59
                                
                                if (rax_59 != 0)
                                    *(rax_59 + 0x48) += 1
                                
                                int64_t* var_d8
                                sub_14084e1b0(*sub_1423c0d30(arg4, &var_d8), &var_e0)
                                int64_t* rcx_76 = var_d8
                                
                                if (rcx_76 != 0)
                                    rcx_76[9].d -= 1
                                    
                                    if (rcx_76[9].d == 1)
                                        sub_140a2f6e0(rcx_76)
                                
                                int64_t* rcx_77 = var_130
                                
                                if (rcx_77 != 0)
                                    rcx_77[9].d -= 1
                                    
                                    if (rcx_77[9].d == 1)
                                        sub_140a2f6e0(var_130)
                                
                                if (*data_143f4d6b0 == 0)
                                    arg1[7].b = 2
                                else
                                    arg1[7].w = 0x400
                else
                    void* rax_10 = arg1[0x81]
                    char rax_11
                    
                    if (rax_10 != 0 && (*(rax_10 + 0xb6) & 1) != 0)
                        rax_11, zmm6 = sub_142188730(arg1)
                    
                    if (rax_10 == 0 || (*(rax_10 + 0xb6) & 1) == 0 || rax_11 == 0
                            || (arg1[0x86].b & 0x10) != 0)
                        void* rax_13 = arg1[0x81]
                        zmm0_1.d = zmm6.d f+ *(arg1 + 0x4cc)
                        *(arg1 + 0x4cc) = zmm0_1.d
                        
                        if (not(zmm0_1.d f<= *(rax_13 + 0x60)))
                            void* rbx_3 = arg1[0x15]
                            int64_t rsi
                            rsi.b = 0
                            *(arg1 + 0x4cc) = 0
                            
                            if (rbx_3 != 0)
                            label_1421a1057:
                                
                                if (sub_14243ade0(rbx_3) != 0 && data_143a2ed01 != 0)
                                    int64_t* var_108
                                    sub_1424373a0(rbx_3, &var_108)
                                    int32_t i_7
                                    int32_t i_6 = i_7
                                    
                                    while (i_6 s>= 0)
                                        int64_t* rdx_6 = var_108
                                        
                                        if (i_6 s>= rdx_6[1].d)
                                            break
                                        
                                        int64_t* rax_17 = sub_140d3c6e0(*rdx_6 + (sx.q(i_6) << 3))
                                        
                                        if (rax_17 != 0 && (*(rax_17 + 0x294) & 2) != 0)
                                            int64_t rdx_7 = *rax_17
                                            
                                            if ((*(rdx_7 + 0x6a8))(rax_17, rdx_7) != 0)
                                                rsi.b = 1
                                                break
                                        
                                        i_6 = i_7 + 1
                                        i_7 = i_6
                            else
                                void* rax_14
                                rax_14, zmm0_1 = sub_141ee69e0(arg1)
                                rbx_3 = rax_14
                                
                                if (rax_14 != 0)
                                    goto label_1421a1057
                            
                            uint64_t rax_20 = zx.q(*(arg1 + 0x432))
                            
                            if (rsi.b == 0)
                                rax_20.b |= 0x20
                                *(arg1 + 0x432) = rax_20.b
                                (*(*arg1 + 0x988))(arg1)
                            else
                                bool cond:1_1
                                
                                if ((rax_20.b & 4) == 0)
                                    cond:1_1 = *(arg1[0x81] + 0xb3) == 0
                                else
                                    cond:1_1 = *(arg1 + 0x43d) == 0
                                
                                rax_20.b = cond:1_1
                                
                                if (rax_20.b == 1)
                                    float zmm1[0x4] = *(arg1 + 0x1d0)
                                    int64_t rax_21 = *arg1
                                    zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                    float var_118 = zmm1[0]
                                    float var_78_1[0x4] = zmm1
                                    float var_110_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                                    int32_t var_114_1 = zmm0_1.d
                                    int32_t rax_22 = (*(rax_21 + 0x9a8))(arg1, &var_118)
                                    int64_t r8_2 = *arg1
                                    (*(r8_2 + 0x9b0))(arg1, zx.q(rax_22), r8_2)
                        
                        goto label_1421a1156
                    
                    *(arg1 + 0x432) |= 0x10
                    sub_14218ca00(&arg1[0xa0], 0)
                    sub_14218c990(&arg1[0xa2], 0)
                    sub_14218c920(&arg1[0xa4], 0)
                    int64_t r8_1
                    int512_t zmm0_3
                    r8_1, zmm0_3 = sub_14218ca00(&arg1[0xa8], 0)
                    
                    if (*(arg1 + 0x431) s< 0 && *(arg1[0x81] + 0x108) u< *(arg1 + 0x43e))
                        r8_1.b = 1
                        sub_142196000(arg1, 0, r8_1, 0, zmm0_3)
            else if ((*(arg1 + 0x8a) & 1) != 0)
                sub_14218b3c0(arg1, zmm0_1.d)
                sub_141ee8470(arg1)
        else
            (*(*arg1 + 0x340))(arg1, 0)
    else
        *(arg1 + 0x664) = rdx_2

sub_142079870(&var_b0)
int64_t result = sub_140b37f60("Effects")
__security_check_cookie(rax_1 ^ &var_168)
return result
