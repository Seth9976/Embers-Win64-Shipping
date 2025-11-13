// 函数: sub_14243c9a0
// 地址: 0x14243c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0x10)
void* var_540 = arg1
int64_t* r14 = arg2
uint64_t var_4f8

if (*(rax + 0x88) == 0)
    char rax_12 = sub_14214d7d0(r14, arg3)
    
    if (rax_12 == 0)
        *(arg4 + 0x29) |= 1
        return rax_12
    
    rax = zx.q(arg3)
    bool var_578
    void* var_4c8
    wchar16* var_4a0
    uint64_t rcx_40
    
    if (rax.d u<= 0x11)
        switch (rax)
            case 0
                char var_577 = 0
                void* rcx_24
                rcx_24.b = 1
                int32_t var_560 = 0
                int32_t rax_13
                int512_t zmm1
                rax_13, zmm1 = sub_140b1a070(rcx_24.b)
                int64_t* rcx_25 = arg4[1]
                int32_t var_55c = rax_13
                uint64_t var_490 = 0
                int32_t var_488_1 = 0
                char* rdx_10 = *rcx_25
                
                if (&rdx_10[1] u> rcx_25[1])
                    (*(*arg4 + 0x150))(arg4, &var_577, 1)
                else
                    var_577 = *rdx_10
                    *rcx_25 += 1
                
                int64_t* rcx_27 = arg4[1]
                int32_t* rdx_12 = *rcx_27
                
                if (&rdx_12[1] u> rcx_27[1])
                    int32_t* rdx_13 = &var_560
                    
                    if ((*(arg4 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg4, rdx_13, zmm1)
                    else
                        (*(*arg4 + 0x150))(arg4, rdx_13, 4)
                else
                    var_560 = *rdx_12
                    *rcx_27 += 4
                
                int512_t zmm1_1 = sub_140a1d9d0(arg4, &var_490, zmm1)
                rax.b = not.b(*(arg4 + 0x29))
                
                if ((rax.b & 1) == 0)
                    rcx_40 = var_490
                else if (sub_140b1d230(zx.q(var_55c), zx.q(var_560)) == 0)
                    void* rdx_16 = *r14[0x262]
                    
                    if (rdx_16 != 0 && (*(rdx_16 + 0x30) & 2) == 0)
                        void** var_1d8
                        sub_141f79620(&var_1d8, rdx_16, 0)
                        var_578 = true
                        int64_t* var_1d0
                        bool* rdx_17 = *var_1d0
                        
                        if (&rdx_17[1] u> var_1d0[1])
                            var_1d8[0x2a](&var_1d8, &var_578, 1)
                        else
                            var_578 = *rdx_17
                            *var_1d0 += 1
                        
                        int32_t* rdx_19 = *var_1d0
                        
                        if (&rdx_19[1] u> var_1d0[1])
                            int32_t* rdx_20 = &var_55c
                            void*** rcx_35 = &var_1d8
                            char var_1af
                            
                            if ((var_1af & 0x20) != 0)
                                sub_140b54070(rcx_35, rdx_20, zmm1_1)
                            else
                                var_1d8[0x2a](rcx_35, rdx_20, 4)
                        else
                            var_55c = *rdx_19
                            *var_1d0 += 4
                        
                        int64_t r9_1
                        r9_1.b = 1
                        int64_t* rcx_36 = *r14[0x262]
                        void var_3c0
                        (*(*rcx_36 + 0x2c8))(rcx_36, &var_3c0, &var_1d8, r9_1)
                        sub_141f7bb50(&var_1d8)
                    
                    rdx_16.b = 1
                    (*(*r14 + 0x2a8))(r14, rdx_16)
                    rax = sub_14213f9e0(r14)
                    rcx_40 = var_490
                else if (var_488_1 s<= 1)
                    rax = sub_142153550(r14)
                    rcx_40 = var_490
                else if (data_143f4cf70 == 0)
                label_14243cf30:
                    uint64_t var_528 = 0
                    int32_t var_520_1 = 0
                    sub_1405947f0(&var_528, 0x13)
                    int32_t rax_37 = var_520_1 + 0x13
                    var_520_1 = rax_37
                    
                    if (rax_37 s> 0)
                        sub_140594770(&var_528)
                    
                    UnDecorator::getReferenceType(var_528, u"Encryption failure", 0x26)
                    sub_140947d60(r14, &var_528, zmm1_1)
                    int64_t rdx_26
                    rdx_26.b = 1
                    rax = (*(*r14 + 0x2a8))(r14, rdx_26)
                    uint64_t rcx_53 = var_528
                    
                    if (rcx_53 != 0)
                        rax = sub_140a74f90(rcx_53)
                    
                    rcx_40 = var_490
                else
                    int64_t* rcx_42 = data_143f4cf68
                    
                    if (rcx_42 == 0)
                        goto label_14243cf30
                    
                    if ((*(*rcx_42 + 0x28))(rcx_42) == 0)
                        goto label_14243cf30
                    
                    int32_t var_498_1 = 0
                    uint64_t var_4e8 = 0
                    var_4a0 = sub_1421530a0
                    void*** rax_33 = sub_140a84c80(0, 0x30, 0)
                    var_4e8 = rax_33
                    int32_t var_4e0_1 = 3
                    
                    if (rax_33 != 0)
                        *rax_33 = &data_142fd1390
                        sub_140d3a3a0(&rax_33[1], r14)
                        *(rax_33 + 0x10) = var_4a0.o
                        rax_33[5] = sub_140a387b0()
                        *rax_33 = &data_142fd13e8
                    
                    int64_t* rcx_44 = nullptr
                    
                    if (data_143f4cf70 != 0)
                        rcx_44 = data_143f4cf68
                    
                    rax = (*(*rcx_44 + 0x48))(rcx_44, &var_490, &var_4e8)
                    
                    if (var_4e0_1 == 0)
                        rax = var_4e8
                    label_14243cf15:
                        
                        if (rax == 0)
                            rcx_40 = var_490
                        else
                            rax = sub_140a74f90(rax)
                            rcx_40 = var_490
                    else
                        uint64_t rcx_45 = var_4e8
                        
                        if (rcx_45 != 0)
                            (*(*rcx_45 + 0x38))(rcx_45, 0)
                            rax = var_4e8
                            
                            if (rax != 0)
                                rax = sub_140a84c80(rax, 0, 0)
                                var_4e8 = rax
                            
                            int32_t var_4e0_2 = 0
                            goto label_14243cf15
                        
                        rcx_40 = var_490
                
                goto label_14243dd60
            case 4
                int64_t* rcx_54 = arg4[1]
                int32_t* rdx_27 = *rcx_54
                int32_t var_558
                
                if (&rdx_27[1] u> rcx_54[1])
                    int32_t* rdx_28 = &var_558
                    
                    if ((*(arg4 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg4, rdx_28, arg5)
                    else
                        (*(*arg4 + 0x150))(arg4, rdx_28, 4)
                else
                    var_558 = *rdx_27
                    *rcx_54 += 4
                
                rax.b = not.b(*(arg4 + 0x29))
                
                if ((rax.b & 1) != 0)
                    int32_t rcx_56 = var_558
                    rax = 0x708
                    
                    if (rcx_56 s>= 0x708)
                        rax = zx.q(*(*(arg1 + 0x10) + 0x64))
                        
                        if (rcx_56 s< rax.d)
                            rax = zx.q(rcx_56)
                    
                    r14[7].d = rax.d
            case 5
                arg4[7] += 0x1000000
                int32_t rbx_2 = 0
                void** const var_460 = &data_142e259e0
                uint64_t var_4c0 = 0
                int128_t var_458
                __builtin_memset(&var_458, 0, 0x1c)
                int32_t var_4b8_1 = 0
                sub_140a1d9d0(arg4, &var_4c0, 
                    sub_14215ddd0(arg4, &var_460, 
                        sub_140a1d9d0(arg4, &r14[0x37], sub_140a1d9d0(arg4, &r14[0x34], arg5))))
                rax = zx.q(*(arg4 + 0x29))
                arg4[7] -= 0x1000000
                rax.b = not.b(rax.b)
                int64_t var_448
                
                if ((rax.b & 1) == 0)
                    r14[0x35].d = 0
                    
                    if (*(r14 + 0x1ac) != 0)
                        rax = sub_1405947f0(&r14[0x34], 0)
                    
                    r14[0x38].d = 0
                    
                    if (*(r14 + 0x1c4) != 0)
                        rax = sub_1405947f0(&r14[0x37], 0)
                    
                label_14243d496:
                    uint64_t rcx_97 = var_4c0
                    
                    if (rcx_97 != 0)
                        rax = sub_140a74f90(rcx_97)
                    
                    var_460 = &data_142e259e0
                else
                    int16_t* const r13_1 = &data_142d40450
                    int16_t* r15_1
                    
                    if (r14[0x38].d == 0)
                        r15_1 = &data_142d40450
                    else
                        r15_1 = r14[0x37]
                        int16_t i = *r15_1
                        
                        if (i != 0)
                            while (i != 0x3f)
                                if (i == 0x23)
                                    break
                                
                                i = r15_1[1]
                                r15_1 = &r15_1[1]
                                
                                if (i == 0)
                                    break
                    
                    void var_328
                    sub_1423fb9e0(&var_328, nullptr, r15_1, 0)
                    int32_t var_304
                    
                    if (var_304 != 0)
                        int32_t rdi_7 = r14[0xa].d + 1
                        sub_14241df00(&var_328, u"SplitscreenCount", nullptr, &data_143de5830)
                        char rcx_68 = -1
                        
                        if (rdi_7 s<= 0xff)
                            rcx_68 = rdi_7.b
                        
                        wchar16* var_3e0
                        sub_140a2e390(&var_3e0, u"SplitscreenCount=%i", zx.q(rcx_68))
                        wchar16* rdx_36 = &data_142d40450
                        int32_t var_3d8
                        
                        if (var_3d8 != 0)
                            rdx_36 = var_3e0
                        
                        sub_142401e40(&var_328, rdx_36)
                        wchar16* rcx_71 = var_3e0
                        
                        if (rcx_71 != 0)
                            sub_140a74f90(rcx_71)
                        
                        int64_t var_3b0
                        sub_140597da0(&r14[0x37], sub_142423a30(&var_328, &var_3b0, 0))
                        int64_t rcx_74 = var_3b0
                        
                        if (rcx_74 != 0)
                            sub_140a74f90(rcx_74)
                        
                        int16_t* rsi_1
                        
                        if (r14[0x38].d == 0)
                            rsi_1 = &data_142d40450
                        else
                            rsi_1 = r14[0x37]
                            int16_t i_1 = *rsi_1
                            
                            if (i_1 != 0)
                                while (i_1 != 0x3f)
                                    i_1 = rsi_1[1]
                                    rsi_1 = &rsi_1[1]
                                    
                                    if (i_1 == 0)
                                        break
                        
                        int64_t* rdi_8 = var_458:8.q
                        int64_t var_438 = var_458.q
                        
                        if (rdi_8 != 0)
                            rdi_8[1].d += 1
                        
                        if (&var_438 != &r14[0x2d])
                            var_438.o = *(r14 + 0x168)
                            *(r14 + 0x168) = var_438.o
                        
                        if (rdi_8 != 0)
                            rdi_8[1].d -= 1
                            
                            if (rdi_8[1].d == 1)
                                (**rdi_8)(rdi_8)
                                int32_t temp8_1 = *(rdi_8 + 0xc)
                                *(rdi_8 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rdi_8 + 8))(rdi_8, 1)
                        
                        if (&r14[0x2f] != &var_448)
                            int64_t r12_2 = var_448
                            int32_t r8_8 = *(r14 + 0x184)
                            uint32_t count
                            r14[0x30].d = count
                            
                            if (count != 0 || r8_8 != 0)
                                sub_1405da9e0(&r14[0x2f], count, r8_8)
                                memcpy(r14[0x2f], r12_2, count)
                            else
                                *(r14 + 0x184) = 0
                        
                        if (var_4b8_1 != 0)
                            r13_1 = var_4c0
                        
                        void var_3b8
                        int64_t* rax_49
                        int512_t zmm1_6
                        rax_49, zmm1_6 = sub_140b58260(&var_3b8, r13_1, 1)
                        sub_142155890(r14, *rax_49)
                        void* r15_3 = var_540
                        uint64_t var_480 = 0
                        int32_t var_478_1 = 0
                        int64_t* r12_3 = *(r15_3 + 0x100)
                        
                        if (r12_3 != 0)
                            int32_t rcx_82 = 0
                            int64_t var_518 = 0
                            int64_t var_510_1 = 0
                            
                            if (*rsi_1 != 0)
                                int64_t rdi_10 = -1
                                
                                do
                                    rdi_10 += 1
                                while (rsi_1[rdi_10] != 0)
                                
                                if (rdi_10.d + 1 s> 0)
                                    sub_1405947f0(&var_518, rdi_10.d + 1)
                                    rcx_82 = var_510_1:4.d
                                    rbx_2 = var_510_1.d
                                
                                int32_t rax_50 = rbx_2 + rdi_10.d + 1
                                var_510_1.d = rax_50
                                
                                if (rax_50 s> rcx_82)
                                    sub_140594770(&var_518)
                                
                                UnDecorator::getReferenceType(var_518, rsi_1, (rdi_10.d + 1) * 2)
                            
                            int64_t var_3a0
                            (*(*r12_3 + 0x738))(r12_3, &var_518, 
                                (*(*r14 + 0x270))(r14, &var_3a0, 0), &r14[0x2c], &var_480)
                            int64_t rcx_88 = var_3a0
                            
                            if (rcx_88 != 0)
                                zmm1_6 = sub_140a74f90(rcx_88)
                            
                            int64_t rcx_89 = var_518
                            
                            if (rcx_89 != 0)
                                zmm1_6 = sub_140a74f90(rcx_89)
                        
                        if (r12_3 == 0 || var_478_1 s<= 1)
                            sub_14244ab50(r15_3 - 0x28, r14)
                        else
                            sub_140947d60(r14, &var_480, zmm1_6)
                            int64_t rdx_49
                            rdx_49.b = 1
                            (*(*r14 + 0x2a8))(r14, rdx_49)
                        
                        uint64_t rcx_93 = var_480
                        
                        if (rcx_93 != 0)
                            sub_140a74f90(rcx_93)
                        
                        rax = sub_14094c030(&var_328)
                        goto label_14243d496
                    
                    if (r14[0x37] != r15_1)
                        int32_t rdi_5
                        
                        if (*r15_1 == 0)
                            rdi_5 = 0
                        else
                            int64_t rdi_4 = -1
                            
                            do
                                rdi_4 += 1
                            while (r15_1[rdi_4] != 0)
                            
                            rdi_5 = rdi_4.d + 1
                        
                        r14[0x38].d = 0
                        
                        if (*(r14 + 0x1c4) != rdi_5)
                            sub_1405947f0(&r14[0x37], rdi_5)
                            rbx_2 = r14[0x38].d
                        
                        int32_t rax_43 = rbx_2 + rdi_5
                        r14[0x38].d = rax_43
                        
                        if (rax_43 s> *(r14 + 0x1c4))
                            sub_140594770(&r14[0x37])
                        
                        if (rdi_5 != 0)
                            memcpy(r14[0x37], r15_1, rdi_5 * 2)
                    
                    *(arg4 + 0x29) |= 1
                    sub_14094c030(&var_328)
                    uint64_t rcx_66 = var_4c0
                    
                    if (rcx_66 != 0)
                        sub_140a74f90(rcx_66)
                    
                    rax = &data_142e259e0
                    var_460 = &data_142e259e0
                
                int64_t rcx_98 = var_448
                
                if (rcx_98 != 0)
                    rax = sub_140a74f90(rcx_98)
                
                int64_t* rbx_4 = var_458:8.q
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        rax = (**rbx_4)(rbx_4)
                        int32_t temp6_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            return (*(*rbx_4 + 8))(rbx_4, 1)
            case 9
                if (r14[6] == 0)
                    uint64_t var_470 = 0
                    int64_t var_468_1 = 0
                    int16_t* r8_13
                    
                    if (r14[0x38].d == 0)
                        r8_13 = &data_142d40450
                    else
                        r8_13 = r14[0x37]
                    
                    void var_248
                    sub_1423fb9e0(&var_248, nullptr, r8_13, 0)
                    int32_t var_224
                    
                    if (var_224 != 0)
                        uint64_t rax_57
                        int512_t zmm1_7
                        rax_57, zmm1_7 =
                            sub_1420f02b0(arg1 - 0x28, r14, 2, &var_248, &r14[0x2c], &var_470, 0)
                        r14[6] = rax_57
                        
                        if (rax_57 != 0)
                            sub_142155510(r14, 3)
                            void* rcx_107 = data_143f5b298
                            int16_t* var_550 = nullptr
                            int64_t var_548_1 = 0
                            void* rax_59
                            void* rdx_55
                            void* r8_14
                            rax_59, rdx_55, r8_14 = sub_1423ef4c0(rcx_107, arg1 - 0x28)
                            
                            if (*(rax_59 + 0x90) == 0)
                                if (sub_14226f910(r14[6], rdx_55, r8_14) == 0)
                                    var_4c8 = *(sub_140d21d80(arg1 - 0x28) + 0x18)
                                    int64_t var_3d0
                                    sub_140b63b70(&var_4c8, &var_3d0)
                                    int64_t rdi_13 = var_3d0
                                    int32_t r8_15 = var_548_1:4.d
                                    int32_t var_3c8
                                    var_548_1.d = var_3c8
                                    
                                    if (var_3c8 != 0 || r8_15 != 0)
                                        sub_1405a4c70(&var_550, var_3c8, r8_15)
                                        memcpy(var_550, rdi_13, var_3c8 * 2)
                                        rdi_13 = var_3d0
                                    
                                    if (rdi_13 != 0)
                                        sub_140a74f90(rdi_13)
                            else
                                int64_t var_390
                                int64_t* rax_60 = sub_1424366a0(rax_59, &var_390)
                                
                                if (&var_550 != rax_60)
                                    int16_t* rcx_109 = var_550
                                    
                                    if (rcx_109 != 0)
                                        sub_140a74f90(rcx_109)
                                    
                                    var_550 = *rax_60
                                    *rax_60 = 0
                                    var_548_1.d = rax_60[1].d
                                    var_548_1:4.d = *(rax_60 + 0xc)
                                    rax_60[1] = 0
                                
                                int64_t rcx_117 = var_390
                                
                                if (rcx_117 != 0)
                                    sub_140a74f90(rcx_117)
                            
                            int16_t* const rcx_118 = &data_142d40450
                            
                            if (var_548_1.d != 0)
                                rcx_118 = var_550
                            
                            if (sub_140a54510(rcx_118, &data_142d40450) != 0)
                                int64_t* rcx_119 = r14[6]
                                var_4f8 = 0
                                int64_t var_4f0_2 = 0
                                int128_t var_358 = var_4f8.o
                                sub_142264250(rcx_119, &var_550, 2, 1, &var_358)
                            
                            int16_t* rcx_120 = var_550
                            r14[0x3f].d = 0
                            
                            if (rcx_120 != 0)
                                sub_140a74f90(rcx_120)
                            
                            rax = sub_14094c030(&var_248)
                            rcx_40 = var_470
                        else
                            sub_140947d60(r14, &var_470, zmm1_7)
                            int64_t rdx_53
                            rdx_53.b = 1
                            (*(*r14 + 0x2a8))(r14, rdx_53)
                            rax = sub_14094c030(&var_248)
                            rcx_40 = var_470
                    else
                        *(arg4 + 0x29) |= 1
                        rax = sub_14094c030(&var_248)
                        rcx_40 = var_470
                    
                    goto label_14243dd60
            case 0xa
                int32_t rbx_5 = 0
                uint64_t var_570 = 0
                int64_t var_568_1 = 0
                void** const var_408 = &data_142e259e0
                int128_t var_400
                __builtin_memset(&var_400, 0, 0x20)
                sub_14215ddd0(arg4, &var_408, sub_140a1d9d0(arg4, &var_570, arg5))
                
                if ((not.b(*(arg4 + 0x29)) & 1) == 0)
                label_14243dc1b:
                    rax = &data_142e259e0
                    var_408 = &data_142e259e0
                    int64_t var_3f0
                    
                    if (var_3f0 != 0)
                        rax = sub_140a74f90(var_3f0)
                    
                    int64_t* rbx_6 = var_400:8.q
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            rax = (**rbx_6)(rbx_6)
                            int32_t temp4_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                rax = (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    rcx_40 = var_570
                else
                    uint64_t r13_2 = &data_142d40450
                    uint64_t r15_4
                    
                    if (var_568_1.d == 0)
                        r15_4 = &data_142d40450
                    else
                        r15_4 = var_570
                        int16_t i_2 = *r15_4
                        
                        if (i_2 != 0)
                            while (i_2 != 0x3f)
                                if (i_2 == 0x23)
                                    break
                                
                                i_2 = *(r15_4 + 2)
                                r15_4 += 2
                                
                                if (i_2 == 0)
                                    break
                    
                    void var_2b8
                    sub_1423fb9e0(&var_2b8, nullptr, r15_4, 0)
                    int32_t var_294
                    
                    if (var_294 != 0)
                        int32_t rdi_17 = r14[0xa].d + 2
                        sub_14241df00(&var_2b8, u"SplitscreenCount", nullptr, &data_143de5830)
                        char rcx_132 = -1
                        
                        if (rdi_17 s<= 0xff)
                            rcx_132 = rdi_17.b
                        
                        sub_140a2e390(&var_4a0, u"SplitscreenCount=%i", zx.q(rcx_132))
                        wchar16* rdx_66 = &data_142d40450
                        int32_t var_498
                        
                        if (var_498 != 0)
                            rdx_66 = var_4a0
                        
                        sub_142401e40(&var_2b8, rdx_66)
                        wchar16* rcx_135 = var_4a0
                        
                        if (rcx_135 != 0)
                            sub_140a74f90(rcx_135)
                        
                        int64_t var_380
                        int512_t zmm1_9 =
                            sub_140597da0(&var_570, sub_142423a30(&var_2b8, &var_380, 0))
                        int64_t rcx_138 = var_380
                        
                        if (rcx_138 != 0)
                            zmm1_9 = sub_140a74f90(rcx_138)
                        
                        uint64_t rsi_3
                        
                        if (var_568_1.d == 0)
                            rsi_3 = &data_142d40450
                        else
                            rsi_3 = var_570
                            int16_t i_3 = *rsi_3
                            
                            if (i_3 != 0)
                                while (i_3 != 0x3f)
                                    i_3 = *(rsi_3 + 2)
                                    rsi_3 += 2
                                    
                                    if (i_3 == 0)
                                        break
                        
                        int64_t* r15_5 = *(arg1 + 0x100)
                        uint64_t var_4d8 = 0
                        int32_t var_4d0_1 = 0
                        
                        if (r15_5 != 0)
                            int32_t rdx_69 = 0
                            int64_t var_508 = 0
                            int32_t rcx_139 = 0
                            int64_t var_500_1 = 0
                            
                            if (*rsi_3 != 0)
                                int64_t rdi_18 = -1
                                
                                do
                                    rdi_18 += 1
                                while (*(rsi_3 + (rdi_18 << 1)) != 0)
                                
                                if (rdi_18.d + 1 s> 0)
                                    sub_1405947f0(&var_508, rdi_18.d + 1)
                                    rcx_139 = var_500_1:4.d
                                    rdx_69 = var_500_1.d
                                
                                int32_t rax_70 = rdi_18.d + 1 + rdx_69
                                var_500_1.d = rax_70
                                
                                if (rax_70 s> rcx_139)
                                    sub_140594770(&var_508)
                                
                                UnDecorator::getReferenceType(var_508, rsi_3, (rdi_18.d + 1) * 2)
                            
                            int64_t var_370
                            (*(*r15_5 + 0x738))(r15_5, &var_508, 
                                (*(*r14 + 0x270))(r14, &var_370, 0), &var_408, &var_4d8)
                            int64_t rcx_145 = var_370
                            
                            if (rcx_145 != 0)
                                zmm1_9 = sub_140a74f90(rcx_145)
                            
                            int64_t rcx_146 = var_508
                            
                            if (rcx_146 != 0)
                                zmm1_9 = sub_140a74f90(rcx_146)
                        
                        if (r15_5 == 0 || var_4d0_1 s<= 1)
                            int64_t* rcx_149 = *(arg1 + 0x10)
                            void* rdi_21 = *(arg1 + 8)
                            void* rax_75 = (*(*rcx_149 + 0x360))(rcx_149, r14)
                            var_4c8 = rax_75
                            void* r12_5 = rax_75
                            sub_14094ded0(rax_75 + 0x160, &var_408)
                            sub_142155890(r12_5, r14[0x2aa])
                            sub_140597df0(r12_5 + 0x1b8, &var_570)
                            sub_142155520(r12_5, *(sub_140d21d80(rdi_21) + 0x18))
                            
                            if (var_568_1.d != 0)
                                r13_2 = var_570
                            
                            void var_b8
                            sub_1423fb9e0(&var_b8, nullptr, r13_2, 0)
                            uint64_t rax_78
                            int512_t zmm1_10
                            rax_78, zmm1_10 = sub_1420f02b0(var_540 - 0x28, r12_5, 2, &var_b8, 
                                rax_75 + 0x160, &var_4d8, (r14[0xa].d).b)
                            
                            if (rax_78 == 0)
                                int64_t rcx_158 = sx.q(r14[0xa].d)
                                
                                if (rcx_158.d != 0)
                                    int32_t r13_3 = 0
                                    int32_t rsi_5 = 0
                                    int64_t rdi_22 = 0
                                    bool r8_26 = *r14[9] != r12_5
                                    var_578 = r8_26
                                    
                                    do
                                        int64_t r9_7 = sx.q(rsi_5)
                                        rdi_22 += 1
                                        rsi_5 += 1
                                        
                                        if (rdi_22 s< rcx_158)
                                            int64_t rcx_159 = r14[9] + (rdi_22 << 3)
                                            
                                            do
                                                int32_t rax_81
                                                rax_81.b = *rcx_159 != r12_5
                                                
                                                if (zx.d(r8_26) != rax_81)
                                                    break
                                                
                                                rsi_5 += 1
                                                rdi_22 += 1
                                                rcx_159 += 8
                                            while (rdi_22 s< rcx_158)
                                        
                                        int32_t r12_7 = rsi_5 - r9_7.d
                                        
                                        if (r8_26 != 0)
                                            if (r13_3 != r9_7.d)
                                                int64_t rcx_160 = r14[9]
                                                memmove(rcx_160 + (sx.q(r13_3) << 3), 
                                                    rcx_160 + (r9_7 << 3), r12_7 << 3)
                                                r8_26 = var_578
                                            
                                            r13_3 += r12_7
                                        
                                        r12_5 = var_4c8
                                        r8_26 ^= 1
                                        var_578 = r8_26
                                    while (rdi_22 s< rcx_158)
                                    
                                    r14[0xa].d = r13_3
                                
                                sub_140947d60(r14, &var_4d8, zmm1_10)
                                int64_t rdx_85
                                rdx_85.b = 1
                                (*(*r14 + 0x2a8))(r14, rdx_85)
                            
                            sub_14094c030(&var_b8)
                        else
                            sub_140947d60(r14, &var_4d8, zmm1_9)
                            int64_t rdx_75
                            rdx_75.b = 1
                            (*(*r14 + 0x2a8))(r14, rdx_75)
                        
                        uint64_t rcx_165 = var_4d8
                        
                        if (rcx_165 != 0)
                            sub_140a74f90(rcx_165)
                        
                        sub_14094c030(&var_2b8)
                        goto label_14243dc1b
                    
                    if (var_570 != r15_4)
                        int32_t rdi_15
                        
                        if (*r15_4 == 0)
                            rdi_15 = 0
                        else
                            int64_t rdi_14 = -1
                            
                            do
                                rdi_14 += 1
                            while (*(r15_4 + (rdi_14 << 1)) != 0)
                            
                            rdi_15 = rdi_14.d + 1
                        
                        int32_t rcx_125 = var_568_1:4.d
                        var_568_1.d = 0
                        
                        if (rcx_125 != rdi_15)
                            sub_1405947f0(&var_570, rdi_15)
                            rcx_125 = var_568_1:4.d
                            rbx_5 = var_568_1.d
                        
                        int32_t rax_67 = rbx_5 + rdi_15
                        var_568_1.d = rax_67
                        
                        if (rax_67 s> rcx_125)
                            sub_140594770(&var_570)
                        
                        if (rdi_15 != 0)
                            memcpy(var_570, r15_4, rdi_15 * 2)
                    
                    *(arg4 + 0x29) |= 1
                    sub_14094c030(&var_2b8)
                    rax = SimpleUString::~SimpleUString(&var_408)
                    rcx_40 = var_570
                
                goto label_14243dd60
            case 0xf
                int64_t* rcx_170 = arg4[1]
                int32_t* rdx_86 = *rcx_170
                int32_t var_554
                
                if (&rdx_86[1] u> rcx_170[1])
                    int32_t* rdx_87 = &var_554
                    
                    if ((*(arg4 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg4, rdx_87, arg5)
                    else
                        (*(*arg4 + 0x150))(arg4, rdx_87, 4)
                else
                    var_554 = *rdx_86
                    *rcx_170 += 4
                
                rax.b = not.b(*(arg4 + 0x29))
                
                if ((rax.b & 1) != 0)
                    rax = sx.q(var_554)
                    
                    if (rax.d s< 0)
                        goto label_14243dcd8
                    
                    if (rax.d s< r14[0xa].d)
                        uint64_t rcx_172 = rax
                        rax = r14[9]
                        r14 = *(rax + (rcx_172 << 3))
                    label_14243dcd8:
                        
                        if (r14 != 0)
                            for (int32_t i_4 = 0; i_4 s>= 0; i_4 += 1)
                                if (i_4 s>= *(arg1 + 0x1a8))
                                    break
                                
                                rax = sub_140d3c6e0(*(arg1 + 0x1a0) + (sx.q(i_4) << 3))
                                
                                if (rax != 0 && *(rax + 0x298) == 0 && *(rax + 0x410) == r14)
                                    arg4.b = 1
                                    return sub_1420e0c80(arg1 - 0x28, rax, 0, arg4.b)
            case 0x11
                uint64_t var_418 = 0
                int64_t var_410_1 = 0
                rax = sub_140a1d9d0(arg4, &var_418, arg5)
                rcx_40 = var_418
            label_14243dd60:
                
                if (rcx_40 != 0)
                    return sub_140a74f90(rcx_40)
else
    uint32_t rcx = zx.d(arg3)
    
    if (rcx == 6)
        int64_t var_538 = 0
        int32_t var_530_1 = 0
        sub_1405947f0(&var_538, 8)
        int32_t rax_5 = var_530_1 + 8
        var_530_1 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_538)
        
        int64_t rdi_1 = var_538
        UnDecorator::getReferenceType(rdi_1, u"?failed", 0x10)
        uint64_t var_4b0 = 0
        int32_t var_4a8_1 = 0
        sub_140a1d9d0(arg4, &var_4b0, arg5)
        rax.b = not.b(*(arg4 + 0x29))
        
        if ((rax.b & 1) != 0)
            if (var_4a8_1 s<= 1)
                void var_348
                sub_140597df0(&var_4b0, 
                    sub_140ac6680(_vfprintf_p_l(&var_348, Connection Failed.", NetworkErrors")))
                int64_t* var_340
                
                if (var_340 != 0)
                    var_340[1].d -= 1
                    
                    if (var_340[1].d == 1)
                        (**var_340)(var_340)
                        int32_t rdi_2 = *(var_340 + 0xc)
                        *(var_340 + 0xc) -= 1
                        
                        if (rdi_2 == 1)
                            (*(*var_340 + 8))(var_340, zx.q(rdi_2))
                    
                    rdi_1 = var_538
            
            rax = sub_1423d2710(data_143f5b298, arg1 - 0x28, *(arg1 + 0x10), 5, &var_4b0)
            
            if (r14 != 0)
                rax = sub_14213f9e0(r14)
        
        uint64_t rcx_20 = var_4b0
        
        if (rcx_20 != 0)
            rax = sub_140a74f90(rcx_20)
        
        if (rdi_1 != 0)
            return sub_140a74f90(rdi_1)
    else if (rcx == 0x11)
        var_4f8 = 0
        int64_t var_4f0_1 = 0
        rax = sub_140a1d9d0(arg4, &var_4f8, arg5)
        uint64_t rcx_8 = var_4f8
        
        if (rcx_8 != 0)
            return sub_140a74f90(rcx_8)
    else if (rcx == 0x12)
        int64_t rax_1 = *arg4
        var_540.d = 0
        uint64_t var_428 = 0
        int64_t var_420_1 = 0
        (*(rax_1 + 0x168))(arg4, &var_540)
        sub_140a1d9d0(arg4, &var_428, arg5)
        rax.b = not.b(*(arg4 + 0x29))
        
        if ((rax.b & 1) != 0)
            int64_t* rcx_5 = r14[0xd]
            rax = (*(*rcx_5 + 0x278))(rcx_5, &var_540, &var_428)
        
        uint64_t rcx_6 = var_428
        
        if (rcx_6 != 0)
            return sub_140a74f90(rcx_6)
return rax
