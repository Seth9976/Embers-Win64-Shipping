// 函数: sub_140f21260
// 地址: 0x140f21260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ee5e30
arg1[0x56] = arg1
arg1[0x55] = &data_142d82a88
sub_140ddb700(&arg1[0x57])
arg1[0x58] = arg1
__builtin_memset(&arg1[0x5b], 0, 0x19)
arg1[0x5f] = 0
arg1[0x60].d = 0
arg1[0x55] = &data_142ec8af0
arg1[0x57] = &data_142ec8b18
__builtin_memset(&arg1[0x61], 0, 0x1c)
arg1[0x65].w = 0x101
*(arg1 + 0x32a) = 1
__builtin_memset(&arg1[0x66], 0, 0x40)
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd

if (data_143e2ad84 == 0)
    int128_t var_ab8 = data_142ee7640
    int16_t* var_b48 = nullptr
    int32_t var_b40_1 = 0
    sub_1405947f0(&var_b48, 0x16)
    int32_t rbx_1 = var_b40_1 + 0x16
    
    if (rbx_1 s> 0)
        sub_140594770(&var_b48)
    
    int16_t* r13_1 = var_b48
    sub_1405a7220(r13_1, 0x16, "Common/Button_Pressed", 0x16, 0x3f)
    int128_t zmm0_2 = data_142ee7640
    var_b48 = nullptr
    int128_t var_a08 = zmm0_2
    int64_t var_b40_2 = 0
    sub_1405947f0(&var_b48, 0x16)
    int32_t rdi_1 = var_b40_2.d + 0x16
    var_b40_2.d = rdi_1
    
    if (rdi_1 s> 0)
        sub_140594770(&var_b48)
        rdi_1 = var_b40_2.d
    
    int16_t* r12_1 = var_b48
    sub_1405a7220(r12_1, 0x16, "Common/Button_Hovered", 0x16, 0x3f)
    int128_t zmm0_3 = data_142ee7640
    int16_t* var_b28 = nullptr
    int128_t var_a28 = zmm0_3
    int64_t var_b20_1 = 0
    sub_1405947f0(&var_b28, 0xe)
    int32_t r15_1 = var_b20_1.d + 0xe
    var_b20_1.d = r15_1
    
    if (r15_1 s> 0)
        sub_140594770(&var_b28)
        r15_1 = var_b20_1.d
    
    int16_t var_b58_1 = 0x3f
    sub_1405a7220(var_b28, 0xe, "Common/Button", 0xe, 0x3f)
    data_142ee7670
    int128_t zmm7 = data_142d3f6c0
    int128_t var_a58 = data_142d3f670
    int32_t arg_18 = 0x42000000
    int32_t arg_1c = 0x42000000
    int64_t var_9e8
    int64_t* rax_1 = sub_140b139e0(&var_9e8)
    int32_t rdx_5 = rax_1[1].d
    int32_t rdx_6 = neg.d(rdx_5)
    int16_t* var_a48 = *rax_1
    *rax_1 = 0
    int32_t rcx_14 = rax_1[1].d
    int32_t rcx_15 = *(rax_1 + 0xc)
    rax_1[1] = 0
    int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rdx_5 != 0) + 7 + rcx_14
    
    if (rdx_9 s> rcx_15)
        sub_1405947f0(&var_a48, rdx_9)
    
    sub_140a2cf70(&var_a48, u"Slate", 5)
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    int32_t r14_1 = 2
    int32_t rdx_10
    
    if (rcx_14 == 0)
        rdx_10 = 2
    
    if (rcx_14 != 0 || rbx_2 == 0xffffffff)
        rdx_10 = 1
    
    int16_t* var_b38 = var_a48
    int32_t rdx_12 = rdx_10 + rbx_2 + rcx_14
    var_a48 = nullptr
    int32_t var_a40_1
    var_a40_1.q = 0
    
    if (rdx_12 s> rcx_15)
        sub_1405947f0(&var_b38, rdx_12)
    
    int32_t rcx_21 = sub_140a2cf70(&var_b38, r13_1, rbx_2)
    int16_t* var_a98 = var_b38
    var_b38 = nullptr
    int32_t rdx_15 = rcx_14 + sbb.d(rcx_21, rcx_21, rcx_14 != 0) + 5
    int32_t var_b30_1
    var_b30_1.q = 0
    
    if (rdx_15 s> rcx_15)
        sub_1405947f0(&var_a98, rdx_15)
    
    sub_140a20ba0(&var_a98, u".png", 4)
    int16_t* rax_8 = var_a98
    int128_t zmm0_5 = data_142d3f670
    int16_t* arg_20 = rax_8
    int16_t* var_a88 = rax_8
    int32_t var_a7c_1 = rcx_15
    int32_t var_a90_1
    var_a90_1.q = 0
    var_a98 = nullptr
    int128_t var_a38 = zmm0_5
    int32_t arg_10 = 0x42000000
    int32_t arg_14 = 0x42000000
    int64_t var_9f8
    int64_t* rax_11 = sub_140b139e0(&var_9f8)
    int32_t rdx_16 = rax_11[1].d
    int32_t rdx_17 = neg.d(rdx_16)
    int16_t* var_aa8 = *rax_11
    *rax_11 = 0
    int32_t rcx_28 = rax_11[1].d
    int32_t rcx_29 = *(rax_11 + 0xc)
    rax_11[1] = 0
    int32_t rdx_20 = sbb.d(rdx_17, rdx_17, rdx_16 != 0) + 7 + rcx_28
    
    if (rdx_20 s> rcx_29)
        sub_1405947f0(&var_aa8, rdx_20)
    
    sub_140a2cf70(&var_aa8, u"Slate", 5)
    int32_t rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = 0
    else
        rdi_2 = rdi_1 - 1
    
    int32_t rdx_21
    
    if (rcx_28 == 0)
        rdx_21 = 2
    
    if (rcx_28 != 0 || rdi_2 == 0xffffffff)
        rdx_21 = 1
    
    int16_t* var_ae8 = var_aa8
    int32_t rdx_23 = rdx_21 + rdi_2 + rcx_28
    var_aa8 = nullptr
    int32_t var_aa0_1
    var_aa0_1.q = 0
    
    if (rdx_23 s> rcx_29)
        sub_1405947f0(&var_ae8, rdx_23)
    
    int32_t rcx_35 = sub_140a2cf70(&var_ae8, r12_1, rdi_2)
    int16_t* var_ad8 = var_ae8
    int32_t rdx_26 = rcx_28 + sbb.d(rcx_35, rcx_35, rcx_28 != 0) + 5
    var_ae8 = nullptr
    int32_t var_ae0_1
    var_ae0_1.q = 0
    
    if (rdx_26 s> rcx_29)
        sub_1405947f0(&var_ad8, rdx_26)
    
    sub_140a20ba0(&var_ad8, u".png", 4)
    int16_t* r12_2 = var_ad8
    int128_t zmm0_6 = data_142d3f670
    int32_t var_a6c_1 = rcx_29
    int32_t var_ad0_1
    var_ad0_1.q = 0
    int16_t* var_a78 = r12_2
    var_ad8 = nullptr
    int128_t var_a18 = zmm0_6
    int32_t arg_8 = 0x42000000
    int32_t arg_c = 0x42000000
    int16_t* var_ac8
    int64_t* rax_20 = sub_140b139e0(&var_ac8)
    int32_t rdx_27 = rax_20[1].d
    int32_t rdx_28 = neg.d(rdx_27)
    int16_t* var_b08 = *rax_20
    *rax_20 = 0
    int32_t rcx_42 = rax_20[1].d
    int32_t rcx_43 = *(rax_20 + 0xc)
    rax_20[1] = 0
    int32_t rdx_31 = sbb.d(rdx_28, rdx_28, rdx_27 != 0) + 7 + rcx_42
    
    if (rdx_31 s> rcx_43)
        sub_1405947f0(&var_b08, rdx_31)
    
    sub_140a2cf70(&var_b08, u"Slate", 5)
    int32_t r15_2
    
    if (r15_1 == 0)
        r15_2 = 0
    else
        r15_2 = r15_1 - 1
    
    int32_t rdx_32
    
    if (rcx_42 == 0)
        rdx_32 = 2
    
    if (rcx_42 != 0 || r15_2 == 0xffffffff)
        rdx_32 = 1
    
    int16_t* var_af8 = var_b08
    int32_t rdx_34 = rdx_32 + r15_2 + rcx_42
    var_b08 = nullptr
    int32_t var_b00_1
    var_b00_1.q = 0
    
    if (rdx_34 s> rcx_43)
        sub_1405947f0(&var_af8, rdx_34)
    
    int32_t rcx_49 = sub_140a2cf70(&var_af8, var_b28, r15_2)
    int16_t* var_b18 = var_af8
    int32_t rdx_37 = rcx_42 + sbb.d(rcx_49, rcx_49, rcx_42 != 0) + 5
    var_af8 = nullptr
    int32_t var_af0_1
    var_af0_1.q = 0
    
    if (rdx_37 s> rcx_43)
        sub_1405947f0(&var_b18, rdx_37)
    
    sub_140a20ba0(&var_b18, u".png", 4)
    int16_t* r15_3 = var_b18
    int32_t var_a5c_1 = rcx_43
    var_b58_1.q = &var_a18
    int16_t* var_a68 = r15_3
    var_b18 = nullptr
    int32_t var_b10_1
    var_b10_1.q = 0
    void** var_868
    void*** rax_29 = sub_140dd9bd0(&var_868, &var_a68, &arg_8, &var_a28, var_b58_1, 1)
    void** var_7e0
    void*** rax_30 = sub_140dd6180(&var_7e0)
    sub_140693270(&rax_30[1], rax_29)
    var_b58_1.q = &var_a38
    void** var_978
    sub_140693270(&rax_30[0x12], sub_140dd9bd0(&var_978, &var_a78, &arg_10, &var_a08, var_b58_1, 1))
    var_b58_1.q = &var_a58
    void** var_8f0
    void*** rax_32
    int128_t zmm6_1
    rax_32, zmm6_1 = sub_140dd9bd0(&var_8f0, &var_a88, &arg_18, &var_ab8, var_b58_1, 1)
    sub_140693270(&rax_30[0x23], rax_32)
    *(rax_30 + 0x228) = zmm7
    *(rax_30 + 0x238) = zmm6_1
    void** var_2e8
    sub_14068def0(&var_2e8, rax_30)
    var_7e0 = &data_142d8ad20
    void** var_640
    sub_140691a20(&var_640)
    void** var_6c8
    sub_140691a20(&var_6c8)
    void** var_750
    sub_140691a20(&var_750)
    void** var_7d8
    sub_140691a20(&var_7d8)
    var_7e0 = &data_142d8ad00
    var_868 = &data_142d8ad18
    int64_t* var_7f0
    
    if (var_7f0 != 0)
        var_7f0[1].d -= 1
        
        if (var_7f0[1].d == 1)
            (**var_7f0)(var_7f0)
            int32_t temp8_1 = *(var_7f0 + 0xc)
            *(var_7f0 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_7f0 + 8))(var_7f0, 1)
    
    int64_t* var_828
    
    if (var_828 != 0)
        var_828[1].d -= 1
        
        if (var_828[1].d == 1)
            (**var_828)(var_828)
            int32_t temp9_1 = *(var_828 + 0xc)
            *(var_828 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_828 + 8))(var_828, 1)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    int16_t* rcx_71 = var_af8
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    int16_t* rcx_72 = var_b08
    
    if (rcx_72 != 0)
        sub_140a74f90(rcx_72)
    
    int16_t* rcx_73 = var_ac8
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)
    
    var_978 = &data_142d8ad18
    int64_t* var_900
    
    if (var_900 != 0)
        var_900[1].d -= 1
        
        if (var_900[1].d == 1)
            (**var_900)(var_900)
            int32_t temp12_1 = *(var_900 + 0xc)
            *(var_900 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_900 + 8))(var_900, 1)
    
    int64_t* var_938
    
    if (var_938 != 0)
        var_938[1].d -= 1
        
        if (var_938[1].d == 1)
            (**var_938)(var_938)
            int32_t temp13_1 = *(var_938 + 0xc)
            *(var_938 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_938 + 8))(var_938, 1)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    int16_t* rcx_79 = var_ae8
    
    if (rcx_79 != 0)
        sub_140a74f90(rcx_79)
    
    int16_t* rcx_80 = var_aa8
    
    if (rcx_80 != 0)
        sub_140a74f90(rcx_80)
    
    int64_t rcx_81 = var_9f8
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    var_8f0 = &data_142d8ad18
    int64_t* var_878
    
    if (var_878 != 0)
        var_878[1].d -= 1
        
        if (var_878[1].d == 1)
            (**var_878)(var_878)
            int32_t temp16_1 = *(var_878 + 0xc)
            *(var_878 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_878 + 8))(var_878, 1)
    
    int64_t* var_8b0
    
    if (var_8b0 != 0)
        var_8b0[1].d -= 1
        
        if (var_8b0[1].d == 1)
            (**var_8b0)(var_8b0)
            int32_t temp17_1 = *(var_8b0 + 0xc)
            *(var_8b0 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_8b0 + 8))(var_8b0, 1)
    
    int16_t* rcx_86 = arg_20
    
    if (rcx_86 != 0)
        sub_140a74f90(rcx_86)
    
    int16_t* rcx_87 = var_b38
    
    if (rcx_87 != 0)
        sub_140a74f90(rcx_87)
    
    int16_t* rcx_88 = var_a48
    
    if (rcx_88 != 0)
        sub_140a74f90(rcx_88)
    
    int64_t rcx_89 = var_9e8
    
    if (rcx_89 != 0)
        sub_140a74f90(rcx_89)
    
    int16_t* rax_45 = var_b28
    
    if (rax_45 != 0)
        sub_140a74f90(rax_45)
    
    int16_t* rcx_91 = var_b48
    
    if (rcx_91 != 0)
        sub_140a74f90(rcx_91)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    var_b18 = nullptr
    var_b10_1.q = 0
    sub_1405947f0(&var_b18, 0x2d)
    int32_t rbx_10 = var_b10_1 + 0x2d
    int32_t var_b10_2 = rbx_10
    
    if (rbx_10 s> rcx_43)
        sub_140594770(&var_b18)
        rbx_10 = var_b10_2
    
    int16_t* r12_3 = var_b18
    sub_1405a7220(r12_3, 0x2d, "Common/Window/WindowButton_Minimize_Disabled", 0x2d, 0x3f)
    var_af8 = nullptr
    var_af0_1.q = 0
    sub_1405947f0(&var_af8, 0x2c)
    int32_t rdi_4 = var_af0_1 + 0x2c
    int32_t var_af0_2 = rdi_4
    
    if (rdi_4 s> rcx_43)
        sub_140594770(&var_af8)
        rdi_4 = var_af0_2
    
    sub_1405a7220(var_af8, 0x2c, "Common/Window/WindowButton_Minimize_Pressed", 0x2c, 0x3f)
    var_ae8 = nullptr
    var_ae0_1.q = 0
    sub_1405947f0(&var_ae8, 0x2c)
    int32_t r15_4 = var_ae0_1 + 0x2c
    int32_t var_ae0_2 = r15_4
    
    if (r15_4 s> rcx_29)
        sub_140594770(&var_ae8)
        r15_4 = var_ae0_2
    
    sub_1405a7220(var_ae8, 0x2c, "Common/Window/WindowButton_Minimize_Hovered", 0x2c, 0x3f)
    var_b38 = nullptr
    var_b30_1.q = 0
    sub_1405947f0(&var_b38, 0x2b)
    int32_t r13_2 = var_b30_1 + 0x2b
    
    if (r13_2 s> rcx_15)
        sub_140594770(&var_b38)
    
    sub_1405a7220(var_b38, 0x2b, "Common/Window/WindowButton_Minimize_Normal", 0x2b, 0x3f)
    int128_t var_9c8 = data_142d3f670
    arg_20.d = 0x41d80000
    arg_20:4.d = 0x41900000
    int64_t var_988
    int64_t* rax_46 = sub_140b139e0(&var_988)
    int32_t rdx_49 = rax_46[1].d
    int32_t rdx_50 = neg.d(rdx_49)
    var_aa8 = *rax_46
    *rax_46 = 0
    int32_t rcx_107 = rax_46[1].d
    int32_t rcx_108 = *(rax_46 + 0xc)
    rax_46[1] = 0
    int32_t rdx_53 = sbb.d(rdx_50, rdx_50, rdx_49 != 0) + 7 + rcx_107
    
    if (rdx_53 s> rcx_108)
        sub_1405947f0(&var_aa8, rdx_53)
    
    sub_140a2cf70(&var_aa8, u"Slate", 5)
    int32_t rbx_11
    
    if (rbx_10 == 0)
        rbx_11 = 0
    else
        rbx_11 = rbx_10 - 1
    
    int32_t rdx_54
    
    if (rcx_107 == 0)
        rdx_54 = 2
    
    if (rcx_107 != 0 || rbx_11 == 0xffffffff)
        rdx_54 = 1
    
    var_b28 = var_aa8
    int32_t rdx_56 = rdx_54 + rbx_11 + rcx_107
    var_aa8 = nullptr
    var_b20_1.d = rcx_107
    var_b20_1:4.d = rcx_108
    int32_t var_aa0_2
    var_aa0_2.q = 0
    
    if (rdx_56 s> rcx_108)
        sub_1405947f0(&var_b28, rdx_56)
    
    int32_t rcx_114 = sub_140a2cf70(&var_b28, r12_3, rbx_11)
    int32_t rdx_58 = var_b20_1.d
    var_b40_2.d = rdx_58
    var_b48 = var_b28
    int32_t rax_52 = var_b20_1:4.d
    var_b28 = nullptr
    int32_t rdx_59 = rdx_58 + sbb.d(rcx_114, rcx_114, rdx_58 != 0) + 5
    var_b40_2:4.d = rax_52
    int64_t var_b20_2 = 0
    
    if (rdx_59 s> rax_52)
        sub_1405947f0(&var_b48, rdx_59)
    
    sub_140a20ba0(&var_b48, u".png", 4)
    int16_t* rax_53 = var_b48
    int128_t zmm0_8 = data_142d3f670
    var_a48 = rax_53
    var_a18.q = rax_53
    var_a18:8.d = var_b40_2.d
    var_a18:0xc.d = var_b40_2:4.d
    int64_t var_b40_3 = 0
    var_b48 = nullptr
    int128_t var_9d8 = zmm0_8
    arg_18 = 0x41d80000
    arg_1c = 0x41900000
    int64_t var_998
    int64_t* rax_56 = sub_140b139e0(&var_998)
    int32_t rdx_60 = rax_56[1].d
    int32_t rdx_61 = neg.d(rdx_60)
    var_b08 = *rax_56
    *rax_56 = 0
    int32_t rcx_121 = rax_56[1].d
    int32_t rcx_122 = *(rax_56 + 0xc)
    rax_56[1] = 0
    int32_t rdx_64 = sbb.d(rdx_61, rdx_61, rdx_60 != 0) + 7 + rcx_121
    
    if (rdx_64 s> rcx_122)
        sub_1405947f0(&var_b08, rdx_64)
    
    sub_140a2cf70(&var_b08, u"Slate", 5)
    int32_t rdi_5
    
    if (rdi_4 == 0)
        rdi_5 = 0
    else
        rdi_5 = rdi_4 - 1
    
    int32_t r8_8
    
    if (rcx_121 == 0)
        r8_8 = rcx_121 + 1
    
    if (rcx_121 != 0 || rdi_5 == 0xffffffff)
        r8_8 = 0
    
    var_ab8.q = var_b08
    int32_t rdx_67 = rdi_5 + 1 + rcx_121 + r8_8
    var_b08 = nullptr
    var_ab8:8.d = rcx_121
    var_ab8:0xc.d = rcx_122
    int32_t var_b00_2
    var_b00_2.q = 0
    
    if (rdx_67 s> rcx_122)
        sub_1405947f0(&var_ab8, rdx_67)
    
    int32_t r8_10 = sub_140a2cf70(&var_ab8, var_af8, rdi_5)
    sub_140596690(&var_ad8, &var_ab8, sbb.d(r8_10, r8_10, var_ab8:8.d != 0) + 5)
    sub_140a20ba0(&var_ad8, u".png", 4)
    int16_t* r12_4 = var_ad8
    int128_t zmm0_9 = data_142d3f670
    var_a28:8.d = var_ad0_1
    var_a28:0xc.d = rcx_29
    var_ad0_1.q = 0
    var_a28.q = r12_4
    var_ad8 = nullptr
    var_9f8.o = zmm0_9
    arg_10 = 0x41d80000
    arg_14 = 0x41900000
    int64_t var_9a8
    int64_t* rax_63
    int32_t r8_13
    rax_63, r8_13 = sub_140b139e0(&var_9a8)
    sub_140596690(&var_a68, rax_63, sbb.d(r8_13, r8_13, rax_63[1].d != 0) + 7)
    sub_140a2cf70(&var_a68, u"Slate", 5)
    int32_t r15_5
    
    if (r15_4 == 0)
        r15_5 = 0
    else
        r15_5 = r15_4 - 1
    
    int32_t rax_65
    
    if (rcx_42 == 0)
        rax_65 = 2
    
    if (rcx_42 != 0 || r15_5 == 0xffffffff)
        rax_65 = 1
    
    sub_140596690(&var_a78, &var_a68, r15_5 + rax_65)
    int32_t r8_18 = sub_140a2cf70(&var_a78, var_ae8, r15_5)
    sub_140596690(&var_a98, &var_a78, sbb.d(r8_18, r8_18, rcx_28 != 0) + 5)
    sub_140a20ba0(&var_a98, u".png", 4)
    int16_t* r15_6 = var_a98
    int128_t zmm0_10 = data_142d3f670
    var_a38:8.d = var_a90_1
    var_a38:0xc.d = rcx_15
    var_a90_1.q = 0
    var_a38.q = r15_6
    var_a98 = nullptr
    var_9e8.o = zmm0_10
    arg_8 = 0x41d80000
    arg_c = 0x41900000
    int64_t var_9b8
    int64_t* rax_70
    int32_t r8_21
    rax_70, r8_21 = sub_140b139e0(&var_9b8)
    sub_140596690(&var_a88, rax_70, sbb.d(r8_21, r8_21, rax_70[1].d != 0) + 7)
    sub_140a2cf70(&var_a88, u"Slate", 5)
    int32_t r13_3
    
    if (r13_2 == 0)
        r13_3 = 0
    else
        r13_3 = r13_2 - 1
    
    int32_t rax_72
    
    if (rcx_14 == 0)
        rax_72 = 2
    
    if (rcx_14 != 0 || r13_3 == 0xffffffff)
        rax_72 = 1
    
    sub_140596690(&var_a58, &var_a88, rax_72 + r13_3)
    int32_t r8_26 = sub_140a2cf70(&var_a58, var_b38, r13_3)
    sub_140596690(&var_ac8, &var_a58, sbb.d(r8_26, r8_26, var_a58:8.d != 0) + 5)
    sub_140a20ba0(&var_ac8, u".png", 4)
    int16_t* r13_4 = var_ac8
    int32_t var_ac0
    var_a08:8.d = var_ac0
    int32_t var_abc
    var_a08:0xc.d = var_abc
    var_ac0.q = 0
    var_a08.q = r13_4
    var_ac8 = nullptr
    void*** rax_77 = sub_140dda910(&var_8f0, &var_a08, &arg_8, &var_9e8, 0, 1)
    void** var_568
    void*** rax_78 = sub_14068def0(&var_568, &var_2e8)
    sub_140693270(&rax_78[1], rax_77)
    sub_140693270(&rax_78[0x12], sub_140dda910(&var_978, &var_a38, &arg_10, &var_9f8, 0, 1))
    sub_140693270(&rax_78[0x23], sub_140dda910(&var_868, &var_a28, &arg_18, &var_9d8, 0, 1))
    sub_140693270(&rax_78[0x34], sub_140dda910(&var_7e0, &var_a18, &arg_20, &var_9c8, 0, 1))
    sub_140de14d0(&data_143e2a330, rax_78)
    var_568 = &data_142d8ad20
    void** var_3c8
    sub_140691a20(&var_3c8)
    void** var_450
    sub_140691a20(&var_450)
    void** var_4d8
    sub_140691a20(&var_4d8)
    void** var_560
    sub_140691a20(&var_560)
    var_568 = &data_142d8ad00
    sub_140691a20(&var_8f0)
    
    if (r13_4 != 0)
        sub_140a74f90(r13_4)
    
    int64_t rcx_161 = var_a58.q
    
    if (rcx_161 != 0)
        sub_140a74f90(rcx_161)
    
    int16_t* rcx_162 = var_a88
    
    if (rcx_162 != 0)
        sub_140a74f90(rcx_162)
    
    int64_t rcx_163 = var_9b8
    
    if (rcx_163 != 0)
        sub_140a74f90(rcx_163)
    
    sub_140691a20(&var_978)
    
    if (r15_6 != 0)
        sub_140a74f90(r15_6)
    
    int16_t* rcx_166 = var_a78
    
    if (rcx_166 != 0)
        sub_140a74f90(rcx_166)
    
    int16_t* rcx_167 = var_a68
    
    if (rcx_167 != 0)
        sub_140a74f90(rcx_167)
    
    int64_t rcx_168 = var_9a8
    
    if (rcx_168 != 0)
        sub_140a74f90(rcx_168)
    
    sub_140691a20(&var_868)
    
    if (r12_4 != 0)
        sub_140a74f90(r12_4)
    
    int64_t rcx_171 = var_ab8.q
    
    if (rcx_171 != 0)
        sub_140a74f90(rcx_171)
    
    int16_t* rcx_172 = var_b08
    
    if (rcx_172 != 0)
        sub_140a74f90(rcx_172)
    
    int64_t rcx_173 = var_998
    
    if (rcx_173 != 0)
        sub_140a74f90(rcx_173)
    
    sub_140691a20(&var_7e0)
    int16_t* rcx_175 = var_a48
    
    if (rcx_175 != 0)
        sub_140a74f90(rcx_175)
    
    int16_t* rcx_176 = var_b28
    
    if (rcx_176 != 0)
        sub_140a74f90(rcx_176)
    
    int16_t* rcx_177 = var_aa8
    
    if (rcx_177 != 0)
        sub_140a74f90(rcx_177)
    
    int64_t rcx_178 = var_988
    
    if (rcx_178 != 0)
        sub_140a74f90(rcx_178)
    
    int16_t* rax_82 = var_b38
    
    if (rax_82 != 0)
        sub_140a74f90(rax_82)
    
    int16_t* rax_83 = var_ae8
    
    if (rax_83 != 0)
        sub_140a74f90(rax_83)
    
    int16_t* rax_84 = var_af8
    
    if (rax_84 != 0)
        sub_140a74f90(rax_84)
    
    int16_t* rcx_182 = var_b18
    
    if (rcx_182 != 0)
        sub_140a74f90(rcx_182)
    
    var_b38 = nullptr
    int32_t var_b30_2
    var_b30_2.q = 0
    sub_1405947f0(&var_b38, 0x2d)
    int32_t rbx_13 = var_b30_2 + 0x2d
    
    if (rbx_13 s> rcx_15)
        sub_140594770(&var_b38)
    
    sub_1405a7220(var_b38, 0x2d, "Common/Window/WindowButton_Maximize_Disabled", 0x2d, 0x3f)
    var_b28 = nullptr
    int32_t var_b20_3 = 0
    sub_1405947f0(&var_b28, 0x2c)
    int32_t rdi_7 = var_b20_3 + 0x2c
    
    if (rdi_7 s> 0)
        sub_140594770(&var_b28)
    
    sub_1405a7220(var_b28, 0x2c, "Common/Window/WindowButton_Maximize_Pressed", 0x2c, 0x3f)
    var_b48 = nullptr
    int32_t var_b40_4 = 0
    sub_1405947f0(&var_b48, 0x2c)
    int32_t r15_7 = var_b40_4 + 0x2c
    
    if (r15_7 s> 0)
        sub_140594770(&var_b48)
    
    int16_t* r12_5 = var_b48
    sub_1405a7220(r12_5, 0x2c, "Common/Window/WindowButton_Maximize_Hovered", 0x2c, 0x3f)
    var_b48 = nullptr
    int64_t var_b40_5 = 0
    sub_1405947f0(&var_b48, 0x2b)
    int32_t r13_5 = var_b40_5.d + 0x2b
    var_b40_5.d = r13_5
    
    if (r13_5 s> 0)
        sub_140594770(&var_b48)
        r13_5 = var_b40_5.d
    
    sub_1405a7220(var_b48, 0x2b, "Common/Window/WindowButton_Maximize_Normal", 0x2b, 0x3f)
    var_9b8.o = data_142d3f670
    arg_20.d = 0x41d80000
    arg_20:4.d = 0x41900000
    int64_t* rax_85
    int32_t r8_33
    rax_85, r8_33 = sub_140b139e0(&var_9f8)
    sub_140596690(&var_af8, rax_85, sbb.d(r8_33, r8_33, rax_85[1].d != 0) + 7)
    sub_140a2cf70(&var_af8, u"Slate", 5)
    int32_t rbx_14
    
    if (rbx_13 == 0)
        rbx_14 = 0
    else
        rbx_14 = rbx_13 - 1
    
    int32_t rax_87
    
    if (var_af0_2 == 0)
        rax_87 = 2
    
    if (var_af0_2 != 0 || rbx_14 == 0xffffffff)
        rax_87 = 1
    
    sub_140596690(&var_ae8, &var_af8, rbx_14 + rax_87)
    int32_t r8_38 = sub_140a2cf70(&var_ae8, var_b38, rbx_14)
    sub_140596690(&var_ab8, &var_ae8, sbb.d(r8_38, r8_38, var_ae0_2 != 0) + 5)
    sub_140a20ba0(&var_ab8, u".png", 4)
    int16_t* rax_90 = var_ab8.q
    int128_t zmm0_12 = data_142d3f670
    var_b08 = rax_90
    var_a08.q = rax_90
    var_a08:8.d = var_ab8:8.d
    var_a08:0xc.d = var_ab8:0xc.d
    var_ab8:8.q = 0
    var_ab8.q = 0
    var_9a8.o = zmm0_12
    arg_18 = 0x41b80000
    arg_1c = 0x41900000
    int64_t* rax_93
    int32_t r8_41
    rax_93, r8_41 = sub_140b139e0(&var_9e8)
    sub_140596690(&var_a98, rax_93, sbb.d(r8_41, r8_41, rax_93[1].d != 0) + 7)
    sub_140a2cf70(&var_a98, u"Slate", 5)
    int32_t rdi_8
    
    if (rdi_7 == 0)
        rdi_8 = 0
    else
        rdi_8 = rdi_7 - 1
    
    int32_t rax_95
    
    if (var_a90_1 == 0)
        rax_95 = 2
    
    if (var_a90_1 != 0 || rdi_8 == 0xffffffff)
        rax_95 = 1
    
    sub_140596690(&var_ad8, &var_a98, rax_95 + rdi_8)
    int32_t r8_46 = sub_140a2cf70(&var_ad8, var_b28, rdi_8)
    sub_140596690(&var_ac8, &var_ad8, sbb.d(r8_46, r8_46, var_ad0_1 != 0) + 5)
    sub_140a20ba0(&var_ac8, u".png", 4)
    int16_t* rax_98 = var_ac8
    int128_t zmm0_13 = data_142d3f670
    var_aa8 = rax_98
    var_a38.q = rax_98
    var_a38:8.d = var_ac0
    var_a38:0xc.d = var_abc
    var_ac0.q = 0
    var_ac8 = nullptr
    var_998.o = zmm0_13
    arg_10 = 0x41b80000
    arg_14 = 0x41900000
    int64_t* rax_101
    int32_t r8_49
    rax_101, r8_49 = sub_140b139e0(&var_9d8)
    sub_140596690(&var_a58, rax_101, sbb.d(r8_49, r8_49, rax_101[1].d != 0) + 7)
    sub_140a2cf70(&var_a58, u"Slate", 5)
    int32_t r15_8
    
    if (r15_7 == 0)
        r15_8 = 0
    else
        r15_8 = r15_7 - 1
    
    int32_t rax_103
    
    if (var_a58:8.d == 0)
        rax_103 = 2
    
    if (var_a58:8.d != 0 || r15_8 == 0xffffffff)
        rax_103 = 1
    
    sub_140596690(&var_a88, &var_a58, rax_103 + r15_8)
    int32_t r8_54 = sub_140a2cf70(&var_a88, r12_5, r15_8)
    sub_140596690(&var_b18, &var_a88, sbb.d(r8_54, r8_54, rcx_14 != 0) + 5)
    sub_140a20ba0(&var_b18, u".png", 4)
    int16_t* r15_9 = var_b18
    int128_t zmm0_14 = data_142d3f670
    var_a28:8.d = var_b10_2
    var_a28:0xc.d = rcx_43
    var_b10_2.q = 0
    var_a28.q = r15_9
    var_b18 = nullptr
    var_988.o = zmm0_14
    arg_8 = 0x41b80000
    arg_c = 0x41900000
    int64_t* rax_108
    int32_t r8_57
    rax_108, r8_57 = sub_140b139e0(&var_9c8)
    sub_140596690(&var_a78, rax_108, sbb.d(r8_57, r8_57, rax_108[1].d != 0) + 7)
    sub_140a2cf70(&var_a78, u"Slate", 5)
    int32_t r13_6
    
    if (r13_5 == 0)
        r13_6 = 0
    else
        r13_6 = r13_5 - 1
    
    int32_t rax_110
    
    if (rcx_28 == 0)
        rax_110 = 2
    
    if (rcx_28 != 0 || r13_6 == 0xffffffff)
        rax_110 = 1
    
    sub_140596690(&var_a68, &var_a78, rax_110 + r13_6)
    int16_t* r13_7 = var_b48
    int32_t r8_62 = sub_140a2cf70(&var_a68, r13_7, r13_6)
    sub_140596690(&var_b48, &var_a68, sbb.d(r8_62, r8_62, rcx_42 != 0) + 5)
    sub_140a20ba0(&var_b48, u".png", 4)
    int16_t* rax_113 = var_b48
    var_a48 = rax_113
    var_a18.q = rax_113
    var_a18:8.d = var_b40_5.d
    var_a18:0xc.d = var_b40_5:4.d
    int64_t var_b40_6 = 0
    var_b48 = nullptr
    void*** rax_116 = sub_140dda910(&var_7e0, &var_a18, &arg_8, &var_988, 0, 1)
    void*** rax_117 = sub_14068def0(&var_568, &var_2e8)
    sub_140693270(&rax_117[1], rax_116)
    sub_140693270(&rax_117[0x12], sub_140dda910(&var_8f0, &var_a28, &arg_10, &var_998, 0, 1))
    sub_140693270(&rax_117[0x23], sub_140dda910(&var_978, &var_a38, &arg_18, &var_9a8, 0, 1))
    sub_140693270(&rax_117[0x34], sub_140dda910(&var_868, &var_a08, &arg_20, &var_9b8, 0, 1))
    sub_140de14d0(&data_143e2a5b0, rax_117)
    sub_1406918e0(&var_568)
    sub_140691a20(&var_7e0)
    int16_t* rcx_238 = var_a48
    
    if (rcx_238 != 0)
        sub_140a74f90(rcx_238)
    
    int16_t* rcx_239 = var_a68
    
    if (rcx_239 != 0)
        sub_140a74f90(rcx_239)
    
    int16_t* rcx_240 = var_a78
    
    if (rcx_240 != 0)
        sub_140a74f90(rcx_240)
    
    int64_t rcx_241 = var_9c8.q
    
    if (rcx_241 != 0)
        sub_140a74f90(rcx_241)
    
    sub_140691a20(&var_8f0)
    
    if (r15_9 != 0)
        sub_140a74f90(r15_9)
    
    int16_t* rcx_244 = var_a88
    
    if (rcx_244 != 0)
        sub_140a74f90(rcx_244)
    
    int64_t rcx_245 = var_a58.q
    
    if (rcx_245 != 0)
        sub_140a74f90(rcx_245)
    
    int64_t rcx_246 = var_9d8.q
    
    if (rcx_246 != 0)
        sub_140a74f90(rcx_246)
    
    sub_140691a20(&var_978)
    int16_t* rcx_248 = var_aa8
    
    if (rcx_248 != 0)
        sub_140a74f90(rcx_248)
    
    int16_t* rcx_249 = var_ad8
    
    if (rcx_249 != 0)
        sub_140a74f90(rcx_249)
    
    int16_t* rcx_250 = var_a98
    
    if (rcx_250 != 0)
        sub_140a74f90(rcx_250)
    
    int64_t rcx_251 = var_9e8
    
    if (rcx_251 != 0)
        sub_140a74f90(rcx_251)
    
    sub_140691a20(&var_868)
    int16_t* rcx_253 = var_b08
    
    if (rcx_253 != 0)
        sub_140a74f90(rcx_253)
    
    int16_t* rcx_254 = var_ae8
    
    if (rcx_254 != 0)
        sub_140a74f90(rcx_254)
    
    int16_t* rcx_255 = var_af8
    
    if (rcx_255 != 0)
        sub_140a74f90(rcx_255)
    
    int64_t rcx_256 = var_9f8
    
    if (rcx_256 != 0)
        sub_140a74f90(rcx_256)
    
    if (r13_7 != 0)
        sub_140a74f90(r13_7)
    
    if (r12_5 != 0)
        sub_140a74f90(r12_5)
    
    int16_t* rax_121 = var_b28
    
    if (rax_121 != 0)
        sub_140a74f90(rax_121)
    
    int16_t* rax_122 = var_b38
    
    if (rax_122 != 0)
        sub_140a74f90(rax_122)
    
    var_b38 = nullptr
    int32_t var_b30_3
    var_b30_3.q = 0
    sub_1405947f0(&var_b38, 0x2d)
    int32_t rbx_16 = var_b30_3 + 0x2d
    
    if (rbx_16 s> rcx_15)
        sub_140594770(&var_b38)
    
    sub_1405a7220(var_b38, 0x2d, "Common/Window/WindowButton_Maximize_Disabled", 0x2d, 0x3f)
    var_b28 = nullptr
    int32_t var_b20_4 = 0
    sub_1405947f0(&var_b28, 0x2b)
    int32_t rdi_10 = var_b20_4 + 0x2b
    
    if (rdi_10 s> 0)
        sub_140594770(&var_b28)
    
    sub_1405a7220(var_b28, 0x2b, "Common/Window/WindowButton_Restore_Pressed", 0x2b, 0x3f)
    var_b48 = nullptr
    int32_t var_b40_7 = 0
    sub_1405947f0(&var_b48, 0x2b)
    int32_t r15_10 = var_b40_7 + 0x2b
    
    if (r15_10 s> 0)
        sub_140594770(&var_b48)
    
    int16_t* r12_6 = var_b48
    sub_1405a7220(r12_6, 0x2b, "Common/Window/WindowButton_Restore_Hovered", 0x2b, 0x3f)
    var_b48 = nullptr
    int64_t var_b40_8 = 0
    sub_1405947f0(&var_b48, 0x2a)
    int32_t r13_8 = var_b40_8.d + 0x2a
    var_b40_8.d = r13_8
    
    if (r13_8 s> 0)
        sub_140594770(&var_b48)
        r13_8 = var_b40_8.d
    
    sub_1405a7220(var_b48, 0x2a, "Common/Window/WindowButton_Restore_Normal", 0x2a, 0x3f)
    var_9b8.o = data_142d3f670
    arg_20.d = 0x41d80000
    arg_20:4.d = 0x41900000
    int64_t* rax_123
    int32_t r8_69
    rax_123, r8_69 = sub_140b139e0(&var_9f8)
    sub_140596690(&var_af8, rax_123, sbb.d(r8_69, r8_69, rax_123[1].d != 0) + 7)
    sub_140a2cf70(&var_af8, u"Slate", 5)
    int32_t rbx_17
    
    if (rbx_16 == 0)
        rbx_17 = 0
    else
        rbx_17 = rbx_16 - 1
    
    int32_t rax_125
    
    if (var_af0_2 == 0)
        rax_125 = 2
    
    if (var_af0_2 != 0 || rbx_17 == 0xffffffff)
        rax_125 = 1
    
    sub_140596690(&var_ae8, &var_af8, rbx_17 + rax_125)
    int32_t r8_74 = sub_140a2cf70(&var_ae8, var_b38, rbx_17)
    sub_140596690(&var_ab8, &var_ae8, sbb.d(r8_74, r8_74, var_ae0_2 != 0) + 5)
    sub_140a20ba0(&var_ab8, u".png", 4)
    int16_t* rax_128 = var_ab8.q
    int128_t zmm0_16 = data_142d3f670
    var_a48 = rax_128
    var_a08.q = rax_128
    var_a08:8.d = var_ab8:8.d
    var_a08:0xc.d = var_ab8:0xc.d
    var_ab8:8.q = 0
    var_ab8.q = 0
    var_9a8.o = zmm0_16
    arg_18 = 0x41b80000
    arg_1c = 0x41900000
    int64_t* rax_131
    int32_t r8_77
    rax_131, r8_77 = sub_140b139e0(&var_9e8)
    sub_140596690(&var_a98, rax_131, sbb.d(r8_77, r8_77, rax_131[1].d != 0) + 7)
    sub_140a2cf70(&var_a98, u"Slate", 5)
    int32_t rdi_11
    
    if (rdi_10 == 0)
        rdi_11 = 0
    else
        rdi_11 = rdi_10 - 1
    
    int32_t rax_133
    
    if (var_a90_1 == 0)
        rax_133 = 2
    
    if (var_a90_1 != 0 || rdi_11 == 0xffffffff)
        rax_133 = 1
    
    sub_140596690(&var_ad8, &var_a98, rdi_11 + rax_133)
    int32_t r8_82 = sub_140a2cf70(&var_ad8, var_b28, rdi_11)
    sub_140596690(&var_ac8, &var_ad8, sbb.d(r8_82, r8_82, var_ad0_1 != 0) + 5)
    sub_140a20ba0(&var_ac8, u".png", 4)
    int16_t* rax_136 = var_ac8
    int128_t zmm0_17 = data_142d3f670
    var_aa8 = rax_136
    var_a38.q = rax_136
    var_a38:8.d = var_ac0
    var_a38:0xc.d = var_abc
    var_ac0.q = 0
    var_ac8 = nullptr
    var_998.o = zmm0_17
    arg_10 = 0x41b80000
    arg_14 = 0x41900000
    int64_t* rax_139
    int32_t r8_85
    rax_139, r8_85 = sub_140b139e0(&var_9d8)
    sub_140596690(&var_a58, rax_139, sbb.d(r8_85, r8_85, rax_139[1].d != 0) + 7)
    sub_140a2cf70(&var_a58, u"Slate", 5)
    int32_t r15_11
    
    if (r15_10 == 0)
        r15_11 = 0
    else
        r15_11 = r15_10 - 1
    
    int32_t rax_141
    
    if (var_a58:8.d == 0)
        rax_141 = 2
    
    if (var_a58:8.d != 0 || r15_11 == 0xffffffff)
        rax_141 = 1
    
    sub_140596690(&var_a88, &var_a58, rax_141 + r15_11)
    int32_t r8_90 = sub_140a2cf70(&var_a88, r12_6, r15_11)
    sub_140596690(&var_b18, &var_a88, sbb.d(r8_90, r8_90, rcx_14 != 0) + 5)
    sub_140a20ba0(&var_b18, u".png", 4)
    int16_t* r15_12 = var_b18
    int128_t zmm0_18 = data_142d3f670
    var_a28:8.d = var_b10_2
    var_a28:0xc.d = rcx_43
    var_b10_2.q = 0
    var_a28.q = r15_12
    var_b18 = nullptr
    var_988.o = zmm0_18
    arg_8 = 0x41b80000
    arg_c = 0x41900000
    int64_t* rax_146
    int32_t r8_93
    rax_146, r8_93 = sub_140b139e0(&var_9c8)
    sub_140596690(&var_a78, rax_146, sbb.d(r8_93, r8_93, rax_146[1].d != 0) + 7)
    sub_140a2cf70(&var_a78, u"Slate", 5)
    int32_t r13_9
    
    if (r13_8 == 0)
        r13_9 = 0
    else
        r13_9 = r13_8 - 1
    
    int32_t rax_148
    
    if (rcx_28 == 0)
        rax_148 = 2
    
    if (rcx_28 != 0 || r13_9 == 0xffffffff)
        rax_148 = 1
    
    sub_140596690(&var_a68, &var_a78, rax_148 + r13_9)
    int16_t* r13_10 = var_b48
    int32_t r8_98 = sub_140a2cf70(&var_a68, r13_10, r13_9)
    sub_140596690(&var_b48, &var_a68, sbb.d(r8_98, r8_98, rcx_42 != 0) + 5)
    sub_140a20ba0(&var_b48, u".png", 4)
    int16_t* rax_151 = var_b48
    var_b08 = rax_151
    var_a18.q = rax_151
    var_a18:8.d = var_b40_8.d
    var_a18:0xc.d = var_b40_8:4.d
    int64_t var_b40_9 = 0
    var_b48 = nullptr
    void*** rax_154 = sub_140dda910(&var_7e0, &var_a18, &arg_8, &var_988, 0, 1)
    void*** rax_155 = sub_14068def0(&var_568, &var_2e8)
    sub_140693270(&rax_155[1], rax_154)
    sub_140693270(&rax_155[0x12], sub_140dda910(&var_8f0, &var_a28, &arg_10, &var_998, 0, 1))
    sub_140693270(&rax_155[0x23], sub_140dda910(&var_978, &var_a38, &arg_18, &var_9a8, 0, 1))
    sub_140693270(&rax_155[0x34], sub_140dda910(&var_868, &var_a08, &arg_20, &var_9b8, 0, 1))
    sub_140de14d0(&data_143e2a830, rax_155)
    sub_1406918e0(&var_568)
    sub_140691a20(&var_7e0)
    int16_t* rcx_316 = var_b08
    
    if (rcx_316 != 0)
        sub_140a74f90(rcx_316)
    
    int16_t* rcx_317 = var_a68
    
    if (rcx_317 != 0)
        sub_140a74f90(rcx_317)
    
    int16_t* rcx_318 = var_a78
    
    if (rcx_318 != 0)
        sub_140a74f90(rcx_318)
    
    int64_t rcx_319 = var_9c8.q
    
    if (rcx_319 != 0)
        sub_140a74f90(rcx_319)
    
    sub_140691a20(&var_8f0)
    
    if (r15_12 != 0)
        sub_140a74f90(r15_12)
    
    int16_t* rcx_322 = var_a88
    
    if (rcx_322 != 0)
        sub_140a74f90(rcx_322)
    
    int64_t rcx_323 = var_a58.q
    
    if (rcx_323 != 0)
        sub_140a74f90(rcx_323)
    
    int64_t rcx_324 = var_9d8.q
    
    if (rcx_324 != 0)
        sub_140a74f90(rcx_324)
    
    sub_140691a20(&var_978)
    int16_t* rcx_326 = var_aa8
    
    if (rcx_326 != 0)
        sub_140a74f90(rcx_326)
    
    int16_t* rcx_327 = var_ad8
    
    if (rcx_327 != 0)
        sub_140a74f90(rcx_327)
    
    int16_t* rcx_328 = var_a98
    
    if (rcx_328 != 0)
        sub_140a74f90(rcx_328)
    
    int64_t rcx_329 = var_9e8
    
    if (rcx_329 != 0)
        sub_140a74f90(rcx_329)
    
    sub_140691a20(&var_868)
    int16_t* rcx_331 = var_a48
    
    if (rcx_331 != 0)
        sub_140a74f90(rcx_331)
    
    int16_t* rcx_332 = var_ae8
    
    if (rcx_332 != 0)
        sub_140a74f90(rcx_332)
    
    int16_t* rcx_333 = var_af8
    
    if (rcx_333 != 0)
        sub_140a74f90(rcx_333)
    
    int64_t rcx_334 = var_9f8
    
    if (rcx_334 != 0)
        sub_140a74f90(rcx_334)
    
    if (r13_10 != 0)
        sub_140a74f90(r13_10)
    
    if (r12_6 != 0)
        sub_140a74f90(r12_6)
    
    int16_t* rax_159 = var_b28
    
    if (rax_159 != 0)
        sub_140a74f90(rax_159)
    
    int16_t* rax_160 = var_b38
    
    if (rax_160 != 0)
        sub_140a74f90(rax_160)
    
    var_b48 = nullptr
    int32_t var_b40_10 = 0
    sub_1405947f0(&var_b48, 0x29)
    int32_t rbx_19 = var_b40_10 + 0x29
    
    if (rbx_19 s> 0)
        sub_140594770(&var_b48)
    
    int16_t* r12_7 = var_b48
    sub_1405a7220(r12_7, 0x29, "Common/Window/WindowButton_Close_Pressed", 0x29, 0x3f)
    var_b48 = nullptr
    int32_t var_b40_11 = 0
    sub_1405947f0(&var_b48, 0x29)
    int32_t rdi_13 = var_b40_11 + 0x29
    
    if (rdi_13 s> 0)
        sub_140594770(&var_b48)
    
    int16_t* r13_11 = var_b48
    sub_1405a7220(r13_11, 0x29, "Common/Window/WindowButton_Close_Hovered", 0x29, 0x3f)
    var_b48 = nullptr
    int64_t var_b40_12 = 0
    sub_1405947f0(&var_b48, 0x28)
    int32_t r15_13 = var_b40_12.d + 0x28
    var_b40_12.d = r15_13
    
    if (r15_13 s> 0)
        sub_140594770(&var_b48)
        r15_13 = var_b40_12.d
    
    sub_1405a7220(var_b48, 0x28, "Common/Window/WindowButton_Close_Normal", 0x28, 0x3f)
    var_9a8.o = data_142d3f670
    arg_18 = 0x42300000
    arg_1c = 0x41900000
    int64_t* rax_161
    int32_t r8_105
    rax_161, r8_105 = sub_140b139e0(&var_9d8)
    sub_140596690(&var_ad8, rax_161, sbb.d(r8_105, r8_105, rax_161[1].d != 0) + 7)
    sub_140a2cf70(&var_ad8, u"Slate", 5)
    int32_t rbx_20
    
    if (rbx_19 == 0)
        rbx_20 = 0
    else
        rbx_20 = rbx_19 - 1
    
    int32_t rax_163
    
    if (var_ad0_1 == 0)
        rax_163 = 2
    
    if (var_ad0_1 != 0 || rbx_20 == 0xffffffff)
        rax_163 = 1
    
    sub_140596690(&var_b18, &var_ad8, rax_163 + rbx_20)
    int32_t r8_110 = sub_140a2cf70(&var_b18, r12_7, rbx_20)
    sub_140596690(&var_ab8, &var_b18, sbb.d(r8_110, r8_110, var_b10_2 != 0) + 5)
    sub_140a20ba0(&var_ab8, u".png", 4)
    int16_t* rax_166 = var_ab8.q
    int128_t zmm0_20 = data_142d3f670
    var_b08 = rax_166
    var_a38.q = rax_166
    var_a38:8.d = var_ab8:8.d
    var_a38:0xc.d = var_ab8:0xc.d
    var_ab8:8.q = 0
    var_ab8.q = 0
    var_998.o = zmm0_20
    arg_10 = 0x42300000
    arg_14 = 0x41900000
    int64_t* rax_169
    int32_t r8_113
    rax_169, r8_113 = sub_140b139e0(&var_9c8)
    sub_140596690(&var_a58, rax_169, sbb.d(r8_113, r8_113, rax_169[1].d != 0) + 7)
    sub_140a2cf70(&var_a58, u"Slate", 5)
    int32_t rdi_14
    
    if (rdi_13 == 0)
        rdi_14 = 0
    else
        rdi_14 = rdi_13 - 1
    
    int32_t rax_171
    
    if (var_a58:8.d == 0)
        rax_171 = 2
    
    if (var_a58:8.d != 0 || rdi_14 == 0xffffffff)
        rax_171 = 1
    
    sub_140596690(&var_a88, &var_a58, rax_171 + rdi_14)
    int32_t r8_118 = sub_140a2cf70(&var_a88, r13_11, rdi_14)
    sub_140596690(&var_ac8, &var_a88, sbb.d(r8_118, r8_118, rcx_14 != 0) + 5)
    sub_140a20ba0(&var_ac8, u".png", 4)
    int16_t* rax_174 = var_ac8
    int128_t zmm0_21 = data_142d3f670
    arg_20 = rax_174
    var_a28.q = rax_174
    var_a28:8.d = var_ac0
    var_a28:0xc.d = var_abc
    var_ac0.q = 0
    var_ac8 = nullptr
    var_988.o = zmm0_21
    arg_8 = 0x42300000
    arg_c = 0x41900000
    int64_t* rax_177
    int32_t r8_121
    rax_177, r8_121 = sub_140b139e0(&var_9b8)
    sub_140596690(&var_a78, rax_177, sbb.d(r8_121, r8_121, rax_177[1].d != 0) + 7)
    sub_140a2cf70(&var_a78, u"Slate", 5)
    int32_t r15_14
    
    if (r15_13 == 0)
        r15_14 = 0
    else
        r15_14 = r15_13 - 1
    
    if (rcx_28 != 0 || r15_14 == 0xffffffff)
        r14_1 = 1
    
    sub_140596690(&var_a68, &var_a78, r14_1 + r15_14)
    int16_t* r14_2 = var_b48
    int32_t r8_126 = sub_140a2cf70(&var_a68, r14_2, r15_14)
    sub_140596690(&var_b48, &var_a68, sbb.d(r8_126, r8_126, rcx_42 != 0) + 5)
    sub_140a20ba0(&var_b48, u".png", 4)
    int16_t* r15_15 = var_b48
    var_a18:8.d = var_b40_12.d
    var_a18:0xc.d = var_b40_12:4.d
    int64_t var_b40_13 = 0
    var_a18.q = r15_15
    var_b48 = nullptr
    void*** rax_183 = sub_140dda910(&var_7e0, &var_a18, &arg_8, &var_988, 0, 1)
    void*** rax_184 = sub_14068def0(&var_568, &var_2e8)
    sub_140693270(&rax_184[1], rax_183)
    sub_140693270(&rax_184[0x12], sub_140dda910(&var_8f0, &var_a28, &arg_10, &var_998, 0, 1))
    sub_140693270(&rax_184[0x23], sub_140dda910(&var_978, &var_a38, &arg_18, &var_9a8, 0, 1))
    sub_140de14d0(&data_143e2aab0, rax_184)
    sub_1406918e0(&var_568)
    sub_140691a20(&var_7e0)
    
    if (r15_15 != 0)
        sub_140a74f90(r15_15)
    
    int16_t* rcx_382 = var_a68
    
    if (rcx_382 != 0)
        sub_140a74f90(rcx_382)
    
    int16_t* rcx_383 = var_a78
    
    if (rcx_383 != 0)
        sub_140a74f90(rcx_383)
    
    int64_t rcx_384 = var_9b8
    
    if (rcx_384 != 0)
        sub_140a74f90(rcx_384)
    
    sub_140691a20(&var_8f0)
    int16_t* rcx_386 = arg_20
    
    if (rcx_386 != 0)
        sub_140a74f90(rcx_386)
    
    int16_t* rcx_387 = var_a88
    
    if (rcx_387 != 0)
        sub_140a74f90(rcx_387)
    
    int64_t rcx_388 = var_a58.q
    
    if (rcx_388 != 0)
        sub_140a74f90(rcx_388)
    
    int64_t rcx_389 = var_9c8.q
    
    if (rcx_389 != 0)
        sub_140a74f90(rcx_389)
    
    sub_140691a20(&var_978)
    int16_t* rcx_391 = var_b08
    
    if (rcx_391 != 0)
        sub_140a74f90(rcx_391)
    
    int16_t* rcx_392 = var_b18
    
    if (rcx_392 != 0)
        sub_140a74f90(rcx_392)
    
    int16_t* rcx_393 = var_ad8
    
    if (rcx_393 != 0)
        sub_140a74f90(rcx_393)
    
    int64_t rcx_394 = var_9d8.q
    
    if (rcx_394 != 0)
        sub_140a74f90(rcx_394)
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    if (r13_11 != 0)
        sub_140a74f90(r13_11)
    
    if (r12_7 != 0)
        sub_140a74f90(r12_7)
    
    data_143e2ad84 = 1
    sub_1406918e0(&var_2e8)

return arg1
