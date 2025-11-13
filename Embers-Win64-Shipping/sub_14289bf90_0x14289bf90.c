// 函数: sub_14289bf90
// 地址: 0x14289bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0xc0)
int32_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r10_1 = arg1[2]
int64_t i = arg3
int32_t r9_1 = arg1[3]
int32_t r11_1 = arg1[7]
int32_t rbx_1 = arg1[6]
int32_t rsi_1 = *arg1
int32_t r12_1 = arg1[5]
int32_t r14_1 = arg1[4]
int32_t r15_1 = arg1[1]

do
    int32_t r13_2 = rsi_1 ^ r15_1
    uint32_t r8_4 = zx.d(*arg2) << 0x18 | zx.d(arg2[1]) << 0x10 | zx.d(arg2[2]) << 8 | zx.d(arg2[3])
    uint32_t var_78 = r8_4
    int32_t rdx_6 = r11_1 + 0x428a2f98 + ((not.d(r14_1) & rbx_1) ^ (r14_1 & r12_1)) + r8_4
        + (ror.d(r14_1, 0xb) ^ rol.d(r14_1, 7) ^ ror.d(r14_1, 6))
    int32_t r11_2 = r9_1 + rdx_6
    int32_t r9_3 = rsi_1 & r15_1
    int32_t rdi_4 =
        ((r10_1 & r13_2) ^ r9_3) + (ror.d(rsi_1, 2) ^ ror.d(rsi_1, 0xd) ^ rol.d(rsi_1, 0xa)) + rdx_6
    uint32_t r8_9 =
        zx.d(arg2[4]) << 0x18 | zx.d(arg2[5]) << 0x10 | zx.d(arg2[6]) << 8 | zx.d(arg2[7])
    uint32_t var_74_1 = r8_9
    int32_t rdx_13 = (ror.d(r11_2, 0xb) ^ rol.d(r11_2, 7) ^ ror.d(r11_2, 6)) + r8_9 + 0x71374491
        + ((not.d(r11_2) & r12_1) ^ (r14_1 & r11_2)) + rbx_1
    int32_t r10_2 = r10_1 + rdx_13
    int32_t r13_5 = ((r13_2 & rdi_4) ^ r9_3)
        + (ror.d(rdi_4, 2) ^ ror.d(rdi_4, 0xd) ^ rol.d(rdi_4, 0xa)) + rdx_13
    uint32_t r8_15 =
        zx.d(arg2[8]) << 0x18 | zx.d(arg2[9]) << 0x10 | zx.d(arg2[0xa]) << 8 | zx.d(arg2[0xb])
    uint32_t var_70_1 = r8_15
    int32_t rdx_20 = (ror.d(r10_2, 0xb) ^ rol.d(r10_2, 7) ^ ror.d(r10_2, 6)) + r8_15 - 0x4a3f0431
        + ((not.d(r10_2) & r14_1) ^ (r11_2 & r10_2)) + r12_1
    int32_t rbx_2 = r15_1 + rdx_20
    int32_t r15_6 = (((rsi_1 ^ r13_5) & rdi_4) ^ (rsi_1 & r13_5)) + rdx_20
        + (ror.d(r13_5, 0xd) ^ rol.d(r13_5, 0xa) ^ ror.d(r13_5, 2))
    uint32_t r8_21 =
        zx.d(arg2[0xc]) << 0x18 | zx.d(arg2[0xd]) << 0x10 | zx.d(arg2[0xe]) << 8 | zx.d(arg2[0xf])
    uint32_t var_6c_1 = r8_21
    int32_t rdx_27 = (ror.d(rbx_2, 0xb) ^ rol.d(rbx_2, 7) ^ ror.d(rbx_2, 6)) + r8_21 - 0x164a245b
        + ((not.d(rbx_2) & r11_2) ^ (r10_2 & rbx_2)) + r14_1
    int32_t r9_6 = rsi_1 + rdx_27
    int32_t r12_6 = (((r13_5 ^ r15_6) & rdi_4) ^ (r13_5 & r15_6)) + rdx_27
        + (ror.d(r15_6, 0xd) ^ rol.d(r15_6, 0xa) ^ ror.d(r15_6, 2))
    uint32_t r8_27 = zx.d(arg2[0x10]) << 0x18 | zx.d(arg2[0x11]) << 0x10 | zx.d(arg2[0x12]) << 8
        | zx.d(arg2[0x13])
    uint32_t var_68_1 = r8_27
    int32_t rdx_33 = r11_2 + 0x3956c25b + ((not.d(r9_6) & r10_2) ^ (rbx_2 & r9_6)) + r8_27
        + (ror.d(r9_6, 0xb) ^ rol.d(r9_6, 7) ^ ror.d(r9_6, 6))
    int32_t rdi_5 = rdi_4 + rdx_33
    int32_t r14_6 = (((r15_6 ^ r12_6) & r13_5) ^ (r15_6 & r12_6)) + rdx_33
        + (ror.d(r12_6, 0xd) ^ rol.d(r12_6, 0xa) ^ ror.d(r12_6, 2))
    uint32_t r8_32 = zx.d(arg2[0x14]) << 0x18 | zx.d(arg2[0x15]) << 0x10 | zx.d(arg2[0x16]) << 8
        | zx.d(arg2[0x17])
    uint32_t var_64_1 = r8_32
    int32_t rdx_40 = (ror.d(rdi_5, 0xb) ^ rol.d(rdi_5, 7) ^ ror.d(rdi_5, 6)) + r8_32
        + ((not.d(rdi_5) & rbx_2) ^ (rdi_5 & r9_6)) + 0x59f111f1 + r10_2
    int32_t r13_6 = r13_5 + rdx_40
    int32_t rsi_6 = (((r12_6 ^ r14_6) & r15_6) ^ (r12_6 & r14_6)) + rdx_40
        + (ror.d(r14_6, 0xd) ^ rol.d(r14_6, 0xa) ^ ror.d(r14_6, 2))
    uint32_t r8_37 = zx.d(arg2[0x18]) << 0x18 | zx.d(arg2[0x19]) << 0x10 | zx.d(arg2[0x1a]) << 8
        | zx.d(arg2[0x1b])
    uint32_t var_60_1 = r8_37
    int32_t rdx_47 = (ror.d(r13_6, 0xb) ^ rol.d(r13_6, 7) ^ ror.d(r13_6, 6)) + r8_37
        + ((not.d(r13_6) & r9_6) ^ (rdi_5 & r13_6)) - 0x6dc07d5c + rbx_2
    int32_t r15_7 = r15_6 + rdx_47
    int32_t r10_7 = (((r14_6 ^ rsi_6) & r12_6) ^ (r14_6 & rsi_6)) + rdx_47
        + (ror.d(rsi_6, 0xd) ^ rol.d(rsi_6, 0xa) ^ ror.d(rsi_6, 2))
    uint32_t r8_42 = zx.d(arg2[0x1c]) << 0x18 | zx.d(arg2[0x1d]) << 0x10 | zx.d(arg2[0x1e]) << 8
        | zx.d(arg2[0x1f])
    uint32_t var_5c_1 = r8_42
    int32_t rdx_54 = (ror.d(r15_7, 0xb) ^ rol.d(r15_7, 7) ^ ror.d(r15_7, 6)) + r8_42
        + ((not.d(r15_7) & rdi_5) ^ (r13_6 & r15_7)) - 0x54e3a12b + r9_6
    int32_t r12_7 = r12_6 + rdx_54
    int32_t r11_9 = (((rsi_6 ^ r10_7) & r14_6) ^ (rsi_6 & r10_7)) + rdx_54
        + (ror.d(r10_7, 0xd) ^ rol.d(r10_7, 0xa) ^ ror.d(r10_7, 2))
    uint32_t r8_47 = zx.d(arg2[0x20]) << 0x18 | zx.d(arg2[0x21]) << 0x10 | zx.d(arg2[0x22]) << 8
        | zx.d(arg2[0x23])
    uint32_t var_58_1 = r8_47
    int32_t r9_8 = r10_7 & r11_9
    int32_t rdx_61 = (ror.d(r12_7, 0xb) ^ rol.d(r12_7, 7) ^ ror.d(r12_7, 6)) + r8_47
        + ((not.d(r12_7) & r13_6) ^ (r15_7 & r12_7)) - 0x27f85568 + rdi_5
    int32_t r14_7 = r14_6 + rdx_61
    int32_t rdi_7 = r10_7 ^ r11_9
    int32_t rbx_6 = ((rdi_7 & rsi_6) ^ r9_8)
        + (ror.d(r11_9, 2) ^ ror.d(r11_9, 0xd) ^ rol.d(r11_9, 0xa)) + rdx_61
    uint32_t r8_52 = zx.d(arg2[0x24]) << 0x18 | zx.d(arg2[0x25]) << 0x10 | zx.d(arg2[0x26]) << 8
        | zx.d(arg2[0x27])
    uint32_t var_54_1 = r8_52
    int32_t rdx_68 = (ror.d(r14_7, 0xb) ^ rol.d(r14_7, 7) ^ ror.d(r14_7, 6)) + r8_52
        + ((not.d(r14_7) & r15_7) ^ (r12_7 & r14_7)) + 0x12835b01 + r13_6
    int32_t rsi_7 = rsi_6 + rdx_68
    int32_t rdi_10 = ((rdi_7 & rbx_6) ^ r9_8)
        + (ror.d(rbx_6, 2) ^ ror.d(rbx_6, 0xd) ^ rol.d(rbx_6, 0xa)) + rdx_68
    uint32_t r8_57 = zx.d(arg2[0x28]) << 0x18 | zx.d(arg2[0x29]) << 0x10 | zx.d(arg2[0x2a]) << 8
        | zx.d(arg2[0x2b])
    uint32_t var_50_1 = r8_57
    int32_t r8_60 = r8_57 + (ror.d(rsi_7, 0xb) ^ rol.d(rsi_7, 7) ^ ror.d(rsi_7, 6))
        + ((not.d(rsi_7) & r12_7) ^ (r14_7 & rsi_7)) + 0x243185be + r15_7
    int32_t r10_8 = r10_7 + r8_60
    int32_t rax_200 = (((rdi_10 ^ r11_9) & rbx_6) ^ (rdi_10 & r11_9)) + r8_60
        + (ror.d(rdi_10, 0xd) ^ rol.d(rdi_10, 0xa) ^ ror.d(rdi_10, 2))
    uint32_t r9_13 = zx.d(arg2[0x2c]) << 0x18 | zx.d(arg2[0x2d]) << 0x10 | zx.d(arg2[0x2e]) << 8
        | zx.d(arg2[0x2f])
    uint32_t var_4c_1 = r9_13
    int32_t r8_66 = r12_7 + 0x550c7dc3 + ((not.d(r10_8) & r14_7) ^ (rsi_7 & r10_8)) + r9_13
        + (ror.d(r10_8, 0xb) ^ rol.d(r10_8, 7) ^ ror.d(r10_8, 6))
    int32_t r11_10 = r11_9 + r8_66
    int32_t r12_12 = (((rdi_10 ^ rax_200) & rbx_6) ^ (rdi_10 & rax_200)) + r8_66
        + (ror.d(rax_200, 0xd) ^ rol.d(rax_200, 0xa) ^ ror.d(rax_200, 2))
    uint32_t r9_18 = zx.d(arg2[0x30]) << 0x18 | zx.d(arg2[0x31]) << 0x10 | zx.d(arg2[0x32]) << 8
        | zx.d(arg2[0x33])
    uint32_t var_48_1 = r9_18
    uint32_t r9_20 = zx.d(arg2[0x34]) << 0x18
    int32_t r8_73 = (ror.d(r11_10, 0xb) ^ rol.d(r11_10, 7) ^ ror.d(r11_10, 6)) + r9_18
        + ((not.d(r11_10) & rsi_7) ^ (r10_8 & r11_10)) + 0x72be5d74 + r14_7
    int32_t rbx_7 = rbx_6 + r8_73
    var_c8 = rbx_7
    int32_t r13_11 = (((rax_200 ^ r12_12) & rdi_10) ^ (rax_200 & r12_12)) + r8_73
        + (ror.d(r12_12, 0xd) ^ rol.d(r12_12, 0xa) ^ ror.d(r12_12, 2))
    uint32_t r9_23 = r9_20 | zx.d(arg2[0x35]) << 0x10 | zx.d(arg2[0x36]) << 8 | zx.d(arg2[0x37])
    uint32_t var_44_1 = r9_23
    int32_t r8_80 = (ror.d(rbx_7, 0xb) ^ rol.d(rbx_7, 7) ^ ror.d(rbx_7, 6)) + r9_23
        + ((not.d(rbx_7) & r10_8) ^ (rbx_7 & r11_10)) - 0x7f214e02 + rsi_7
    int32_t rdi_11 = rdi_10 + r8_80
    int32_t var_c4_1 = rdi_11
    int32_t rbx_12 = (((r12_12 ^ r13_11) & rax_200) ^ (r12_12 & r13_11)) + r8_80
        + (ror.d(r13_11, 0xd) ^ rol.d(r13_11, 0xa) ^ ror.d(r13_11, 2))
    int32_t var_a8_1 = rbx_12
    uint32_t r9_28 = zx.d(arg2[0x38]) << 0x18 | zx.d(arg2[0x39]) << 0x10 | zx.d(arg2[0x3a]) << 8
        | zx.d(arg2[0x3b])
    uint32_t var_40_1 = r9_28
    int32_t r8_87 = (ror.d(rdi_11, 0xb) ^ rol.d(rdi_11, 7) ^ ror.d(rdi_11, 6)) + r9_28
        + ((not.d(rdi_11) & r11_10) ^ (var_c8 & rdi_11)) - 0x6423f959 + r10_8
    int32_t rax_201 = rax_200 + r8_87
    int32_t rsi_12 = (((r13_11 ^ rbx_12) & r12_12) ^ (r13_11 & rbx_12)) + r8_87
        + (ror.d(rbx_12, 0xd) ^ rol.d(rbx_12, 0xa) ^ ror.d(rbx_12, 2))
    int32_t var_bc_1 = rsi_12
    uint32_t r9_33 = zx.d(arg2[0x3c]) << 0x18 | zx.d(arg2[0x3d]) << 0x10 | zx.d(arg2[0x3e]) << 8
        | zx.d(arg2[0x3f])
    uint32_t var_3c_1 = r9_33
    int32_t r10_9 = var_c8
    int64_t var_98_1 = 6
    int32_t r8_93 = r11_10 - 0x3e640e8c + ((not.d(rax_201) & r10_9) ^ (rdi_11 & rax_201)) + r9_33
        + (ror.d(rax_201, 0xb) ^ rol.d(rax_201, 7) ^ ror.d(rax_201, 6))
    int32_t r12_13 = r12_12 + r8_93
    int32_t r8_94 = 0x19
    int32_t r11_15 = (((rbx_12 ^ rsi_12) & r13_11) ^ (rbx_12 & rsi_12)) + r8_93
        + (ror.d(rsi_12, 0xd) ^ rol.d(rsi_12, 0xa) ^ ror.d(rsi_12, 2))
    int64_t var_b0_1 = 0x19
    int32_t var_c0_1 = r11_15
    void* const var_a0_1 = &data_1434ea8f8
    int32_t r14_13
    
    while (true)
        uint64_t rcx_194 = zx.q(r8_94 - 8) & 0xf
        int32_t r9_34 = (&var_78)[rcx_194]
        void* rdi_12 = &(&var_78)[rcx_194]
        uint64_t rcx_196 = zx.q(r8_94 + 5) & 0xf
        int32_t rdx_122 = (&var_78)[rcx_196]
        void* r15_10 = &(&var_78)[zx.q(r8_94 + 7) & 0xf]
        *r15_10 += (rol.d(rdx_122, 0xf) ^ rol.d(rdx_122, 0xd) ^ rdx_122 u>> 0xa)
            + (rol.d(r9_34, 0xe) ^ ror.d(r9_34, 7) ^ r9_34 u>> 3)
            + (&var_78)[zx.q(var_b0_1.d) & 0xf]
        int32_t r8_108 = (ror.d(r12_13, 0xb) ^ rol.d(r12_13, 7) ^ ror.d(r12_13, 6))
            + ((not.d(r12_13) & var_c4_1) ^ (rax_201 & r12_13)) + *(var_a0_1 - 8) + *r15_10 + r10_9
        int32_t r10_11 = rsi_12 ^ r11_15
        int32_t rdx_135 = var_b0_1.d
        int32_t r11_17 = rsi_12 & var_c0_1
        int32_t r13_12 = r13_11 + r8_108
        uint64_t rcx_219 = zx.q(rdx_135 - 7) & 0xf
        var_c8 = ((r10_11 & rbx_12) ^ r11_17)
            + (ror.d(var_c0_1, 2) ^ ror.d(var_c0_1, 0xd) ^ rol.d(var_c0_1, 0xa)) + r8_108
        int32_t r8_109 = (&var_78)[rcx_219]
        void* rbx_13 = &(&var_78)[rcx_219]
        uint64_t rcx_221 = zx.q(rdx_135 + 6) & 0xf
        int32_t rdx_136 = (&var_78)[rcx_221]
        int32_t r9_46 = (rol.d(rdx_136, 0xf) ^ rol.d(rdx_136, 0xd) ^ rdx_136 u>> 0xa)
            + (rol.d(r8_109, 0xe) ^ ror.d(r8_109, 7) ^ r8_109 u>> 3)
            + (&var_78)[zx.q(var_b0_1.d + 1) & 0xf]
        *rdi_12 += r9_46
        int32_t r9_47 = var_c8
        int32_t r8_118 = (ror.d(r13_12, 0xb) ^ rol.d(r13_12, 7) ^ ror.d(r13_12, 6))
            + ((not.d(r13_12) & rax_201) ^ (r12_13 & r13_12)) + *(var_a0_1 - 4) + *rdi_12
            + var_c4_1
        int32_t rdi_14 = var_a8_1 + r8_118
        int32_t rdx_149 = *r15_10
        int32_t r11_18 = var_b0_1.d
        int32_t r9_51 = ((r10_11 & var_c8) ^ r11_17)
            + (ror.d(r9_47, 2) ^ ror.d(r9_47, 0xd) ^ rol.d(r9_47, 0xa)) + r8_118
        uint64_t rcx_243 = zx.q(r11_18 - 6) & 0xf
        int32_t r8_119 = (&var_78)[rcx_243]
        void* r10_12 = &(&var_78)[rcx_243]
        int32_t r9_57 = (rol.d(rdx_149, 0xf) ^ rol.d(rdx_149, 0xd) ^ rdx_149 u>> 0xa)
            + (rol.d(r8_119, 0xe) ^ ror.d(r8_119, 7) ^ r8_119 u>> 3)
            + (&var_78)[zx.q(r11_18 + 2) & 0xf]
        *rbx_13 += r9_57
        int32_t r8_128 = (ror.d(rdi_14, 0xb) ^ rol.d(rdi_14, 7) ^ ror.d(rdi_14, 6))
            + ((not.d(rdi_14) & r12_13) ^ (r13_12 & rdi_14)) + *var_a0_1 + *rbx_13 + rax_201
        int32_t var_bc_2 = var_bc_1 + r8_128
        int64_t rbx_15 = var_b0_1 + 8
        int32_t rax_210 = (((r9_51 ^ var_c0_1) & var_c8) ^ (r9_51 & var_c0_1)) + r8_128
            + (ror.d(r9_51, 0xd) ^ rol.d(r9_51, 0xa) ^ ror.d(r9_51, 2))
        uint64_t rcx_261 = zx.q(r11_18 - 5) & 0xf
        int32_t r8_129 = (&var_78)[rcx_261]
        void* r11_19 = &(&var_78)[rcx_261]
        int32_t rdx_163 = (&var_78)[zx.q(rbx_15.d) & 0xf]
        int32_t r9_63 = (rol.d(rdx_163, 0xf) ^ rol.d(rdx_163, 0xd) ^ rdx_163 u>> 0xa)
            + (rol.d(r8_129, 0xe) ^ ror.d(r8_129, 7) ^ r8_129 u>> 3)
            + (&var_78)[zx.q(var_b0_1.d + 3) & 0xf]
        *r10_12 += r9_63
        int32_t r8_138 = (ror.d(var_bc_2, 0xb) ^ rol.d(var_bc_2, 7) ^ ror.d(var_bc_2, 6))
            + ((not.d(var_bc_2) & r13_12) ^ (rdi_14 & var_bc_2)) + *(var_a0_1 + 4) + *r10_12
            + r12_13
        int32_t var_c0_2 = var_c0_1 + r8_138
        int32_t rdx_177 = var_b0_1.d
        int32_t r12_18 = (((r9_51 ^ rax_210) & var_c8) ^ (r9_51 & rax_210)) + r8_138
            + (ror.d(rax_210, 0xd) ^ rol.d(rax_210, 0xa) ^ ror.d(rax_210, 2))
        uint64_t rcx_286 = zx.q(rdx_177 - 4) & 0xf
        int32_t r8_139 = (&var_78)[rcx_286]
        void* r10_13 = &(&var_78)[rcx_286]
        int32_t rdx_178 = (&var_78)[zx.q(rdx_177 - 7) & 0xf]
        int32_t r9_70 = (rol.d(rdx_178, 0xf) ^ rol.d(rdx_178, 0xd) ^ rdx_178 u>> 0xa)
            + (rol.d(r8_139, 0xe) ^ ror.d(r8_139, 7) ^ r8_139 u>> 3)
            + (&var_78)[zx.q(var_b0_1.d + 4) & 0xf]
        *r11_19 += r9_70
        int32_t r8_148 = (ror.d(var_c0_2, 0xb) ^ rol.d(var_c0_2, 7) ^ ror.d(var_c0_2, 6))
            + ((not.d(var_c0_2) & rdi_14) ^ (var_bc_2 & var_c0_2)) + *(var_a0_1 + 8) + *r11_19
            + r13_12
        var_c8 += r8_148
        int32_t rdx_192 = var_b0_1.d
        r13_11 = (((rax_210 ^ r12_18) & r9_51) ^ (rax_210 & r12_18)) + r8_148
            + (ror.d(r12_18, 0xd) ^ rol.d(r12_18, 0xa) ^ ror.d(r12_18, 2))
        uint64_t rcx_311 = zx.q(rdx_192 - 3) & 0xf
        int32_t r8_149 = (&var_78)[rcx_311]
        void* r11_20 = &(&var_78)[rcx_311]
        int32_t rdx_193 = (&var_78)[zx.q(rdx_192 - 6) & 0xf]
        *r10_13 += (rol.d(rdx_193, 0xf) ^ rol.d(rdx_193, 0xd) ^ rdx_193 u>> 0xa)
            + (rol.d(r8_149, 0xe) ^ ror.d(r8_149, 7) ^ r8_149 u>> 3) + (&var_78)[rcx_196]
        int32_t r9_78 = var_c8
        int32_t r8_158 = (ror.d(r9_78, 0xb) ^ rol.d(r9_78, 7) ^ ror.d(r9_78, 6))
            + ((not.d(r9_78) & var_bc_2) ^ (r9_78 & var_c0_2)) + *(var_a0_1 + 0xc) + *r10_13
            + rdi_14
        int32_t rdi_16 = r9_51 + r8_158
        var_c4_1 = rdi_16
        int32_t rdx_207 = var_b0_1.d
        r14_13 = (((r12_18 ^ r13_11) & rax_210) ^ (r12_18 & r13_11)) + r8_158
            + (ror.d(r13_11, 0xd) ^ rol.d(r13_11, 0xa) ^ ror.d(r13_11, 2))
        var_a8_1 = r14_13
        void* r10_14 = &(&var_78)[zx.q(rdx_207 - 2) & 0xf]
        int32_t r8_159 = *r10_14
        int32_t rdx_208 = (&var_78)[zx.q(rdx_207 - 5) & 0xf]
        *r11_20 += (rol.d(rdx_208, 0xf) ^ rol.d(rdx_208, 0xd) ^ rdx_208 u>> 0xa)
            + (rol.d(r8_159, 0xe) ^ ror.d(r8_159, 7) ^ r8_159 u>> 3) + (&var_78)[rcx_221]
        int32_t r8_168 = (ror.d(rdi_16, 0xb) ^ rol.d(rdi_16, 7) ^ ror.d(rdi_16, 6))
            + ((not.d(rdi_16) & var_c0_2) ^ (var_c8 & rdi_16)) + *(var_a0_1 + 0x10) + *r11_20
            + var_bc_2
        rax_201 = rax_210 + r8_168
        int32_t rdx_222 = var_b0_1.d
        rsi_12 = (((r13_11 ^ r14_13) & r12_18) ^ (r13_11 & r14_13)) + r8_168
            + (ror.d(r14_13, 0xd) ^ rol.d(r14_13, 0xa) ^ ror.d(r14_13, 2))
        var_bc_1 = rsi_12
        int32_t r8_169 = (&var_78)[zx.q(rdx_222 - 1) & 0xf]
        int32_t rdx_223 = (&var_78)[zx.q(rdx_222 - 4) & 0xf]
        *r10_14 += (rol.d(rdx_223, 0xf) ^ rol.d(rdx_223, 0xd) ^ rdx_223 u>> 0xa)
            + (rol.d(r8_169, 0xe) ^ ror.d(r8_169, 7) ^ r8_169 u>> 3) + *r15_10
        var_b0_1 = rbx_15
        int32_t r8_178 = (ror.d(rax_201, 0xb) ^ rol.d(rax_201, 7) ^ ror.d(rax_201, 6))
            + ((not.d(rax_201) & var_c8) ^ (rdi_16 & rax_201)) + *(var_a0_1 + 0x14) + *r10_14
            + var_c0_2
        r12_13 = r12_18 + r8_178
        var_a0_1 += 0x20
        r8_94 = rbx_15.d
        r11_15 = (((r14_13 ^ rsi_12) & r13_11) ^ (r14_13 & rsi_12)) + r8_178
            + (ror.d(rsi_12, 0xd) ^ rol.d(rsi_12, 0xa) ^ ror.d(rsi_12, 2))
        int64_t temp0_1 = var_98_1
        var_98_1 -= 1
        var_c0_1 = r11_15
        
        if (temp0_1 == 1)
            break
        
        r10_9 = var_c8
        rbx_12 = r14_13
    
    int32_t rdx_237 = arg1[1]
    int32_t r15_12 = var_c0_1 + *arg1
    int32_t r10_15 = arg1[4]
    int32_t r11_25 = arg1[5]
    int32_t r8_179 = arg1[2]
    r9_1 = arg1[3] + r13_11
    int32_t rdi_18 = arg1[7]
    rbx_1 = arg1[6] + var_c4_1
    *arg1 = r15_12
    r15_1 = rdx_237 + rsi_12
    rsi_1 = r15_12
    int32_t rdx_238 = r8_179 + r14_13
    r14_1 = r10_15 + r12_13
    arg1[2] = rdx_238
    r12_1 = r11_25 + rax_201
    arg1[1] = r15_1
    r10_1 = rdx_238
    i -= 1
    r11_1 = var_c8 + rdi_18
    arg2 = &arg2[0x40]
    arg1[3] = r9_1
    arg1[4] = r14_1
    arg1[5] = r12_1
    arg1[6] = rbx_1
    arg1[7] = r11_1
while (i != 0)

__security_check_cookie(rax_1 ^ &var_c8)
