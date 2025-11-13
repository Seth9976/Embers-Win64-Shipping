// 函数: sub_1414998e0
// 地址: 0x1414998e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t var_250 = arg6
void* var_208 = arg3
void* r13_1 = sx.q(*(arg3 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
int64_t* var_240 = &data_143ec4c60
int32_t rcx_1 = 0
int64_t var_238
__builtin_memset(&var_238, 0, 0x18)
int32_t j_4 = 0
void** r8 = nullptr
int32_t r12 = 0
int32_t rsi = 0
void** var_218 = nullptr
int32_t r14 = 0
int32_t j_2 = 0
int32_t var_20c = 0

if (*(r13_1 + 0x28) s> 0)
    int64_t* r15_1 = nullptr
    int32_t var_230_1
    void** var_228_1
    char arg_38
    uint128_t zmm6
    
    while (true)
        void* rbx_1 = *(r15_1 + *(r13_1 + 0x20))
        
        if ((*(rbx_1 + 0x570) & 0x200) == 0)
            var_230_1 = rsi + 1
            
            if (rsi + 1 s> rcx_1)
                sub_1405a4d70(&var_238)
            
            *(var_238 + (sx.q(rsi) << 3)) = rbx_1
            
            if ((*(rbx_1 + 0x570) & 1) != 0)
                void* rax_8 = *(rbx_1 + 0x38)
                
                if (rax_8 != 0 && arg_38 == 0)
                    int64_t rax_9 = *(rax_8 + 0x10)
                    int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rcx_5 = &rbx_4[1]
                    
                    if (rcx_5 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
                        rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_5 = &rbx_4[1]
                    
                    *(arg2 + 0x30) = rcx_5
                    *rbx_4 = rax_9
                    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_10 = &rcx_9[5]
                    
                    if (rax_10 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_10 = &rcx_9[5]
                    
                    *(arg2 + 0x30) = rax_10
                    void**** rax_11 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_11 = rcx_9
                    *(arg2 + 8) = &rcx_9[1]
                    rcx_9[1] = 0
                    *rcx_9 = &data_142d549c8
                    rcx_9[2].d = 1
                    rcx_9[3] = rbx_4
                    rcx_9[4].d = 0
        else
            int64_t j_5 = sx.q(j_4)
            int32_t j_3 = (j_5 + 1).d
            j_2 = j_3
            
            if (j_3 s> r12)
                sub_1405a4d70(&var_218)
                r8 = var_218
                r12 = var_20c
                var_228_1 = r8
                j_2 = j_3
            
            r8[j_5] = rbx_1
        
        r14 += 1
        r15_1 = &r15_1[1]
        
        if (r14 s>= *(r13_1 + 0x28))
            break
        
        int32_t var_22c
        rcx_1 = var_22c
        rsi = var_230_1
        j_4 = j_2
        r8 = var_228_1
    
    void* r13_2 = arg1
    char arg_30
    uint128_t zmm7
    uint128_t zmm8
    uint128_t zmm9
    
    if (var_230_1 s> 0)
        bool cond:1_1 = arg_38 == 0
        void** var_1e0_1 = &var_208
        int64_t* var_1d8_1 = &var_238
        char* var_1d0_1 = &arg_30
        char* var_1c8_1 = &arg_38
        void* var_1f0 = r13_2
        uint64_t var_1e8_1 = arg2
        void* var_1b8
        void var_1a0
        int64_t var_b0
        int64_t* r14_1
        int128_t zmm10_1
        int128_t zmm10
        
        if (cond:1_1)
            int128_t zmm1 = data_142d3f5a0
            int32_t var_e0_1 = 0
            int32_t var_dc
            __builtin_memset(&var_dc, 0xff, 0x14)
            void* rax_17 = *(arg4 + 8)
            int128_t var_c8_1 = zmm1
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x1a)
            var_1b8 = rax_17
            int64_t var_1b0_1 = 0
            int32_t var_1a8_1 = 0xffffffff
            int16_t var_1a4_1 = 0x500
            int64_t var_f8_1
            __builtin_memset(&var_f8_1, 0, 0x11)
            int32_t var_e4_1 = 0
            int16_t var_a0
            var_a0:1.b = *(rax_17 + 0x38) u> 1
            memset(&var_1a0, 0, 0xa8)
            r14_1 = var_240
            char var_e8_1 = 0x45
            int64_t var_f8_2 = *(r14_1[8] + 8)
            int32_t var_e4_2 = 0x21
            uint128_t zmm6_1 = sub_1410e0180(arg2, &var_1b8)
            int64_t rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_19 = rsi_3 + 0x2e
            
            if (rax_19 u> *(arg2 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_19 = rsi_3 + 0x2e
            
            wchar16 const* const rcx_24 = u"RenderShadowProjection"
            *(arg2 + 0x30) = rax_19
            wchar16 const i
            
            do
                i = *rcx_24
                *(rcx_24 + rsi_3 - u"RenderShadowProjection") = i
                rcx_24 = &rcx_24[1]
            while (i != 0)
            void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_20 = &rcx_27[0x27]
            
            if (rax_20 u> *(arg2 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_20 = &rcx_27[0x27]
            
            *(arg2 + 0x30) = rax_20
            void**** rax_21 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_21 = rcx_27
            *(arg2 + 8) = &rcx_27[1]
            sub_1405d11b0(rcx_27, &var_1b8, rsi_3)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            int64_t var_a8
            *(arg2 + 0x178) = var_a8:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            zmm7, zmm8, zmm9, zmm10_1 = sub_1414786f0(&var_1f0, 0, zmm6_1, zmm7, zmm8, zmm9, zmm10)
            void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_24 = &rcx_35[5]
            
            if (rax_24 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_24 = &rcx_35[5]
            
            *(arg2 + 0x30) = rax_24
            int64_t* rax_25 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_25 = rcx_35
            *(arg2 + 8) = &rcx_35[1]
            *rcx_35 = &data_142f18bc8
            rcx_35[2].b = 0
            *(rcx_35 + 0x14) = 0
            *(rcx_35 + 0x1c) = 0
            rcx_35[1] = 0
            sub_141096650(arg2)
            zmm6 = sub_1405d1550(&var_b0)
        else
            zmm6, zmm7, zmm8, zmm9, zmm10_1 =
                sub_1414786f0(&var_1f0, 0, zmm6, zmm7, zmm8, zmm9, zmm10)
            void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_16[5]
            
            if (rax_13 u> *(arg2 + 0x38))
                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_16[5]
            
            r14_1 = var_240
            *(arg2 + 0x30) = rax_13
            int64_t* rax_14 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_14 = rcx_16
            *(arg2 + 8) = &rcx_16[1]
            rcx_16[1] = 0
            *rcx_16 = &data_142f18bc8
            rcx_16[2].b = 0
            *(rcx_16 + 0x14) = 0
            *(rcx_16 + 0x1c) = 0
        
        if (arg_38 == 0 && arg5 != 0)
            int64_t r15_2 = var_250
            
            if (r15_2 != 0)
                void* rax_28 = *(arg5 + 8)
                int128_t zmm1_1 = data_142d3f5a0
                int32_t var_e0_2 = 0
                int32_t var_dc_1
                __builtin_memset(&var_dc_1, 0xff, 0x14)
                int128_t var_c8_2 = zmm1_1
                int64_t var_b8_1
                __builtin_memset(&var_b8_1, 0, 0x1a)
                var_1b8 = rax_28
                int64_t var_1b0_2 = 0
                int32_t var_1a8_2 = 0xffffffff
                int16_t var_1a4_2 = 0x500
                int64_t var_f8_3
                __builtin_memset(&var_f8_3, 0, 0x11)
                int32_t var_e4_3 = 0
                int16_t var_a0_1
                var_a0_1:1.b = *(rax_28 + 0x38) u> 1
                memset(&var_1a0, 0, 0xa8)
                char var_e8_2 = 0x45
                int64_t var_f8_4 = *(r14_1[8] + 8)
                int32_t var_e4_4 = 1
                uint128_t zmm6_2 = sub_1410e0180(arg2, &var_1b8)
                int64_t rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_30 = rsi_8 + 0x3e
                
                if (rax_30 u> *(arg2 + 0x38))
                    zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x40)
                    rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_30 = rsi_8 + 0x3e
                
                wchar16 const* const rcx_45 = u"RenderShadowProjectionSubPixel"
                *(arg2 + 0x30) = rax_30
                wchar16 const i_1
                
                do
                    i_1 = *rcx_45
                    *(rsi_8 - u"RenderShadowProjectionSubPixel" + rcx_45) = i_1
                    rcx_45 = &rcx_45[1]
                while (i_1 != 0)
                void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_31 = &rcx_48[0x27]
                
                if (rax_31 u> *(arg2 + 0x38))
                    zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x140)
                    rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_31 = &rcx_48[0x27]
                
                *(arg2 + 0x30) = rax_31
                void**** rax_32 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_32 = rcx_48
                *(arg2 + 8) = &rcx_48[1]
                sub_1405d11b0(rcx_48, &var_1b8, rsi_8)
                *(arg2 + 0x1c4) = 1
                sub_1405d19b0(arg2, &var_1b8)
                int64_t var_a8_1
                *(arg2 + 0x178) = var_a8_1:7.b
                *(arg2 + 0x179) = 0
                *(arg2 + 0x1c4) = 1
                zmm7, zmm8, zmm9 = sub_1414786f0(&var_1f0, r15_2, zmm6_2, zmm7, zmm8, zmm9, zmm10_1)
                void*** rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_35 = &rcx_56[5]
                
                if (rax_35 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_35 = &rcx_56[5]
                
                *(arg2 + 0x30) = rax_35
                int64_t* rax_36 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_36 = rcx_56
                *(arg2 + 8) = &rcx_56[1]
                *rcx_56 = &data_142f18bc8
                rcx_56[2].b = 0
                *(rcx_56 + 0x14) = 0
                *(rcx_56 + 0x1c) = 0
                rcx_56[1] = 0
                sub_141096650(arg2)
                zmm6 = sub_1405d1550(&var_b0)
    
    uint64_t j_1 = zx.q(j_2)
    
    if (j_1.d s> 0)
        int32_t i_2 = 0
        
        if (*(r13_2 + 0xa8) s> 0)
            uint128_t var_58_1 = zmm6
            void* rsi_11 = arg2 + 0x30
            uint128_t var_68_1 = zmm7
            int64_t rcx_62 = 0
            uint128_t var_78_1 = zmm8
            uint128_t var_88_1 = zmm9
            int64_t var_240_1 = 0
            
            do
                int64_t* rbx_7 = zx.q(*(arg2 + 0x8c))
                int64_t* r13_4 = *(r13_2 + 0xa0) + rcx_62
                int32_t rax_38 = r13_4[0x15b].d
                
                if (rbx_7.d != rax_38)
                    bool cond:3_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_38
                    
                    if (cond:3_1)
                        void*** rdx_15 = (*rsi_11 + 7) & 0xfffffffffffffff8
                        void* rax_39 = &rdx_15[3]
                        
                        if (rax_39 u> *(rsi_11 + 8))
                            sub_140b0e3d0(rsi_11, 0x20)
                            rdx_15 = (*rsi_11 + 7) & 0xfffffffffffffff8
                            rax_39 = &rdx_15[3]
                        
                        *rsi_11 = rax_39
                        int64_t* rax_40 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_40 = rdx_15
                        int32_t rax_41 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_15[1]
                        rdx_15[1] = 0
                        *rdx_15 = &data_142f11588
                        rdx_15[2].d = rax_41
                    else
                        *(arg2 + 0x90) = rax_38
                
                zmm7 = zx.o(r13_4[0x2b4].d)
                void*** rcx_67 = (*rsi_11 + 7) & 0xfffffffffffffff8
                zmm8 = zx.o(*(r13_4 + 0x159c))
                zmm9 = zx.o(r13_4[0x2b3].d)
                zmm6 = _mm_cvtepi32_ps(zx.o(*(r13_4 + 0x15a4)))
                void* rax_42 = &rcx_67[5]
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_42 u> *(rsi_11 + 8))
                    zmm6 = sub_140b0e3d0(rsi_11, 0x30)
                    rcx_67 = (*rsi_11 + 7) & 0xfffffffffffffff8
                    rax_42 = &rcx_67[5]
                
                *rsi_11 = rax_42
                int64_t* rax_43 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                int64_t* var_268_1 = &var_250
                *rax_43 = rcx_67
                *(arg2 + 8) = &rcx_67[1]
                rcx_67[1] = 0
                rcx_67[3].d = 0
                *rcx_67 = &data_142d54998
                rcx_67[2].d = zmm9.d
                *(rcx_67 + 0x14) = zmm8.d
                *(rcx_67 + 0x1c) = zmm7.d
                rcx_67[4].d = zmm6.d
                *(rcx_67 + 0x24) = 0x3f800000
                var_250.o = zx.o(0)
                int64_t* rcx_71 = *(var_208 + 0x20)
                char var_260
                int32_t var_248
                int32_t rax_48
                int32_t rcx_72
                int32_t rdx_19
                int32_t r8_4
                int32_t var_244
                
                if ((*(*rcx_71 + 0xd8))(rcx_71, arg2, r13_4, &r13_4[0x2b3], var_268_1, var_260, 
                        j_2, var_250, var_248, var_240_1) != 0)
                    rcx_72 = var_244
                    rax_48 = var_248
                    r8_4 = var_250:4.d
                    rdx_19 = var_250.d
                else
                    rdx_19 = r13_4[0x2b3].d
                    var_250.d = rdx_19
                    r8_4 = *(r13_4 + 0x159c)
                    var_250:4.d = r8_4
                    rax_48 = r13_4[0x2b4].d
                    var_248 = rax_48
                    rcx_72 = *(r13_4 + 0x15a4)
                    var_244 = rcx_72
                
                if ((rax_48 - rdx_19) * (rcx_72 - r8_4) s> 0 && j_1.d s> 0)
                    void** r14_3 = var_228_1
                    uint64_t j
                    
                    do
                        var_260 = arg_30
                        sub_14113a4d0(*r14_3, arg2, r13_4, &var_250, rbx_7, arg4, var_260)
                        r14_3 = &r14_3[1]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    j_1 = zx.q(j_2)
                    rsi_11 = arg2 + 0x30
                
                void*** rcx_77 = (*rsi_11 + 7) & 0xfffffffffffffff8
                void* rax_52 = &rcx_77[5]
                
                if (rax_52 u> *(rsi_11 + 8))
                    sub_140b0e3d0(rsi_11, 0x30)
                    rcx_77 = (*rsi_11 + 7) & 0xfffffffffffffff8
                    rax_52 = &rcx_77[5]
                
                *rsi_11 = rax_52
                int64_t* rax_53 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_53 = rcx_77
                *(arg2 + 8) = &rcx_77[1]
                rcx_77[1] = 0
                *rcx_77 = &data_142f18bc8
                rcx_77[2].b = 0
                *(rcx_77 + 0x14) = 0
                *(rcx_77 + 0x1c) = 0
                
                if (*(arg2 + 0x8c) != rbx_7.d)
                    *(arg2 + 0x8c) = rbx_7.d
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_23 = (*rsi_11 + 7) & 0xfffffffffffffff8
                        void* rax_55 = &rdx_23[3]
                        
                        if (rax_55 u> *(rsi_11 + 8))
                            sub_140b0e3d0(rsi_11, 0x20)
                            rdx_23 = (*rsi_11 + 7) & 0xfffffffffffffff8
                            rax_55 = &rdx_23[3]
                        
                        *rsi_11 = rax_55
                        int64_t* rax_56 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_56 = rdx_23
                        int32_t rax_57 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_23[1]
                        rdx_23[1] = 0
                        *rdx_23 = &data_142f11588
                        rdx_23[2].d = rax_57
                    else
                        *(arg2 + 0x90) = rbx_7.d
                
                i_2 += 1
                r13_2 = arg1
                rcx_62 = var_240_1 + 0x5240
                var_240_1 = rcx_62
            while (i_2 s< *(r13_2 + 0xa8))
    
    int64_t rcx_82 = var_238
    
    if (rcx_82 != 0)
        sub_140a74f90(rcx_82)
    
    if (var_228_1 != 0)
        sub_140a74f90(var_228_1)

void** result
result.b = 1
__security_check_cookie(rax_1 ^ &var_288)
return result
