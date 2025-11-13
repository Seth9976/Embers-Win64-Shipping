// 函数: sub_141139210
// 地址: 0x141139210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t i_2 = 0
int64_t r15
r15.b = 0
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t rsi_1 = *(arg1 + 0xa0)
        
        if (*(rbx_1 + rsi_1 + 0x18a8) != 0 && (*(rbx_1 + rsi_1 + 0x497c) & 2) == 0)
            bool cond:1_1
            
            if (*(rbx_1 + rsi_1 + 0xd7a) != 0)
                cond:1_1 = sub_142391c90(zx.q(*(rbx_1 + rsi_1 + 0xad0))) == 0
            else
                cond:1_1 = *(rbx_1 + rsi_1 + 0xd7c) == 0
            
            if (cond:1_1)
                r15.b = 1
                break
            
            if (*(rbx_1 + rsi_1 + 0xd7c) != 0 && sub_142391c90(zx.q(*(rbx_1 + rsi_1 + 0xad0))) == 0)
                void* rax_4 = *(rbx_1 + rsi_1)
                
                if (rax_4 != 0 && *(rax_4 + 8) s> 1)
                    r15.b = 1
                    break
        
        i += 1
        rbx_1 = &rbx_1[0xa48]
    while (i s< *(arg1 + 0xa8))

char var_318 = 0
int64_t* result_1 = nullptr
int64_t* r14 = &data_143ec4c60
int64_t* var_300 = &data_143ec4c60
int64_t* rcx_3 = data_143ec4ca0
int64_t rdx = *rcx_3
int64_t* result = (*(rdx + 0x10))(rcx_3, rdx)
int16_t rdx_1 = result[5].w

if (r15.b == 0)
label_14113a200:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result = (*(*result_2 + 0x38))(result_2)
else
    int64_t rcx_4 = data_143ec4fdc
    int32_t var_88_1 = data_1439c7b30
    int32_t var_80_1 = rcx_4:4.d
    int32_t var_78_1 = 1
    wchar16 const* const var_58_1 = u"UnknownTexture2D"
    char var_320_1 = 0
    int32_t var_68_1 = data_143ed33d8
    int32_t var_84_1 = rcx_4.d
    int16_t var_70_1 = rdx_1
    char var_328_1 = 1
    char var_330_1 = 1
    wchar16 const* const var_338_1 = u"Distortion"
    int16_t var_60_1 = 0
    int128_t var_98 = data_1439c7b20
    int32_t var_7c_1 = 0
    int32_t var_74_1 = 0x10000
    int32_t var_6c_1 = 2
    int32_t var_64_1 = 9
    int16_t var_50_1 = 1
    char var_4e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_98, &result_1, var_338_1, var_330_1, var_328_1, 
        var_320_1)
    result = result_1
    
    if (result != 0)
        int64_t rcx_5 = result[1]
        int128_t zmm1_1 = data_142d3f5a0
        int64_t var_1b8 = rcx_5
        int32_t var_e0_1 = 0
        int32_t var_dc
        __builtin_memset(&var_dc, 0xff, 0x14)
        int128_t var_c8_1 = zmm1_1
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x19)
        int64_t var_1b0_1 = 0
        int32_t var_1a8_1 = 0xffffffff
        int16_t var_1a4_1 = 0x900
        int64_t var_f0_1 = 0
        bool var_9f_1 = *(rcx_5 + 0x38) u> 1
        void var_1a0
        memset(&var_1a0, 0, 0xa8)
        void* rcx_7 = data_143ec4ca0
        char var_e8_1 = 0x45
        int64_t var_f8_1 = *(rcx_7 + 8)
        int32_t var_e4_1 = 0x21
        int64_t rbx_2 = *(rcx_7 + 8)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_10[4]
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x28)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_10[4]
        
        *(arg2 + 0x30) = rax_9
        int64_t* rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        rcx_10[3] = rbx_2
        *rcx_10 = &data_142f115e8
        rcx_10[2].d = 0x21
        int64_t rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_12 = rbx_5 + 0x22
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x24)
            rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_12 = rbx_5 + 0x22
        
        wchar16 const* const rcx_15 = u"RenderDistortion"
        *(arg2 + 0x30) = rax_12
        wchar16 const i_1
        
        do
            i_1 = *rcx_15
            *(rbx_5 - u"RenderDistortion" + rcx_15) = i_1
            rcx_15 = &rcx_15[1]
        while (i_1 != 0)
        void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_18[0x27]
        
        if (rax_13 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_18[0x27]
        
        *(arg2 + 0x30) = rax_13
        void**** rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rcx_18
        *(arg2 + 8) = &rcx_18[1]
        sub_1405d11b0(rcx_18, &var_1b8, rbx_5)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_1b8)
        int64_t var_a8
        *(arg2 + 0x178) = var_a8:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t r15_1 = 0
            
            do
                int32_t rbx_8 = *(arg2 + 0x8c)
                int64_t* r14_2 = *(arg1 + 0xa0) + r15_1
                int32_t rax_17 = r14_2[0x15b].d
                
                if (rbx_8 != rax_17)
                    bool cond:2_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_17
                    
                    if (cond:2_1)
                        void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_18 = &rdx_9[3]
                        
                        if (rax_18 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_18 = &rdx_9[3]
                        
                        *(arg2 + 0x30) = rax_18
                        int64_t* rax_19 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_19 = rdx_9
                        int32_t rax_20 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_9[1]
                        rdx_9[1] = 0
                        *rdx_9 = &data_142f11588
                        rdx_9[2].d = rax_20
                    else
                        *(arg2 + 0x90) = rax_17
                
                if ((*(r14_2 + 0x497c) & 2) == 0)
                    if (*(r14_2 + 0xd7a) != 0)
                        if (sub_142391c90(zx.q(r14_2[0x15a].d)) == 0)
                        label_141139718:
                            sub_141146130(arg2, r14_2, arg1)
                            sub_141405870(*(arg1 + 8) + 0x20, r14_2, 1)
                            int128_t var_2e8
                            __builtin_memset(&var_2e8, 0, 0x120)
                            int128_t var_1c8 = data_142d3f660
                            sub_1413aab70(&data_143ec4c60, r14_2[0x2a9].d, 0xf, &var_2e8)
                            sub_141146070(&var_1c8, r14_2)
                            int64_t* rcx_32 = data_143f0f180
                            (*(*rcx_32 + 0x100))(rcx_32, *(*(arg1 + 8) + 0x60), &var_2e8)
                            sub_141267530(&r14_2[0x60a], nullptr, arg2)
                            var_318 |= *(r14_2 + 0x321c) s> 0
                        else if (*(r14_2 + 0xd7c) != 0)
                            goto label_1411396ec
                    else
                        if (*(r14_2 + 0xd7c) == 0)
                            goto label_141139718
                        
                    label_1411396ec:
                        
                        if (sub_142391c90(zx.q(r14_2[0x15a].d)) == 0)
                            void* rax_23 = *r14_2
                            
                            if (rax_23 != 0 && *(rax_23 + 8) s> 1)
                                goto label_141139718
                
                if (*(arg2 + 0x8c) != rbx_8)
                    bool cond:3_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_8
                    
                    if (cond:3_1)
                        void*** rdx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_26 = &rdx_20[3]
                        
                        if (rax_26 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_26 = &rdx_20[3]
                        
                        *(arg2 + 0x30) = rax_26
                        int64_t* rax_27 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_27 = rdx_20
                        int32_t rax_28 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_20[1]
                        rdx_20[1] = 0
                        rdx_20[2].d = rax_28
                        *rdx_20 = &data_142f11588
                    else
                        *(arg2 + 0x90) = rbx_8
                
                i_2 += 1
                r15_1 += 0x5240
            while (i_2 s< *(arg1 + 0xa8))
            
            r14 = var_300
        
        sub_141096650(arg2)
        
        if (var_318 != 0)
            int64_t* rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_37 = result_1[1]
            void* rax_30 = &rbx_11[1]
            
            if (rax_30 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_30 = &rbx_11[1]
            
            *(arg2 + 0x30) = rax_30
            *rbx_11 = rcx_37
            void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_31 = &rcx_41[5]
            
            if (rax_31 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_31 = &rcx_41[5]
            
            *(arg2 + 0x30) = rax_31
            void**** rax_32 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_32 = rcx_41
            *(arg2 + 8) = &rcx_41[1]
            rcx_41[1] = 0
            *rcx_41 = &data_142d549c8
            rcx_41[2].d = 1
            rcx_41[3] = rbx_11
            rcx_41[4].d = 0
        
        int64_t var_b0
        result = sub_1405d1550(&var_b0)
        
        if (var_318 != 0)
            int64_t* rax_34 = sub_14139d440(r14)
            int64_t* rbx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rax_35 = *(*rax_34 + 8)
            void* rcx_48 = &rbx_16[1]
            
            if (rcx_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rbx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_48 = &rbx_16[1]
            
            *(arg2 + 0x30) = rcx_48
            *rbx_16 = rax_35
            void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_36 = &rcx_52[5]
            
            if (rax_36 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_36 = &rcx_52[5]
            
            *(arg2 + 0x30) = rax_36
            int64_t r15_3 = 0
            void**** rax_37 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_37 = rcx_52
            *(arg2 + 8) = &rcx_52[1]
            *rcx_52 = &data_142d549c8
            rcx_52[2].d = 1
            rcx_52[3] = rbx_16
            rcx_52[4].d = 0
            rcx_52[1] = 0
            int64_t* var_2f8 = nullptr
            int64_t* rcx_57 = *sub_14139d440(r14)
            int128_t* rax_41 = (*(*rcx_57 + 0x10))(rcx_57)
            char var_320_2 = 0
            char var_328_2 = 1
            char var_330_2 = 1
            var_98 = *rax_41
            var_88_1.o = rax_41[1]
            var_78_1.o = rax_41[2]
            int128_t zmm1_2 = rax_41[3]
            var_68_1.o = zmm1_2
            var_58_1.o = rax_41[4]
            int32_t var_68_2 = zmm1_2.d & 0x7fefffff
            sub_1419a0ce0(&data_1439c9260, arg2, &var_98, &var_2f8, DistortedSceneColor", 
                var_330_2, var_328_2, var_320_2)
            int64_t* rax_44 = var_2f8
            int128_t zmm1_3 = data_142d3f5a0
            int64_t rax_45 = rax_44[1]
            int32_t var_e0_2 = 0
            int32_t var_dc_1
            __builtin_memset(&var_dc_1, 0xff, 0x14)
            int128_t var_c8_2 = zmm1_3
            int64_t var_b8_1
            __builtin_memset(&var_b8_1, 0, 0x19)
            var_1b8 = rax_45
            int64_t var_1b0_2 = 0
            int32_t var_1a8_2 = 0xffffffff
            int16_t var_1a4_2 = 0x500
            int64_t var_f0_2 = 0
            bool var_9f_2 = *(rax_45 + 0x38) u> 1
            memset(&var_1a0, 0, 0xa8)
            char var_e8_2 = 0x45
            int64_t rbx_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t var_f8_2 = *(r14[8] + 8)
            int32_t var_e4_2 = 0x11
            int64_t rax_47 = rbx_21 + 0x20
            
            if (rax_47 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x22)
                rbx_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_47 = rbx_21 + 0x20
            
            wchar16 const* const rcx_61 = u"DistortionApply"
            *(arg2 + 0x30) = rax_47
            wchar16 const i_3
            
            do
                i_3 = *rcx_61
                *(rcx_61 + rbx_21 - u"DistortionApply") = i_3
                rcx_61 = &rcx_61[1]
            while (i_3 != 0)
            void*** rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_64[0x27]
            
            if (rax_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_64[0x27]
            
            *(arg2 + 0x30) = rax_48
            void**** rax_49 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_49 = rcx_64
            *(arg2 + 8) = &rcx_64[1]
            sub_1405d11b0(rcx_64, &var_1b8, rbx_21)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            int64_t var_a8_1
            *(arg2 + 0x178) = var_a8_1:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            int64_t i_7 = sx.q(*(arg1 + 0xa8))
            
            if (i_7 s> 0)
                int64_t i_4
                
                do
                    int32_t rbx_24 = *(arg2 + 0x8c)
                    void* r14_4 = *(arg1 + 0xa0) + r15_3
                    int32_t rax_52 = *(r14_4 + 0xad8)
                    
                    if (rbx_24 != rax_52)
                        bool cond:5_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rax_52
                        
                        if (cond:5_1)
                            void*** rdx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_53 = &rdx_30[3]
                            
                            if (rax_53 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_53 = &rdx_30[3]
                            
                            *(arg2 + 0x30) = rax_53
                            int64_t* rax_54 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_54 = rdx_30
                            int32_t rax_55 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_30[1]
                            rdx_30[1] = 0
                            *rdx_30 = &data_142f11588
                            rdx_30[2].d = rax_55
                        else
                            *(arg2 + 0x90) = rax_52
                    
                    r14 = var_300
                    int64_t* result_3 = result_1
                    
                    if (rdx_1 != 1)
                        sub_141112960(arg2, r14, r14_4, result_3)
                    else
                        sub_141112cb0(arg2, r14, r14_4, result_3)
                    
                    if (*(arg2 + 0x8c) != rbx_24)
                        bool cond:6_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rbx_24
                        
                        if (cond:6_1)
                            void*** rdx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_56 = &rdx_36[3]
                            
                            if (rax_56 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_56 = &rdx_36[3]
                            
                            *(arg2 + 0x30) = rax_56
                            int64_t* rax_57 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_57 = rdx_36
                            int32_t rax_58 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_36[1]
                            rdx_36[1] = 0
                            *rdx_36 = &data_142f11588
                            rdx_36[2].d = rax_58
                        else
                            *(arg2 + 0x90) = rbx_24
                    
                    r15_3 += 0x5240
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
                r15_3 = 0
            
            sub_141096650(arg2)
            int64_t* rbx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rax_59 = rax_44[1]
            void* rcx_76 = &rbx_27[1]
            
            if (rcx_76 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rbx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_76 = &rbx_27[1]
            
            *(arg2 + 0x30) = rcx_76
            *rbx_27 = rax_59
            void*** rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_60 = &rcx_80[5]
            
            if (rax_60 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_60 = &rcx_80[5]
            
            *(arg2 + 0x30) = rax_60
            void**** rax_61 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_61 = rcx_80
            *(arg2 + 8) = &rcx_80[1]
            rcx_80[1] = 0
            *rcx_80 = &data_142d549c8
            rcx_80[2].d = 1
            rcx_80[3] = rbx_27
            rcx_80[4].d = 0
            sub_1405d1550(&var_b0)
            void** rax_63 = sub_14139d440(r14)
            int128_t zmm1_4 = data_142d3f5a0
            int64_t rax_64 = *(*rax_63 + 8)
            int32_t var_e0_3 = 0
            int32_t var_dc_2
            __builtin_memset(&var_dc_2, 0xff, 0x14)
            int128_t var_c8_3 = zmm1_4
            int64_t var_b8_2
            __builtin_memset(&var_b8_2, 0, 0x1a)
            var_1b8 = rax_64
            int64_t var_1b0_3 = 0
            int32_t var_1a8_3 = 0xffffffff
            int16_t var_1a4_3 = 0x500
            int64_t var_f8_3
            __builtin_memset(&var_f8_3, 0, 0x11)
            int32_t var_e4_3 = 0
            bool var_9f_3 = *(rax_64 + 0x38) u> 1
            memset(&var_1a0, 0, 0xa8)
            char var_e8_3 = 0x45
            int64_t var_f8_4 = *(r14[8] + 8)
            int32_t var_e4_4 = 0x21
            sub_1410e0180(arg2, &var_1b8)
            int64_t rbx_32 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_66 = rbx_32 + 0x20
            
            if (rax_66 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x22)
                rbx_32 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_66 = rbx_32 + 0x20
            
            wchar16 const* const rcx_91 = u"DistortionMerge"
            *(arg2 + 0x30) = rax_66
            wchar16 const i_5
            
            do
                i_5 = *rcx_91
                *(rcx_91 + rbx_32 - u"DistortionMerge") = i_5
                rcx_91 = &rcx_91[1]
            while (i_5 != 0)
            void*** rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_67 = &rcx_94[0x27]
            
            if (rax_67 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_67 = &rcx_94[0x27]
            
            *(arg2 + 0x30) = rax_67
            void**** rax_68 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_68 = rcx_94
            *(arg2 + 8) = &rcx_94[1]
            sub_1405d11b0(rcx_94, &var_1b8, rbx_32)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            int64_t var_a8_2
            *(arg2 + 0x178) = var_a8_2:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            int64_t i_8 = sx.q(*(arg1 + 0xa8))
            
            if (i_8 s> 0)
                int64_t i_6
                
                do
                    int32_t rbx_35 = *(arg2 + 0x8c)
                    void* r14_6 = *(arg1 + 0xa0) + r15_3
                    int32_t rax_71 = *(r14_6 + 0xad8)
                    
                    if (rbx_35 != rax_71)
                        bool cond:8_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rax_71
                        
                        if (cond:8_1)
                            void*** rdx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_72 = &rdx_46[3]
                            
                            if (rax_72 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_72 = &rdx_46[3]
                            
                            *(arg2 + 0x30) = rax_72
                            int64_t* rax_73 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_73 = rdx_46
                            int32_t rax_74 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_46[1]
                            rdx_46[1] = 0
                            *rdx_46 = &data_142f11588
                            rdx_46[2].d = rax_74
                        else
                            *(arg2 + 0x90) = rax_71
                    
                    int64_t r9_4 = rax_44[1]
                    
                    if (rdx_1 != 1)
                        sub_141113000(arg2, var_300, r14_6, r9_4)
                    else
                        sub_141113480(arg2, var_300, r14_6, r9_4)
                    
                    if (*(arg2 + 0x8c) != rbx_35)
                        bool cond:9_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rbx_35
                        
                        if (cond:9_1)
                            void*** rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_76 = &rcx_104[3]
                            
                            if (rax_76 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_76 = &rcx_104[3]
                            
                            *(arg2 + 0x30) = rax_76
                            int64_t* rax_77 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_77 = rcx_104
                            int32_t rax_78 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rcx_104[1]
                            rcx_104[1] = 0
                            *rcx_104 = &data_142f11588
                            rcx_104[2].d = rax_78
                        else
                            *(arg2 + 0x90) = rbx_35
                    
                    r15_3 += 0x5240
                    i_6 = i_8
                    i_8 -= 1
                while (i_6 != 1)
            
            sub_141096650(arg2)
            result = sub_1405d1550(&var_b0)
            int64_t* rcx_110 = var_2f8
            
            if (rcx_110 != 0)
                result = (*(*rcx_110 + 0x38))(rcx_110)
        
        goto label_14113a200

__security_check_cookie(rax_1 ^ &var_358)
return result
