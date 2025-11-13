// 函数: sub_140b49300
// 地址: 0x140b49300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[2]
int32_t rdi = *arg2
int32_t r10 = arg2[3]
int32_t rbx = arg2[1]
int128_t* rax = *(arg1 + 0xc0)
int32_t r9_1 = arg2[4] + 0x5a827999
*rax = *arg3
rax[1] = arg3[1]
rax[2] = arg3[2]
rax[3] = arg3[3]
int32_t* rcx = *(arg1 + 0xc0)
int32_t rbx_1 = rol.d(rbx, 0x1e)
int32_t rax_1 = *rcx
int32_t rdx_3 = (rol.d(rax_1, 0x18) & 0xff00ff00) | (rol.d(rax_1, 8) & 0xff00ff)
*rcx = rdx_3
void* rcx_1 = *(arg1 + 0xc0)
int32_t rax_7 = *(rcx_1 + 4)
int32_t r8_5 = (((r10 ^ r11) & rbx) ^ r10) + rol.d(rdi, 5) + rdx_3 + r9_1
int32_t rdx_7 = (rol.d(rax_7, 0x18) & 0xff00ff00) | (rol.d(rax_7, 8) & 0xff00ff)
int32_t rdi_1 = rol.d(rdi, 0x1e)
*(rcx_1 + 4) = rdx_7
void* rcx_2 = *(arg1 + 0xc0)
int32_t rax_13 = *(rcx_2 + 8)
int32_t r9_7 = (((r11 ^ rbx_1) & rdi) ^ r11) + rol.d(r8_5, 5) + rdx_7 + r10 + 0x5a827999
int32_t rdx_11 = (rol.d(rax_13, 0x18) & 0xff00ff00) | (rol.d(rax_13, 8) & 0xff00ff)
int32_t r8_6 = rol.d(r8_5, 0x1e)
*(rcx_2 + 8) = rdx_11
void* rcx_3 = *(arg1 + 0xc0)
int32_t rax_19 = *(rcx_3 + 0xc)
int32_t r10_7 = (((rbx_1 ^ rdi_1) & r8_5) ^ rbx_1) + rol.d(r9_7, 5) + rdx_11 + r11 + 0x5a827999
int32_t rdx_15 = (rol.d(rax_19, 0x18) & 0xff00ff00) | (rol.d(rax_19, 8) & 0xff00ff)
*(rcx_3 + 0xc) = rdx_15
void* rcx_4 = *(arg1 + 0xc0)
int32_t r9_8 = rol.d(r9_7, 0x1e)
int32_t rax_25 = *(rcx_4 + 0x10)
int32_t r11_7 = (((r8_6 ^ rdi_1) & r9_7) ^ rdi_1) + rol.d(r10_7, 5) + rdx_15 + rbx_1 + 0x5a827999
int32_t rdx_19 = (rol.d(rax_25, 0x18) & 0xff00ff00) | (rol.d(rax_25, 8) & 0xff00ff)
*(rcx_4 + 0x10) = rdx_19
void* rcx_5 = *(arg1 + 0xc0)
int32_t r10_8 = rol.d(r10_7, 0x1e)
int32_t rax_31 = *(rcx_5 + 0x14)
int32_t rbx_8 = (((r8_6 ^ r9_8) & r10_7) ^ r8_6) + rol.d(r11_7, 5) + rdx_19 + 0x5a827999 + rdi_1
int32_t rdx_24 = (rol.d(rax_31, 0x18) & 0xff00ff00) | (rol.d(rax_31, 8) & 0xff00ff)
*(rcx_5 + 0x14) = rdx_24
int32_t r11_8 = rol.d(r11_7, 0x1e)
int32_t r8_7 = r8_6 + (((r9_8 ^ r10_8) & r11_7) ^ r9_8) + rol.d(rbx_8, 5) + rdx_24 + 0x5a827999
void* rcx_11 = *(arg1 + 0xc0)
int32_t rax_37 = *(rcx_11 + 0x18)
int32_t rdx_29 = (rol.d(rax_37, 0x18) & 0xff00ff00) | (rol.d(rax_37, 8) & 0xff00ff)
*(rcx_11 + 0x18) = rdx_29
int32_t rbx_9 = rol.d(rbx_8, 0x1e)
int32_t r9_9 = r9_8 + (((r10_8 ^ r11_8) & rbx_8) ^ r10_8) + rol.d(r8_7, 5) + rdx_29 + 0x5a827999
void* rcx_17 = *(arg1 + 0xc0)
int32_t rax_43 = *(rcx_17 + 0x1c)
int32_t rdx_34 = (rol.d(rax_43, 0x18) & 0xff00ff00) | (rol.d(rax_43, 8) & 0xff00ff)
*(rcx_17 + 0x1c) = rdx_34
void* rcx_18 = *(arg1 + 0xc0)
int32_t r8_8 = rol.d(r8_7, 0x1e)
int32_t r9_10 = rol.d(r9_9, 0x1e)
int32_t rax_49 = *(rcx_18 + 0x20)
int32_t rdi_7 = (((r11_8 ^ rbx_9) & r8_7) ^ r11_8) + rol.d(r9_9, 5) + rdx_34 + 0x5a827999 + r10_8
int32_t rdx_39 = (rol.d(rax_49, 0x18) & 0xff00ff00) | (rol.d(rax_49, 8) & 0xff00ff)
*(rcx_18 + 0x20) = rdx_39
void* rcx_19 = *(arg1 + 0xc0)
int32_t rdi_8 = rol.d(rdi_7, 0x1e)
int32_t rax_55 = *(rcx_19 + 0x24)
int32_t rsi_5 = (((r8_8 ^ rbx_9) & r9_9) ^ rbx_9) + rol.d(rdi_7, 5) + rdx_39 + 0x5a827999 + r11_8
int32_t rdx_44 = (rol.d(rax_55, 0x18) & 0xff00ff00) | (rol.d(rax_55, 8) & 0xff00ff)
*(rcx_19 + 0x24) = rdx_44
void* rcx_20 = *(arg1 + 0xc0)
int32_t rsi_6 = rol.d(rsi_5, 0x1e)
int32_t rax_61 = *(rcx_20 + 0x28)
int32_t rbp_5 = (((r8_8 ^ r9_10) & rdi_7) ^ r8_8) + rol.d(rsi_5, 5) + rdx_44 + 0x5a827999 + rbx_9
int32_t rdx_49 = (rol.d(rax_61, 0x18) & 0xff00ff00) | (rol.d(rax_61, 8) & 0xff00ff)
*(rcx_20 + 0x28) = rdx_49
void* rcx_21 = *(arg1 + 0xc0)
int32_t rax_67 = *(rcx_21 + 0x2c)
int32_t r14_5 = (((r9_10 ^ rdi_8) & rsi_5) ^ r9_10) + rol.d(rbp_5, 5) + rdx_49 + 0x5a827999 + r8_8
int32_t rdx_54 = (rol.d(rax_67, 0x18) & 0xff00ff00) | (rol.d(rax_67, 8) & 0xff00ff)
*(rcx_21 + 0x2c) = rdx_54
void* rcx_22 = *(arg1 + 0xc0)
int32_t rbp_6 = rol.d(rbp_5, 0x1e)
int32_t rax_73 = *(rcx_22 + 0x30)
int32_t r10_14 = (((rdi_8 ^ rsi_6) & rbp_5) ^ rdi_8) + rol.d(r14_5, 5) + rdx_54 + 0x5a827999 + r9_10
int32_t r14_6 = rol.d(r14_5, 0x1e)
int32_t rdx_59 = (rol.d(rax_73, 0x18) & 0xff00ff00) | (rol.d(rax_73, 8) & 0xff00ff)
*(rcx_22 + 0x30) = rdx_59
void* rcx_23 = *(arg1 + 0xc0)
int32_t rax_79 = *(rcx_23 + 0x34)
int32_t r11_14 =
    (((rsi_6 ^ rbp_6) & r14_5) ^ rsi_6) + rol.d(r10_14, 5) + rdx_59 + 0x5a827999 + rdi_8
int32_t r10_15 = rol.d(r10_14, 0x1e)
int32_t rdx_64 = (rol.d(rax_79, 0x18) & 0xff00ff00) | (rol.d(rax_79, 8) & 0xff00ff)
*(rcx_23 + 0x34) = rdx_64
void* rcx_24 = *(arg1 + 0xc0)
int32_t r11_15 = rol.d(r11_14, 0x1e)
int32_t rax_85 = *(rcx_24 + 0x38)
int32_t rbx_15 =
    (((r14_6 ^ rbp_6) & r10_14) ^ rbp_6) + rol.d(r11_14, 5) + rdx_64 + 0x5a827999 + rsi_6
int32_t rdx_69 = (rol.d(rax_85, 0x18) & 0xff00ff00) | (rol.d(rax_85, 8) & 0xff00ff)
*(rcx_24 + 0x38) = rdx_69
void* rcx_25 = *(arg1 + 0xc0)
int32_t rax_91 = *(rcx_25 + 0x3c)
int32_t r8_14 =
    (((r14_6 ^ r10_15) & r11_14) ^ r14_6) + rol.d(rbx_15, 5) + rdx_69 + 0x5a827999 + rbp_6
int32_t rdx_74 = (rol.d(rax_91, 0x18) & 0xff00ff00) | (rol.d(rax_91, 8) & 0xff00ff)
*(rcx_25 + 0x3c) = rdx_74
int32_t rbx_16 = rol.d(rbx_15, 0x1e)
int32_t* rax_97 = *(arg1 + 0xc0)
int32_t r9_16 =
    (((r10_15 ^ r11_15) & rbx_15) ^ r10_15) + rol.d(r8_14, 5) + rdx_74 + 0x5a827999 + r14_6
int32_t r8_15 = rol.d(r8_14, 0x1e)
int32_t rdx_80 = rol.d(rax_97[0xd] ^ rax_97[8] ^ rax_97[2] ^ *rax_97, 1)
*rax_97 = rdx_80
void* rax_101 = *(arg1 + 0xc0)
int32_t r10_16 =
    r10_15 + (((r11_15 ^ rbx_16) & r8_14) ^ r11_15) + rol.d(r9_16, 5) + rdx_80 + 0x5a827999
int32_t r9_17 = rol.d(r9_16, 0x1e)
int32_t rdx_86 = rol.d(*(rax_101 + 0x38) ^ *(rax_101 + 0x24) ^ *(rax_101 + 0xc) ^ *(rax_101 + 4), 1)
*(rax_101 + 4) = rdx_86
void* rax_105 = *(arg1 + 0xc0)
int32_t r11_16 =
    r11_15 + (((rbx_16 ^ r8_15) & r9_16) ^ rbx_16) + rol.d(r10_16, 5) + rdx_86 + 0x5a827999
int32_t r10_17 = rol.d(r10_16, 0x1e)
int32_t rdx_92 =
    rol.d(*(rax_105 + 0x3c) ^ *(rax_105 + 0x28) ^ *(rax_105 + 0x10) ^ *(rax_105 + 8), 1)
*(rax_105 + 8) = rdx_92
void* rax_109 = *(arg1 + 0xc0)
int32_t rbx_17 =
    rbx_16 + (((r9_17 ^ r8_15) & r10_16) ^ r8_15) + rol.d(r11_16, 5) + rdx_92 + 0x5a827999
int32_t rdx_98 = rol.d(*(rax_109 + 0x2c) ^ *(rax_109 + 0x14) ^ *(rax_109 + 0xc) ^ *rax_109, 1)
*(rax_109 + 0xc) = rdx_98
int32_t r11_17 = rol.d(r11_16, 0x1e)
void* rax_113 = *(arg1 + 0xc0)
int32_t r8_16 =
    r8_15 + (((r9_17 ^ r10_17) & r11_16) ^ r9_17) + rol.d(rbx_17, 5) + rdx_98 + 0x5a827999
int32_t rbx_18 = rol.d(rbx_17, 0x1e)
int32_t rdx_104 =
    rol.d(*(rax_113 + 0x30) ^ *(rax_113 + 0x18) ^ *(rax_113 + 4) ^ *(rax_113 + 0x10), 1)
*(rax_113 + 0x10) = rdx_104
void* rax_117 = *(arg1 + 0xc0)
int32_t r9_18 = r9_17 + (r10_17 ^ r11_17 ^ rbx_17) + rol.d(r8_16, 5) + rdx_104 + 0x6ed9eba1
int32_t r8_17 = rol.d(r8_16, 0x1e)
int32_t rdx_110 =
    rol.d(*(rax_117 + 0x34) ^ *(rax_117 + 0x1c) ^ *(rax_117 + 8) ^ *(rax_117 + 0x14), 1)
*(rax_117 + 0x14) = rdx_110
void* rax_121 = *(arg1 + 0xc0)
int32_t r10_18 = r10_17 + (r11_17 ^ rbx_18 ^ r8_16) + rol.d(r9_18, 5) + rdx_110 + 0x6ed9eba1
int32_t r9_19 = rol.d(r9_18, 0x1e)
int32_t rdx_116 =
    rol.d(*(rax_121 + 0x38) ^ *(rax_121 + 0x20) ^ *(rax_121 + 0xc) ^ *(rax_121 + 0x18), 1)
*(rax_121 + 0x18) = rdx_116
void* rax_125 = *(arg1 + 0xc0)
int32_t r11_18 = r11_17 + (r9_18 ^ rbx_18 ^ r8_17) + rol.d(r10_18, 5) + rdx_116 + 0x6ed9eba1
int32_t r10_19 = rol.d(r10_18, 0x1e)
int32_t rdx_122 =
    rol.d(*(rax_125 + 0x3c) ^ *(rax_125 + 0x24) ^ *(rax_125 + 0x10) ^ *(rax_125 + 0x1c), 1)
*(rax_125 + 0x1c) = rdx_122
void* rax_129 = *(arg1 + 0xc0)
int32_t rbx_20 = rbx_18 + 0x6ed9eba1 + (r9_19 ^ r10_18 ^ r8_17) + rol.d(r11_18, 5) + rdx_122
int32_t rdx_127 = rol.d(*(rax_129 + 0x28) ^ *(rax_129 + 0x14) ^ *rax_129 ^ *(rax_129 + 0x20), 1)
*(rax_129 + 0x20) = rdx_127
int32_t r11_19 = rol.d(r11_18, 0x1e)
void* rax_133 = *(arg1 + 0xc0)
int32_t rdi_13 = (r9_19 ^ r10_19 ^ r11_18) + rol.d(rbx_20, 5) + rdx_127 + 0x6ed9eba1 + r8_17
int32_t rbx_21 = rol.d(rbx_20, 0x1e)
int32_t rdx_133 =
    rol.d(*(rax_133 + 0x2c) ^ *(rax_133 + 0x18) ^ *(rax_133 + 4) ^ *(rax_133 + 0x24), 1)
*(rax_133 + 0x24) = rdx_133
int32_t rdi_14 = rol.d(rdi_13, 0x1e)
void* rax_137 = *(arg1 + 0xc0)
int32_t rsi_11 = (r10_19 ^ r11_19 ^ rbx_20) + rol.d(rdi_13, 5) + rdx_133 + 0x6ed9eba1 + r9_19
int32_t rdx_139 =
    rol.d(*(rax_137 + 0x30) ^ *(rax_137 + 0x1c) ^ *(rax_137 + 8) ^ *(rax_137 + 0x28), 1)
*(rax_137 + 0x28) = rdx_139
int32_t rsi_12 = rol.d(rsi_11, 0x1e)
void* rax_141 = *(arg1 + 0xc0)
int32_t rbp_11 = (r11_19 ^ rbx_21 ^ rdi_13) + rol.d(rsi_11, 5) + rdx_139 + 0x6ed9eba1 + r10_19
int32_t rdx_145 =
    rol.d(*(rax_141 + 0x34) ^ *(rax_141 + 0x20) ^ *(rax_141 + 0xc) ^ *(rax_141 + 0x2c), 1)
*(rax_141 + 0x2c) = rdx_145
int32_t rbp_12 = rol.d(rbp_11, 0x1e)
void* rax_145 = *(arg1 + 0xc0)
int32_t r8_22 = (rsi_11 ^ rbx_21 ^ rdi_14) + rol.d(rbp_11, 5) + rdx_145 + 0x6ed9eba1 + r11_19
int32_t rdx_151 =
    rol.d(*(rax_145 + 0x38) ^ *(rax_145 + 0x24) ^ *(rax_145 + 0x10) ^ *(rax_145 + 0x30), 1)
*(rax_145 + 0x30) = rdx_151
void* rax_149 = *(arg1 + 0xc0)
int32_t r9_24 = (rsi_12 ^ rbp_11 ^ rdi_14) + rol.d(r8_22, 5) + rdx_151 + 0x6ed9eba1 + rbx_21
int32_t rdx_157 =
    rol.d(*(rax_149 + 0x3c) ^ *(rax_149 + 0x28) ^ *(rax_149 + 0x14) ^ *(rax_149 + 0x34), 1)
*(rax_149 + 0x34) = rdx_157
int32_t r8_23 = rol.d(r8_22, 0x1e)
void* rax_153 = *(arg1 + 0xc0)
int32_t r10_24 = (rsi_12 ^ rbp_12 ^ r8_22) + rol.d(r9_24, 5) + rdx_157 + 0x6ed9eba1 + rdi_14
int32_t r9_25 = rol.d(r9_24, 0x1e)
int32_t rdx_163 = rol.d(*(rax_153 + 0x2c) ^ *(rax_153 + 0x18) ^ *(rax_153 + 0x38) ^ *rax_153, 1)
*(rax_153 + 0x38) = rdx_163
int32_t r10_25 = rol.d(r10_24, 0x1e)
void* rax_157 = *(arg1 + 0xc0)
int32_t r11_24 = (rbp_12 ^ r8_23 ^ r9_24) + rol.d(r10_24, 5) + rdx_163 + 0x6ed9eba1 + rsi_12
int32_t rdx_169 =
    rol.d(*(rax_157 + 0x30) ^ *(rax_157 + 0x1c) ^ *(rax_157 + 4) ^ *(rax_157 + 0x3c), 1)
*(rax_157 + 0x3c) = rdx_169
int32_t r11_25 = rol.d(r11_24, 0x1e)
int32_t* rax_161 = *(arg1 + 0xc0)
int32_t rbx_26 = (r8_23 ^ r9_25 ^ r10_24) + rol.d(r11_24, 5) + rdx_169 + 0x6ed9eba1 + rbp_12
int32_t rdx_175 = rol.d(rax_161[0xd] ^ rax_161[8] ^ rax_161[2] ^ *rax_161, 1)
*rax_161 = rdx_175
void* rax_165 = *(arg1 + 0xc0)
int32_t r8_24 = r8_23 + (r11_24 ^ r9_25 ^ r10_25) + rol.d(rbx_26, 5) + rdx_175 + 0x6ed9eba1
int32_t rdx_181 =
    rol.d(*(rax_165 + 0x38) ^ *(rax_165 + 0x24) ^ *(rax_165 + 0xc) ^ *(rax_165 + 4), 1)
*(rax_165 + 4) = rdx_181
void* rax_169 = *(arg1 + 0xc0)
int32_t r9_26 = r9_25 + (r11_25 ^ rbx_26 ^ r10_25) + rol.d(r8_24, 5) + rdx_181 + 0x6ed9eba1
int32_t rbx_27 = rol.d(rbx_26, 0x1e)
int32_t rdx_187 =
    rol.d(*(rax_169 + 0x3c) ^ *(rax_169 + 0x28) ^ *(rax_169 + 0x10) ^ *(rax_169 + 8), 1)
*(rax_169 + 8) = rdx_187
int32_t r8_25 = rol.d(r8_24, 0x1e)
void* rax_173 = *(arg1 + 0xc0)
int32_t r10_26 = r10_25 + (r11_25 ^ rbx_27 ^ r8_24) + rol.d(r9_26, 5) + rdx_187 + 0x6ed9eba1
int32_t r9_27 = rol.d(r9_26, 0x1e)
int32_t rdx_193 = rol.d(*(rax_173 + 0x2c) ^ *(rax_173 + 0x14) ^ *(rax_173 + 0xc) ^ *rax_173, 1)
*(rax_173 + 0xc) = rdx_193
void* rax_177 = *(arg1 + 0xc0)
int32_t r11_26 = r11_25 + (rbx_27 ^ r8_25 ^ r9_26) + rol.d(r10_26, 5) + rdx_193 + 0x6ed9eba1
int32_t rdx_199 =
    rol.d(*(rax_177 + 0x30) ^ *(rax_177 + 0x18) ^ *(rax_177 + 4) ^ *(rax_177 + 0x10), 1)
*(rax_177 + 0x10) = rdx_199
int32_t r10_27 = rol.d(r10_26, 0x1e)
int32_t r11_27 = rol.d(r11_26, 0x1e)
void* rax_181 = *(arg1 + 0xc0)
int32_t rbx_28 = rbx_27 + (r8_25 ^ r9_27 ^ r10_26) + rol.d(r11_26, 5) + rdx_199 + 0x6ed9eba1
int32_t rdx_205 =
    rol.d(*(rax_181 + 0x34) ^ *(rax_181 + 0x1c) ^ *(rax_181 + 8) ^ *(rax_181 + 0x14), 1)
*(rax_181 + 0x14) = rdx_205
void* rax_185 = *(arg1 + 0xc0)
int32_t rdi_19 = (r11_26 ^ r9_27 ^ r10_27) + rol.d(rbx_28, 5) + rdx_205 + 0x6ed9eba1 + r8_25
int32_t rdx_211 =
    rol.d(*(rax_185 + 0x38) ^ *(rax_185 + 0x20) ^ *(rax_185 + 0xc) ^ *(rax_185 + 0x18), 1)
*(rax_185 + 0x18) = rdx_211
void* rax_189 = *(arg1 + 0xc0)
int32_t r9_28 = r9_27 + (r11_27 ^ rbx_28 ^ r10_27) + rol.d(rdi_19, 5) + rdx_211 + 0x6ed9eba1
int32_t rbx_29 = rol.d(rbx_28, 0x1e)
int32_t rdi_20 = rol.d(rdi_19, 0x1e)
int32_t rdx_217 =
    rol.d(*(rax_189 + 0x3c) ^ *(rax_189 + 0x24) ^ *(rax_189 + 0x10) ^ *(rax_189 + 0x1c), 1)
*(rax_189 + 0x1c) = rdx_217
void* rax_193 = *(arg1 + 0xc0)
int32_t r10_28 = r10_27 + (r11_27 ^ rbx_29 ^ rdi_19) + rol.d(r9_28, 5) + rdx_217 + 0x6ed9eba1
int32_t r8_30 = rol.d(*(rax_193 + 0x28) ^ *(rax_193 + 0x14) ^ *(rax_193 + 0x20) ^ *rax_193, 1)
*(rax_193 + 0x20) = r8_30
int32_t r9_29 = rol.d(r9_28, 0x1e)
void* rax_196 = *(arg1 + 0xc0)
int32_t r11_29 = rol.d(r10_28, 5) - 0x70e44324 + (((rdi_20 | r9_28) & rbx_29) | (rdi_20 & r9_28))
    + r8_30 + r11_27
int32_t r8_35 = rol.d(*(rax_196 + 0x2c) ^ *(rax_196 + 0x18) ^ *(rax_196 + 4) ^ *(rax_196 + 0x24), 1)
*(rax_196 + 0x24) = r8_35
int32_t r10_29 = rol.d(r10_28, 0x1e)
void* rax_199 = *(arg1 + 0xc0)
int32_t rbx_31 = rol.d(r11_29, 5) - 0x70e44324 + (((r9_29 | r10_28) & rdi_20) | (r9_29 & r10_28))
    + r8_35 + rbx_29
int32_t r8_40 = rol.d(*(rax_199 + 0x30) ^ *(rax_199 + 0x1c) ^ *(rax_199 + 8) ^ *(rax_199 + 0x28), 1)
*(rax_199 + 0x28) = r8_40
void* rax_202 = *(arg1 + 0xc0)
int32_t rdi_22 = rol.d(rbx_31, 5) - 0x70e44324 + (((r11_29 | r10_29) & r9_29) | (r11_29 & r10_29))
    + r8_40 + rdi_20
int32_t r11_30 = rol.d(r11_29, 0x1e)
int32_t r8_45 =
    rol.d(*(rax_202 + 0x34) ^ *(rax_202 + 0x20) ^ *(rax_202 + 0xc) ^ *(rax_202 + 0x2c), 1)
*(rax_202 + 0x2c) = r8_45
int32_t rbx_32 = rol.d(rbx_31, 0x1e)
void* rax_205 = *(arg1 + 0xc0)
int32_t r9_31 = rol.d(rdi_22, 5) - 0x70e44324 + (((r11_30 | rbx_31) & r10_29) | (r11_30 & rbx_31))
    + r8_45 + r9_29
int32_t r8_50 =
    rol.d(*(rax_205 + 0x38) ^ *(rax_205 + 0x24) ^ *(rax_205 + 0x10) ^ *(rax_205 + 0x30), 1)
*(rax_205 + 0x30) = r8_50
int32_t rdi_23 = rol.d(rdi_22, 0x1e)
void* rax_208 = *(arg1 + 0xc0)
int32_t r10_31 = rol.d(r9_31, 5) - 0x70e44324 + (((rbx_32 | rdi_22) & r11_30) | (rbx_32 & rdi_22))
    + r8_50 + r10_29
int32_t r8_55 =
    rol.d(*(rax_208 + 0x3c) ^ *(rax_208 + 0x28) ^ *(rax_208 + 0x14) ^ *(rax_208 + 0x34), 1)
*(rax_208 + 0x34) = r8_55
int32_t r9_32 = rol.d(r9_31, 0x1e)
void* rax_211 = *(arg1 + 0xc0)
int32_t r11_32 = rol.d(r10_31, 5) - 0x70e44324 + (((rdi_23 | r9_31) & rbx_32) | (rdi_23 & r9_31))
    + r8_55 + r11_30
int32_t r8_60 = rol.d(*(rax_211 + 0x2c) ^ *(rax_211 + 0x18) ^ *rax_211 ^ *(rax_211 + 0x38), 1)
*(rax_211 + 0x38) = r8_60
int32_t r10_32 = rol.d(r10_31, 0x1e)
void* rax_214 = *(arg1 + 0xc0)
int32_t rbx_34 = rol.d(r11_32, 5) - 0x70e44324 + (((r9_32 | r10_31) & rdi_23) | (r9_32 & r10_31))
    + r8_60 + rbx_32
int32_t r8_65 = rol.d(*(rax_214 + 0x30) ^ *(rax_214 + 0x1c) ^ *(rax_214 + 4) ^ *(rax_214 + 0x3c), 1)
*(rax_214 + 0x3c) = r8_65
int32_t r11_33 = rol.d(r11_32, 0x1e)
int32_t* rax_217 = *(arg1 + 0xc0)
int32_t rdi_25 = rol.d(rbx_34, 5) - 0x70e44324 + (((r11_32 | r10_32) & r9_32) | (r11_32 & r10_32))
    + r8_65 + rdi_23
int32_t r8_70 = rol.d(rax_217[0xd] ^ rax_217[8] ^ rax_217[2] ^ *rax_217, 1)
*rax_217 = r8_70
int32_t rbx_35 = rol.d(rbx_34, 0x1e)
void* rax_220 = *(arg1 + 0xc0)
int32_t r9_34 = rol.d(rdi_25, 5) - 0x70e44324 + (((r11_33 | rbx_34) & r10_32) | (r11_33 & rbx_34))
    + r8_70 + r9_32
int32_t r8_75 = rol.d(*(rax_220 + 0x38) ^ *(rax_220 + 0x24) ^ *(rax_220 + 0xc) ^ *(rax_220 + 4), 1)
*(rax_220 + 4) = r8_75
int32_t rdi_26 = rol.d(rdi_25, 0x1e)
void* rax_223 = *(arg1 + 0xc0)
int32_t r10_34 = rol.d(r9_34, 5) - 0x70e44324 + (((rbx_35 | rdi_25) & r11_33) | (rbx_35 & rdi_25))
    + r8_75 + r10_32
int32_t r8_80 = rol.d(*(rax_223 + 0x3c) ^ *(rax_223 + 0x28) ^ *(rax_223 + 0x10) ^ *(rax_223 + 8), 1)
*(rax_223 + 8) = r8_80
int32_t r9_35 = rol.d(r9_34, 0x1e)
void* rax_226 = *(arg1 + 0xc0)
int32_t r11_35 = rol.d(r10_34, 5) - 0x70e44324 + (((rdi_26 | r9_34) & rbx_35) | (rdi_26 & r9_34))
    + r8_80 + r11_33
int32_t r8_85 = rol.d(*(rax_226 + 0x2c) ^ *(rax_226 + 0x14) ^ *(rax_226 + 0xc) ^ *rax_226, 1)
*(rax_226 + 0xc) = r8_85
int32_t r10_35 = rol.d(r10_34, 0x1e)
void* rax_229 = *(arg1 + 0xc0)
int32_t rbx_37 = rol.d(r11_35, 5) - 0x70e44324 + (((r9_35 | r10_34) & rdi_26) | (r9_35 & r10_34))
    + r8_85 + rbx_35
int32_t r8_90 = rol.d(*(rax_229 + 0x30) ^ *(rax_229 + 0x18) ^ *(rax_229 + 4) ^ *(rax_229 + 0x10), 1)
*(rax_229 + 0x10) = r8_90
int32_t r11_36 = rol.d(r11_35, 0x1e)
void* rax_232 = *(arg1 + 0xc0)
int32_t rdi_28 = rdi_26 + (((r11_35 | r10_35) & r9_35) | (r11_35 & r10_35)) + r8_90 - 0x70e44324
    + rol.d(rbx_37, 5)
int32_t r8_96 = rol.d(*(rax_232 + 0x34) ^ *(rax_232 + 0x1c) ^ *(rax_232 + 8) ^ *(rax_232 + 0x14), 1)
*(rax_232 + 0x14) = r8_96
int32_t rbx_38 = rol.d(rbx_37, 0x1e)
void* rax_235 = *(arg1 + 0xc0)
int32_t rsi_15 = rol.d(rdi_28, 5) + (((r11_36 | rbx_37) & r10_35) | (r11_36 & rbx_37)) + r8_96
    + r9_35 - 0x70e44324
int32_t r8_101 =
    rol.d(*(rax_235 + 0x38) ^ *(rax_235 + 0x20) ^ *(rax_235 + 0xc) ^ *(rax_235 + 0x18), 1)
*(rax_235 + 0x18) = r8_101
int32_t rdi_29 = rol.d(rdi_28, 0x1e)
void* rax_238 = *(arg1 + 0xc0)
int32_t rbp_15 = rol.d(rsi_15, 5) + (((rbx_38 | rdi_28) & r11_36) | (rbx_38 & rdi_28)) + r8_101
    + r10_35 - 0x70e44324
int32_t r8_106 =
    rol.d(*(rax_238 + 0x3c) ^ *(rax_238 + 0x24) ^ *(rax_238 + 0x10) ^ *(rax_238 + 0x1c), 1)
*(rax_238 + 0x1c) = r8_106
int32_t rsi_16 = rol.d(rsi_15, 0x1e)
void* rax_241 = *(arg1 + 0xc0)
int32_t r9_39 = rol.d(rbp_15, 5) + (((rdi_29 | rsi_15) & rbx_38) | (rdi_29 & rsi_15)) + r8_106
    + r11_36 - 0x70e44324
int32_t r8_111 = rol.d(*(rax_241 + 0x28) ^ *(rax_241 + 0x14) ^ *(rax_241 + 0x20) ^ *rax_241, 1)
*(rax_241 + 0x20) = r8_111
int32_t rbp_16 = rol.d(rbp_15, 0x1e)
void* rax_244 = *(arg1 + 0xc0)
int32_t r10_39 = rol.d(r9_39, 5) + (((rsi_16 | rbp_15) & rdi_29) | (rsi_16 & rbp_15)) + r8_111
    + rbx_38 - 0x70e44324
int32_t r8_116 =
    rol.d(*(rax_244 + 0x2c) ^ *(rax_244 + 0x18) ^ *(rax_244 + 4) ^ *(rax_244 + 0x24), 1)
*(rax_244 + 0x24) = r8_116
int32_t r9_40 = rol.d(r9_39, 0x1e)
void* rax_247 = *(arg1 + 0xc0)
int32_t r11_40 = rol.d(r10_39, 5) + (((r9_39 | rbp_16) & rsi_16) | (r9_39 & rbp_16)) + r8_116
    - 0x70e44324 + rdi_29
int32_t r8_122 =
    rol.d(*(rax_247 + 0x30) ^ *(rax_247 + 0x1c) ^ *(rax_247 + 8) ^ *(rax_247 + 0x28), 1)
*(rax_247 + 0x28) = r8_122
int32_t r10_40 = rol.d(r10_39, 0x1e)
void* rax_250 = *(arg1 + 0xc0)
int32_t rbx_42 = rol.d(r11_40, 5) + (((r9_40 | r10_39) & rbp_16) | (r9_40 & r10_39)) + r8_122
    - 0x70e44324 + rsi_16
int32_t r8_128 =
    rol.d(*(rax_250 + 0x34) ^ *(rax_250 + 0x20) ^ *(rax_250 + 0xc) ^ *(rax_250 + 0x2c), 1)
*(rax_250 + 0x2c) = r8_128
int32_t r11_41 = rol.d(r11_40, 0x1e)
void* rax_253 = *(arg1 + 0xc0)
int32_t r8_130 = rol.d(rbx_42, 5) - 0x70e44324 + (((r10_40 | r11_40) & r9_40) | (r10_40 & r11_40))
    + r8_128 + rbp_16
int32_t rdx_251 =
    rol.d(*(rax_253 + 0x38) ^ *(rax_253 + 0x24) ^ *(rax_253 + 0x10) ^ *(rax_253 + 0x30), 1)
*(rax_253 + 0x30) = rdx_251
int32_t rbx_43 = rol.d(rbx_42, 0x1e)
int32_t r9_42 = rol.d(r8_130, 5) - 0x359d3e2a + (r10_40 ^ r11_41 ^ rbx_42) + rdx_251 + r9_40
void* rax_259 = *(arg1 + 0xc0)
int32_t rdx_256 =
    rol.d(*(rax_259 + 0x3c) ^ *(rax_259 + 0x28) ^ *(rax_259 + 0x14) ^ *(rax_259 + 0x34), 1)
*(rax_259 + 0x34) = rdx_256
int32_t r8_131 = rol.d(r8_130, 0x1e)
int32_t r10_42 = rol.d(r9_42, 5) - 0x359d3e2a + (r11_41 ^ rbx_43 ^ r8_130) + rdx_256 + r10_40
void* rax_265 = *(arg1 + 0xc0)
int32_t rdx_261 = rol.d(*(rax_265 + 0x2c) ^ *(rax_265 + 0x18) ^ *rax_265 ^ *(rax_265 + 0x38), 1)
*(rax_265 + 0x38) = rdx_261
int32_t r9_43 = rol.d(r9_42, 0x1e)
int32_t r11_43 = rol.d(r10_42, 5) - 0x359d3e2a + (r9_42 ^ rbx_43 ^ r8_131) + rdx_261 + r11_41
void* rax_271 = *(arg1 + 0xc0)
int32_t rdx_266 =
    rol.d(*(rax_271 + 0x30) ^ *(rax_271 + 0x1c) ^ *(rax_271 + 4) ^ *(rax_271 + 0x3c), 1)
*(rax_271 + 0x3c) = rdx_266
int32_t rbx_45 = rol.d(r11_43, 5) - 0x359d3e2a + (r9_43 ^ r10_42 ^ r8_131) + rdx_266 + rbx_43
int32_t* rax_277 = *(arg1 + 0xc0)
int32_t r10_43 = rol.d(r10_42, 0x1e)
int32_t rdx_271 = rol.d(rax_277[0xd] ^ rax_277[8] ^ rax_277[2] ^ *rax_277, 1)
*rax_277 = rdx_271
int32_t r11_44 = rol.d(r11_43, 0x1e)
int32_t r8_133 = rol.d(rbx_45, 5) - 0x359d3e2a + (r9_43 ^ r10_43 ^ r11_43) + rdx_271 + r8_131
void* rax_283 = *(arg1 + 0xc0)
int32_t rdx_276 =
    rol.d(*(rax_283 + 0x38) ^ *(rax_283 + 0x24) ^ *(rax_283 + 0xc) ^ *(rax_283 + 4), 1)
*(rax_283 + 4) = rdx_276
int32_t rbx_46 = rol.d(rbx_45, 0x1e)
int32_t r9_45 = rol.d(r8_133, 5) - 0x359d3e2a + (r10_43 ^ r11_44 ^ rbx_45) + rdx_276 + r9_43
void* rax_289 = *(arg1 + 0xc0)
int32_t rdx_281 =
    rol.d(*(rax_289 + 0x3c) ^ *(rax_289 + 0x28) ^ *(rax_289 + 0x10) ^ *(rax_289 + 8), 1)
*(rax_289 + 8) = rdx_281
int32_t r8_134 = rol.d(r8_133, 0x1e)
int32_t r10_45 = rol.d(r9_45, 5) - 0x359d3e2a + (r11_44 ^ rbx_46 ^ r8_133) + rdx_281 + r10_43
void* rax_295 = *(arg1 + 0xc0)
int32_t rdx_286 = rol.d(*(rax_295 + 0x2c) ^ *(rax_295 + 0x14) ^ *(rax_295 + 0xc) ^ *rax_295, 1)
*(rax_295 + 0xc) = rdx_286
int32_t r9_46 = rol.d(r9_45, 0x1e)
int32_t r11_46 = rol.d(r10_45, 5) - 0x359d3e2a + (r9_45 ^ rbx_46 ^ r8_134) + rdx_286 + r11_44
void* rax_301 = *(arg1 + 0xc0)
int32_t rdx_291 =
    rol.d(*(rax_301 + 0x30) ^ *(rax_301 + 0x18) ^ *(rax_301 + 4) ^ *(rax_301 + 0x10), 1)
*(rax_301 + 0x10) = rdx_291
int32_t r10_46 = rol.d(r10_45, 0x1e)
int32_t rbx_48 = rol.d(r11_46, 5) - 0x359d3e2a + (r9_46 ^ r10_45 ^ r8_134) + rdx_291 + rbx_46
void* rax_307 = *(arg1 + 0xc0)
int32_t rdx_296 =
    rol.d(*(rax_307 + 0x34) ^ *(rax_307 + 0x1c) ^ *(rax_307 + 8) ^ *(rax_307 + 0x14), 1)
*(rax_307 + 0x14) = rdx_296
int32_t r11_47 = rol.d(r11_46, 0x1e)
int32_t r8_136 = rol.d(rbx_48, 5) - 0x359d3e2a + (r9_46 ^ r10_46 ^ r11_46) + rdx_296 + r8_134
void* rax_313 = *(arg1 + 0xc0)
int32_t rdx_301 =
    rol.d(*(rax_313 + 0x38) ^ *(rax_313 + 0x20) ^ *(rax_313 + 0xc) ^ *(rax_313 + 0x18), 1)
*(rax_313 + 0x18) = rdx_301
int32_t rbx_49 = rol.d(rbx_48, 0x1e)
int32_t r9_48 = rol.d(r8_136, 5) - 0x359d3e2a + (r10_46 ^ r11_47 ^ rbx_48) + rdx_301 + r9_46
void* rax_319 = *(arg1 + 0xc0)
int32_t rdx_306 =
    rol.d(*(rax_319 + 0x3c) ^ *(rax_319 + 0x24) ^ *(rax_319 + 0x10) ^ *(rax_319 + 0x1c), 1)
*(rax_319 + 0x1c) = rdx_306
int32_t r8_137 = rol.d(r8_136, 0x1e)
int32_t r10_48 = rol.d(r9_48, 5) - 0x359d3e2a + (r11_47 ^ rbx_49 ^ r8_136) + rdx_306 + r10_46
void* rax_325 = *(arg1 + 0xc0)
int32_t rdx_311 = rol.d(*(rax_325 + 0x28) ^ *(rax_325 + 0x14) ^ *(rax_325 + 0x20) ^ *rax_325, 1)
*(rax_325 + 0x20) = rdx_311
int32_t r9_49 = rol.d(r9_48, 0x1e)
int32_t rdi_32 = rol.d(r10_48, 5) + (r9_48 ^ rbx_49 ^ r8_137) + rdx_311 - 0x359d3e2a + r11_47
void* rax_331 = *(arg1 + 0xc0)
int32_t rdx_317 =
    rol.d(*(rax_331 + 0x2c) ^ *(rax_331 + 0x18) ^ *(rax_331 + 4) ^ *(rax_331 + 0x24), 1)
*(rax_331 + 0x24) = rdx_317
int32_t r10_49 = rol.d(r10_48, 0x1e)
void* rax_336 = *(arg1 + 0xc0)
int32_t rbx_51 = rbx_49 + (r9_49 ^ r10_48 ^ r8_137) + rdx_317 - 0x359d3e2a + rol.d(rdi_32, 5)
int32_t rdx_323 =
    rol.d(*(rax_336 + 0x30) ^ *(rax_336 + 0x1c) ^ *(rax_336 + 8) ^ *(rax_336 + 0x28), 1)
*(rax_336 + 0x28) = rdx_323
int32_t rdi_33 = rol.d(rdi_32, 0x1e)
int32_t rsi_19 = rol.d(rbx_51, 5) + (r9_49 ^ r10_49 ^ rdi_32) + rdx_323 - 0x359d3e2a + r8_137
void* rax_342 = *(arg1 + 0xc0)
int32_t rdx_329 =
    rol.d(*(rax_342 + 0x34) ^ *(rax_342 + 0x20) ^ *(rax_342 + 0xc) ^ *(rax_342 + 0x2c), 1)
*(rax_342 + 0x2c) = rdx_329
int32_t rbx_52 = rol.d(rbx_51, 0x1e)
int32_t r11_50 = rol.d(rsi_19, 5) + (r10_49 ^ rdi_33 ^ rbx_51) + rdx_329 + r9_49 - 0x359d3e2a
void* rax_348 = *(arg1 + 0xc0)
int32_t rdx_334 =
    rol.d(*(rax_348 + 0x38) ^ *(rax_348 + 0x24) ^ *(rax_348 + 0x10) ^ *(rax_348 + 0x30), 1)
*(rax_348 + 0x30) = rdx_334
int32_t rsi_20 = rol.d(rsi_19, 0x1e)
void* rax_353 = *(arg1 + 0xc0)
int32_t r10_51 = r10_49 + (rdi_33 ^ rbx_52 ^ rsi_19) + rdx_334 - 0x359d3e2a + rol.d(r11_50, 5)
int32_t rdx_340 =
    rol.d(*(rax_353 + 0x3c) ^ *(rax_353 + 0x28) ^ *(rax_353 + 0x14) ^ *(rax_353 + 0x34), 1)
*(rax_353 + 0x34) = rdx_340
int32_t r11_51 = rol.d(r11_50, 0x1e)
int32_t r9_53 = rol.d(r10_51, 5) + (r11_50 ^ rbx_52 ^ rsi_20) + rdx_340 - 0x359d3e2a + rdi_33
void* rax_359 = *(arg1 + 0xc0)
int32_t rdx_346 = rol.d(*(rax_359 + 0x2c) ^ *(rax_359 + 0x18) ^ *rax_359 ^ *(rax_359 + 0x38), 1)
*(rax_359 + 0x38) = rdx_346
int32_t r10_52 = rol.d(r10_51, 0x1e)
int32_t r8_140 = rol.d(r9_53, 5) + (r11_51 ^ r10_51 ^ rsi_20) + rdx_346 + rbx_52 - 0x359d3e2a
void* rax_365 = *(arg1 + 0xc0)
int32_t rdx_351 =
    rol.d(*(rax_365 + 0x30) ^ *(rax_365 + 0x1c) ^ *(rax_365 + 4) ^ *(rax_365 + 0x3c), 1)
*(rax_365 + 0x3c) = rdx_351
arg2[1] += r8_140
arg2[3] += r10_52
arg2[2] += rol.d(r9_53, 0x1e)
int32_t result = (r11_51 ^ r10_52 ^ r9_53) - 0x359d3e2a + rdx_351 + rol.d(r8_140, 5) + rsi_20
*arg2 += result
arg2[4] += r11_51
return result
