// 函数: sub_1428cf200
// 地址: 0x1428cf200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(8)

if (arg1 == 0 || arg3 == 0)
    return 0xffffffff

if (((arg2 - 0x80) & 0xffffff3f) != 0 || arg2 == 0x140)
    return 0xfffffffe

if (arg2 != 0x80)
    int32_t rax_1 = 0xe
    
    if (arg2 == 0xc0)
        rax_1 = 0xc
    
    arg3[0x3c] = rax_1
else
    arg3[0x3c] = 0xa

int32_t rax_2 = *arg1
int32_t rbx_3 = (ror.d(rax_2, 8) & 0xff00ff00) | (rol.d(rax_2, 8) & 0xff00ff)
*arg3 = rbx_3
int32_t rcx = arg1[1]
arg3[1] = (ror.d(rcx, 8) & 0xff00ff00) | (rol.d(rcx, 8) & 0xff00ff)
int32_t rcx_3 = arg1[2]
arg3[2] = (ror.d(rcx_3, 8) & 0xff00ff00) | (rol.d(rcx_3, 8) & 0xff00ff)
int32_t rax_13 = arg1[3]
int32_t rdi_3 = (ror.d(rax_13, 8) & 0xff00ff00) | (rol.d(rax_13, 8) & 0xff00ff)
arg3[3] = rdi_3

if (arg2 != 0x80)
    int32_t rcx_63 = arg1[4]
    arg3[4] = (ror.d(rcx_63, 8) & 0xff00ff00) | (rol.d(rcx_63, 8) & 0xff00ff)
    int32_t rax_146 = arg1[5]
    uint64_t rcx_69 = (zx.q(ror.d(rax_146, 8)) & 0xff00ff00) | (zx.q(rol.d(rax_146, 8)) & 0xff00ff)
    void* rax_149 = &arg3[5]
    *rax_149 = rcx_69.d
    
    if (arg2 == 0xc0)
        int32_t r8_69 = rcx_69.d
        int32_t rcx_79 = arg3[4]
        int32_t r9_14 = ((*((zx.q((rcx_69 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x1000000)
            & 0xff000000) ^ (*((zx.q((zx.q(r8_69) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(r8_69) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(r8_69.b) << 2) + 0x14350fbc0) & 0xff00) ^ rbx_3
        arg3[6] = r9_14
        int32_t rdx_14 = r9_14 ^ arg3[1]
        arg3[7] = rdx_14
        int32_t rdx_15 = rdx_14 ^ arg3[2]
        arg3[8] = rdx_15
        int32_t rdx_16 = rdx_15 ^ rdi_3
        int32_t rcx_80 = rcx_79 ^ rdx_16
        arg3[9] = rdx_16
        arg3[0xa] = rcx_80
        int32_t rcx_81 = rcx_80 ^ *rax_149
        arg3[0xb] = rcx_81
        int32_t r8_76 = ((*((zx.q((zx.q(rcx_81) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x2000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rcx_81) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rcx_81) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rcx_81.b) << 2) + 0x14350fbc0) & 0xff00) ^ r9_14
        arg3[0xc] = r8_76
        int32_t rcx_87 = arg3[7] ^ r8_76
        arg3[0xd] = rcx_87
        int32_t rcx_88 = rcx_87 ^ arg3[8]
        arg3[0xe] = rcx_88
        int32_t rax_161 = arg3[9] ^ rcx_88
        arg3[0xf] = rax_161
        int32_t rcx_90 = arg3[0xa] ^ rax_161
        arg3[0x10] = rcx_90
        int32_t rcx_91 = rcx_90 ^ arg3[0xb]
        arg3[0x11] = rcx_91
        int32_t r8_83 = ((*((zx.q((zx.q(rcx_91) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x4000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rcx_91) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rcx_91) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rcx_91.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0xc]
        arg3[0x12] = r8_83
        int32_t rax_173 = arg3[0xd] ^ r8_83
        arg3[0x13] = rax_173
        int32_t rcx_97 = arg3[0xe] ^ rax_173
        arg3[0x14] = rcx_97
        int32_t rax_175 = arg3[0xf] ^ rcx_97
        arg3[0x15] = rax_175
        int32_t rcx_99 = arg3[0x10] ^ rax_175
        uint64_t rax_177 = zx.q(arg3[0x11]) ^ zx.q(rcx_99)
        arg3[0x16] = rcx_99
        int32_t rdx_19 = rax_177.d
        arg3[0x17] = rdx_19
        int32_t r8_90 = ((*((zx.q((rax_177 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x8000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_19) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_19) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_19.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x12]
        arg3[0x18] = r8_90
        int32_t r8_91 = r8_90 ^ arg3[0x13]
        arg3[0x19] = r8_91
        int32_t r8_92 = r8_91 ^ arg3[0x14]
        arg3[0x1a] = r8_92
        int32_t rcx_105 = arg3[0x15] ^ r8_92
        arg3[0x1b] = rcx_105
        int32_t rcx_106 = rcx_105 ^ arg3[0x16]
        uint64_t rax_188 = zx.q(arg3[0x17]) ^ zx.q(rcx_106)
        arg3[0x1c] = rcx_106
        arg3[0x1d] = rax_188.d
        int32_t rdx_20 = rax_188.d
        int32_t r8_99 = ((*((zx.q((rax_188 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x10000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_20) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_20) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_20.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x18]
        arg3[0x1e] = r8_99
        int32_t r8_100 = r8_99 ^ arg3[0x19]
        arg3[0x1f] = r8_100
        int32_t r8_101 = r8_100 ^ arg3[0x1a]
        arg3[0x20] = r8_101
        int32_t r8_102 = r8_101 ^ arg3[0x1b]
        arg3[0x21] = r8_102
        int32_t rax_199 = arg3[0x1c] ^ r8_102
        arg3[0x22] = rax_199
        uint64_t rax_200 = zx.q(rax_199) ^ zx.q(arg3[0x1d])
        arg3[0x23] = rax_200.d
        int32_t rdx_21 = rax_200.d
        int32_t r8_109 = ((*((zx.q((rax_200 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x20000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_21) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_21) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_21.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x1e]
        arg3[0x24] = r8_109
        int32_t rax_211 = arg3[0x1f] ^ r8_109
        arg3[0x25] = rax_211
        int32_t rax_212 = rax_211 ^ arg3[0x20]
        arg3[0x26] = rax_212
        int32_t rax_213 = rax_212 ^ arg3[0x21]
        arg3[0x27] = rax_213
        int32_t rax_214 = rax_213 ^ arg3[0x22]
        arg3[0x28] = rax_214
        uint64_t rax_215 = zx.q(rax_214) ^ zx.q(arg3[0x23])
        arg3[0x29] = rax_215.d
        int32_t rdx_22 = rax_215.d
        int32_t r8_116 = ((*((zx.q((rax_215 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x40000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_22) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_22) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_22.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x24]
        arg3[0x2a] = r8_116
        int32_t rax_226 = arg3[0x25] ^ r8_116
        arg3[0x2b] = rax_226
        int32_t rcx_120 = arg3[0x26] ^ rax_226
        arg3[0x2c] = rcx_120
        int32_t rax_228 = arg3[0x27] ^ rcx_120
        arg3[0x2d] = rax_228
        int32_t rax_229 = rax_228 ^ arg3[0x28]
        arg3[0x2e] = rax_229
        uint64_t rax_230 = zx.q(rax_229) ^ zx.q(arg3[0x29])
        arg3[0x2f] = rax_230.d
        int32_t rdx_23 = rax_230.d
        int32_t r8_123 = ((*((zx.q((rax_230 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x80ffffff)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_23) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_23) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_23.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x2a]
        arg3[0x30] = r8_123
        int32_t r8_124 = r8_123 ^ arg3[0x2b]
        arg3[0x31] = r8_124
        int32_t rax_241 = arg3[0x2c] ^ r8_124
        arg3[0x32] = rax_241
        arg3[0x33] = rax_241 ^ arg3[0x2d]
        return 0
    
    int32_t rcx_125 = arg1[6]
    arg3[6] = (ror.d(rcx_125, 8) & 0xff00ff00) | (rol.d(rcx_125, 8) & 0xff00ff)
    int32_t rcx_128 = arg1[7]
    int32_t rdx_31 = (ror.d(rcx_128, 8) & 0xff00ff00) | (rol.d(rcx_128, 8) & 0xff00ff)
    arg3[7] = rdx_31
    
    if (arg2 == 0x100)
        int32_t r9_21 = ((*((zx.q((zx.q(rdx_31) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x1000000)
            & 0xff000000) ^ (*((zx.q((zx.q(rdx_31) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
            ^ zx.d(*((zx.q(rdx_31) u>> 0x18 << 2) + 0x14350ffc0))
            ^ (*((zx.q(rdx_31.b) << 2) + 0x14350fbc0) & 0xff00) ^ rbx_3
        void* const i = &data_143511ccc
        arg3[8] = r9_21
        int32_t r9_22 = r9_21 ^ arg3[1]
        arg3[9] = r9_22
        int32_t r9_23 = r9_22 ^ arg3[2]
        arg3[0xa] = r9_23
        arg3[0xb] = r9_23 ^ rdi_3
        
        do
            int32_t r8_126 = *(rax_149 + 0x18)
            int32_t rdx_38 = *(rax_149 + 4)
            int32_t rcx_153 = *(rax_149 + 8)
            int32_t r9_30 = (*((zx.q((zx.q(r8_126) u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(r8_126) u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
                ^ (*((zx.q(r8_126) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
                ^ zx.d(*((zx.q(r8_126.b) << 2) + 0x14350ffc0)) ^ *(rax_149 - 4)
            *(rax_149 + 0x1c) = r9_30
            int32_t r9_31 = r9_30 ^ *rax_149
            int32_t rdx_39 = rdx_38 ^ r9_31
            *(rax_149 + 0x20) = r9_31
            uint64_t rcx_154 = zx.q(rcx_153) ^ zx.q(rdx_39)
            *(rax_149 + 0x24) = rdx_39
            int32_t r8_127 = rcx_154.d
            *(rax_149 + 0x28) = r8_127
            int32_t r9_35 = (*((zx.q((rcx_154 u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(r8_127) u>> 0x10).b) << 2) + 0x1435103c0) & 0xff000000)
                ^ zx.d(*((zx.q(r8_127) u>> 0x18 << 2) + 0x14350ffc0))
            int32_t r9_38 = r9_35 ^ (*((zx.q(r8_127.b) << 2) + 0x14350fbc0) & 0xff00) ^ *(i - 8)
                ^ *(rax_149 + 0xc)
            *(rax_149 + 0x2c) = r9_38
            int32_t rcx_165 = *(rax_149 + 0x10) ^ r9_38
            *(rax_149 + 0x30) = rcx_165
            int32_t rdx_45 = *(rax_149 + 0x14) ^ rcx_165
            *(rax_149 + 0x34) = rdx_45
            int32_t rdx_46 = rdx_45 ^ *(rax_149 + 0x18)
            *(rax_149 + 0x38) = rdx_46
            int32_t r9_44 = (*((zx.q((zx.q(rdx_46) u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(rdx_46) u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
                ^ (*((zx.q(rdx_46) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
                ^ zx.d(*((zx.q(rdx_46.b) << 2) + 0x14350ffc0)) ^ *(rax_149 + 0x1c)
            int32_t rcx_178 = *(rax_149 + 0x28)
            *(rax_149 + 0x3c) = r9_44
            int32_t r9_45 = r9_44 ^ *(rax_149 + 0x20)
            *(rax_149 + 0x40) = r9_45
            int32_t r9_46 = r9_45 ^ *(rax_149 + 0x24)
            uint64_t rcx_179 = zx.q(rcx_178) ^ zx.q(r9_46)
            *(rax_149 + 0x44) = r9_46
            int32_t r8_129 = rcx_179.d
            *(rax_149 + 0x48) = r8_129
            int32_t r9_50 = (*((zx.q((rcx_179 u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(r8_129) u>> 0x10).b) << 2) + 0x1435103c0) & 0xff000000)
                ^ zx.d(*((zx.q(r8_129) u>> 0x18 << 2) + 0x14350ffc0))
            int32_t r9_53 = r9_50 ^ (*((zx.q(r8_129.b) << 2) + 0x14350fbc0) & 0xff00) ^ *(i - 4)
                ^ *(rax_149 + 0x2c)
            *(rax_149 + 0x4c) = r9_53
            int32_t r9_54 = r9_53 ^ *(rax_149 + 0x30)
            *(rax_149 + 0x50) = r9_54
            int32_t r9_55 = r9_54 ^ *(rax_149 + 0x34)
            *(rax_149 + 0x54) = r9_55
            uint64_t rcx_190 = zx.q(*(rax_149 + 0x38)) ^ zx.q(r9_55)
            *(rax_149 + 0x58) = rcx_190.d
            int32_t r8_130 = rcx_190.d
            int32_t r9_59 = (*((zx.q((rcx_190 u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(r8_130) u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
                ^ (*((zx.q(r8_130) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
            int32_t rcx_202 = *(rax_149 + 0x44)
            int32_t r9_61 = r9_59 ^ zx.d(*((zx.q(r8_130.b) << 2) + 0x14350ffc0)) ^ *(rax_149 + 0x3c)
            int32_t rdx_56 = *(rax_149 + 0x40) ^ r9_61
            *(rax_149 + 0x5c) = r9_61
            int32_t rcx_203 = rcx_202 ^ rdx_56
            *(rax_149 + 0x60) = rdx_56
            int32_t rdx_58 = *(rax_149 + 0x48) ^ rcx_203
            *(rax_149 + 0x64) = rcx_203
            *(rax_149 + 0x68) = rdx_58
            rax_149 += 0x60
            int32_t r9_67 = (*((zx.q((zx.q(rdx_58) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
                ^ (*((zx.q((zx.q(rdx_58) u>> 0x10).b) << 2) + 0x1435103c0) & 0xff000000)
                ^ zx.d(*((zx.q(rdx_58) u>> 0x18 << 2) + 0x14350ffc0))
                ^ (*((zx.q(rdx_58.b) << 2) + 0x14350fbc0) & 0xff00) ^ *(rax_149 - 0x14)
            int32_t r9_68 = r9_67 ^ *i
            i += 0xc
            *(rax_149 + 0xc) = r9_68
            int32_t rcx_215 = *(rax_149 - 0x10) ^ r9_68
            *(rax_149 + 0x10) = rcx_215
            int32_t rdx_64 = *(rax_149 - 0xc) ^ rcx_215
            *(rax_149 + 0x14) = rdx_64
            *(rax_149 + 0x18) = *(rax_149 - 8) ^ rdx_64
        while (i != &data_143511ce4)
else
    int32_t rcx_10 = arg3[2]
    int32_t r9_7 = ((*((zx.q((zx.q(rdi_3) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x1000000)
        & 0xff000000) ^ (*((zx.q((zx.q(rdi_3) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdi_3) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdi_3.b) << 2) + 0x14350fbc0) & 0xff00) ^ rbx_3
    arg3[4] = r9_7
    int32_t rax_27 = r9_7 ^ arg3[1]
    int32_t rcx_11 = rcx_10 ^ rax_27
    arg3[5] = rax_27
    arg3[6] = rcx_11
    int32_t rcx_12 = rcx_11 ^ rdi_3
    arg3[7] = rcx_12
    int32_t r8_7 = ((*((zx.q((zx.q(rcx_12) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x2000000)
        & 0xff000000) ^ (*((zx.q((zx.q(rcx_12) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rcx_12) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rcx_12.b) << 2) + 0x14350fbc0) & 0xff00) ^ r9_7
    arg3[8] = r8_7
    int32_t r8_8 = r8_7 ^ arg3[5]
    arg3[9] = r8_8
    int32_t r8_9 = r8_8 ^ arg3[6]
    arg3[0xa] = r8_9
    uint64_t rax_39 = zx.q(arg3[7]) ^ zx.q(r8_9)
    int32_t rdx_1 = rax_39.d
    arg3[0xb] = rdx_1
    int32_t r8_16 = ((*((zx.q((rax_39 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x4000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_1) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_1) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_1.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[8]
    arg3[0xc] = r8_16
    int32_t r8_17 = r8_16 ^ arg3[9]
    arg3[0xd] = r8_17
    int32_t rax_50 = arg3[0xa] ^ r8_17
    arg3[0xe] = rax_50
    uint64_t rax_51 = zx.q(rax_50) ^ zx.q(arg3[0xb])
    int32_t rdx_2 = rax_51.d
    arg3[0xf] = rdx_2
    int32_t r8_24 = ((*((zx.q((rax_51 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x8000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_2) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_2) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_2.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0xc]
    arg3[0x10] = r8_24
    int32_t rax_62 = arg3[0xd] ^ r8_24
    arg3[0x11] = rax_62
    int32_t rcx_26 = arg3[0xe] ^ rax_62
    arg3[0x12] = rcx_26
    uint64_t rax_64 = zx.q(arg3[0xf]) ^ zx.q(rcx_26)
    int32_t rdx_3 = rax_64.d
    arg3[0x13] = rdx_3
    int32_t r8_31 = ((*((zx.q((rax_64 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x10000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_3) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_3) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_3.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x10]
    arg3[0x14] = r8_31
    int32_t r8_32 = r8_31 ^ arg3[0x11]
    arg3[0x15] = r8_32
    int32_t rax_75 = arg3[0x12] ^ r8_32
    arg3[0x16] = rax_75
    int32_t rcx_32 = arg3[0x13] ^ rax_75
    arg3[0x17] = rcx_32
    int32_t r8_39 = ((*((zx.q((zx.q(rcx_32) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x20000000)
        & 0xff000000) ^ (*((zx.q((zx.q(rcx_32) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rcx_32) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rcx_32.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x14]
    arg3[0x18] = r8_39
    int32_t rax_87 = arg3[0x15] ^ r8_39
    arg3[0x19] = rax_87
    int32_t rcx_38 = arg3[0x16] ^ rax_87
    arg3[0x1a] = rcx_38
    uint64_t rax_89 = zx.q(arg3[0x17]) ^ zx.q(rcx_38)
    arg3[0x1b] = rax_89.d
    int32_t rdx_5 = rax_89.d
    int32_t r8_46 = ((*((zx.q((rax_89 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x40000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_5) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_5) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_5.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x18]
    arg3[0x1c] = r8_46
    int32_t r8_47 = r8_46 ^ arg3[0x19]
    arg3[0x1d] = r8_47
    int32_t rax_100 = arg3[0x1a] ^ r8_47
    arg3[0x1e] = rax_100
    int32_t rcx_44 = arg3[0x1b] ^ rax_100
    arg3[0x1f] = rcx_44
    int32_t r8_54 = ((*((zx.q((zx.q(rcx_44) u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x80ffffff)
        & 0xff000000) ^ (*((zx.q((zx.q(rcx_44) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rcx_44) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rcx_44.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x1c]
    arg3[0x20] = r8_54
    int32_t rax_112 = arg3[0x1d] ^ r8_54
    arg3[0x21] = rax_112
    int32_t rcx_50 = arg3[0x1e] ^ rax_112
    arg3[0x22] = rcx_50
    uint64_t rax_114 = zx.q(arg3[0x1f]) ^ zx.q(rcx_50)
    arg3[0x23] = rax_114.d
    int32_t rdx_7 = rax_114.d
    int32_t r8_61 = ((*((zx.q((rax_114 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x1b000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_7) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_7) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_7.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x20]
    arg3[0x24] = r8_61
    int32_t rax_125 = arg3[0x21] ^ r8_61
    arg3[0x25] = rax_125
    int32_t rcx_56 = arg3[0x22] ^ rax_125
    arg3[0x26] = rcx_56
    uint64_t rax_127 = zx.q(arg3[0x23]) ^ zx.q(rcx_56)
    arg3[0x27] = rax_127.d
    int32_t rdx_8 = rax_127.d
    int32_t r8_68 = ((*((zx.q((rax_127 u>> 0x10).b) << 2) + 0x1435103c0) ^ 0x36000000) & 0xff000000)
        ^ (*((zx.q((zx.q(rdx_8) u>> 8).b) << 2) + 0x1435107c0) & 0xff0000)
        ^ zx.d(*((zx.q(rdx_8) u>> 0x18 << 2) + 0x14350ffc0))
        ^ (*((zx.q(rdx_8.b) << 2) + 0x14350fbc0) & 0xff00) ^ arg3[0x24]
    arg3[0x28] = r8_68
    int32_t rax_138 = arg3[0x25] ^ r8_68
    arg3[0x29] = rax_138
    int32_t rcx_62 = arg3[0x26] ^ rax_138
    arg3[0x2a] = rcx_62
    arg3[0x2b] = arg3[0x27] ^ rcx_62

return 0
