// 函数: sub_141427c70
// 地址: 0x141427c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t* rax_2 = sub_14139bef0(arg2)
int64_t* r13 = rax_2
int64_t* r12 = *sub_14139d440(rax_2)
int64_t rdx = *r12
uint32_t rax_5 = zx.d(*((*(rdx + 0x10))(r12, rdx) + 0x28))
int64_t result

if (rax_5 u<= 1)
label_141428846:
    int32_t rax_76 = *(arg1 + 0x3c8)
    int128_t zmm0 = data_142d3f800
    int64_t r12_7 = r12[2]
    void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t* r15_8 = r12[1]
    int32_t rax_77 = *(arg1 + 0x3cc)
    void* rax_78 = &rbx_3[0xa]
    int64_t var_2c8_1 = 0
    int32_t var_2c0_1 = 0
    int64_t var_2a4_1 = 0
    int32_t var_29c_1 = 0
    
    if (rax_78 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_78 = &rbx_3[0xa]
    
    *(arg2 + 0x30) = rax_78
    int64_t* rax_79 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_79 = rbx_3
    *(arg2 + 8) = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_142d56628
    rbx_3[2].d = var_2c8_1.d
    *(rbx_3 + 0x14) = var_2c8_1:4.d
    rbx_3[3].d = var_2c0_1
    *(rbx_3 + 0x1c) = rax_76
    rbx_3[4].d = rax_77
    *(rbx_3 + 0x24) = zmm0.d
    rbx_3[5].d = zmm0:4.d
    *(rbx_3 + 0x2c) = zmm0:8.d
    rbx_3[6].d = zmm0:0xc.d
    *(rbx_3 + 0x34) = var_2a4_1.d
    rbx_3[7].d = var_2a4_1:4.d
    *(rbx_3 + 0x3c) = var_29c_1
    rbx_3[8] = r15_8
    rbx_3[9] = r12_7
    
    if ((*(*r15_8 + 8))(r15_8) == 0)
        int64_t* rcx_105 = rbx_3[8]
        
        if ((*(*rcx_105 + 0x18))(rcx_105) == 0)
            int64_t* rcx_106 = rbx_3[8]
            
            if ((*(*rcx_106 + 0x20))(rcx_106) == 0)
                int64_t* rcx_107 = rbx_3[8]
                (*(*rcx_107 + 0x10))(rcx_107)
    
    int64_t* rcx_108 = rbx_3[9]
    result = (*(*rcx_108 + 8))(rcx_108)
    
    if (result == 0)
        int64_t* rcx_109 = rbx_3[9]
        result = (*(*rcx_109 + 0x18))(rcx_109)
        
        if (result == 0)
            int64_t* rcx_110 = rbx_3[9]
            result = (*(*rcx_110 + 0x20))(rcx_110)
            
            if (result == 0)
                int64_t* rcx_111 = rbx_3[9]
                result = (*(*rcx_111 + 0x10))(rcx_111)
else
    int64_t rdx_1 = sx.q((*U"1111")[sx.q(r13[0x7a].d)])
    
    if (rdx_1.d == 0xb || rdx_1.d == 0x1e)
        goto label_141428846
    
    int64_t rcx_3 = rdx_1 * 5
    
    if ((*((rcx_3 << 2) + &data_143f025f0) == data_143f025b8
            && (*((rcx_3 << 2) + &data_143f025fc) & 1) != 0) || rdx_1.d == 0x18
            || ((*((rcx_3 << 2) + &data_143f025fc) u>> 4).b & 1) != 0 || data_1439b6a00 == 0)
        goto label_141428846
    
    int64_t rax_10 = r12[2]
    int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_4 = &rdi_3[1]
    
    if (rcx_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_4 = &rdi_3[1]
    
    *(arg2 + 0x30) = rcx_4
    *rdi_3 = rax_10
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_8[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_11
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[3] = rdi_3
    rcx_8[1] = 0
    *rcx_8 = &data_142d549c8
    rcx_8[2].d = 1
    rcx_8[4].d = 1
    int64_t rax_14 = r12[1]
    int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_12 = &rdi_8[1]
    
    if (rcx_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_12 = &rdi_8[1]
    
    *(arg2 + 0x30) = rcx_12
    *rdi_8 = rax_14
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_16[5]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_15
    void**** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    int128_t zmm1 = data_142d3f5a0
    *rax_16 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    *rcx_16 = &data_142d549c8
    rcx_16[2].d = 1
    rcx_16[3] = rdi_8
    rcx_16[4].d = 0
    rcx_16[1] = 0
    int64_t rax_18 = r12[2]
    int32_t var_90_1 = 0
    int32_t var_8c
    __builtin_memset(&var_8c, 0xff, 0x14)
    int128_t var_78_1 = zmm1
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x19)
    int64_t var_168 = rax_18
    int64_t var_160_1 = 0
    int32_t var_158_1 = 0xffffffff
    int16_t var_154_1 = 0x500
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x11)
    int32_t var_94_1 = 0
    bool var_4f_1 = *(rax_18 + 0x38) u> 1
    void var_150
    memset(&var_150, 0, 0xa8)
    int64_t rdi_13 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_19 = rdi_13 + 0x1a
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x1c)
        rdi_13 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_19 = rdi_13 + 0x1a
    
    wchar16 const* const rcx_22 = u"ResolveColor"
    *(arg2 + 0x30) = rax_19
    wchar16 const i
    
    do
        i = *rcx_22
        *(rcx_22 + rdi_13 - u"ResolveColor") = i
        rcx_22 = &rcx_22[1]
    while (i != 0)
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_25[0x27]
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_25[0x27]
    
    *(arg2 + 0x30) = rax_20
    void**** rax_21 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_21 = rcx_25
    *(arg2 + 8) = &rcx_25[1]
    sub_1405d11b0(rcx_25, &var_168, rdi_13)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_168)
    int64_t var_58
    *(arg2 + 0x178) = var_58:7.b
    void* rax_24 = arg1
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    int32_t i_2 = 0
    
    if (*(rax_24 + 0xa8) s> 0)
        int64_t rcx_30 = 0
        int64_t var_2e8_3 = 0
        int32_t i_1
        
        do
            void* rdi_16 = *(rax_24 + 0xa0)
            int64_t var_1bc
            __builtin_memset(&var_1bc, 0, 0x43)
            void* rdi_17 = rdi_16 + rcx_30
            int128_t var_218
            __builtin_memset(&var_218, 0, 0x30)
            int128_t var_1d0_1 = zx.o(0)
            int16_t var_178_1 = 0
            sub_140fdc870(arg2, &var_218)
            int64_t var_1e8_1 = data_14395da00
            void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t var_1e0_1 = data_14395da18
            int64_t var_1d8_1 = data_14395d9e8
            int32_t r15_1 = *(rdi_17 + 0x15a4)
            void* rax_28 = &rcx_34[5]
            int32_t r12_1 = *(rdi_17 + 0x15a0)
            int32_t r13_1 = *(rdi_17 + 0x159c)
            int32_t rdi_18 = *(rdi_17 + 0x1598)
            
            if (rax_28 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_28 = &rcx_34[5]
            
            *(arg2 + 0x30) = rax_28
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_34
            *(arg2 + 8) = &rcx_34[1]
            rcx_34[1] = 0
            *rcx_34 = &data_142f18bc8
            rcx_34[2].b = 1
            *(rcx_34 + 0x14) = rdi_18
            rcx_34[3].d = r13_1
            *(rcx_34 + 0x1c) = r12_1
            rcx_34[4].d = r15_1
            int32_t rcx_38 = *(data_143ed2e00 + 4)
            
            if (rcx_38 == 0)
                int64_t* rax_38 = std::_Get_future_error_what((*U"1111")[sx.q(rax_2[0x7a].d)])
                void* var_288
                sub_1419a2ec0(rax_38, &var_288, &data_143e79500, 0)
                int64_t rax_39 = 0
                var_218.q = data_1439c9410
                void* rcx_43 = var_288
                
                if (rcx_43 != 0)
                    int64_t rdx_9 = sx.q(*(rcx_43 + 0x10c))
                    void* var_280
                    int64_t* r15_2 = *(var_280 + 0x10)
                    int64_t* rax_41 = r15_2[3]
                    
                    if (rax_41[rdx_9] == 0)
                        sub_1419ccf30(r15_2, rdx_9.d)
                        rax_41 = r15_2[3]
                    
                    rax_39 = rax_41[rdx_9]
                
                var_218:8.q = rax_39
                int32_t var_1c0_1 = 0
                int128_t var_1f8_1
                void** const rax_52
                int64_t* rcx_56
                uint32_t rdi_21
                int64_t r12_4
                int64_t r15_4
                
                if (r12[0xd] == 0)
                    int64_t rax_55
                    void* rdi_22
                    void* rax_56
                    
                    if (rax_5 == 2)
                        void* var_248
                        sub_1419a2ec0(rax_38, &var_248, &data_143e79600, 0)
                        rdi_22 = var_248
                        rax_55 = 0
                        
                        if (rdi_22 != 0)
                            void* var_240
                            rax_56 = var_240
                        label_14142854c:
                            int64_t* r15_7 = *(rax_56 + 0x10)
                            int64_t rdx_19 = sx.q(*(rdi_22 + 0x10c))
                            int64_t* rax_57 = r15_7[3]
                            
                            if (rax_57[rdx_19] == 0)
                                sub_1419ccf30(r15_7, rdx_19.d)
                                rax_57 = r15_7[3]
                            
                            rax_55 = rax_57[rdx_19]
                    else if (rax_5 != 4)
                        if (rax_5 != 8)
                            break
                        
                        void* var_228
                        sub_1419a2ec0(rax_38, &var_228, &data_143e79800, 0)
                        rdi_22 = var_228
                        rax_55 = 0
                        
                        if (rdi_22 != 0)
                            void* var_220
                            rax_56 = var_220
                            goto label_14142854c
                    else
                        void* var_238
                        sub_1419a2ec0(rax_38, &var_238, &data_143e79700, 0)
                        rdi_22 = var_238
                        rax_55 = 0
                        
                        if (rdi_22 != 0)
                            void* var_230
                            rax_56 = var_230
                            goto label_14142854c
                    var_1f8_1.q = rax_55
                    sub_1419870b0(arg2, &var_218, 2)
                    r15_4 = r12[1]
                    r12_4 = *(arg2 + 0x1a0)
                    
                    if (*(rdi_22 + 0x11a) u> 0)
                        rdi_21 = zx.d(*(rdi_22 + 0x118))
                        rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_58 = &rcx_56[5]
                        
                        if (rax_58 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_58 = &rcx_56[5]
                        
                        *(arg2 + 0x30) = rax_58
                        int64_t** rax_59 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_59 = rcx_56
                        *(arg2 + 8) = &rcx_56[1]
                        rcx_56[1] = 0
                        rax_52 = &data_142d5a070
                    label_1414285ff:
                        rcx_56[4] = r15_4
                        rcx_56[3].d = rdi_21
                        rcx_56[2] = r12_4
                        *rcx_56 = rax_52
                else
                    int64_t rax_43
                    void* rdi_20
                    
                    if (rax_5 == 2)
                        void* var_278
                        sub_1419a2ec0(rax_38, &var_278, &data_143e79900, 0)
                        rdi_20 = var_278
                        rax_43 = 0
                        
                        if (rdi_20 != 0)
                            int64_t rdx_11 = sx.q(*(rdi_20 + 0x10c))
                            void* var_270
                            int64_t* r15_3 = *(var_270 + 0x10)
                            int64_t* rax_45 = r15_3[3]
                            
                            if (rax_45[rdx_11] == 0)
                                sub_1419ccf30(r15_3, rdx_11.d)
                                rax_45 = r15_3[3]
                            
                            rax_43 = rax_45[rdx_11]
                    else
                        void* rax_53
                        
                        if (rax_5 != 4)
                            if (rax_5 != 8)
                                break
                            
                            void* var_258
                            sub_1419a2ec0(rax_38, &var_258, &data_143e79b00, 0)
                            rdi_20 = var_258
                            rax_43 = 0
                            
                            if (rdi_20 != 0)
                                void* var_250
                                rax_53 = var_250
                                goto label_141428458
                        else
                            void* var_268
                            sub_1419a2ec0(rax_38, &var_268, &data_143e79a00, 0)
                            rdi_20 = var_268
                            rax_43 = 0
                            
                            if (rdi_20 != 0)
                                void* var_260
                                rax_53 = var_260
                            label_141428458:
                                int64_t* r15_6 = *(rax_53 + 0x10)
                                int64_t rdx_14 = sx.q(*(rdi_20 + 0x10c))
                                int64_t* rax_54 = r15_6[3]
                                
                                if (rax_54[rdx_14] == 0)
                                    sub_1419ccf30(r15_6, rdx_14.d)
                                    rax_54 = r15_6[3]
                                
                                rax_43 = rax_54[rdx_14]
                    
                    var_1f8_1.q = rax_43
                    sub_1419870b0(arg2, &var_218, 2)
                    r15_4 = r12[0xd]
                    r12_4 = *(arg2 + 0x1a0)
                    int64_t r13_4 = r12[1]
                    
                    if (*(rdi_20 + 0x11a) u> 0)
                        uint32_t r15_5 = zx.d(*(rdi_20 + 0x118))
                        void*** rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_46 = &rcx_50[5]
                        
                        if (rax_46 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_46 = &rcx_50[5]
                        
                        *(arg2 + 0x30) = rax_46
                        void**** rax_47 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_47 = rcx_50
                        *(arg2 + 8) = &rcx_50[1]
                        rcx_50[1] = 0
                        *rcx_50 = &data_142d5a070
                        rcx_50[2] = r12_4
                        rcx_50[3].d = r15_5
                        rcx_50[4] = r13_4
                    
                    if (*(rdi_20 + 0x11e) u> 0)
                        rdi_21 = zx.d(*(rdi_20 + 0x11c))
                        rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_49 = &rcx_56[5]
                        
                        if (rax_49 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_49 = &rcx_56[5]
                        
                        *(arg2 + 0x30) = rax_49
                        void** rax_50 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_50 = rcx_56
                        *(arg2 + 8) = &rcx_56[1]
                        rcx_56[1] = 0
                        rax_52 = &data_142d5ebf8
                        goto label_1414285ff
                int64_t rdi_23 = data_1439b6d58
                void*** rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_61 = &rcx_75[5]
                
                if (rax_61 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_61 = &rcx_75[5]
                
                *(arg2 + 0x30) = rax_61
                int64_t* rax_62 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_62 = rcx_75
                *(arg2 + 8) = &rcx_75[1]
                rcx_75[1] = 0
                *rcx_75 = &data_142d56618
                rcx_75[2].d = 0
                rcx_75[3] = rdi_23
                rcx_75[4].d = 0
                void*** rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_64 = &rcx_81[4]
                
                if (rax_64 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x28)
                    rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_64 = &rcx_81[4]
                
                *(arg2 + 0x30) = rax_64
                int64_t* rax_65 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_65 = rcx_81
                *(arg2 + 8) = &rcx_81[1]
                rcx_81[1] = 0
                *rcx_81 = &data_142d54988
                rcx_81[2].d = 0
                *(rcx_81 + 0x14) = 1
                rcx_81[3].d = 1
            else
                int64_t var_308_1 = data_1439b6d58
                int64_t var_298 = 0
                sub_141512b30(arg2, &var_218, rax_2[0x7a].d, &r12[1], r12[0xd], &var_298, rax_5, 
                    rcx_38)
            
            i_1 = i_2 + 1
            rcx_30 = var_2e8_3 + 0x5240
            i_2 = i_1
            var_2e8_3 = rcx_30
            rax_24 = arg1
        while (i_1 s< *(arg1 + 0xa8))
        r13 = rax_2
    
    void*** rcx_88 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_68 = &rcx_88[5]
    
    if (rax_68 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_88 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_68 = &rcx_88[5]
    
    *(arg2 + 0x30) = rax_68
    int64_t* rax_69 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_69 = rcx_88
    *(arg2 + 8) = &rcx_88[1]
    *rcx_88 = &data_142f18bc8
    rcx_88[2].b = 0
    *(rcx_88 + 0x14) = 0
    *(rcx_88 + 0x1c) = 0
    rcx_88[1] = 0
    sub_141096650(arg2)
    int64_t* rax_71 = sub_14139d700(r13)
    int64_t* rdi_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_94 = *rax_71
    void* rax_72 = &rdi_27[1]
    
    if (rax_72 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_72 = &rdi_27[1]
    
    *(arg2 + 0x30) = rax_72
    *rdi_27 = rcx_94
    void*** rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_73 = &rcx_98[5]
    
    if (rax_73 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_73 = &rcx_98[5]
    
    *(arg2 + 0x30) = rax_73
    void**** rax_74 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_74 = rcx_98
    *(arg2 + 8) = &rcx_98[1]
    *rcx_98 = &data_142d549c8
    rcx_98[2].d = 1
    rcx_98[3] = rdi_27
    rcx_98[4].d = 0
    rcx_98[1] = 0
    int64_t var_60
    result = sub_1405d1550(&var_60)

__security_check_cookie(rax_1 ^ &var_348)
return result
