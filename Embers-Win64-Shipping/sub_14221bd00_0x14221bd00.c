// 函数: sub_14221bd00
// 地址: 0x14221bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(zx.d(arg3) - 1)
int64_t* var_510 = arg2
void* var_518 = arg1
int64_t* r15 = arg2
void* r12 = arg1

if (result.d u<= 0x14)
    result = sx.q(result.d)
    int32_t i_6
    int64_t var_520
    int64_t var_508
    wchar16 const* const (* var_498)(void* arg1, char* arg2, int64_t arg3)
    
    switch (result)
        case 0
            uint64_t var_4d8 = 0
            int32_t var_4d0_1 = 0
            int64_t var_4b8 = 0
            int64_t var_4b0_1 = 0
            sub_140a1d9d0(arg4, &var_4b8, 
                sub_140a1d9d0(arg4, &var_4d8, sub_140a1d9d0(arg4, r12 + 0x40, arg5)))
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) == 0)
                *(r12 + 0x48) = 0
                
                if (*(r12 + 0x4c) != 0)
                    result = sub_1405947f0(r12 + 0x40, 0)
            else
                void var_a8
                sub_1423fd810(&var_a8, nullptr)
                wchar16* rbx_11 = &data_142d40450
                int16_t* r8_11
                
                if (*(r12 + 0x48) == 0)
                    r8_11 = &data_142d40450
                else
                    r8_11 = *(r12 + 0x40)
                
                void var_358
                sub_1423fb9e0(&var_358, &var_a8, r8_11, 1)
                void var_330
                sub_140597df0(r12 + 0x40, &var_330)
                sub_140597df0(r12 + 0x50, &var_4b8)
                int32_t i_5
                i_6 = i_5
                
                if (i_5 != 0)
                    int32_t rax_51 = *(r12 + 0x68)
                    int32_t rdx_54 = i_5 + rax_51
                    
                    if (rdx_54 s> *(r12 + 0x6c))
                        sub_14061cd70(r12 + 0x60, rdx_54)
                        rax_51 = *(r12 + 0x68)
                    
                    int32_t i_3 = i_5
                    void* var_310
                    void* rsi_7 = var_310
                    int64_t* rbx_14 = (sx.q(rax_51) << 4) + *(r12 + 0x60)
                    int32_t i
                    
                    do
                        *rbx_14 = 0
                        int32_t r14_4 = *(rsi_7 + 8)
                        int64_t r12_3 = *rsi_7
                        rbx_14[1].d = r14_4
                        
                        if (r14_4 != 0)
                            sub_1405a4c70(rbx_14, r14_4, 0)
                            memcpy(*rbx_14, r12_3, r14_4 * 2)
                        else
                            *(rbx_14 + 0xc) = 0
                        
                        rbx_14 = &rbx_14[2]
                        rsi_7 += 0x10
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    rbx_11 = &data_142d40450
                    *(r12 + 0x68) += i_6
                    r12 = var_518
                    r15 = var_510
                
                sub_14094c030(&var_358)
                int512_t zmm1_7 = sub_14094c030(&var_a8)
                
                if (var_4d0_1 != 0 && var_4d0_1 - 1 s> 0)
                    wchar16* var_3d8
                    zmm1_7 = sub_140a2e390(&var_3d8, u"game=%s", var_4d8)
                    int32_t var_3d0
                    
                    if (var_3d0 != 0)
                        rbx_11 = var_3d8
                    
                    sub_142401e40(r12 + 0x18, rbx_11)
                    wchar16* rcx_103 = var_3d8
                    
                    if (rcx_103 != 0)
                        zmm1_7 = sub_140a74f90(rcx_103)
                
                result = r15[0x262]
                void* rdx_58 = *result
                
                if (rdx_58 != 0 && (*(rdx_58 + 0x30) & 2) == 0)
                    void** var_2e8
                    sub_141f79620(&var_2e8, rdx_58, 0)
                    char var_547 = 4
                    int64_t* var_2e0
                    char* rdx_59 = *var_2e0
                    
                    if (&rdx_59[1] u> var_2e0[1])
                        var_2e8[0x2a](&var_2e8, &var_547, 1)
                    else
                        var_547 = *rdx_59
                        *var_2e0 += 1
                    
                    int32_t* rdx_61 = *var_2e0
                    
                    if (&rdx_61[1] u> var_2e0[1])
                        void*** rcx_108 = &var_2e8
                        char var_2bf
                        
                        if ((var_2bf & 0x20) != 0)
                            sub_140b54070(rcx_108, &r15[7], zmm1_7)
                        else
                            var_2e8[0x2a](rcx_108, &r15[7], 4)
                    else
                        r15[7].d = *rdx_61
                        *var_2e0 += 4
                    
                    int64_t r9_3
                    r9_3.b = 1
                    int64_t* rcx_109 = *r15[0x262]
                    (*(*rcx_109 + 0x2c8))(rcx_109, &var_520, &var_2e8, r9_3)
                    result = sub_141f7bb50(&var_2e8)
                
                *(r12 + 0x80) = 1
            
            int64_t rcx_112 = var_4b8
            
            if (rcx_112 != 0)
                result = sub_140a74f90(rcx_112)
            
            uint64_t rcx_113 = var_4d8
            
            if (rcx_113 != 0)
                return sub_140a74f90(rcx_113)
        case 1
            int64_t* rcx_2 = arg4[1]
            int32_t* rdx = *rcx_2
            int32_t var_538
            
            if (&rdx[1] u> rcx_2[1])
                int32_t* rdx_1 = &var_538
                
                if ((*(arg4 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg4, rdx_1, arg5)
                else
                    (*(*arg4 + 0x150))(arg4, rdx_1, 4)
            else
                var_538 = *rdx
                *rcx_2 += 4
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                void var_390
                sub_140597df0(r12 + 0x88, 
                    sub_140ac6680(
                        _vfprintf_p_l(&var_390, 
                            The match you are trying to join is running an incompatible version of the game.  "
                "Pleas", 
                        Engine")))
                int64_t* var_388
                
                if (var_388 != 0)
                    var_388[1].d -= 1
                    
                    if (var_388[1].d == 1)
                        (**var_388)(var_388)
                        int32_t rbx_1 = *(var_388 + 0xc)
                        *(var_388 + 0xc) -= 1
                        
                        if (rbx_1 == 1)
                            (*(*var_388 + 8))(var_388, zx.q(rbx_1))
                
                return sub_1423d2710(data_143f5b298, 0, *(r12 + 8), 6, r12 + 0x88)
        case 2
            sub_140a1d9d0(arg4, &r15[0x32], arg5)
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                void* r13_1 = r12 + 0x18
                void var_488
                sub_140596d10(&var_488, r13_1)
                int64_t var_478
                sub_140596d10(&var_478, r13_1 + 0x10)
                int32_t var_468_1 = *(r13_1 + 0x20)
                int32_t var_464_1 = *(r13_1 + 0x24)
                int64_t var_460
                sub_140596d10(&var_460, r13_1 + 0x28)
                void var_450
                sub_140596d10(&var_450, r13_1 + 0x38)
                int32_t i_2 = *(r13_1 + 0x50)
                int32_t rdi_3 = 0
                int64_t* r14_1 = *(r13_1 + 0x48)
                uint64_t var_440 = 0
                int32_t i_4 = i_2
                
                if (i_2 != 0)
                    sub_1405a4be0(&var_440, i_2, 0)
                    uint64_t rbx_3 = var_440
                    int32_t i_1
                    
                    do
                        *rbx_3 = 0
                        int32_t rsi_2 = r14_1[1].d
                        int64_t r12_1 = *r14_1
                        *(rbx_3 + 8) = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(rbx_3, rsi_2, 0)
                            memcpy(*rbx_3, r12_1, rsi_2 * 2)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        rbx_3 += 0x10
                        r14_1 = &r14_1[2]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    r12 = var_518
                else
                    int32_t var_434_1 = 0
                
                void var_430
                sub_140596d10(&var_430, r13_1 + 0x58)
                int16_t* const rsi_3 = &data_142d40450
                
                if (var_478 != &data_142d40450)
                    int32_t var_46c
                    int32_t rax_16 = var_46c
                    int32_t rdx_17 = 0
                    int32_t var_470_1 = 0
                    
                    if (rax_16 != 0)
                        sub_1405947f0(&var_478, 0)
                        rax_16 = var_46c
                        rdx_17 = var_470_1
                    
                    if (rdx_17 s> rax_16)
                        sub_140594770(&var_478)
                
                int32_t var_468_2 = data_143f5bcb0
                
                if (var_460 != &data_142d40450)
                    int32_t var_454
                    int32_t rax_18 = var_454
                    int32_t rdx_18 = 0
                    int32_t var_458_1 = 0
                    
                    if (rax_18 != 0)
                        sub_1405947f0(&var_460, 0)
                        rax_18 = var_454
                        rdx_18 = var_458_1
                    
                    if (rdx_18 s> rax_18)
                        sub_140594770(&var_460)
                
                int32_t r13_2 = *(r12 + 0x68)
                int32_t r13_3 = r13_2 - 1
                
                if (r13_2 - 1 s>= 0)
                    int64_t rdx_20 = sx.q(r13_3) << 4
                    i_6.q = sx.q(r13_3 + 1) << 4
                    var_508 = rdx_20
                    var_520 = rdx_20
                    int32_t temp8_1
                    
                    do
                        int64_t rax_22 = *(r12 + 0x60)
                        int32_t rcx_32 = *(rdx_20 + rax_22 + 8)
                        int16_t* r12_2
                        
                        if (rcx_32 == 0)
                            r12_2 = &data_142d40450
                        else
                            r12_2 = *(rdx_20 + rax_22)
                        
                        int32_t rsi_4 = rcx_32 - 1
                        int16_t* rbx_4 = nullptr
                        int32_t rax_23 = 0
                        
                        if (rcx_32 == 0)
                            rsi_4 = 0
                        
                        int16_t* var_530 = nullptr
                        int32_t var_528_1 = 0
                        int32_t rcx_33 = 0
                        
                        if (rsi_4 s> 5)
                            rsi_4 = 5
                        
                        int32_t var_524_1 = 0
                        int16_t* const rcx_37
                        int32_t r14_3
                        
                        if (r12_2 != 0 && *r12_2 != 0 && rsi_4 s> 0)
                            if (rsi_4 + 1 s> 0)
                                sub_1405947f0(&var_530, rsi_4 + 1)
                                rcx_33 = var_524_1
                                rax_23 = var_528_1
                                rbx_4 = var_530
                            
                            r14_3 = rax_23 + 1 + rsi_4
                            
                            if (r14_3 s> rcx_33)
                                sub_140594770(&var_530)
                                rbx_4 = var_530
                            
                            UnDecorator::getReferenceType(rbx_4, r12_2, rsi_4 * 2)
                            rcx_37 = rbx_4
                            rbx_4[sx.q(r14_3) - 1] = 0
                        
                        if (r12_2 == 0 || *r12_2 == 0 || rsi_4 s<= 0 || r14_3 == 0)
                            rcx_37 = &data_142d40450
                        
                        rsi_4.b = sub_140a54510(rcx_37, u"game=") == 0
                        
                        if (rbx_4 != 0)
                            sub_140a74f90(rbx_4)
                        
                        int64_t rbx_5 = var_520
                        
                        if (rsi_4.b != 0)
                            int64_t rcx_39 = *(rbx_5 + *(r12 + 0x60))
                            
                            if (rcx_39 != 0)
                                sub_140a74f90(rcx_39)
                            
                            int32_t rax_28 = *(r12 + 0x68)
                            int32_t rcx_41 = rax_28 - r13_3
                            
                            if (rcx_41 != 1)
                                int64_t rax_27 = *(r12 + 0x60)
                                memmove(rbx_5 + rax_27, i_6.q + rax_27, (rcx_41 - 1) << 4)
                                rax_28 = *(r12 + 0x68)
                            
                            *(r12 + 0x68) = rax_28 - 1
                            sub_140638bc0(r12 + 0x60)
                        
                        i_6.q -= 0x10
                        rdx_20 = var_508 - 0x10
                        var_508 = rdx_20
                        temp8_1 = r13_3
                        r13_3 -= 1
                        var_520 = rbx_5 - 0x10
                    while (temp8_1 - 1 s>= 0)
                    r12 = var_518
                    rsi_3 = &data_142d40450
                
                int64_t* rax_30 = sub_1423dd150(data_143f5b298, r12 - 0x28)
                int64_t* r15_2
                
                if (rax_30 == 0)
                    r15_2 = var_510
                else
                    int64_t r8_7 = *rax_30
                    int64_t var_3e8
                    (*(r8_7 + 0x2a8))(rax_30, &var_3e8, r8_7)
                    int32_t var_3e0
                    
                    if (var_3e0 != 0 && var_3e0 - 1 s> 0)
                        wchar16* var_418
                        sub_140a2e390(&var_418, u"Name=%s", var_3e8)
                        wchar16* rdx_29 = &data_142d40450
                        int32_t var_410
                        
                        if (var_410 != 0)
                            rdx_29 = var_418
                        
                        sub_142401e40(&var_488, rdx_29)
                        wchar16* rcx_51 = var_418
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                    
                    int64_t var_3f8
                    (*(*rax_30 + 0x2b0))(rax_30, &var_3f8)
                    int32_t var_3f0
                    
                    if (var_3f0 != 0 && var_3f0 - 1 s> 0)
                        int16_t* var_408
                        sub_140a2e390(&var_408, u"%s", var_3f8)
                        int32_t var_400
                        
                        if (var_400 != 0)
                            rsi_3 = var_408
                        
                        sub_142401e40(&var_488, rsi_3)
                        int16_t* rcx_55 = var_408
                        
                        if (rcx_55 != 0)
                            sub_140a74f90(rcx_55)
                    
                    void** var_3b8
                    void*** rax_34 = sub_1420fb380(rax_30, &var_3b8)
                    r15_2 = var_510
                    int64_t* rbx_8 = rax_34[2]
                    int64_t var_4c8 = rax_34[1]
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d += 1
                    
                    if (&var_4c8 != &r15_2[0x2d])
                        var_4c8.o = *(r15_2 + 0x168)
                        *(r15_2 + 0x168) = var_4c8.o
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp5_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
                    
                    sub_14081d8c0(&r15_2[0x2f], &rax_34[3])
                    var_3b8 = &data_142e259e0
                    int64_t var_3a0
                    
                    if (var_3a0 != 0)
                        sub_140a74f90(var_3a0)
                    
                    int64_t* var_3a8
                    
                    if (var_3a8 != 0)
                        var_3a8[1].d -= 1
                        
                        if (var_3a8[1].d == 1)
                            (**var_3a8)(var_3a8)
                            int32_t temp7_1 = *(var_3a8 + 0xc)
                            *(var_3a8 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*var_3a8 + 8))(var_3a8, 1)
                    
                    int64_t rcx_64 = var_3f8
                    
                    if (rcx_64 != 0)
                        sub_140a74f90(rcx_64)
                    
                    int64_t rcx_65 = var_3e8
                    
                    if (rcx_65 != 0)
                        sub_140a74f90(rcx_65)
                
                void* rcx_66 = data_143f5b298
                int64_t var_4f0 = 0
                void* rax_39 = sub_1423de430(rcx_66, r12 - 0x28)
                
                if (rax_39 != 0)
                    int64_t* rcx_67 = *(rax_39 + 0x218)
                    
                    if (rcx_67 != 0)
                        var_4f0 = *(*(*rcx_67 + 0x350))(rcx_67, &var_510)
                
                if (r15_2[0x34] != &(*U"RGBXYZF10|")[8])
                    r15_2[0x35].d = 0
                    
                    if (*(r15_2 + 0x1ac) != 2)
                        sub_1405947f0(&r15_2[0x34], 2)
                        rdi_3 = r15_2[0x35].d
                    
                    r15_2[0x35].d = rdi_3 + 2
                    
                    if (rdi_3 + 2 s> *(r15_2 + 0x1ac))
                        sub_140594770(&r15_2[0x34])
                    
                    *r15_2[0x34] = 0x30
                
                sub_142423a30(&var_488, &var_498, 0)
                uint64_t var_3c8
                int512_t zmm1_1 = sub_140b63b70(&var_4f0, &var_3c8)
                void* rdx_40 = *r15_2[0x262]
                
                if (rdx_40 != 0 && (*(rdx_40 + 0x30) & 2) == 0)
                    void** var_1c8
                    sub_141f79620(&var_1c8, rdx_40, 0)
                    char var_548 = 5
                    int64_t* var_1c0
                    char* rdx_41 = *var_1c0
                    
                    if (&rdx_41[1] u> var_1c0[1])
                        var_1c8[0x2a](&var_1c8, &var_548, 1)
                    else
                        var_548 = *rdx_41
                        *var_1c0 += 1
                    
                    sub_140a1d9d0(&var_1c8, &var_3c8, 
                        sub_14215ddd0(&var_1c8, &r15_2[0x2c], 
                            sub_140a1d9d0(&var_1c8, &var_498, 
                                sub_140a1d9d0(&var_1c8, &r15_2[0x34], zmm1_1))))
                    int64_t r9_2
                    r9_2.b = 1
                    int64_t* rcx_81 = *r15_2[0x262]
                    (*(*rcx_81 + 0x2c8))(rcx_81, &var_518, &var_1c8, r9_2)
                    sub_141f7bb50(&var_1c8)
                
                int64_t* rcx_83 = *(*(r12 + 8) + 0x88)
                (*(*rcx_83 + 0x2a8))(rcx_83, 0)
                uint64_t rcx_84 = var_3c8
                
                if (rcx_84 != 0)
                    sub_140a74f90(rcx_84)
                
                wchar16 const* const (* rcx_85)(void* arg1, char* arg2, int64_t arg3) = var_498
                
                if (rcx_85 != 0)
                    sub_140a74f90(rcx_85)
                
                return sub_14094c030(&var_488)
            
            r15[0x33].d = 0
            
            if (*(r15 + 0x19c) != 0)
                return sub_1405947f0(&r15[0x32], 0)
        case 5
            uint64_t var_4e8 = 0
            int32_t var_4e0_1 = 0
            sub_140a1d9d0(arg4, &var_4e8, arg5)
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                if (var_4e0_1 s<= 1)
                    void var_378
                    sub_140597df0(&var_4e8, 
                        sub_140ac6680(_vfprintf_p_l(&var_378, Pending Connection Failed.", 
                            NetworkErrors")))
                    int64_t* var_370
                    
                    if (var_370 != 0)
                        var_370[1].d -= 1
                        
                        if (var_370[1].d == 1)
                            (**var_370)(var_370)
                            int32_t rbx_2 = *(var_370 + 0xc)
                            *(var_370 + 0xc) -= 1
                            
                            if (rbx_2 == 1)
                                (*(*var_370 + 8))(var_370, zx.q(rbx_2))
                
                sub_140597df0(r12 + 0x88, &var_4e8)
                result = sub_14213f9e0(r15)
            
            uint64_t rcx_18 = var_4e8
            
            if (rcx_18 != 0)
                return sub_140a74f90(rcx_18)
        case 0x11
            int64_t rax_62 = *arg4
            i_6 = 0
            uint64_t var_4a8 = 0
            int64_t var_4a0_1 = 0
            (*(rax_62 + 0x168))(arg4, &i_6)
            sub_140a1d9d0(arg4, &var_4a8, arg5)
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                int64_t* rcx_117 = *(*(*(r12 + 8) + 0x88) + 0x68)
                result = (*(*rcx_117 + 0x278))(rcx_117, &i_6, &var_4a8)
            
            uint64_t rcx_118 = var_4a8
            
            if (rcx_118 != 0)
                return sub_140a74f90(rcx_118)
        case 0x14
            if (data_143f4cf80 == 0)
            label_14221ca64:
                
                if (*(r12 + 0x88) != u"No encryption ack handler")
                    int32_t rdi_4 = 0
                    bool cond:1_1 = *(r12 + 0x94) == 0x1a
                    *(r12 + 0x90) = 0
                    
                    if (not(cond:1_1))
                        sub_1405947f0(r12 + 0x88, 0x1a)
                        rdi_4 = *(r12 + 0x90)
                    
                    *(r12 + 0x90) = rdi_4 + 0x1a
                    
                    if (rdi_4 + 0x1a s> *(r12 + 0x94))
                        sub_140594770(r12 + 0x88)
                    
                    __builtin_memcpy(*(r12 + 0x88), u"No encryption ack handler", 0x34)
                
                return sub_14213f9e0(r15)
            
            int64_t* rcx_119 = data_143f4cf78
            
            if (rcx_119 == 0)
                goto label_14221ca64
            
            if ((*(*rcx_119 + 0x28))(rcx_119) == 0)
                goto label_14221ca64
            
            sub_140d3a3a0(&var_508, r15)
            int64_t rbx_15 = var_508
            var_498 = sub_1422154d0
            int32_t var_490_1 = 0
            uint64_t result_1 = 0
            uint64_t result_2 = sub_140a84c80(0, 0x30, 0)
            result_1 = result_2
            int32_t var_4f8_1 = 3
            
            if (result_2 != 0)
                *result_2 = &data_142e33f58
                sub_140d3a3a0(result_2 + 8, r12 - 0x28)
                *(result_2 + 0x10) = var_498.o
                *(result_2 + 0x20) = rbx_15
                *(result_2 + 0x28) = sub_140a387b0()
                *result_2 = &data_142e33fb0
            
            int64_t* rcx_122 = nullptr
            
            if (data_143f4cf80 != 0)
                rcx_122 = data_143f4cf78
            
            result = (*(*rcx_122 + 0x48))(rcx_122, &result_1)
            
            if (var_4f8_1 == 0)
                result = result_1
            label_14221ca3f:
                
                if (result != 0)
                    return sub_140a74f90(result)
            else
                uint64_t result_3 = result_1
                
                if (result_3 != 0)
                    (*(*result_3 + 0x38))(result_3, 0)
                    result = result_1
                    
                    if (result != 0)
                        result = sub_140a84c80(result, 0, 0)
                        result_1 = result
                    
                    int32_t var_4f8_2 = 0
                    goto label_14221ca3f

return result
