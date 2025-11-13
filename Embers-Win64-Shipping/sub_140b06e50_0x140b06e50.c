// 函数: sub_140b06e50
// 地址: 0x140b06e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_6 = ((zx.d(*arg2) << 8 ^ zx.d(arg2[1])) << 8 ^ zx.d(arg2[2])) << 8 ^ zx.d(arg2[3])
*arg1 = rbx_6
arg1[1] = ((zx.d(arg2[4]) << 8 ^ zx.d(arg2[5])) << 8 ^ zx.d(arg2[6])) << 8 ^ zx.d(arg2[7])
arg1[2] = ((zx.d(arg2[8]) << 8 ^ zx.d(arg2[9])) << 8 ^ zx.d(arg2[0xa])) << 8 ^ zx.d(arg2[0xb])
uint32_t r8_6 =
    ((zx.d(arg2[0xc]) << 8 ^ zx.d(arg2[0xd])) << 8 ^ zx.d(arg2[0xe])) << 8 ^ zx.d(arg2[0xf])
arg1[3] = r8_6

if (arg3 == 0x80)
    int32_t r9_5 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_6) u>> 0x10).b) << 2)) ^ 0x1000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_6) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_6) u>> 0x18 << 2])
    int32_t r9_7 = r9_5 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_6.b) << 2)) & 0xff00) ^ rbx_6
    arg1[4] = r9_7
    int32_t rax_23 = r9_7 ^ arg1[1]
    arg1[5] = rax_23
    int32_t rax_24 = rax_23 ^ arg1[2]
    arg1[6] = rax_24
    uint64_t rax_25 = zx.q(rax_24) ^ zx.q(r8_6)
    int32_t rdx = rax_25.d
    arg1[7] = rdx
    int32_t r8_11 = ((*("cccc||||wwww{{{{" + (zx.q((rax_25 u>> 0x10).b) << 2)) ^ 0x2000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx) u>> 0x18 << 2])
    int32_t r8_13 = r8_11 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx.b) << 2)) & 0xff00) ^ r9_7
    arg1[8] = r8_13
    int32_t r8_14 = r8_13 ^ arg1[5]
    arg1[9] = r8_14
    int32_t rax_36 = arg1[6] ^ r8_14
    arg1[0xa] = rax_36
    uint64_t rax_37 = zx.q(rax_36) ^ zx.q(arg1[7])
    int32_t rdx_1 = rax_37.d
    arg1[0xb] = rdx_1
    int32_t r8_19 = ((*("cccc||||wwww{{{{" + (zx.q((rax_37 u>> 0x10).b) << 2)) ^ 0x4000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_1) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_1) u>> 0x18 << 2])
    int32_t r8_21 = r8_19 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_1.b) << 2)) & 0xff00) ^ arg1[8]
    arg1[0xc] = r8_21
    int32_t r8_22 = r8_21 ^ arg1[9]
    arg1[0xd] = r8_22
    int32_t r8_23 = r8_22 ^ arg1[0xa]
    arg1[0xe] = r8_23
    int32_t r8_24 = r8_23 ^ arg1[0xb]
    arg1[0xf] = r8_24
    int32_t r8_29 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_24) u>> 0x10).b) << 2)) ^ 0x8000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_24) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_24) u>> 0x18 << 2])
    int32_t r8_31 = r8_29 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_24.b) << 2)) & 0xff00) ^ arg1[0xc]
    arg1[0x10] = r8_31
    int32_t r8_32 = r8_31 ^ arg1[0xd]
    arg1[0x11] = r8_32
    int32_t r8_33 = r8_32 ^ arg1[0xe]
    arg1[0x12] = r8_33
    int32_t r8_34 = r8_33 ^ arg1[0xf]
    arg1[0x13] = r8_34
    int32_t r8_39 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_34) u>> 0x10).b) << 2)) ^ 0x10000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_34) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_34) u>> 0x18 << 2])
    int32_t r8_41 = r8_39 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_34.b) << 2)) & 0xff00) ^ arg1[0x10]
    arg1[0x14] = r8_41
    int32_t r8_42 = r8_41 ^ arg1[0x11]
    arg1[0x15] = r8_42
    int32_t r8_43 = r8_42 ^ arg1[0x12]
    arg1[0x16] = r8_43
    int32_t r8_44 = r8_43 ^ arg1[0x13]
    arg1[0x17] = r8_44
    int32_t r8_49 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_44) u>> 0x10).b) << 2)) ^ 0x20000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_44) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_44) u>> 0x18 << 2])
    int32_t r8_51 = r8_49 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_44.b) << 2)) & 0xff00) ^ arg1[0x14]
    arg1[0x18] = r8_51
    int32_t r8_52 = r8_51 ^ arg1[0x15]
    arg1[0x19] = r8_52
    int32_t r8_53 = r8_52 ^ arg1[0x16]
    arg1[0x1a] = r8_53
    int32_t r8_54 = r8_53 ^ arg1[0x17]
    arg1[0x1b] = r8_54
    int32_t r8_59 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_54) u>> 0x10).b) << 2)) ^ 0x40000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_54) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_54) u>> 0x18 << 2])
    int32_t r8_61 = r8_59 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_54.b) << 2)) & 0xff00) ^ arg1[0x18]
    arg1[0x1c] = r8_61
    int32_t rax_88 = arg1[0x19] ^ r8_61
    arg1[0x1d] = rax_88
    int32_t rax_89 = rax_88 ^ arg1[0x1a]
    arg1[0x1e] = rax_89
    uint64_t rax_90 = zx.q(rax_89) ^ zx.q(arg1[0x1b])
    arg1[0x1f] = rax_90.d
    int32_t rdx_6 = rax_90.d
    int32_t r8_66 = ((*("cccc||||wwww{{{{" + (zx.q((rax_90 u>> 0x10).b) << 2)) ^ 0x80ffffff)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_6) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_6) u>> 0x18 << 2])
    int32_t r8_68 = r8_66 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_6.b) << 2)) & 0xff00) ^ arg1[0x1c]
    arg1[0x20] = r8_68
    int32_t rax_101 = arg1[0x1d] ^ r8_68
    arg1[0x21] = rax_101
    int32_t rax_102 = rax_101 ^ arg1[0x1e]
    arg1[0x22] = rax_102
    uint64_t rax_103 = zx.q(rax_102) ^ zx.q(arg1[0x1f])
    arg1[0x23] = rax_103.d
    int32_t rdx_7 = rax_103.d
    int32_t r8_73 = ((*("cccc||||wwww{{{{" + (zx.q((rax_103 u>> 0x10).b) << 2)) ^ 0x1b000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_7) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_7) u>> 0x18 << 2])
    int32_t r8_75 = r8_73 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_7.b) << 2)) & 0xff00) ^ arg1[0x20]
    arg1[0x24] = r8_75
    int32_t r8_76 = r8_75 ^ arg1[0x21]
    arg1[0x25] = r8_76
    int32_t r8_77 = r8_76 ^ arg1[0x22]
    arg1[0x26] = r8_77
    int32_t r8_78 = r8_77 ^ arg1[0x23]
    arg1[0x27] = r8_78
    int32_t r8_83 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_78) u>> 0x10).b) << 2)) ^ 0x36000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_78) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_78) u>> 0x18 << 2])
    int32_t r8_85 = r8_83 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_78.b) << 2)) & 0xff00) ^ arg1[0x24]
    arg1[0x28] = r8_85
    int32_t rax_124 = arg1[0x25] ^ r8_85
    arg1[0x29] = rax_124
    int32_t rax_125 = rax_124 ^ arg1[0x26]
    arg1[0x2a] = rax_125
    arg1[0x2b] = rax_125 ^ arg1[0x27]
    return 0xa

arg1[4] =
    ((zx.d(arg2[0x10]) << 8 ^ zx.d(arg2[0x11])) << 8 ^ zx.d(arg2[0x12])) << 8 ^ zx.d(arg2[0x13])
uint64_t rcx_67 = zx.q(((zx.d(arg2[0x14]) << 8 ^ zx.d(arg2[0x15])) << 8 ^ zx.d(arg2[0x16])) << 8)
    ^ zx.q(arg2[0x17])
void* rax_134 = &arg1[5]
*rax_134 = rcx_67.d

if (arg3 != 0xc0)
    arg1[6] =
        ((zx.d(arg2[0x18]) << 8 ^ zx.d(arg2[0x19])) << 8 ^ zx.d(arg2[0x1a])) << 8 ^ zx.d(arg2[0x1b])
    uint32_t rdx_33 =
        ((zx.d(arg2[0x1c]) << 8 ^ zx.d(arg2[0x1d])) << 8 ^ zx.d(arg2[0x1e])) << 8 ^ zx.d(arg2[0x1f])
    arg1[7] = rdx_33
    
    if (arg3 != 0x100)
        return 0
    
    int32_t r9_19 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_33) u>> 0x10).b) << 2)) ^ 0x1000000)
        & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_33) u>> 8).b) << 2)) & 0xff0000)
        ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_33) u>> 0x18 << 2])
    int32_t r9_21 = r9_19 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_33.b) << 2)) & 0xff00) ^ rbx_6
    void* const i = &data_142e70aac
    arg1[8] = r9_21
    int32_t r9_22 = r9_21 ^ arg1[1]
    arg1[9] = r9_22
    int32_t r9_23 = r9_22 ^ arg1[2]
    arg1[0xa] = r9_23
    arg1[0xb] = r9_23 ^ arg1[3]
    
    do
        int32_t r8_163 = *(rax_134 + 0x18)
        int32_t r9_28 = (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_163) u>> 0x10).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_163) u>> 8).b) << 2)) & 0xff00)
            ^ (*("cccc||||wwww{{{{" + (zx.q(r8_163) u>> 0x18 << 2)) & 0xff000000)
        int32_t rcx_140 = *(rax_134 + 8)
        int32_t r9_30 = r9_28 ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_163.b) << 2]) ^ *(rax_134 - 4)
        int32_t rdx_43 = *(rax_134 + 4)
        *(rax_134 + 0x1c) = r9_30
        int32_t r9_31 = r9_30 ^ *rax_134
        int32_t rdx_44 = rdx_43 ^ r9_31
        *(rax_134 + 0x20) = r9_31
        uint64_t rcx_141 = zx.q(rcx_140) ^ zx.q(rdx_44)
        *(rax_134 + 0x24) = rdx_44
        int32_t r8_164 = rcx_141.d
        *(rax_134 + 0x28) = r8_164
        int32_t r9_35 = (*("cccc||||wwww{{{{" + (zx.q((rcx_141 u>> 8).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_164) u>> 0x10).b) << 2)) & 0xff000000)
            ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_164) u>> 0x18 << 2])
        int32_t r9_38 = r9_35 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_164.b) << 2)) & 0xff00) ^ *(i - 8)
            ^ *(rax_134 + 0xc)
        *(rax_134 + 0x2c) = r9_38
        int32_t rcx_152 = *(rax_134 + 0x10) ^ r9_38
        *(rax_134 + 0x30) = rcx_152
        int32_t rdx_50 = *(rax_134 + 0x14) ^ rcx_152
        *(rax_134 + 0x34) = rdx_50
        int32_t rdx_51 = rdx_50 ^ *(rax_134 + 0x18)
        *(rax_134 + 0x38) = rdx_51
        int32_t r9_42 = (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_51) u>> 0x10).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_51) u>> 8).b) << 2)) & 0xff00)
            ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_51) u>> 0x18 << 2)) & 0xff000000)
        int32_t r9_44 = r9_42 ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_51.b) << 2]) ^ *(rax_134 + 0x1c)
        int32_t rdx_57 = *(rax_134 + 0x24)
        int32_t rcx_162 = *(rax_134 + 0x28)
        *(rax_134 + 0x3c) = r9_44
        int32_t r9_45 = r9_44 ^ *(rax_134 + 0x20)
        int32_t rdx_58 = rdx_57 ^ r9_45
        *(rax_134 + 0x40) = r9_45
        uint64_t rcx_163 = zx.q(rcx_162) ^ zx.q(rdx_58)
        *(rax_134 + 0x44) = rdx_58
        int32_t r8_166 = rcx_163.d
        *(rax_134 + 0x48) = r8_166
        int32_t r9_49 = (*("cccc||||wwww{{{{" + (zx.q((rcx_163 u>> 8).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_166) u>> 0x10).b) << 2)) & 0xff000000)
            ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_166) u>> 0x18 << 2])
        int32_t r9_52 = r9_49 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_166.b) << 2)) & 0xff00) ^ *(i - 4)
            ^ *(rax_134 + 0x2c)
        *(rax_134 + 0x4c) = r9_52
        int32_t r9_53 = r9_52 ^ *(rax_134 + 0x30)
        *(rax_134 + 0x50) = r9_53
        int32_t r9_54 = r9_53 ^ *(rax_134 + 0x34)
        *(rax_134 + 0x54) = r9_54
        int32_t r9_55 = r9_54 ^ *(rax_134 + 0x38)
        *(rax_134 + 0x58) = r9_55
        int32_t r9_59 = (*("cccc||||wwww{{{{" + (zx.q((zx.q(r9_55) u>> 0x10).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r9_55) u>> 8).b) << 2)) & 0xff00)
            ^ (*("cccc||||wwww{{{{" + (zx.q(r9_55) u>> 0x18 << 2)) & 0xff000000)
        int32_t rcx_182 = *(rax_134 + 0x44)
        int32_t r9_61 = r9_59 ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r9_55.b) << 2]) ^ *(rax_134 + 0x3c)
        int32_t rdx_69 = *(rax_134 + 0x40) ^ r9_61
        *(rax_134 + 0x5c) = r9_61
        int32_t rcx_183 = rcx_182 ^ rdx_69
        *(rax_134 + 0x60) = rdx_69
        int32_t rdx_71 = *(rax_134 + 0x48) ^ rcx_183
        *(rax_134 + 0x64) = rcx_183
        *(rax_134 + 0x68) = rdx_71
        rax_134 += 0x60
        int32_t r9_65 = (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_71) u>> 8).b) << 2)) & 0xff0000)
            ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_71) u>> 0x10).b) << 2)) & 0xff000000)
            ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_71) u>> 0x18 << 2])
        int32_t r9_68 = r9_65 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_71.b) << 2)) & 0xff00)
            ^ *(rax_134 - 0x14) ^ *i
        i += 0xc
        *(rax_134 + 0xc) = r9_68
        int32_t rcx_195 = *(rax_134 - 0x10) ^ r9_68
        *(rax_134 + 0x10) = rcx_195
        int32_t rcx_196 = rcx_195 ^ *(rax_134 - 0xc)
        *(rax_134 + 0x14) = rcx_196
        *(rax_134 + 0x18) = rcx_196 ^ *(rax_134 - 8)
    while (i != &data_142e70ac4)
    
    return 0xe

int32_t r8_86 = rcx_67.d
int32_t r9_12 = ((*("cccc||||wwww{{{{" + (zx.q((rcx_67 u>> 0x10).b) << 2)) ^ 0x1000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_86) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_86) u>> 0x18 << 2])
int32_t r9_14 = r9_12 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_86.b) << 2)) & 0xff00) ^ rbx_6
arg1[6] = r9_14
int32_t rcx_78 = r9_14 ^ arg1[1]
arg1[7] = rcx_78
int32_t rcx_79 = rcx_78 ^ arg1[2]
arg1[8] = rcx_79
int32_t rcx_80 = rcx_79 ^ arg1[3]
arg1[9] = rcx_80
int32_t rcx_81 = rcx_80 ^ arg1[4]
arg1[0xa] = rcx_81
int32_t rcx_82 = rcx_81 ^ *rax_134
arg1[0xb] = rcx_82
int32_t r8_91 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(rcx_82) u>> 0x10).b) << 2)) ^ 0x2000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rcx_82) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rcx_82) u>> 0x18 << 2])
int32_t r8_93 = r8_91 ^ (*("cccc||||wwww{{{{" + (zx.q(rcx_82.b) << 2)) & 0xff00) ^ r9_14
arg1[0xc] = r8_93
int32_t r8_94 = r8_93 ^ arg1[7]
arg1[0xd] = r8_94
int32_t r8_95 = r8_94 ^ arg1[8]
arg1[0xe] = r8_95
int32_t r8_96 = r8_95 ^ arg1[9]
arg1[0xf] = r8_96
int32_t r8_97 = r8_96 ^ arg1[0xa]
arg1[0x10] = r8_97
int32_t r8_98 = r8_97 ^ arg1[0xb]
arg1[0x11] = r8_98
int32_t r8_103 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_98) u>> 0x10).b) << 2)) ^ 0x4000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_98) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_98) u>> 0x18 << 2])
int32_t r8_105 = r8_103 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_98.b) << 2)) & 0xff00) ^ arg1[0xc]
arg1[0x12] = r8_105
int32_t r8_106 = r8_105 ^ arg1[0xd]
arg1[0x13] = r8_106
int32_t r8_107 = r8_106 ^ arg1[0xe]
arg1[0x14] = r8_107
int32_t r8_108 = r8_107 ^ arg1[0xf]
arg1[0x15] = r8_108
int32_t r8_109 = r8_108 ^ arg1[0x10]
arg1[0x16] = r8_109
int32_t r8_110 = r8_109 ^ arg1[0x11]
arg1[0x17] = r8_110
int32_t r8_115 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_110) u>> 0x10).b) << 2)) ^ 0x8000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_110) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_110) u>> 0x18 << 2])
int32_t r8_117 = r8_115 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_110.b) << 2)) & 0xff00) ^ arg1[0x12]
arg1[0x18] = r8_117
int32_t r8_118 = r8_117 ^ arg1[0x13]
arg1[0x19] = r8_118
int32_t r8_119 = r8_118 ^ arg1[0x14]
arg1[0x1a] = r8_119
int32_t r8_120 = r8_119 ^ arg1[0x15]
arg1[0x1b] = r8_120
int32_t r8_121 = r8_120 ^ arg1[0x16]
arg1[0x1c] = r8_121
int32_t r8_122 = r8_121 ^ arg1[0x17]
arg1[0x1d] = r8_122
int32_t r8_127 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_122) u>> 0x10).b) << 2)) ^ 0x10000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_122) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_122) u>> 0x18 << 2])
int32_t r8_129 = r8_127 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_122.b) << 2)) & 0xff00) ^ arg1[0x18]
arg1[0x1e] = r8_129
int32_t rcx_100 = arg1[0x19] ^ r8_129
arg1[0x1f] = rcx_100
int32_t rcx_101 = rcx_100 ^ arg1[0x1a]
arg1[0x20] = rcx_101
int32_t rcx_102 = rcx_101 ^ arg1[0x1b]
arg1[0x21] = rcx_102
int32_t rax_176 = arg1[0x1c] ^ rcx_102
arg1[0x22] = rax_176
uint64_t rax_177 = zx.q(rax_176) ^ zx.q(arg1[0x1d])
arg1[0x23] = rax_177.d
int32_t rdx_17 = rax_177.d
int32_t r8_134 = ((*("cccc||||wwww{{{{" + (zx.q((rax_177 u>> 0x10).b) << 2)) ^ 0x20000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(rdx_17) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_17) u>> 0x18 << 2])
int32_t r8_136 = r8_134 ^ (*("cccc||||wwww{{{{" + (zx.q(rdx_17.b) << 2)) & 0xff00) ^ arg1[0x1e]
arg1[0x24] = r8_136
int32_t r8_137 = r8_136 ^ arg1[0x1f]
arg1[0x25] = r8_137
int32_t r8_138 = r8_137 ^ arg1[0x20]
arg1[0x26] = r8_138
int32_t r8_139 = r8_138 ^ arg1[0x21]
arg1[0x27] = r8_139
int32_t r8_140 = r8_139 ^ arg1[0x22]
arg1[0x28] = r8_140
int32_t r8_141 = r8_140 ^ arg1[0x23]
arg1[0x29] = r8_141
int32_t r8_146 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_141) u>> 0x10).b) << 2)) ^ 0x40000000)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_141) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_141) u>> 0x18 << 2])
int32_t r8_148 = r8_146 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_141.b) << 2)) & 0xff00) ^ arg1[0x24]
arg1[0x2a] = r8_148
int32_t r8_149 = r8_148 ^ arg1[0x25]
arg1[0x2b] = r8_149
int32_t r8_150 = r8_149 ^ arg1[0x26]
arg1[0x2c] = r8_150
int32_t r8_151 = r8_150 ^ arg1[0x27]
arg1[0x2d] = r8_151
int32_t r8_152 = r8_151 ^ arg1[0x28]
arg1[0x2e] = r8_152
int32_t r8_153 = r8_152 ^ arg1[0x29]
arg1[0x2f] = r8_153
int32_t r8_158 = ((*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_153) u>> 0x10).b) << 2)) ^ 0x80ffffff)
    & 0xff000000) ^ (*("cccc||||wwww{{{{" + (zx.q((zx.q(r8_153) u>> 8).b) << 2)) & 0xff0000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r8_153) u>> 0x18 << 2])
int32_t r8_160 = r8_158 ^ (*("cccc||||wwww{{{{" + (zx.q(r8_153.b) << 2)) & 0xff00) ^ arg1[0x2a]
arg1[0x30] = r8_160
int32_t r8_161 = r8_160 ^ arg1[0x2b]
arg1[0x31] = r8_161
int32_t rax_208 = arg1[0x2c] ^ r8_161
arg1[0x32] = rax_208
arg1[0x33] = rax_208 ^ arg1[0x2d]
return 0xc
