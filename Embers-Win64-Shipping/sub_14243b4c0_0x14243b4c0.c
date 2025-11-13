// 函数: sub_14243b4c0
// 地址: 0x14243b4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_143f5ec38 == 0)
    data_143f5ec38 = 1
    int16_t* var_168 = nullptr
    int32_t var_160_1 = 0
    sub_1405947f0(&var_168, 8)
    int32_t r14_1 = var_160_1 + 8
    
    if (r14_1 s> 0)
        sub_140594770(&var_168)
    
    UnDecorator::getReferenceType(var_168, u"VS2015/", 0x10)
    uint64_t* var_198 = nullptr
    int64_t var_190_1 = 0
    sub_1405947f0(&var_198, 6)
    int32_t rdi_1 = var_190_1:4.d
    int32_t rbx_1 = var_190_1.d + 6
    var_190_1.d = rbx_1
    
    if (rbx_1 s> rdi_1)
        sub_140594770(&var_198)
        rdi_1 = var_190_1:4.d
        rbx_1 = var_190_1.d
    
    uint64_t* r13_1 = var_198
    UnDecorator::getReferenceType(r13_1, u"Win32", 0xc)
    uint128_t* var_1a8 = nullptr
    int64_t var_1a0_1 = 0
    sub_1405947f0(&var_1a8, 5)
    int32_t r15_1 = var_1a0_1:4.d
    int32_t rsi_1 = var_1a0_1.d + 5
    var_1a0_1.d = rsi_1
    
    if (rsi_1 s> r15_1)
        sub_140594770(&var_1a8)
        r15_1 = var_1a0_1:4.d
        rsi_1 = var_1a0_1.d
    
    uint128_t* r12_1 = var_1a8
    UnDecorator::getReferenceType(r12_1, u".dll", 0xa)
    
    if (r13_1 != u"Win64")
        int32_t rdx_4 = 0
        var_190_1.d = 0
        
        if (rdi_1 != 6)
            sub_1405947f0(&var_198, 6)
            rdx_4 = var_190_1.d
            rdi_1 = var_190_1:4.d
            r13_1 = var_198
        
        rbx_1 = rdx_4 + 6
        var_190_1.d = rbx_1
        
        if (rbx_1 s> rdi_1)
            sub_140594770(&var_198)
            rbx_1 = var_190_1.d
            r13_1 = var_198
        
        *r13_1 = 0x36006e00690057
        r13_1[1].d = 0x34
    
    if (r12_1 != u"_64.dll")
        int32_t rdx_5 = 0
        var_1a0_1.d = 0
        
        if (r15_1 != 8)
            sub_1405947f0(&var_1a8, 8)
            rdx_5 = var_1a0_1.d
            r15_1 = var_1a0_1:4.d
            r12_1 = var_1a8
        
        rsi_1 = rdx_5 + 8
        var_1a0_1.d = rsi_1
        
        if (rsi_1 s> r15_1)
            sub_140594770(&var_1a8)
            rsi_1 = var_1a0_1.d
            r12_1 = var_1a8
        
        *r12_1 = *u"_64.dll"
    
    int64_t var_68
    int64_t* rax = sub_140b13b30(&var_68)
    int32_t rdx_6 = rax[1].d
    int32_t rdx_7 = neg.d(rdx_6)
    int64_t var_188 = *rax
    *rax = 0
    int32_t rcx_16 = rax[1].d
    int32_t rcx_17 = *(rax + 0xc)
    rax[1] = 0
    int32_t rdx_10 = sbb.d(rdx_7, rdx_7, rdx_6 != 0) + 0x1a + rcx_16
    
    if (rdx_10 s> rcx_17)
        sub_1405947f0(&var_188, rdx_10)
    
    sub_140a2cf70(&var_188, u"Binaries/ThirdParty/Ogg/", 0x18)
    int32_t rdi_2 = rbx_1 - 1
    
    if (rbx_1 == 0)
        rdi_2 = 0
    
    int32_t r15_2 = 1
    int32_t rdx_11
    
    if (rcx_16 == 0)
        rdx_11 = rcx_16 + 2
    
    if (rcx_16 != 0 || rdi_2 == 0xffffffff)
        rdx_11 = 1
    
    int64_t var_158 = var_188
    int32_t rdx_13 = rdx_11 + rdi_2 + rcx_16
    var_188 = 0
    int32_t var_180_1
    var_180_1.q = 0
    
    if (rdx_13 s> rcx_17)
        sub_1405947f0(&var_158, rdx_13)
    
    sub_140a2cf70(&var_158, r13_1, rdi_2)
    int32_t rdi_3 = r14_1 - 1
    
    if (r14_1 == 0)
        rdi_3 = 0
    
    int32_t r8_2
    
    if (rcx_16 == 0)
        r8_2 = rcx_16 + 2
    
    if (rcx_16 != 0 || rdi_3 == 0xffffffff)
        r8_2 = 1
    
    int64_t rax_5 = var_158
    var_158 = 0
    int32_t rdx_16 = rcx_16 + rdi_3 + r8_2
    int64_t var_d8 = rax_5
    int32_t var_cc_1 = rcx_17
    int32_t var_150_1
    var_150_1.q = 0
    
    if (rdx_16 s> rcx_17)
        sub_1405947f0(&var_d8, rdx_16)
    
    sub_140a2cf70(&var_d8, var_168, rdi_3)
    int64_t rcx_26 = var_158
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t rcx_27 = var_188
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int64_t rcx_28 = var_68
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int64_t var_58
    int64_t* rax_7 = sub_140b13b30(&var_58)
    int32_t rdx_18 = rax_7[1].d
    int32_t rdx_19 = neg.d(rdx_18)
    int64_t var_178 = *rax_7
    *rax_7 = 0
    int32_t rcx_31 = rax_7[1].d
    int32_t rcx_32 = *(rax_7 + 0xc)
    rax_7[1] = 0
    int32_t rdx_22 = sbb.d(rdx_19, rdx_19, rdx_18 != 0) + 0x1d + rcx_31
    
    if (rdx_22 s> rcx_32)
        sub_1405947f0(&var_178, rdx_22)
    
    sub_140a2cf70(&var_178, u"Binaries/ThirdParty/Vorbis/", 0x1b)
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    int32_t rdi_4
    int32_t r8_4
    
    if (rcx_31 != 0 || rbx_2 == 0xffffffff)
        r8_4 = 1
        rdi_4 = 2
    else
        rdi_4 = 2
        r8_4 = 2
    
    int64_t rax_9 = var_178
    var_178 = 0
    int32_t rdx_24 = rcx_31 + rbx_2 + r8_4
    int64_t var_148 = rax_9
    int32_t var_170_1
    var_170_1.q = 0
    
    if (rdx_24 s> rcx_32)
        sub_1405947f0(&var_148, rdx_24)
    
    sub_140a2cf70(&var_148, r13_1, rbx_2)
    uint64_t r13_2
    int32_t r14_2
    
    if (r14_1 == 0)
        r13_2 = 0
        r14_2 = 0
    else
        r14_2 = r14_1 - 1
        r13_2 = 0
    
    if (rcx_31 != 0 || r14_2 == 0xffffffff)
        rdi_4 = 1
    
    int64_t var_e8 = var_148
    int32_t rdx_27 = rcx_31 + r14_2 + rdi_4
    var_148 = 0
    int32_t var_dc_1 = rcx_32
    int32_t var_140_1
    var_140_1.q = 0
    
    if (rdx_27 s> rcx_32)
        sub_1405947f0(&var_e8, rdx_27)
    
    sub_140a2cf70(&var_e8, var_168, r14_2)
    int64_t rcx_41 = var_148
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)
    
    int64_t rcx_42 = var_178
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int64_t rcx_43 = var_58
    
    if (rcx_43 != 0)
        rcx_43 = sub_140a74f90(rcx_43)
    
    int64_t rbx_3 = var_d8
    uint64_t var_138 = 0
    sub_1405a4c70(&var_138, sbb.d(rcx_43.d, rcx_43.d, rcx_16 != 0) + 7 + rcx_16, 0)
    memcpy(var_138, rbx_3, rcx_16 * 2)
    sub_140a20ba0(&var_138, u"libogg", 6)
    uint64_t rdi_6 = var_138
    var_138 = 0
    int32_t var_40_1 = rcx_16
    int32_t var_12c
    int32_t var_3c_1 = var_12c
    int32_t var_130_1
    var_130_1.q = 0
    int32_t rbx_4
    uint64_t r14_3
    uint64_t var_b8
    
    if (rcx_16 s> 1)
        int32_t rbx_5 = rsi_1 - 1
        
        if (rsi_1 == 0)
            rbx_5 = 0
        
        int32_t rcx_51
        
        if (rcx_16 == 0)
            rcx_51 = 1
        
        if (rcx_16 != 0 || rbx_5 == 0)
            rcx_51 = 0
        
        uint64_t var_c8 = rdi_6
        int32_t rdx_35 = rbx_5 + rcx_51 + rcx_16
        int32_t var_bc_1 = var_12c
        
        if (rdx_35 s> var_12c)
            sub_1405947f0(&var_c8, rdx_35)
        
        sub_140a20ba0(&var_c8, r12_1, rbx_5)
        r14_3 = var_c8
        rbx_4 = rcx_16
        r13_2 = r14_3
        var_b8 = r14_3
        int32_t var_b0_2 = rbx_4
    else
        var_b8 = 0
        rbx_4 = rsi_1
        r14_3 = 0
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_b8, rsi_1, 0)
            r14_3 = var_b8
            memcpy(r14_3, r12_1, rsi_1 * 2)
            r13_2 = r14_3
        
        if (rdi_6 != 0)
            sub_140a74f90(rdi_6)
    uint64_t rcx_54 = &data_142d40450
    
    if (rbx_4 != 0)
        rcx_54 = r13_2
    
    HMODULE rax_17
    int32_t r8_13
    rax_17, r8_13 = sub_140b67ab0(rcx_54)
    int64_t rbx_6 = var_e8
    int16_t* var_128 = nullptr
    sub_1405a4c70(&var_128, sbb.d(r8_13, r8_13, rcx_31 != 0) + 0xa + rcx_31, 0)
    memcpy(var_128, rbx_6, rcx_31 * 2)
    sub_140a20ba0(&var_128, u"libvorbis", 9)
    int16_t* rdi_8 = var_128
    int16_t* var_88_1 = rdi_8
    var_128 = nullptr
    int32_t var_80_1 = rcx_31
    int32_t var_11c
    int32_t var_7c_1 = var_11c
    int32_t var_120_1
    var_120_1.q = 0
    int32_t rbx_7
    int16_t* r13_3
    
    if (rcx_31 s> 1)
        int32_t rbx_8 = rsi_1 - 1
        
        if (rsi_1 == 0)
            rbx_8 = 0
        
        int32_t rcx_61
        
        if (rcx_31 == 0)
            rcx_61 = 1
        
        if (rcx_31 != 0 || rbx_8 == 0)
            rcx_61 = 0
        
        int64_t var_88_2 = 0
        int16_t* var_108 = rdi_8
        rdi_8 = nullptr
        int32_t rdx_43 = rbx_8 + rcx_61 + rcx_31
        int32_t var_fc_1 = var_11c
        
        if (rdx_43 s> var_11c)
            sub_1405947f0(&var_108, rdx_43)
        
        sub_140a20ba0(&var_108, r12_1, rbx_8)
        rbx_7 = rcx_31
        r13_3 = var_108
        var_108 = nullptr
        int32_t var_100_1
        var_100_1.q = 0
        int32_t var_a0_2 = rbx_7
    else
        uint64_t var_a8 = 0
        rbx_7 = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_a8, rsi_1, 0)
            r13_3 = var_a8
            memcpy(r13_3, r12_1, rsi_1 * 2)
        else
            r13_3 = nullptr
    
    if (r14_3 != 0)
        sub_140a74f90(r14_3)
    
    if (rdi_8 != 0)
        sub_140a74f90(rdi_8)
    
    int16_t* const r14_4 = &data_142d40450
    int16_t* const rcx_66 = &data_142d40450
    
    if (rbx_7 != 0)
        rcx_66 = r13_3
    
    HMODULE rax_19
    int32_t r8_21
    rax_19, r8_21 = sub_140b67ab0(rcx_66)
    int64_t rbx_9 = var_e8
    int16_t* var_118 = nullptr
    sub_1405a4c70(&var_118, sbb.d(r8_21, r8_21, rcx_31 != 0) + 0xe + rcx_31, 0)
    memcpy(var_118, rbx_9, rcx_31 * 2)
    sub_140a20ba0(&var_118, u"libvorbisfile", 0xd)
    int16_t* rdi_10 = var_118
    int16_t* var_78_1 = rdi_10
    var_118 = nullptr
    int32_t var_70_1 = rcx_31
    int32_t var_10c
    int32_t var_6c_1 = var_10c
    int32_t var_110_1
    var_110_1.q = 0
    int16_t* rbx_10
    
    if (rcx_31 s> 1)
        int32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        int32_t rcx_73
        
        if (rcx_31 == 0)
            rcx_73 = 1
        
        if (rcx_31 != 0 || rsi_2 == 0)
            rcx_73 = 0
        
        int64_t var_78_2 = 0
        int16_t* var_f8 = rdi_10
        rdi_10 = nullptr
        int32_t rdx_51 = rsi_2 + rcx_31 + rcx_73
        int32_t var_ec_1 = var_10c
        
        if (rdx_51 s> var_10c)
            sub_1405947f0(&var_f8, rdx_51)
        
        sub_140a20ba0(&var_f8, r12_1, rsi_2)
        rsi_1 = rcx_31
        rbx_10 = var_f8
        var_f8 = nullptr
        int32_t var_f0_1
        var_f0_1.q = 0
        int32_t var_90_2 = rsi_1
    else
        uint64_t var_98 = 0
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_98, rsi_1, 0)
            rbx_10 = var_98
            memcpy(rbx_10, r12_1, rsi_1 * 2)
        else
            rbx_10 = nullptr
    
    if (r13_3 != 0)
        sub_140a74f90(r13_3)
    
    if (rdi_10 != 0)
        sub_140a74f90(rdi_10)
    
    if (rsi_1 != 0)
        r14_4 = rbx_10
    
    if (rax_17 == 0 || rax_19 == 0 || sub_140b67ab0(r14_4) == 0)
        r15_2 = 0
    
    data_143f5e628
    data_143f5e628 = r15_2
    result = nullptr
    
    if (0 == data_143f5e628)
        data_143f5e628 = 0
    else
        result = zx.q(data_143f5e628)
    
    if (rbx_10 != 0)
        result = sub_140a74f90(rbx_10)
    
    int64_t rcx_80 = var_e8
    
    if (rcx_80 != 0)
        result = sub_140a74f90(rcx_80)
    
    int64_t rcx_81 = var_d8
    
    if (rcx_81 != 0)
        result = sub_140a74f90(rcx_81)
    
    uint128_t* rcx_82 = var_1a8
    
    if (rcx_82 != 0)
        result = sub_140a74f90(rcx_82)
    
    uint64_t* rcx_83 = var_198
    
    if (rcx_83 != 0)
        result = sub_140a74f90(rcx_83)
    
    int16_t* rcx_84 = var_168
    
    if (rcx_84 != 0)
        return sub_140a74f90(rcx_84)

return result
