// 函数: sub_142683400
// 地址: 0x142683400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t rax_2 = sx.q(arg6)
int64_t r12 = *(arg1 + 0x2c0)
int32_t var_1e8 = rax_2.d
int64_t r13 = rax_2 * 0x38
sub_142692ae0(arg5)
int32_t rax_4
int64_t r9_1
rax_4, r9_1 = sub_142627710(arg4, arg3, **(r12 + r13 + 0x28), *(r12 + r13 + 0x20), &arg5[1])
int32_t* result

if ((rax_4 u>> 0x1f).b == 0)
    sub_14268c980(arg1, arg5[1])
    int32_t rax_6 = *(arg1 + 0x130)
    void* var_208
    int32_t rax_7
    int64_t r9_3
    int512_t zmm0_1
    
    if (rax_6 != 0)
        if (rax_6 != 1)
            var_208.d = *(arg1 + 0x134)
            rax_7, r9_3, zmm0_1 =
                sub_142627570(arg4, *(arg1 + 0x110), *(arg1 + 0x114), arg5[1], var_208.d)
            goto label_142683592
        
        int64_t* rax_8
        int64_t r9_4
        rax_8, r9_4 = sub_142624b00(arg4)
        arg5[2] = rax_8
        
        if (rax_8 != 0)
            int32_t rax_9
            int64_t r9_5
            int512_t zmm0_2
            rax_9, r9_5, zmm0_2 = sub_142625ab0(arg4, arg5[1], rax_8)
            
            if ((rax_9 u>> 0x1f).b == 0)
                int64_t* r9_6 = arg5[1]
                int32_t r8_3 = *(arg1 + 0x114)
                int32_t rdx_5 = *(arg1 + 0x110)
                zmm0_2.o = *arg5[2]
                int128_t var_188
                var_208 = &var_188
                var_188 = zmm0_2.o
                rax_7, r9_3, zmm0_1 = sub_142627160(arg4, rdx_5, r8_3, r9_6, zmm0_2, var_208)
                goto label_142683592
            
            sub_14262d160(arg2, 3, "GenerateNavigationDataLayer: Failed to build distance field.", 
                r9_5)
            result.b = 0
        else
            sub_14262d160(arg2, (rax_8 + 3).d, 
                "GenerateNavigationDataLayer: Out of memory 'DistanceField'.", r9_4)
            result.b = 0
    else
        rax_7, r9_3, zmm0_1 = sub_142627640(arg4, *(arg1 + 0x110), *(arg1 + 0x114), arg5[1])
    label_142683592:
        
        if ((rax_7 u>> 0x1f).b != 0)
            sub_14262d160(arg2, 3, "GenerateNavigationDataLayer: Failed to build regions.", r9_3)
            result.b = 0
        else if (arg5[1][2].w u<= 0)
            result.b = 1
        else
            int64_t* rax_14
            int64_t r9_8
            rax_14, r9_8 = sub_142624b00(arg4)
            arg5[3] = rax_14
            
            if (rax_14 != 0)
                int64_t rax_15
                int64_t r9_9
                rax_15, r9_9 = sub_142624ad0(arg4)
                arg5[4] = rax_15
                
                if (rax_15 != 0)
                    zmm0_1.o = *(arg1 + 0xdc)
                    int64_t var_1f0_1 = rax_15
                    int64_t var_1f8_1 = arg5[3]
                    var_208.d = *(arg1 + 0xd8)
                    int32_t rax_17
                    uint128_t zmm6_1
                    rax_17, zmm6_1 = sub_142624c30(arg4, arg5[1], *(arg1 + 0x100), *(arg1 + 0x10c), 
                        zmm0_1, var_208, zmm0_1.d)
                    
                    if ((rax_17 u>> 0x1f).b != 0)
                        sub_14262d160(arg2, 3, 
                            "GenerateNavigationDataLayer: Failed to generate contour set (0x%08X).", 
                            zx.q(rax_17))
                        result.b = 0
                    else if (*arg5[3] s<= 0)
                        result.b = 1
                    else
                        int32_t* rax_18
                        int64_t r9_11
                        rax_18, r9_11 = sub_142624b20(arg4)
                        arg5[5] = rax_18
                        
                        if (rax_18 != 0)
                            void* rdx_11 = &arg2[2]
                            
                            if (arg2 == 0)
                                rdx_11 = nullptr
                            
                            int32_t rax_19
                            int64_t r9_13
                            rax_19, r9_13 = sub_142625cf0(arg4, rdx_11, arg5[3], rax_18)
                            
                            if ((rax_19 u>> 0x1f).b == 0)
                                int32_t rax_21
                                int64_t r9_14
                                rax_21, r9_14 = sub_142624b90(arg4, arg5[4], arg5[5])
                                
                                if ((rax_21 u>> 0x1f).b != 0)
                                    sub_14262d160(arg2, 3, 
                                        "GenerateNavigationData: Failed to update cluster set.", 
                                        r9_14)
                                    result.b = 0
                                else if ((*(arg1 + 0x12c) & 2) == 0)
                                label_1426837c3:
                                    bool cond:1_1 = *(arg1 + 0x120) s> 6
                                    void* var_1d8 = nullptr
                                    int32_t var_1e4 = 0
                                    int32_t rbx_4
                                    
                                    if (cond:1_1)
                                    label_142683aec:
                                        rbx_4 = var_1e8
                                    label_142683af9:
                                        int32_t r8_12 = var_1e4
                                        void* rdx_22 = var_1d8
                                        uint128_t zmm1_2 = zx.o(*(r12 + r13 + 0x14))
                                        int32_t var_190_1 = *(r12 + r13 + 0x1c)
                                        int128_t var_1a8
                                        int128_t* var_208_1 = &var_1a8
                                        var_1a8 = *(r12 + r13 + 4)
                                        uint64_t var_198_1 = zmm1_2.q
                                        void var_178
                                        int32_t* rax_55 =
                                            sub_1426701c0(&var_178, rdx_22, r8_12, rbx_4, var_208_1)
                                        int64_t r15_2 = sx.q(arg5[8].d)
                                        int32_t rcx_43 = (r15_2 + 1).d
                                        arg5[8].d = rcx_43
                                        
                                        if (rcx_43 s> *(arg5 + 0x44))
                                            sub_1407c3b60(&arg5[7])
                                        
                                        int32_t* rcx_46 = r15_2 * 0x38 + arg5[7]
                                        *rcx_46 = *rax_55
                                        *(rcx_46 + 4) = *(rax_55 + 4)
                                        *(rcx_46 + 0x14) = *(rax_55 + 0x14)
                                        rcx_46[7] = rax_55[7]
                                        rcx_46[8] = rax_55[8]
                                        *(rcx_46 + 0x28) = *(rax_55 + 0x28)
                                        void* rax_60 = *(rax_55 + 0x30)
                                        *(rcx_46 + 0x30) = rax_60
                                        
                                        if (rax_60 != 0)
                                            *(rax_60 + 8) += 1
                                        
                                        int64_t* var_148
                                        
                                        if (var_148 != 0)
                                            if (0 == var_148[1].d)
                                                var_148[1].d = 0
                                            else
                                                var_148[1].d
                                            
                                            if (var_148 != 0)
                                                var_148[1].d -= 1
                                                
                                                if (var_148[1].d == 1)
                                                    (**var_148)(var_148)
                                                    int32_t r15_3 = *(var_148 + 0xc)
                                                    *(var_148 + 0xc) -= 1
                                                    
                                                    if (r15_3 == 1)
                                                        (*(*var_148 + 8))(var_148, zx.q(r15_3))
                                        
                                        void* r8_13 = arg5[5]
                                        int64_t rcx_50 = sx.q(arg5[8].d) * 0x38
                                        uint128_t zmm0_5 =
                                            _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x2c0) + r13 + 0x20)))
                                        int64_t rax_67 = arg5[7]
                                        zmm0_5.d = zmm0_5.d f* 0.0009765625f
                                        float temp0_5[0x4] = _mm_cvtps_pd(zmm0_5.q)
                                        int32_t rax_68 = *(r8_13 + 8)
                                        int64_t var_1f0_3 = temp0_5.q
                                        zmm0_5.d =
                                            _mm_cvtepi32_ps(zx.o(*(rcx_50 + rax_67 - 0x18))).d
                                            f* 0.0009765625f
                                        int64_t var_1f8_3 = _mm_cvtps_pd(zmm0_5.q)
                                        int32_t var_200_2 = rax_68
                                        var_208_1.d = *(r8_13 + 4)
                                        sub_14262d160(arg2, 1, 
                                            ">> Layer[%d] = Verts(%d) Polys(%d) Memory(%.2fkB) Cache("
                                        ")", 
                                            zx.q(var_1e8))
                                        result.b = 1
                                    else
                                        void* rax_28 = arg5[5]
                                        
                                        if (*(rax_28 + 8) s<= 0)
                                            goto label_142683aec
                                        
                                        uint64_t r9_17 = zx.q(*(rax_28 + 4))
                                        
                                        if (r9_17.d s<= 0)
                                            goto label_142683aec
                                        
                                        if (r9_17.d s< 0xffff)
                                            int32_t rdx_14 = *(arg1 + 0x318)
                                            uint64_t var_1d0 = 0
                                            uint64_t r15_1 = 0
                                            int32_t var_1c8_1 = 0
                                            int128_t var_1c0_1 = zx.o(0)
                                            
                                            if (rdx_14 s> 0)
                                                uint128_t var_58_1 = zmm6_1
                                                sub_1405a52a0(&var_1d0, rdx_14)
                                                void* rbx_1 = *(arg1 + 0x310)
                                                var_1c0_1.q = arg1 + 0x260
                                                var_1c0_1:8.q = arg1 + 0x1e0
                                                zmm6_1.d =
                                                    _mm_cvtepi32_ps(zx.o(*(arg1 + 0x100))).d f*
                                                    *(arg1 + 0xdc)
                                                
                                                if (*(arg1 + 0x318) s> 0)
                                                    void* rbx_2 = rbx_1 + 0x30
                                                    
                                                    do
                                                        var_208.d = zmm6_1.d
                                                        var_208.d = sub_142673780(&var_1d0, 
                                                            rbx_2 - 0x28, rbx_2, *(arg1 + 0x14c), 
                                                            var_208.d)
                                                        zmm6_1 = sub_142673b60(&var_1d0, 
                                                            rbx_2 - 0x18, rbx_2, *(arg1 + 0x14c), 
                                                            var_208.d)
                                                        r15_1 = zx.q(r15_1.d + 1)
                                                        rbx_2 += 0x70
                                                    while (r15_1.d s< *(arg1 + 0x318))
                                                
                                                r15_1 = var_1d0
                                            
                                            int32_t i = 0
                                            int32_t* rbx_3 = arg5[5]
                                            
                                            if (rbx_3[2] s> 0)
                                                int64_t r8_10 = 0
                                                
                                                do
                                                    void* rdx_17 = arg5[5]
                                                    r8_10 += 1
                                                    i += 1
                                                    *(*(rdx_17 + 0x20) + (r8_10 << 1) - 2) = *(arg1
                                                        + (zx.q(*(*(rdx_17 + 0x28) + r8_10 - 1))
                                                        << 1) + 0x160)
                                                    rbx_3 = arg5[5]
                                                while (i s< rbx_3[2])
                                            
                                            int64_t var_138
                                            memset(&var_138, 0, 0xc8)
                                            int32_t rdx_19 = *(arg1 + 0x12c)
                                            var_138 = *(rbx_3 + 0x10)
                                            int32_t var_130_1 = rbx_3[1]
                                            int64_t var_128_1 = *(rbx_3 + 0x18)
                                            int64_t var_118_1 = *(rbx_3 + 0x28)
                                            int64_t var_120_1 = *(rbx_3 + 0x20)
                                            int32_t var_110_1 = rbx_3[2]
                                            int32_t var_10c_1 = *rbx_3
                                            
                                            if ((rdx_19.b & 2) != 0)
                                                void* rcx_35 = arg5[6]
                                                int64_t var_f8_1 = *(rcx_35 + 0x10)
                                                int64_t var_f0_1 = *(rcx_35 + 0x18)
                                                int32_t var_e8_1 = *(rcx_35 + 4)
                                                int64_t var_e0_1 = *(rcx_35 + 0x20)
                                                int32_t var_d8_1 = *(rcx_35 + 8)
                                            
                                            int64_t* rcx_36 = arg5[1]
                                            rbx_4 = var_1e8
                                            int32_t var_c8_1 = var_1c8_1
                                            int32_t var_8c_1 = *(arg1 + 0x140)
                                            int32_t var_b0_1 = *(arg1 + 0x60)
                                            int32_t var_84_1 = *(arg1 + 0x144)
                                            int32_t var_88_1 = (*(arg1 + 0x148)).d
                                            int32_t var_ac_1 = *(arg1 + 0x64)
                                            uint64_t var_d0_1 = r15_1
                                            int32_t var_a8_1 = rbx_4
                                            void* rax_48 = *rcx_36
                                            int32_t var_a4_1 = *(rax_48 + 0x14)
                                            int32_t var_a0_1 = (*(rax_48 + 0x18)).d
                                            int32_t var_9c_1 = *(rax_48 + 0x1c)
                                            void* rax_49 = *rcx_36
                                            int16_t* rcx_37 = arg5[4]
                                            int32_t var_98_1 = *(rax_49 + 0x20)
                                            int32_t var_94_1 = (*(rax_49 + 0x24)).d
                                            int32_t var_90_1 = *(rax_49 + 0x28)
                                            uint8_t var_78_1 = (rdx_19 u>> 2).b & 1
                                            int32_t var_7c_1 = *(arg1 + 0xdc)
                                            int32_t var_80_1 = (*(arg1 + 0xd8)).d
                                            int16_t var_100_1 = *rcx_37
                                            int64_t var_108_1 = *(rcx_37 + 0x18)
                                            char rax_52
                                            int64_t r9_20
                                            rax_52, r9_20 =
                                                sub_1426078a0(&var_138, &var_1d8, &var_1e4)
                                            
                                            if (rax_52 != 0)
                                                if (r15_1 != 0)
                                                    sub_140a74f90(r15_1)
                                                
                                                goto label_142683af9
                                            
                                            sub_14262d160(arg2, 3, 
                                                "Could not build Detour navmesh.", r9_20)
                                            
                                            if (r15_1 != 0)
                                                sub_140a74f90(r15_1)
                                            
                                            result.b = 0
                                        else
                                            var_208.d = 0xffff
                                            sub_14262d160(arg2, 3, 
                                                "Too many vertices per tile %d (max: %d).", r9_17)
                                            result.b = 0
                                else
                                    int32_t* rax_23
                                    int64_t r9_15
                                    rax_23, r9_15 = sub_142624b60(arg4)
                                    arg5[6] = rax_23
                                    
                                    if (rax_23 != 0)
                                        int32_t var_200_1
                                        var_200_1.q = arg5[1]
                                        var_208.d = (*(arg1 + 0x128)).d
                                        int32_t rax_26
                                        int64_t r9_16
                                        rax_26, r9_16, zmm6_1 = sub_142626550(arg4, *(arg1 + 0xd8), 
                                            *(arg1 + 0xdc), *(arg1 + 0x124), var_208.d, var_200_1, 
                                            arg5[5], rax_23)
                                        
                                        if ((rax_26 u>> 0x1f).b == 0)
                                            goto label_1426837c3
                                        
                                        sub_14262d160(arg2, 3, 
                                            "GenerateNavigationData: Failed to generate poly detail mesh.", 
                                            r9_16)
                                        result.b = 0
                                    else
                                        sub_14262d160(arg2, (rax_23 + 3).d, 
                                            "GenerateNavigationData: Out of memory 'DetailMesh'.", 
                                            r9_15)
                                        result.b = 0
                            else
                                sub_14262d160(arg2, 3, 
                                    "GenerateNavigationData: Failed to generate poly mesh.", r9_13)
                                result.b = 0
                        else
                            sub_14262d160(arg2, (rax_18 + 3).d, 
                                "GenerateNavigationData: Out of memory 'PolyMesh'.", r9_11)
                            result.b = 0
                else
                    sub_14262d160(arg2, (rax_15 + 3).d, 
                        "GenerateNavigationDataLayer: Out of memory 'ClusterSet'.", r9_9)
                    result.b = 0
            else
                sub_14262d160(arg2, (rax_14 + 3).d, 
                    "GenerateNavigationDataLayer: Out of memory 'ContourSet'.", r9_8)
                result.b = 0
else
    sub_14262d160(arg2, 3, "GenerateNavigationDataLayer: failed to decompress layer.", r9_1)
    result.b = 0

__security_check_cookie(rax_1 ^ &var_228)
return result
