// 函数: sub_140da4b20
// 地址: 0x140da4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) == 0)
    void*** rax_1 = sub_140d8fd30()
    void* rdi_2
    
    if (rax_1 == -0x10)
        rdi_2 = nullptr
    else
        rdi_2 = &rax_1[4]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
        
        if (rax_1 != 0)
            rax_1[1].d -= 1
            
            if (rax_1[1].d == 1)
                (**rax_1)(rax_1)
                int32_t temp4_1 = *(rax_1 + 0xc)
                *(rax_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rax_1)[1](rax_1, 1)
    
    int64_t arg_8
    sub_140b58260(&arg_8, u"Regular", 1)
    int64_t var_218
    int64_t* rax_4
    int32_t rdx_1
    rax_4, rdx_1 = sub_140b139e0(&var_218)
    bool c_1 = rax_4[1].d != 0
    int64_t var_528 = *rax_4
    *rax_4 = 0
    int32_t rcx_6 = rax_4[1].d
    int32_t rcx_7 = *(rax_4 + 0xc)
    rax_4[1] = 0
    int32_t rdx_4 = sbb.d(rdx_1, rdx_1, c_1) + 7 + rcx_6
    
    if (rdx_4 s> rcx_7)
        sub_1405947f0(&var_528, rdx_4)
    
    int32_t rcx_10 = sub_140a2cf70(&var_528, u"Slate", 5)
    int64_t var_4d8 = var_528
    int32_t rdx_6 = rcx_6 + sbb.d(rcx_10, rcx_10, rcx_6 != 0) + 7
    var_528 = 0
    int32_t var_520_1
    var_520_1.q = 0
    
    if (rdx_6 s> rcx_7)
        sub_1405947f0(&var_4d8, rdx_6)
    
    int32_t rcx_15 = sub_140a2cf70(&var_4d8, u"Fonts", 5)
    int64_t var_4c8 = var_4d8
    int32_t rdx_8 = rcx_6 + sbb.d(rcx_15, rcx_15, rcx_6 != 0) + 0x14
    var_4d8 = 0
    int32_t var_4d0_1
    var_4d0_1.q = 0
    
    if (rdx_8 s> rcx_7)
        sub_1405947f0(&var_4c8, rdx_8)
    
    sub_140a2cf70(&var_4c8, u"Roboto-Regular.ttf", 0x12)
    int64_t rbx_2 = sx.q(*(rdi_2 + 8))
    int32_t rax_11 = (rbx_2 + 1).d
    *(rdi_2 + 8) = rax_11
    
    if (rax_11 s> *(rdi_2 + 0xc))
        sub_1405c4ec0(rdi_2)
    
    int64_t r9_1 = *rdi_2
    int64_t r10_1 = rbx_2 * 5
    int64_t r8_1 = var_4c8
    int64_t rax_12 = arg_8
    var_4c8 = 0
    int32_t var_4c0_1
    var_4c0_1.q = 0
    *(r9_1 + (r10_1 << 3)) = rax_12
    *(r9_1 + (r10_1 << 3) + 8) = r8_1
    *(r9_1 + (r10_1 << 3) + 0x10) = rcx_6
    *(r9_1 + (r10_1 << 3) + 0x14) = rcx_7
    *(r9_1 + (r10_1 << 3) + 0x18) = 0
    *(r9_1 + (r10_1 << 3) + 0x1c) = 0
    *(r9_1 + (r10_1 << 3) + 0x20) = 0
    int64_t rcx_22 = var_4c8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_4d8
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_528
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = var_218
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int64_t arg_18
    sub_140b58260(&arg_18, u"Italic", 1)
    int64_t var_208
    int64_t* rax_13
    int32_t rdx_11
    rax_13, rdx_11 = sub_140b139e0(&var_208)
    bool c_4 = rax_13[1].d != 0
    int64_t var_518 = *rax_13
    *rax_13 = 0
    int32_t rcx_30 = rax_13[1].d
    int32_t rcx_31 = *(rax_13 + 0xc)
    rax_13[1] = 0
    int32_t rdx_14 = sbb.d(rdx_11, rdx_11, c_4) + 7 + rcx_30
    
    if (rdx_14 s> rcx_31)
        sub_1405947f0(&var_518, rdx_14)
    
    int32_t rcx_34 = sub_140a2cf70(&var_518, u"Slate", 5)
    int64_t var_4a8 = var_518
    int32_t rdx_16 = rcx_30 + sbb.d(rcx_34, rcx_34, rcx_30 != 0) + 7
    var_518 = 0
    int32_t var_510_1
    var_510_1.q = 0
    
    if (rdx_16 s> rcx_31)
        sub_1405947f0(&var_4a8, rdx_16)
    
    int32_t rcx_39 = sub_140a2cf70(&var_4a8, u"Fonts", 5)
    int64_t var_4b8 = var_4a8
    int32_t rdx_18 = rcx_30 + sbb.d(rcx_39, rcx_39, rcx_30 != 0) + 0x13
    var_4a8 = 0
    int32_t var_4a0_1
    var_4a0_1.q = 0
    
    if (rdx_18 s> rcx_31)
        sub_1405947f0(&var_4b8, rdx_18)
    
    sub_140a2cf70(&var_4b8, u"Roboto-Italic.ttf", 0x11)
    int64_t rbx_3 = sx.q(*(rdi_2 + 8))
    int32_t rax_20 = (rbx_3 + 1).d
    *(rdi_2 + 8) = rax_20
    
    if (rax_20 s> *(rdi_2 + 0xc))
        sub_1405c4ec0(rdi_2)
    
    int64_t r9_2 = *rdi_2
    int64_t r10_2 = rbx_3 * 5
    int64_t r8_2 = var_4b8
    int64_t rax_21 = arg_18
    var_4b8 = 0
    int32_t var_4b0_1
    var_4b0_1.q = 0
    *(r9_2 + (r10_2 << 3)) = rax_21
    *(r9_2 + (r10_2 << 3) + 8) = r8_2
    *(r9_2 + (r10_2 << 3) + 0x10) = rcx_30
    *(r9_2 + (r10_2 << 3) + 0x14) = rcx_31
    *(r9_2 + (r10_2 << 3) + 0x18) = 0
    *(r9_2 + (r10_2 << 3) + 0x1c) = 0
    *(r9_2 + (r10_2 << 3) + 0x20) = 0
    int64_t rcx_46 = var_4b8
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    int64_t rcx_47 = var_4a8
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    int64_t rcx_48 = var_518
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    int64_t rcx_49 = var_208
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    int64_t arg_20
    sub_140b58260(&arg_20, u"Bold", 1)
    int64_t var_1f8
    int64_t* rax_22
    int32_t rdx_21
    rax_22, rdx_21 = sub_140b139e0(&var_1f8)
    bool c_7 = rax_22[1].d != 0
    int64_t var_508 = *rax_22
    *rax_22 = 0
    int32_t rcx_54 = rax_22[1].d
    int32_t rcx_55 = *(rax_22 + 0xc)
    rax_22[1] = 0
    int32_t rdx_24 = sbb.d(rdx_21, rdx_21, c_7) + 7 + rcx_54
    
    if (rdx_24 s> rcx_55)
        sub_1405947f0(&var_508, rdx_24)
    
    int32_t rcx_58 = sub_140a2cf70(&var_508, u"Slate", 5)
    int64_t var_488 = var_508
    int32_t rdx_26 = rcx_54 + sbb.d(rcx_58, rcx_58, rcx_54 != 0) + 7
    var_508 = 0
    int32_t var_500_1
    var_500_1.q = 0
    
    if (rdx_26 s> rcx_55)
        sub_1405947f0(&var_488, rdx_26)
    
    int32_t rcx_63 = sub_140a2cf70(&var_488, u"Fonts", 5)
    int64_t var_498 = var_488
    int32_t rdx_28 = rcx_54 + sbb.d(rcx_63, rcx_63, rcx_54 != 0) + 0x11
    var_488 = 0
    int32_t var_480_1
    var_480_1.q = 0
    
    if (rdx_28 s> rcx_55)
        sub_1405947f0(&var_498, rdx_28)
    
    sub_140a2cf70(&var_498, u"Roboto-Bold.ttf", 0xf)
    int64_t rbx_4 = sx.q(*(rdi_2 + 8))
    int32_t rax_29 = (rbx_4 + 1).d
    *(rdi_2 + 8) = rax_29
    
    if (rax_29 s> *(rdi_2 + 0xc))
        sub_1405c4ec0(rdi_2)
    
    int64_t r9_3 = *rdi_2
    int64_t r10_3 = rbx_4 * 5
    int64_t r8_3 = var_498
    int64_t rax_30 = arg_20
    var_498 = 0
    int32_t var_490_1
    var_490_1.q = 0
    *(r9_3 + (r10_3 << 3)) = rax_30
    *(r9_3 + (r10_3 << 3) + 8) = r8_3
    *(r9_3 + (r10_3 << 3) + 0x10) = rcx_54
    *(r9_3 + (r10_3 << 3) + 0x14) = rcx_55
    *(r9_3 + (r10_3 << 3) + 0x18) = 0
    *(r9_3 + (r10_3 << 3) + 0x1c) = 0
    *(r9_3 + (r10_3 << 3) + 0x20) = 0
    int64_t rcx_70 = var_498
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    int64_t rcx_71 = var_488
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    int64_t rcx_72 = var_508
    
    if (rcx_72 != 0)
        sub_140a74f90(rcx_72)
    
    int64_t rcx_73 = var_1f8
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)
    
    int64_t var_310
    sub_140b58260(&var_310, u"BoldItalic", 1)
    int64_t var_1e8
    int64_t* rax_31
    int32_t rdx_31
    rax_31, rdx_31 = sub_140b139e0(&var_1e8)
    bool c_10 = rax_31[1].d != 0
    int64_t var_4f8 = *rax_31
    *rax_31 = 0
    int32_t rcx_78 = rax_31[1].d
    int32_t rcx_79 = *(rax_31 + 0xc)
    rax_31[1] = 0
    int32_t rdx_34 = sbb.d(rdx_31, rdx_31, c_10) + 7 + rcx_78
    
    if (rdx_34 s> rcx_79)
        sub_1405947f0(&var_4f8, rdx_34)
    
    int32_t rcx_82 = sub_140a2cf70(&var_4f8, u"Slate", 5)
    int64_t var_468 = var_4f8
    int32_t rdx_36 = rcx_78 + sbb.d(rcx_82, rcx_82, rcx_78 != 0) + 7
    var_4f8 = 0
    int32_t var_4f0_1
    var_4f0_1.q = 0
    
    if (rdx_36 s> rcx_79)
        sub_1405947f0(&var_468, rdx_36)
    
    int32_t rcx_87 = sub_140a2cf70(&var_468, u"Fonts", 5)
    int64_t var_478 = var_468
    int32_t rdx_38 = rcx_78 + sbb.d(rcx_87, rcx_87, rcx_78 != 0) + 0x17
    var_468 = 0
    int32_t var_460_1
    var_460_1.q = 0
    
    if (rdx_38 s> rcx_79)
        sub_1405947f0(&var_478, rdx_38)
    
    sub_140a2cf70(&var_478, u"Roboto-BoldItalic.ttf", 0x15)
    int64_t rbx_5 = sx.q(*(rdi_2 + 8))
    int32_t rax_38 = (rbx_5 + 1).d
    *(rdi_2 + 8) = rax_38
    
    if (rax_38 s> *(rdi_2 + 0xc))
        sub_1405c4ec0(rdi_2)
    
    int64_t r9_4 = *rdi_2
    int64_t r10_4 = rbx_5 * 5
    int64_t r8_4 = var_478
    int64_t rax_39 = var_310
    var_478 = 0
    int32_t var_470_1
    var_470_1.q = 0
    *(r9_4 + (r10_4 << 3)) = rax_39
    *(r9_4 + (r10_4 << 3) + 8) = r8_4
    *(r9_4 + (r10_4 << 3) + 0x10) = rcx_78
    *(r9_4 + (r10_4 << 3) + 0x14) = rcx_79
    *(r9_4 + (r10_4 << 3) + 0x18) = 0
    *(r9_4 + (r10_4 << 3) + 0x1c) = 0
    *(r9_4 + (r10_4 << 3) + 0x20) = 0
    int64_t rcx_94 = var_478
    
    if (rcx_94 != 0)
        sub_140a74f90(rcx_94)
    
    int64_t rcx_95 = var_468
    
    if (rcx_95 != 0)
        sub_140a74f90(rcx_95)
    
    int64_t rcx_96 = var_4f8
    
    if (rcx_96 != 0)
        sub_140a74f90(rcx_96)
    
    int64_t rcx_97 = var_1e8
    
    if (rcx_97 != 0)
        sub_140a74f90(rcx_97)
    
    void var_308
    sub_140b58260(&var_308, u"BoldCondensed", 1)
    int64_t var_1d8
    int64_t* rax_40
    int32_t rdx_41
    rax_40, rdx_41 = sub_140b139e0(&var_1d8)
    bool c_13 = rax_40[1].d != 0
    int64_t var_4e8 = *rax_40
    *rax_40 = 0
    int32_t rcx_102 = rax_40[1].d
    int32_t rcx_103 = *(rax_40 + 0xc)
    rax_40[1] = 0
    int32_t rdx_44 = sbb.d(rdx_41, rdx_41, c_13) + 7 + rcx_102
    
    if (rdx_44 s> rcx_103)
        sub_1405947f0(&var_4e8, rdx_44)
    
    int32_t rcx_106 = sub_140a2cf70(&var_4e8, u"Slate", 5)
    int64_t var_458 = var_4e8
    int32_t rdx_46 = rcx_102 + sbb.d(rcx_106, rcx_106, rcx_102 != 0) + 7
    var_4e8 = 0
    int32_t var_44c_1 = rcx_103
    int32_t var_4e0_1
    var_4e0_1.q = 0
    
    if (rdx_46 s> rcx_103)
        sub_1405947f0(&var_458, rdx_46)
    
    int32_t r8_5 = sub_140a2cf70(&var_458, u"Fonts", 5)
    void var_2d8
    sub_140596690(&var_2d8, &var_458, sbb.d(r8_5, r8_5, rcx_102 != 0) + 0x1a)
    sub_140a2cf70(&var_2d8, u"Roboto-BoldCondensed.ttf", 0x18)
    sub_140d99fb0(rdi_2, &var_308, &var_2d8, 0, 0)
    int64_t rcx_114 = var_458
    
    if (rcx_114 != 0)
        sub_140a74f90(rcx_114)
    
    int64_t rcx_115 = var_4e8
    
    if (rcx_115 != 0)
        sub_140a74f90(rcx_115)
    
    int64_t rcx_116 = var_1d8
    
    if (rcx_116 != 0)
        sub_140a74f90(rcx_116)
    
    void var_300
    sub_140b58260(&var_300, u"BoldCondensedItalic", 1)
    int64_t var_1c8
    int64_t* rax_46
    int32_t r8_9
    rax_46, r8_9 = sub_140b139e0(&var_1c8)
    int64_t var_418
    sub_140596690(&var_418, rax_46, sbb.d(r8_9, r8_9, rax_46[1].d != 0) + 7)
    int32_t r8_12 = sub_140a2cf70(&var_418, u"Slate", 5)
    int64_t var_428
    int32_t var_410
    sub_140596690(&var_428, &var_418, sbb.d(r8_12, r8_12, var_410 != 0) + 7)
    int32_t r8_15 = sub_140a2cf70(&var_428, u"Fonts", 5)
    int32_t var_420
    void var_2c8
    sub_140596690(&var_2c8, &var_428, sbb.d(r8_15, r8_15, var_420 != 0) + 0x20)
    sub_140a2cf70(&var_2c8, u"Roboto-BoldCondensedItalic.ttf", 0x1e)
    sub_140d99fb0(rdi_2, &var_300, &var_2c8, 0, 0)
    int64_t rcx_127 = var_428
    
    if (rcx_127 != 0)
        sub_140a74f90(rcx_127)
    
    int64_t rcx_128 = var_418
    
    if (rcx_128 != 0)
        sub_140a74f90(rcx_128)
    
    int64_t rcx_129 = var_1c8
    
    if (rcx_129 != 0)
        sub_140a74f90(rcx_129)
    
    void var_2f8
    sub_140b58260(&var_2f8, u"Black", 1)
    int64_t var_1b8
    int64_t* rax_51
    int32_t r8_19
    rax_51, r8_19 = sub_140b139e0(&var_1b8)
    int64_t var_3f8
    sub_140596690(&var_3f8, rax_51, sbb.d(r8_19, r8_19, rax_51[1].d != 0) + 7)
    int32_t r8_22 = sub_140a2cf70(&var_3f8, u"Slate", 5)
    int64_t var_408
    int32_t var_3f0
    sub_140596690(&var_408, &var_3f8, sbb.d(r8_22, r8_22, var_3f0 != 0) + 7)
    int32_t r8_25 = sub_140a2cf70(&var_408, u"Fonts", 5)
    int32_t var_400
    void var_2b8
    sub_140596690(&var_2b8, &var_408, sbb.d(r8_25, r8_25, var_400 != 0) + 0x12)
    sub_140a2cf70(&var_2b8, u"Roboto-Black.ttf", 0x10)
    sub_140d99fb0(rdi_2, &var_2f8, &var_2b8, 0, 0)
    int64_t rcx_140 = var_408
    
    if (rcx_140 != 0)
        sub_140a74f90(rcx_140)
    
    int64_t rcx_141 = var_3f8
    
    if (rcx_141 != 0)
        sub_140a74f90(rcx_141)
    
    int64_t rcx_142 = var_1b8
    
    if (rcx_142 != 0)
        sub_140a74f90(rcx_142)
    
    void var_2f0
    sub_140b58260(&var_2f0, u"BlackItalic", 1)
    int64_t var_1a8
    int64_t* rax_56
    int32_t r8_29
    rax_56, r8_29 = sub_140b139e0(&var_1a8)
    int64_t var_3d8
    sub_140596690(&var_3d8, rax_56, sbb.d(r8_29, r8_29, rax_56[1].d != 0) + 7)
    int32_t r8_32 = sub_140a2cf70(&var_3d8, u"Slate", 5)
    int64_t var_3e8
    int32_t var_3d0
    sub_140596690(&var_3e8, &var_3d8, sbb.d(r8_32, r8_32, var_3d0 != 0) + 7)
    int32_t r8_35 = sub_140a2cf70(&var_3e8, u"Fonts", 5)
    int32_t var_3e0
    void var_2a8
    sub_140596690(&var_2a8, &var_3e8, sbb.d(r8_35, r8_35, var_3e0 != 0) + 0x18)
    sub_140a2cf70(&var_2a8, u"Roboto-BlackItalic.ttf", 0x16)
    sub_140d99fb0(rdi_2, &var_2f0, &var_2a8, 0, 0)
    int64_t rcx_153 = var_3e8
    
    if (rcx_153 != 0)
        sub_140a74f90(rcx_153)
    
    int64_t rcx_154 = var_3d8
    
    if (rcx_154 != 0)
        sub_140a74f90(rcx_154)
    
    int64_t rcx_155 = var_1a8
    
    if (rcx_155 != 0)
        sub_140a74f90(rcx_155)
    
    void var_2e8
    sub_140b58260(&var_2e8, u"Light", 1)
    int64_t var_198
    int64_t* rax_61
    int32_t r8_39
    rax_61, r8_39 = sub_140b139e0(&var_198)
    int64_t var_3a8
    sub_140596690(&var_3a8, rax_61, sbb.d(r8_39, r8_39, rax_61[1].d != 0) + 7)
    int32_t r8_42 = sub_140a2cf70(&var_3a8, u"Slate", 5)
    int64_t var_3c8
    int32_t var_3a0
    sub_140596690(&var_3c8, &var_3a8, sbb.d(r8_42, r8_42, var_3a0 != 0) + 7)
    int32_t r8_45 = sub_140a2cf70(&var_3c8, u"Fonts", 5)
    int32_t var_3c0
    void var_298
    sub_140596690(&var_298, &var_3c8, sbb.d(r8_45, r8_45, var_3c0 != 0) + 0x12)
    sub_140a2cf70(&var_298, u"Roboto-Light.ttf", 0x10)
    sub_140d99fb0(rdi_2, &var_2e8, &var_298, 0, 0)
    int64_t rcx_166 = var_3c8
    
    if (rcx_166 != 0)
        sub_140a74f90(rcx_166)
    
    int64_t rcx_167 = var_3a8
    
    if (rcx_167 != 0)
        sub_140a74f90(rcx_167)
    
    int64_t rcx_168 = var_198
    
    if (rcx_168 != 0)
        sub_140a74f90(rcx_168)
    
    void var_2e0
    sub_140b58260(&var_2e0, u"VeryLight", 1)
    int64_t var_188
    int64_t* rax_66
    int32_t r8_49
    rax_66, r8_49 = sub_140b139e0(&var_188)
    int64_t var_3b8
    sub_140596690(&var_3b8, rax_66, sbb.d(r8_49, r8_49, rax_66[1].d != 0) + 7)
    int32_t r8_52 = sub_140a2cf70(&var_3b8, u"Slate", 5)
    int32_t var_3b0
    int64_t var_398
    sub_140596690(&var_398, &var_3b8, sbb.d(r8_52, r8_52, var_3b0 != 0) + 7)
    int32_t r8_55 = sub_140a2cf70(&var_398, u"Fonts", 5)
    int32_t var_390
    void var_288
    sub_140596690(&var_288, &var_398, sbb.d(r8_55, r8_55, var_390 != 0) + 0x12)
    sub_140a2cf70(&var_288, u"Roboto-Light.ttf", 0x10)
    sub_140d99fb0(rdi_2, &var_2e0, &var_288, 1, 0)
    int64_t rcx_179 = var_398
    
    if (rcx_179 != 0)
        sub_140a74f90(rcx_179)
    
    int64_t rcx_180 = var_3b8
    
    if (rcx_180 != 0)
        sub_140a74f90(rcx_180)
    
    int64_t rcx_181 = var_188
    
    if (rcx_181 != 0)
        sub_140a74f90(rcx_181)
    
    void var_328
    sub_140b58260(&var_328, u"Mono", 1)
    int64_t var_178
    int64_t* rax_71
    int32_t r8_59
    rax_71, r8_59 = sub_140b139e0(&var_178)
    int64_t var_378
    sub_140596690(&var_378, rax_71, sbb.d(r8_59, r8_59, rax_71[1].d != 0) + 7)
    int32_t r8_62 = sub_140a2cf70(&var_378, u"Slate", 5)
    int64_t var_388
    int32_t var_370
    sub_140596690(&var_388, &var_378, sbb.d(r8_62, r8_62, var_370 != 0) + 7)
    int32_t r8_65 = sub_140a2cf70(&var_388, u"Fonts", 5)
    int32_t var_380
    void var_278
    sub_140596690(&var_278, &var_388, sbb.d(r8_65, r8_65, var_380 != 0) + 0x13)
    sub_140a2cf70(&var_278, u"DroidSansMono.ttf", 0x11)
    sub_140d99fb0(rdi_2, &var_328, &var_278, 0, 0)
    int64_t rcx_192 = var_388
    
    if (rcx_192 != 0)
        sub_140a74f90(rcx_192)
    
    int64_t rcx_193 = var_378
    
    if (rcx_193 != 0)
        sub_140a74f90(rcx_193)
    
    int64_t rcx_194 = var_178
    
    if (rcx_194 != 0)
        sub_140a74f90(rcx_194)
    
    void var_318
    sub_140b58260(&var_318, u"Regular", 1)
    int64_t var_168
    int64_t* rax_76
    int32_t r8_69
    rax_76, r8_69 = sub_140b139e0(&var_168)
    int64_t var_358
    sub_140596690(&var_358, rax_76, sbb.d(r8_69, r8_69, rax_76[1].d != 0) + 7)
    int32_t r8_72 = sub_140a2cf70(&var_358, u"Slate", 5)
    int64_t var_368
    int32_t var_350
    sub_140596690(&var_368, &var_358, sbb.d(r8_72, r8_72, var_350 != 0) + 7)
    int32_t r8_75 = sub_140a2cf70(&var_368, u"Fonts", 5)
    int32_t var_360
    void var_268
    sub_140596690(&var_268, &var_368, sbb.d(r8_75, r8_75, var_360 != 0) + 0x17)
    sub_140a2cf70(&var_268, u"DroidSansFallback.ttf", 0x15)
    sub_140d99fb0(rdi_2 + 0x10, &var_318, &var_268, 0, 0)
    int64_t rcx_205 = var_368
    
    if (rcx_205 != 0)
        sub_140a74f90(rcx_205)
    
    int64_t rcx_206 = var_358
    
    if (rcx_206 != 0)
        sub_140a74f90(rcx_206)
    
    int64_t rcx_207 = var_168
    
    if (rcx_207 != 0)
        sub_140a74f90(rcx_207)
    
    int64_t* r13_2 = sx.q(sub_140d98780(rdi_2 + 0x28, 1)) * 0x38 + *(rdi_2 + 0x28)
    void* var_158
    sub_140dab140(&var_158)
    void* rcx_211 = var_158
    int16_t var_248_1 = *(rcx_211 + 0x270)
    int64_t var_240 = *(rcx_211 + 0x278)
    void* rax_84 = *(rcx_211 + 0x280)
    void* var_238_1 = rax_84
    
    if (rax_84 != 0)
        *(rax_84 + 8) += 1
    
    int32_t var_230_1 = *(rcx_211 + 0x288)
    int128_t zmm0_1 = *(rcx_211 + 0x290)
    int64_t r14_1 = sx.q(r13_2[4].d)
    int32_t rax_86 = (r14_1 + 1).d
    r13_2[4].d = rax_86
    
    if (rax_86 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_1 * 0x10) = zmm0_1
    sub_1405970a0(&var_240)
    void var_138
    int16_t* rax_88 = sub_140dab0d0(&var_138, 0x14)
    int64_t r14_2 = sx.q(r13_2[4].d)
    int32_t rcx_217 = (r14_2 + 1).d
    r13_2[4].d = rcx_217
    
    if (rcx_217 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_2 * 0x10) = *(rax_88 + 0x20)
    void var_130
    sub_1405970a0(&var_130)
    void var_108
    int16_t* rax_90 = sub_140dab0d0(&var_108, 0xfb)
    int64_t r14_3 = sx.q(r13_2[4].d)
    int32_t rcx_223 = (r14_3 + 1).d
    r13_2[4].d = rcx_223
    
    if (rcx_223 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_3 * 0x10) = *(rax_90 + 0x20)
    void var_100
    sub_1405970a0(&var_100)
    void var_d8
    int16_t* rax_92 = sub_140dab0d0(&var_d8, 0x99)
    int64_t r14_4 = sx.q(r13_2[4].d)
    int32_t rcx_229 = (r14_4 + 1).d
    r13_2[4].d = rcx_229
    
    if (rcx_229 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_4 * 0x10) = *(rax_92 + 0x20)
    void var_d0
    sub_1405970a0(&var_d0)
    void var_a8
    int16_t* rax_94 = sub_140dab0d0(&var_a8, 0x9f)
    int64_t r14_5 = sx.q(r13_2[4].d)
    int32_t rcx_235 = (r14_5 + 1).d
    r13_2[4].d = rcx_235
    
    if (rcx_235 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_5 * 0x10) = *(rax_94 + 0x20)
    void var_a0
    sub_1405970a0(&var_a0)
    void var_78
    int16_t* rax_96 = sub_140dab0d0(&var_78, 0xf)
    int64_t r14_6 = sx.q(r13_2[4].d)
    int32_t rcx_241 = (r14_6 + 1).d
    r13_2[4].d = rcx_241
    
    if (rcx_241 s> *(r13_2 + 0x24))
        sub_1405a4f90(&r13_2[3])
    
    *(r13_2[3] + r14_6 * 0x10) = *(rax_96 + 0x20)
    void var_70
    sub_1405970a0(&var_70)
    void var_320
    sub_140b58260(&var_320, u"Regular", 1)
    int64_t var_148
    int64_t* rax_98
    int32_t r8_79
    rax_98, r8_79 = sub_140b139e0(&var_148)
    int64_t var_338
    sub_140596690(&var_338, rax_98, sbb.d(r8_79, r8_79, rax_98[1].d != 0) + 7)
    int32_t r8_82 = sub_140a2cf70(&var_338, u"Slate", 5)
    int64_t var_348
    int32_t var_330
    sub_140596690(&var_348, &var_338, sbb.d(r8_82, r8_82, var_330 != 0) + 7)
    int32_t r8_85 = sub_140a2cf70(&var_348, u"Fonts", 5)
    int32_t var_340
    void var_258
    sub_140596690(&var_258, &var_348, sbb.d(r8_85, r8_85, var_340 != 0) + 0x1f)
    sub_140a2cf70(&var_258, u"NotoNaskhArabicUI-Regular.ttf", 0x1d)
    sub_140d99fb0(r13_2, &var_320, &var_258, 0, 0)
    int64_t rcx_256 = var_348
    
    if (rcx_256 != 0)
        sub_140a74f90(rcx_256)
    
    int64_t rcx_257 = var_338
    
    if (rcx_257 != 0)
        sub_140a74f90(rcx_257)
    
    int64_t rcx_258 = var_148
    
    if (rcx_258 != 0)
        sub_140a74f90(rcx_258)
    
    void* var_448 = rdi_2
    void*** rbx_6 = rax_1
    void*** var_440 = rbx_6
    
    if (rax_1 != 0)
        rax_1[1].d += 1
        rbx_6 = var_440
        rdi_2 = var_448
    
    if (arg1 + 0x70 != &var_448)
        *(arg1 + 0x70) = rdi_2
        var_448 = nullptr
        sub_14066a200(arg1 + 0x78, &var_440)
        rbx_6 = var_440
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp43_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp43_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t temp44_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp44_1 == 1)
                (*rax_1)[1](rax_1, 1)

*arg2 = *(arg1 + 0x70)
void* rax_108 = *(arg1 + 0x78)
arg2[1] = rax_108

if (rax_108 != 0)
    *(rax_108 + 8) += 1

return arg2
