// 函数: sub_142965420
// 地址: 0x142965420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
int64_t i = arg3
char* r8 = arg2

if (i != 0)
    int32_t r9_1 = arg1[4]
    int32_t var_64_1 = arg1[2]
    int32_t var_4c_1 = arg1[5]
    int32_t var_5c_1 = arg1[6]
    int32_t r14_1 = arg1[1]
    int32_t var_50_1 = arg1[3]
    int32_t var_48_1 = arg1[7]
    int32_t var_58_1 = r14_1
    int32_t var_60_1 = r9_1
    
    do
        uint32_t rbx_5 = zx.d(*r8) << 0x18 | zx.d(r8[1]) << 0x10 | zx.d(r8[2]) << 8 | zx.d(r8[3])
        uint32_t rbp_5 = zx.d(r8[4]) << 0x18 | zx.d(r8[5]) << 0x10 | zx.d(r8[6]) << 8 | zx.d(r8[7])
        uint32_t rdx_9 =
            zx.d(r8[8]) << 0x18 | zx.d(r8[9]) << 0x10 | zx.d(r8[0xa]) << 8 | zx.d(r8[0xb])
        uint32_t rdx_14 =
            zx.d(r8[0xc]) << 0x18 | zx.d(r8[0xd]) << 0x10 | zx.d(r8[0xe]) << 8 | zx.d(r8[0xf])
        uint32_t r10_5 =
            zx.d(r8[0x10]) << 0x18 | zx.d(r8[0x11]) << 0x10 | zx.d(r8[0x12]) << 8 | zx.d(r8[0x13])
        uint32_t r15_5 =
            zx.d(r8[0x14]) << 0x18 | zx.d(r8[0x15]) << 0x10 | zx.d(r8[0x16]) << 8 | zx.d(r8[0x17])
        uint32_t r12_5 =
            zx.d(r8[0x18]) << 0x18 | zx.d(r8[0x19]) << 0x10 | zx.d(r8[0x1a]) << 8 | zx.d(r8[0x1b])
        uint32_t r13_5 =
            zx.d(r8[0x1c]) << 0x18 | zx.d(r8[0x1d]) << 0x10 | zx.d(r8[0x1e]) << 8 | zx.d(r8[0x1f])
        uint32_t rdx_19 =
            zx.d(r8[0x20]) << 0x18 | zx.d(r8[0x21]) << 0x10 | zx.d(r8[0x22]) << 8 | zx.d(r8[0x23])
        uint32_t rdx_24 =
            zx.d(r8[0x24]) << 0x18 | zx.d(r8[0x25]) << 0x10 | zx.d(r8[0x26]) << 8 | zx.d(r8[0x27])
        uint32_t r11_5 =
            zx.d(r8[0x28]) << 0x18 | zx.d(r8[0x29]) << 0x10 | zx.d(r8[0x2a]) << 8 | zx.d(r8[0x2b])
        uint32_t rdx_29 =
            zx.d(r8[0x2c]) << 0x18 | zx.d(r8[0x2d]) << 0x10 | zx.d(r8[0x2e]) << 8 | zx.d(r8[0x2f])
        uint32_t rdx_34 =
            zx.d(r8[0x30]) << 0x18 | zx.d(r8[0x31]) << 0x10 | zx.d(r8[0x32]) << 8 | zx.d(r8[0x33])
        uint32_t rdi_5 =
            zx.d(r8[0x34]) << 0x18 | zx.d(r8[0x35]) << 0x10 | zx.d(r8[0x36]) << 8 | zx.d(r8[0x37])
        uint32_t rdx_39 =
            zx.d(r8[0x38]) << 0x18 | zx.d(r8[0x39]) << 0x10 | zx.d(r8[0x3a]) << 8 | zx.d(r8[0x3b])
        uint32_t rdx_44 =
            zx.d(r8[0x3c]) << 0x18 | zx.d(r8[0x3d]) << 0x10 | zx.d(r8[0x3e]) << 8 | zx.d(r8[0x3f])
        int32_t rdx_46 = rol.d(*arg1, 0xc)
        int32_t r9_4 = rol.d(r9_1 + 0x79cc4519 + rdx_46, 7)
        int32_t r14_4 = (r10_5 ^ rbx_5) + (r9_4 ^ rdx_46) + var_50_1 + (var_64_1 ^ r14_1 ^ *arg1)
        int32_t rdx_52 = (var_60_1 ^ var_5c_1 ^ var_4c_1) + var_48_1 + r9_4 + rbx_5
        uint32_t r8_6 = rol.d(rdi_5, 0xf)
        int32_t r10_7 = rol.d(var_58_1, 9)
        int32_t rsi_4 = ror.d(rdx_52, 0xf) ^ rol.d(rdx_52, 9) ^ rdx_52
        int32_t rbx_7 = ror.d(var_4c_1, 0xd)
        uint32_t rax_89 = r8_6 ^ r13_5 ^ rbx_5
        int32_t r11_6 = *arg1
        uint32_t r9_6 =
            rbx_5 ^ rol.d(rax_89, 0xf) ^ ror.d(rax_89, 9) ^ rol.d(rdx_14, 7) ^ r8_6 ^ r11_5 ^ r13_5
        int32_t rdx_61 = rol.d(r14_4, 0xc)
        int32_t r9_9 = rol.d(rsi_4 - 0xc6775ce + rdx_61, 7)
        int32_t r15_7 = (r15_5 ^ rbp_5) + (r9_9 ^ rdx_61) + var_64_1 + (r14_4 ^ r10_7 ^ r11_6)
        uint32_t r8_11 = rol.d(rdx_39, 0xf)
        int32_t rdx_67 = (var_60_1 ^ rsi_4 ^ rbx_7) + var_5c_1 + r9_9 + rbp_5
        int32_t rdi_7 = ror.d(var_60_1, 0xd)
        int32_t r11_7 = rol.d(r11_6, 9)
        int32_t rbp_9 = ror.d(rdx_67, 0xf) ^ rol.d(rdx_67, 9) ^ rdx_67
        uint32_t rax_101 = r8_11 ^ rdx_19 ^ rbp_5
        uint32_t var_9c_2 = rbp_5 ^ rol.d(rax_101, 0xf) ^ ror.d(rax_101, 9) ^ rol.d(r10_5, 7)
            ^ r8_11 ^ rdx_29 ^ rdx_19
        int32_t rdx_76 = rol.d(r15_7, 0xc)
        int32_t r14_5 = rol.d(r14_4, 9)
        int32_t r9_12 = rol.d(rbp_9 - 0x18ceeb9b + rdx_76, 7)
        int32_t rsi_5 = ror.d(rsi_4, 0xd)
        uint32_t r8_16 = rol.d(rdx_44, 0xf)
        int32_t r12_7 = (r12_5 ^ rdx_9) + (r9_12 ^ rdx_76) + r10_7 + (r15_7 ^ r14_4 ^ r11_7)
        int32_t rdx_82 = (rsi_4 ^ rbp_9 ^ rdi_7) + r9_12 + rdx_9 + rbx_7
        int32_t r10_11 = ror.d(rdx_82, 0xf) ^ rol.d(rdx_82, 9) ^ rdx_82
        uint32_t rax_113 = r8_16 ^ rdx_24 ^ rdx_9
        uint32_t rbx_9 = rdx_9 ^ rol.d(rax_113, 0xf) ^ ror.d(rax_113, 9) ^ rol.d(r15_5, 7) ^ r8_16
            ^ rdx_34 ^ rdx_24
        int32_t rdx_91 = rol.d(r12_7, 0xc)
        int32_t r9_15 = rol.d(r10_11 - 0x319dd735 + rdx_91, 7)
        int32_t r15_8 = rol.d(r15_7, 9)
        uint32_t r8_21 = rol.d(r9_6, 0xf)
        int32_t rbp_10 = ror.d(rbp_9, 0xd)
        int32_t rdx_97 = (rsi_5 ^ rbp_9 ^ r10_11) + r9_15 + rdx_14 + rdi_7
        int32_t r13_7 = (r13_5 ^ rdx_14) + (r9_15 ^ rdx_91) + r11_7 + (r12_7 ^ r15_7 ^ r14_5)
        int32_t r11_11 = ror.d(rdx_97, 0xf) ^ rol.d(rdx_97, 9) ^ rdx_97
        uint32_t rax_125 = r8_21 ^ r11_5 ^ rdx_14
        uint32_t rbx_11 = rdx_14 ^ rol.d(rax_125, 0xf) ^ ror.d(rax_125, 9) ^ rol.d(r12_5, 7) ^ r8_21
            ^ rdi_5 ^ r11_5
        int32_t r12_8 = rol.d(r12_7, 9)
        int32_t rdx_106 = rol.d(r13_7, 0xc)
        int32_t r9_18 = rol.d(r11_11 - 0x633bae69 + rdx_106, 7)
        uint32_t r8_26 = rol.d(var_9c_2, 0xf)
        int32_t r10_12 = ror.d(r10_11, 0xd)
        int32_t rdx_112 = (rbp_10 ^ r10_11 ^ r11_11) + r9_18 + r10_5 + rsi_5
        int32_t r14_8 = (rdx_19 ^ r10_5) + (r9_18 ^ rdx_106) + r14_5 + (r13_7 ^ r12_7 ^ r15_8)
        int32_t rbx_15 = ror.d(rdx_112, 0xf) ^ rol.d(rdx_112, 9) ^ rdx_112
        uint32_t rax_137 = r8_26 ^ rdx_29 ^ r10_5
        uint32_t rdi_9 = r10_5 ^ rol.d(rax_137, 0xf) ^ ror.d(rax_137, 9) ^ rol.d(r13_5, 7) ^ r8_26
            ^ rdx_39 ^ rdx_29
        int32_t r13_8 = rol.d(r13_7, 9)
        int32_t rdx_121 = rol.d(r14_8, 0xc)
        int32_t r9_21 = rol.d(rbx_15 + 0x3988a32f + rdx_121, 7)
        int32_t r11_12 = ror.d(r11_11, 0xd)
        int32_t rdx_127 = (rbx_15 ^ r10_12 ^ r11_11) + r9_21 + r15_5 + rbp_10
        uint32_t r8_31 = rol.d(rbx_9, 0xf)
        int32_t rsi_8 = (rdx_24 ^ r15_5) + (r9_21 ^ rdx_121) + r15_8 + (r14_8 ^ r13_7 ^ r12_8)
        int32_t rdi_13 = ror.d(rdx_127, 0xf) ^ rol.d(rdx_127, 9) ^ rdx_127
        uint32_t rax_149 = r8_31 ^ rdx_34 ^ r15_5
        uint32_t r15_10 = r15_5 ^ rol.d(rax_149, 0xf) ^ ror.d(rax_149, 9) ^ rol.d(rdx_19, 7) ^ r8_31
            ^ rdx_44 ^ rdx_34
        int32_t r14_9 = rol.d(r14_8, 9)
        int32_t rdx_136 = rol.d(rsi_8, 0xc)
        int32_t r9_24 = rol.d(rdi_13 + 0x7311465e + rdx_136, 7)
        int32_t rbp_13 = (r11_5 ^ r12_5) + (r9_24 ^ rdx_136) + r12_8 + (rsi_8 ^ r14_8 ^ r13_8)
        int32_t rdx_142 = (rbx_15 ^ rdi_13 ^ r11_12) + r9_24 + r12_5 + r10_12
        int32_t rbx_16 = ror.d(rbx_15, 0xd)
        int32_t rsi_9 = rol.d(rsi_8, 9)
        int32_t r10_16 = ror.d(rdx_142, 0xf) ^ rol.d(rdx_142, 9) ^ rdx_142
        uint32_t rdx_144 = rol.d(rbx_11, 0xf)
        uint32_t rax_161 = rdx_144 ^ rdi_5 ^ r12_5
        int32_t rdx_146 = rol.d(rbp_13, 0xc)
        uint32_t r9_32 = rol.d(rax_161, 0xf) ^ ror.d(rax_161, 9) ^ rol.d(rdx_24, 7) ^ rdx_144
            ^ rdi_5 ^ r12_5 ^ r9_6
        int32_t r9_35 = rol.d(r10_16 - 0x19dd7344 + rdx_146, 7)
        int32_t r15_14 = (rdx_29 ^ r13_5) + (r9_35 ^ rdx_146) + r13_8 + (rbp_13 ^ rsi_8 ^ r14_9)
        int32_t rdi_14 = ror.d(rdi_13, 0xd)
        int32_t rdx_152 = (rbx_16 ^ rdi_13 ^ r10_16) + r9_35 + r13_5 + r11_12
        int32_t r11_16 = ror.d(rdx_152, 0xf) ^ rol.d(rdx_152, 9) ^ rdx_152
        uint32_t rdx_154 = rol.d(rdi_9, 0xf)
        uint32_t rax_173 = rdx_154 ^ rdx_39 ^ r13_5
        int32_t rdx_156 = rol.d(r15_14, 0xc)
        uint32_t r9_43 = rol.d(rax_173, 0xf) ^ ror.d(rax_173, 9) ^ rol.d(r11_5, 7) ^ rdx_154
            ^ rdx_39 ^ r13_5 ^ var_9c_2
        int32_t r9_46 = rol.d(r11_16 - 0x33bae687 + rdx_156, 7)
        int32_t rbp_14 = rol.d(rbp_13, 9)
        int32_t r10_17 = ror.d(r10_16, 0xd)
        int32_t r14_12 = (rdx_34 ^ rdx_19) + (r9_46 ^ rdx_156) + r14_9 + (r15_14 ^ rbp_13 ^ rsi_9)
        int32_t rdx_162 = (rdi_14 ^ r10_16 ^ r11_16) + r9_46 + rdx_19 + rbx_16
        int32_t r15_15 = rol.d(r15_14, 9)
        int32_t rbx_20 = ror.d(rdx_162, 0xf) ^ rol.d(rdx_162, 9) ^ rdx_162
        uint32_t rdx_164 = rol.d(r15_10, 0xf)
        uint32_t rax_185 = rdx_164 ^ rdx_44 ^ rdx_19
        int32_t rdx_166 = rol.d(r14_12, 0xc)
        uint32_t r9_54 = rol.d(rax_185, 0xf) ^ ror.d(rax_185, 9) ^ rol.d(rdx_29, 7) ^ rdx_164
            ^ rdx_44 ^ rdx_19 ^ rbx_9
        int32_t r9_57 = rol.d(rbx_20 - 0x6775cd0d + rdx_166, 7)
        int32_t rsi_12 = (rdi_5 ^ rdx_24) + (r9_57 ^ rdx_166) + rsi_9 + (r14_12 ^ r15_14 ^ rbp_14)
        int32_t r11_17 = ror.d(r11_16, 0xd)
        int32_t rdx_172 = (rbx_20 ^ r10_17 ^ r11_16) + r9_57 + rdx_24 + rdi_14
        int32_t rdi_18 = ror.d(rdx_172, 0xf) ^ rol.d(rdx_172, 9) ^ rdx_172
        uint32_t rdx_174 = rol.d(r9_32, 0xf)
        uint32_t rax_197 = rdx_174 ^ rdx_24 ^ r9_6
        uint32_t r8_51 = rol.d(rax_197, 0xf) ^ ror.d(rax_197, 9) ^ rol.d(rdx_34, 7) ^ rdx_174
            ^ rdx_24 ^ rbx_11 ^ r9_6
        int32_t rdx_176 = rol.d(rsi_12, 0xc)
        int32_t r9_60 = rol.d(rdi_18 + 0x311465e7 + rdx_176, 7)
        int32_t r14_13 = rol.d(r14_12, 9)
        int32_t rbp_17 = (rdx_39 ^ r11_5) + (r9_60 ^ rdx_176) + rbp_14 + (rsi_12 ^ r14_12 ^ r15_15)
        int32_t rbx_21 = ror.d(rbx_20, 0xd)
        int32_t rdx_182 = (rbx_20 ^ rdi_18 ^ r11_17) + r9_60 + r11_5 + r10_17
        int32_t r10_21 = ror.d(rdx_182, 0xf) ^ rol.d(rdx_182, 9) ^ rdx_182
        uint32_t rdx_184 = rol.d(r9_43, 0xf)
        uint32_t rax_209 = rdx_184 ^ r11_5 ^ var_9c_2
        int32_t rdx_186 = rol.d(rbp_17, 0xc)
        uint32_t r8_62 = rol.d(rax_209, 0xf) ^ ror.d(rax_209, 9) ^ rol.d(rdi_5, 7) ^ rdx_184 ^ r11_5
            ^ rdi_9 ^ var_9c_2
        int32_t r9_63 = rol.d(r10_21 + 0x6228cbce + rdx_186, 7)
        int32_t rsi_13 = rol.d(rsi_12, 9)
        int32_t r15_18 = (rdx_44 ^ rdx_29) + (r9_63 ^ rdx_186) + r15_15 + (rbp_17 ^ rsi_12 ^ r14_13)
        int32_t rdi_19 = ror.d(rdi_18, 0xd)
        int32_t rdx_192 = (rbx_21 ^ rdi_18 ^ r10_21) + r9_63 + rdx_29 + r11_17
        int32_t r11_21 = ror.d(rdx_192, 0xf) ^ rol.d(rdx_192, 9) ^ rdx_192
        uint32_t rdx_194 = rol.d(r9_54, 0xf)
        uint32_t rax_221 = rdx_194 ^ rdx_29 ^ rbx_9
        int32_t rdx_196 = rol.d(r15_18, 0xc)
        uint32_t r8_73 = rol.d(rax_221, 0xf) ^ ror.d(rax_221, 9) ^ rol.d(rdx_39, 7) ^ rdx_194
            ^ rdx_29 ^ r15_10 ^ rbx_9
        int32_t r9_66 = rol.d(r11_21 - 0x3bae6864 + rdx_196, 7)
        int32_t rbp_18 = rol.d(rbp_17, 9)
        int32_t r10_22 = ror.d(r10_21, 0xd)
        int32_t r14_16 = (rdx_34 ^ r9_6) + (r9_66 ^ rdx_196) + r14_13 + (r15_18 ^ rbp_17 ^ rsi_13)
        int32_t rdx_202 = (rdi_19 ^ r10_21 ^ r11_21) + r9_66 + rdx_34 + rbx_21
        int32_t rbx_25 = ror.d(rdx_202, 0xf) ^ rol.d(rdx_202, 9) ^ rdx_202
        uint32_t rdx_204 = rol.d(r8_51, 0xf)
        uint32_t rax_233 = rdx_204 ^ rdx_34 ^ rbx_11
        int32_t rdx_206 = rol.d(r14_16, 0xc)
        uint32_t r8_84 = rol.d(rax_233, 0xf) ^ ror.d(rax_233, 9) ^ rol.d(rdx_44, 7) ^ rdx_204
            ^ rdx_34 ^ r9_32 ^ rbx_11
        int32_t r9_69 = rol.d(rbx_25 - 0x775cd0c7 + rdx_206, 7)
        int32_t rsi_16 =
            (rdi_5 ^ var_9c_2) + (r9_69 ^ rdx_206) + rsi_13 + (r14_16 ^ r15_18 ^ rbp_18)
        int32_t r15_19 = rol.d(r15_18, 9)
        int32_t r11_22 = ror.d(r11_21, 0xd)
        int32_t rdx_212 = (rbx_25 ^ r10_22 ^ r11_21) + r9_69 + rdi_5 + rdi_19
        int32_t rdi_23 = ror.d(rdx_212, 0xf) ^ rol.d(rdx_212, 9) ^ rdx_212
        uint32_t rdx_214 = rol.d(r8_62, 0xf)
        uint32_t rax_245 = rdx_214 ^ rdi_5 ^ rdi_9
        uint32_t r8_95 = rol.d(rax_245, 0xf) ^ ror.d(rax_245, 9) ^ rol.d(r9_6, 7) ^ rdx_214 ^ rdi_5
            ^ r9_43 ^ rdi_9
        int32_t r14_17 = rol.d(r14_16, 9)
        int32_t r8_97 = rol.d(rsi_16, 0xc)
        int32_t rbx_26 = ror.d(rbx_25, 0xd)
        int32_t r9_72 = rol.d(rdi_23 + 0x11465e73 + r8_97, 7)
        int32_t r12_17 = (r9_72 ^ r8_97) + (rdx_39 ^ rbx_9) + rbp_18 + (rsi_16 ^ r14_16 ^ r15_19)
        int32_t rdx_223 = (rbx_25 ^ rdi_23 ^ r11_22) + r9_72 + rdx_39 + r10_22
        int32_t r10_26 = ror.d(rdx_223, 0xf) ^ rol.d(rdx_223, 9) ^ rdx_223
        uint32_t rdx_225 = rol.d(r8_73, 0xf)
        uint32_t rax_257 = rdx_225 ^ rdx_39 ^ r15_10
        uint32_t r8_105 = rol.d(rax_257, 0xf) ^ ror.d(rax_257, 9) ^ rol.d(var_9c_2, 7) ^ rdx_225
            ^ rdx_39 ^ r9_54 ^ r15_10
        int32_t r8_107 = rol.d(r12_17, 0xc)
        int32_t r9_75 = rol.d(r10_26 + 0x228cbce6 + r8_107, 7)
        int32_t rsi_17 = rol.d(rsi_16, 9)
        int32_t r15_22 = (r9_75 ^ r8_107) + (rdx_44 ^ rbx_11) + r15_19 + (r12_17 ^ rsi_16 ^ r14_17)
        int32_t rdi_24 = ror.d(rdi_23, 0xd)
        int32_t rdx_234 = (rbx_26 ^ rdi_23 ^ r10_26) + r9_75 + rdx_44 + r11_22
        int32_t rbp_22 = ror.d(rdx_234, 0xf) ^ rol.d(rdx_234, 9) ^ rdx_234
        uint32_t rdx_236 = rol.d(r8_84, 0xf)
        uint32_t rax_269 = rdx_236 ^ rdx_44 ^ r9_32
        uint32_t r8_115 = rol.d(rax_269, 0xf) ^ ror.d(rax_269, 9) ^ rol.d(rbx_9, 7) ^ rdx_236
            ^ rdx_44 ^ r8_51 ^ r9_32
        int32_t rdx_238 = rol.d(r15_22, 0xc)
        int32_t r9_78 = rol.d(rbp_22 - 0x62758579 + rdx_238, 7)
        int32_t r12_18 = rol.d(r12_17, 9)
        int32_t r14_20 = (rdi_9 ^ r9_6) + (r9_78 ^ rdx_238) + r14_17
            + (((r15_22 | r12_17) & rsi_17) | (r15_22 & r12_17))
        uint32_t r8_121 = rol.d(r8_95, 0xf)
        int32_t r10_27 = ror.d(r10_26, 0xd)
        int32_t rdx_245 = (((rdi_24 ^ r10_26) & rbp_22) ^ rdi_24) + r9_78 + r9_6 + rbx_26
        int32_t r11_26 = ror.d(rdx_245, 0xf) ^ rol.d(rdx_245, 9) ^ rdx_245
        uint32_t rax_283 = r8_121 ^ r9_43 ^ r9_6
        uint32_t rbx_28 = r9_6 ^ rol.d(rax_283, 0xf) ^ ror.d(rax_283, 9) ^ rol.d(rbx_11, 7) ^ r8_121
            ^ r8_62 ^ r9_43
        int32_t r15_23 = rol.d(r15_22, 9)
        int32_t rdx_254 = rol.d(r14_20, 0xc)
        int32_t r9_81 = rol.d(r11_26 + 0x3b14f50f + rdx_254, 7)
        int32_t rsi_20 = (r15_10 ^ var_9c_2) + (r9_81 ^ rdx_254) + rsi_17
            + (((r14_20 | r15_22) & r12_18) | (r14_20 & r15_22))
        uint32_t r8_127 = rol.d(r8_105, 0xf)
        int32_t rbp_23 = ror.d(rbp_22, 0xd)
        int32_t rdx_261 = (((r10_27 ^ rbp_22) & r11_26) ^ r10_27) + r9_81 + var_9c_2 + rdi_24
        int32_t rbx_32 = ror.d(rdx_261, 0xf) ^ rol.d(rdx_261, 9) ^ rdx_261
        uint32_t rax_297 = r8_127 ^ r9_54 ^ var_9c_2
        uint32_t rdi_26 = var_9c_2 ^ rol.d(rax_297, 0xf) ^ ror.d(rax_297, 9) ^ rol.d(rdi_9, 7)
            ^ r8_127 ^ r8_73 ^ r9_54
        int32_t rdx_270 = rol.d(rsi_20, 0xc)
        int32_t r9_84 = rol.d(rbx_32 + 0x7629ea1e + rdx_270, 7)
        int32_t r12_21 = (r9_32 ^ rbx_9) + (r9_84 ^ rdx_270) + r12_18
            + (((rsi_20 | r14_20) & r15_23) | (rsi_20 & r14_20))
        uint32_t r8_133 = rol.d(r8_115, 0xf)
        int32_t r11_27 = ror.d(r11_26, 0xd)
        int32_t r14_21 = rol.d(r14_20, 9)
        int32_t rdx_277 = (((r11_26 ^ rbp_23) & rbx_32) ^ rbp_23) + r9_84 + rbx_9 + r10_27
        int32_t r10_31 = ror.d(rdx_277, 0xf) ^ rol.d(rdx_277, 9) ^ rdx_277
        uint32_t rax_311 = r8_133 ^ r8_51 ^ rbx_9
        uint32_t rdi_28 = rbx_9 ^ rol.d(rax_311, 0xf) ^ ror.d(rax_311, 9) ^ rol.d(r15_10, 7)
            ^ r8_133 ^ r8_84 ^ r8_51
        int32_t rsi_21 = rol.d(rsi_20, 9)
        int32_t rdx_286 = rol.d(r12_21, 0xc)
        int32_t r9_87 = rol.d(r10_31 - 0x13ac2bc4 + rdx_286, 7)
        uint32_t r8_139 = rol.d(rbx_28, 0xf)
        int32_t r15_26 = (r9_43 ^ rbx_11) + (r9_87 ^ rdx_286) + r15_23
            + (((r12_21 | rsi_20) & r14_21) | (r12_21 & rsi_20))
        int32_t rdx_293 = (((r11_27 ^ rbx_32) & r10_31) ^ r11_27) + r9_87 + rbx_11 + rbp_23
        int32_t rbx_33 = ror.d(rbx_32, 0xd)
        int32_t rdi_32 = ror.d(rdx_293, 0xf) ^ rol.d(rdx_293, 9) ^ rdx_293
        uint32_t rax_325 = r8_139 ^ r8_62 ^ rbx_11
        uint32_t rbp_25 = rbx_11 ^ rol.d(rax_325, 0xf) ^ ror.d(rax_325, 9) ^ rol.d(r9_32, 7)
            ^ r8_139 ^ r8_95 ^ r8_62
        int32_t rdx_302 = rol.d(r15_26, 0xc)
        int32_t r9_90 = rol.d(rdi_32 - 0x27585787 + rdx_302, 7)
        int32_t r12_22 = rol.d(r12_21, 9)
        int32_t r10_32 = ror.d(r10_31, 0xd)
        uint32_t r8_145 = rol.d(rdi_26, 0xf)
        int32_t rbp_28 = (r9_54 ^ rdi_9) + (r9_90 ^ rdx_302) + r14_21
            + (((r15_26 | r12_21) & rsi_21) | (r15_26 & r12_21))
        int32_t rdx_309 = (((rbx_33 ^ r10_31) & rdi_32) ^ rbx_33) + r9_90 + rdi_9 + r11_27
        int32_t r11_31 = ror.d(rdx_309, 0xf) ^ rol.d(rdx_309, 9) ^ rdx_309
        uint32_t rax_339 = r8_145 ^ r8_73 ^ rdi_9
        uint32_t var_a4_3 = rdi_9 ^ rol.d(rax_339, 0xf) ^ ror.d(rax_339, 9) ^ rol.d(r9_43, 7)
            ^ r8_145 ^ r8_105 ^ r8_73
        int32_t r15_27 = rol.d(r15_26, 9)
        int32_t rdx_318 = rol.d(rbp_28, 0xc)
        int32_t r9_93 = rol.d(r11_31 - 0x4eb0af0d + rdx_318, 7)
        int32_t rdi_33 = ror.d(rdi_32, 0xd)
        int32_t rdx_325 = (((r10_32 ^ rdi_32) & r11_31) ^ r10_32) + r9_93 + r15_10 + rbx_33
        int32_t rsi_24 = (r8_51 ^ r15_10) + (r9_93 ^ rdx_318) + rsi_21
            + (((rbp_28 | r15_26) & r12_22) | (rbp_28 & r15_26))
        uint32_t r8_151 = rol.d(rdi_28, 0xf)
        int32_t rbx_37 = ror.d(rdx_325, 0xf) ^ rol.d(rdx_325, 9) ^ rdx_325
        uint32_t rax_353 = r8_151 ^ r8_84 ^ r15_10
        uint32_t arg_20 = r15_10 ^ rol.d(rax_353, 0xf) ^ ror.d(rax_353, 9) ^ rol.d(r9_54, 7)
            ^ r8_151 ^ r8_115 ^ r8_84
        int32_t rbp_29 = rol.d(rbp_28, 9)
        int32_t rdx_334 = rol.d(rsi_24, 0xc)
        int32_t r9_96 = rol.d(rbx_37 + 0x629ea1e7 + rdx_334, 7)
        int32_t r11_32 = ror.d(r11_31, 0xd)
        int32_t r14_24 = (r8_62 ^ r9_32) + (r9_96 ^ rdx_334) + r12_22
            + (((rsi_24 | rbp_28) & r15_27) | (rsi_24 & rbp_28))
        int32_t rdx_341 = (((r11_31 ^ rdi_33) & rbx_37) ^ rdi_33) + r9_96 + r9_32 + r10_32
        int32_t r10_36 = ror.d(rdx_341, 0xf) ^ rol.d(rdx_341, 9) ^ rdx_341
        uint32_t rdx_343 = rol.d(rbp_25, 0xf)
        uint32_t rax_367 = rdx_343 ^ r8_95 ^ r9_32
        int32_t rdx_345 = rol.d(r14_24, 0xc)
        uint32_t r9_104 = rol.d(rax_367, 0xf) ^ ror.d(rax_367, 9) ^ rol.d(r8_51, 7) ^ rdx_343
            ^ r8_95 ^ r9_32 ^ rbx_28
        int32_t r9_107 = rol.d(r10_36 - 0x3ac2bc32 + rdx_345, 7)
        int32_t rsi_25 = rol.d(rsi_24, 9)
        int32_t r15_30 = (r8_73 ^ r9_43) + (r9_107 ^ rdx_345) + r15_27
            + (((r14_24 | rsi_24) & rbp_29) | (r14_24 & rsi_24))
        int32_t rbx_38 = ror.d(rbx_37, 0xd)
        int32_t rdx_352 = (((r11_32 ^ rbx_37) & r10_36) ^ r11_32) + r9_107 + r9_43 + rdi_33
        int32_t rdi_37 = ror.d(rdx_352, 0xf) ^ rol.d(rdx_352, 9) ^ rdx_352
        uint32_t rdx_354 = rol.d(var_a4_3, 0xf)
        uint32_t rax_381 = rdx_354 ^ r8_105 ^ r9_43
        int32_t r14_25 = rol.d(r14_24, 9)
        uint32_t r9_115 = rol.d(rax_381, 0xf) ^ ror.d(rax_381, 9) ^ rol.d(r8_62, 7) ^ rdx_354
            ^ r8_105 ^ r9_43 ^ rdi_26
        int32_t rdx_356 = rol.d(r15_30, 0xc)
        int32_t r9_118 = rol.d(rdi_37 - 0x75857863 + rdx_356, 7)
        int32_t r10_37 = ror.d(r10_36, 0xd)
        int32_t rbp_32 = (r8_84 ^ r9_54) + (r9_118 ^ rdx_356) + rbp_29
            + (((r15_30 | r14_24) & rsi_25) | (r15_30 & r14_24))
        int32_t rdx_363 = (((rbx_38 ^ r10_36) & rdi_37) ^ rbx_38) + r9_118 + r9_54 + r11_32
        int32_t r11_36 = ror.d(rdx_363, 0xf) ^ rol.d(rdx_363, 9) ^ rdx_363
        uint32_t rdx_365 = rol.d(arg_20, 0xf)
        uint32_t rax_395 = rdx_365 ^ r8_115 ^ r9_54
        int32_t r15_31 = rol.d(r15_30, 9)
        uint32_t r9_126 = rol.d(rax_395, 0xf) ^ ror.d(rax_395, 9) ^ rol.d(r8_73, 7) ^ rdx_365
            ^ r8_115 ^ r9_54 ^ rdi_28
        int32_t rdx_367 = rol.d(rbp_32, 0xc)
        int32_t r9_129 = rol.d(r11_36 + 0x14f50f3b + rdx_367, 7)
        int32_t rdi_38 = ror.d(rdi_37, 0xd)
        int32_t rsi_28 = (r8_95 ^ r8_51) + (r9_129 ^ rdx_367) + rsi_25
            + (((rbp_32 | r15_30) & r14_25) | (rbp_32 & r15_30))
        int32_t rdx_374 = (((r10_37 ^ rdi_37) & r11_36) ^ r10_37) + r9_129 + r8_51 + rbx_38
        int32_t rbx_42 = ror.d(rdx_374, 0xf) ^ rol.d(rdx_374, 9) ^ rdx_374
        uint32_t rdx_376 = rol.d(r9_104, 0xf)
        uint32_t rax_409 = rdx_376 ^ r8_51 ^ rbx_28
        uint32_t r8_175 = rol.d(rax_409, 0xf) ^ ror.d(rax_409, 9) ^ rol.d(r8_84, 7) ^ rdx_376
            ^ r8_51 ^ rbp_25 ^ rbx_28
        int32_t r8_177 = rol.d(rsi_28, 0xc)
        int32_t r9_132 = rol.d(rbx_42 + 0x29ea1e76 + r8_177, 7)
        int32_t r14_28 = (r8_105 ^ r8_62) + (r8_177 ^ r9_132) + r14_25
            + (((rsi_28 | rbp_32) & r15_31) | (rsi_28 & rbp_32))
        int32_t r11_37 = ror.d(r11_36, 0xd)
        int32_t rbp_33 = rol.d(rbp_32, 9)
        int32_t rdx_387 = (((r11_36 ^ rdi_38) & rbx_42) ^ rdi_38) + r9_132 + r8_62 + r10_37
        int32_t r10_41 = ror.d(rdx_387, 0xf) ^ rol.d(rdx_387, 9) ^ rdx_387
        uint32_t rdx_389 = rol.d(r9_115, 0xf)
        uint32_t rax_419 = rdx_389 ^ r8_62 ^ rdi_26
        uint32_t r8_188 = rol.d(rax_419, 0xf) ^ ror.d(rax_419, 9) ^ rol.d(r8_95, 7) ^ rdx_389
            ^ r8_62 ^ var_a4_3 ^ rdi_26
        int32_t rdx_391 = rol.d(r14_28, 0xc)
        int32_t r9_135 = rol.d(r10_41 + 0x53d43cec + rdx_391, 7)
        int32_t rsi_29 = rol.d(rsi_28, 9)
        int32_t rbx_43 = ror.d(rbx_42, 0xd)
        int32_t r15_34 = (r8_115 ^ r8_73) + (r9_135 ^ rdx_391) + r15_31
            + (((rsi_28 | r14_28) & rbp_33) | (rsi_28 & r14_28))
        int32_t rdx_398 = (((r11_37 ^ rbx_42) & r10_41) ^ r11_37) + r9_135 + r8_73 + rdi_38
        int32_t rdi_42 = ror.d(rdx_398, 0xf) ^ rol.d(rdx_398, 9) ^ rdx_398
        uint32_t rdx_400 = rol.d(r9_126, 0xf)
        uint32_t rax_433 = rdx_400 ^ r8_73 ^ rdi_28
        uint32_t r8_200 = rol.d(rax_433, 0xf) ^ ror.d(rax_433, 9) ^ rol.d(r8_105, 7) ^ rdx_400
            ^ r8_73 ^ arg_20 ^ rdi_28
        int32_t rdx_402 = rol.d(r15_34, 0xc)
        int32_t r9_138 = rol.d(rdi_42 - 0x58578628 + rdx_402, 7)
        int32_t r14_29 = rol.d(r14_28, 9)
        int32_t r10_42 = ror.d(r10_41, 0xd)
        int32_t r13_16 = (r8_84 ^ rbx_28) + (r9_138 ^ rdx_402) + rbp_33
            + (((r15_34 | r14_28) & rsi_29) | (r15_34 & r14_28))
        int32_t rdx_409 = (((rbx_43 ^ r10_41) & rdi_42) ^ rbx_43) + r9_138 + r8_84 + r11_37
        int32_t rbp_37 = ror.d(rdx_409, 0xf) ^ rol.d(rdx_409, 9) ^ rdx_409
        uint32_t rdx_411 = rol.d(r8_175, 0xf)
        uint32_t rax_447 = rdx_411 ^ r8_84 ^ rbp_25
        uint32_t r8_212 = rol.d(rax_447, 0xf) ^ ror.d(rax_447, 9) ^ rol.d(r8_115, 7) ^ rdx_411
            ^ r8_84 ^ r9_104 ^ rbp_25
        int32_t rdx_413 = rol.d(r13_16, 0xc)
        int32_t r9_141 = rol.d(rbp_37 + 0x4f50f3b1 + rdx_413, 7)
        int32_t r15_35 = rol.d(r15_34, 9)
        int32_t rdi_43 = ror.d(rdi_42, 0xd)
        int32_t rdx_420 = (((r10_42 ^ rdi_42) & rbp_37) ^ r10_42) + r9_141 + r8_95 + rbx_43
        int32_t r12_30 = (r8_95 ^ rdi_26) + (r9_141 ^ rdx_413) + rsi_29
            + (((r13_16 | r15_34) & r14_29) | (r13_16 & r15_34))
        int32_t r11_41 = ror.d(rdx_420, 0xf) ^ rol.d(rdx_420, 9) ^ rdx_420
        uint32_t rdx_422 = rol.d(r8_188, 0xf)
        uint32_t rax_461 = rdx_422 ^ r8_95 ^ var_a4_3
        uint32_t r8_224 = rol.d(rax_461, 0xf) ^ ror.d(rax_461, 9) ^ rol.d(rbx_28, 7) ^ rdx_422
            ^ r8_95 ^ r9_115 ^ var_a4_3
        int32_t rdx_424 = rol.d(r12_30, 0xc)
        int32_t r13_17 = rol.d(r13_16, 9)
        int32_t r9_144 = rol.d(r11_41 - 0x615e189e + rdx_424, 7)
        int32_t rbp_38 = ror.d(rbp_37, 0xd)
        int32_t r14_32 = (r8_105 ^ rdi_28) + (r9_144 ^ rdx_424) + r14_29
            + (((r12_30 | r13_16) & r15_35) | (r12_30 & r13_16))
        int32_t rdx_431 = (((rbp_37 ^ rdi_43) & r11_41) ^ rdi_43) + r9_144 + r8_105 + r10_42
        int32_t rbx_47 = ror.d(rdx_431, 0xf) ^ rol.d(rdx_431, 9) ^ rdx_431
        uint32_t rdx_433 = rol.d(r8_200, 0xf)
        uint32_t rax_475 = rdx_433 ^ r8_105 ^ arg_20
        int32_t rdx_435 = rol.d(r14_32, 0xc)
        uint32_t r8_236 = rol.d(rax_475, 0xf) ^ ror.d(rax_475, 9) ^ rol.d(rdi_26, 7) ^ rdx_433
            ^ r8_105 ^ r9_126 ^ arg_20
        int32_t r9_147 = rol.d(rbx_47 + 0x3d43cec5 + rdx_435, 7)
        int32_t r12_31 = rol.d(r12_30, 9)
        int32_t r15_38 = (r8_115 ^ rbp_25) + (r9_147 ^ rdx_435) + r15_35
            + (((r14_32 | r12_30) & r13_17) | (r14_32 & r12_30))
        int32_t r11_42 = ror.d(r11_41, 0xd)
        int32_t rdx_442 = (((rbp_38 ^ r11_41) & rbx_47) ^ rbp_38) + r9_147 + r8_115 + rdi_43
        int32_t rdi_47 = ror.d(rdx_442, 0xf) ^ rol.d(rdx_442, 9) ^ rdx_442
        uint32_t rdx_444 = rol.d(r8_212, 0xf)
        uint32_t rax_489 = rdx_444 ^ r8_115 ^ r9_104
        uint32_t r8_248 = rol.d(rax_489, 0xf) ^ ror.d(rax_489, 9) ^ rol.d(rdi_28, 7) ^ rdx_444
            ^ r8_115 ^ r8_175 ^ r9_104
        int32_t rdx_446 = rol.d(r15_38, 0xc)
        int32_t r9_150 = rol.d(rdi_47 + 0x7a879d8a + rdx_446, 7)
        int32_t r14_33 = rol.d(r14_32, 9)
        int32_t rbx_48 = ror.d(rbx_47, 0xd)
        uint32_t r8_254 = rol.d(r8_224, 0xf)
        int32_t rsi_34 = (var_a4_3 ^ rbx_28) + (r9_150 ^ rdx_446) + r13_17
            + (((r15_38 | r14_32) & r12_31) | (r15_38 & r14_32))
        int32_t rdx_453 = (((r11_42 ^ rbx_47) & rdi_47) ^ r11_42) + r9_150 + rbx_28 + rbp_38
        int32_t r10_47 = ror.d(rdx_453, 0xf) ^ rol.d(rdx_453, 9) ^ rdx_453
        uint32_t rax_503 = r8_254 ^ r9_115 ^ rbx_28
        uint32_t rbp_40 = rbx_28 ^ rol.d(rax_503, 0xf) ^ ror.d(rax_503, 9) ^ rol.d(rbp_25, 7)
            ^ r8_254 ^ r8_188 ^ r9_115
        int32_t r15_39 = rol.d(r15_38, 9)
        int32_t rdx_462 = rol.d(rsi_34, 0xc)
        int32_t r9_153 = rol.d(r10_47 - 0xaf0c4ec + rdx_462, 7)
        uint32_t r8_260 = rol.d(r8_236, 0xf)
        int32_t rdi_48 = ror.d(rdi_47, 0xd)
        int32_t rbp_43 = (arg_20 ^ rdi_26) + (r9_153 ^ rdx_462) + r12_31
            + (((rsi_34 | r15_38) & r14_33) | (rsi_34 & r15_38))
        int32_t rdx_469 = (((rbx_48 ^ rdi_47) & r10_47) ^ rbx_48) + r9_153 + rdi_26 + r11_42
        int32_t r11_46 = ror.d(rdx_469, 0xf) ^ rol.d(rdx_469, 9) ^ rdx_469
        uint32_t rax_517 = r8_260 ^ r9_126 ^ rdi_26
        uint32_t r12_33 = rdi_26 ^ rol.d(rax_517, 0xf) ^ ror.d(rax_517, 9) ^ rol.d(var_a4_3, 7)
            ^ r8_260 ^ r8_200 ^ r9_126
        int32_t rdx_478 = rol.d(rbp_43, 0xc)
        int32_t r9_156 = rol.d(r11_46 - 0x15e189d7 + rdx_478, 7)
        int32_t r14_36 = (r9_104 ^ rdi_28) + (r9_156 ^ rdx_478) + r14_33
            + (((rbp_43 | rsi_34) & r15_39) | (rbp_43 & rsi_34))
        uint32_t r8_266 = rol.d(r8_248, 0xf)
        int32_t r10_48 = ror.d(r10_47, 0xd)
        int32_t rsi_35 = rol.d(rsi_34, 9)
        int32_t rdx_485 = (((r10_47 ^ rdi_48) & r11_46) ^ rdi_48) + r9_156 + rdi_28 + rbx_48
        int32_t rbx_52 = ror.d(rdx_485, 0xf) ^ rol.d(rdx_485, 9) ^ rdx_485
        uint32_t rax_531 = r8_266 ^ r8_175 ^ rdi_28
        uint32_t r12_35 = rdi_28 ^ rol.d(rax_531, 0xf) ^ ror.d(rax_531, 9) ^ rol.d(arg_20, 7)
            ^ r8_266 ^ r8_212 ^ r8_175
        int32_t rbp_44 = rol.d(rbp_43, 9)
        int32_t rdx_494 = rol.d(r14_36, 0xc)
        int32_t r9_159 = rol.d(rbx_52 - 0x2bc313ad + rdx_494, 7)
        int32_t r15_42 = (r9_115 ^ rbp_25) + (r9_159 ^ rdx_494) + r15_39
            + (((r14_36 | rbp_43) & rsi_35) | (r14_36 & rbp_43))
        uint32_t r8_272 = rol.d(rbp_40, 0xf)
        int32_t r11_47 = ror.d(r11_46, 0xd)
        int32_t rdx_501 = (((r10_48 ^ r11_46) & rbx_52) ^ r10_48) + r9_159 + rbp_25 + rdi_48
        int32_t rdi_52 = ror.d(rdx_501, 0xf) ^ rol.d(rdx_501, 9) ^ rdx_501
        uint32_t rax_545 = r8_272 ^ r8_188 ^ rbp_25
        uint32_t r9_161 = rbp_25 ^ rol.d(rax_545, 0xf) ^ ror.d(rax_545, 9) ^ rol.d(r9_104, 7)
            ^ r8_272 ^ r8_224 ^ r8_188
        int32_t rdx_510 = rol.d(r15_42, 0xc)
        int32_t r9_164 = rol.d(rdi_52 - 0x57862759 + rdx_510, 7)
        int32_t r14_37 = rol.d(r14_36, 9)
        uint32_t r8_278 = rol.d(r12_33, 0xf)
        int32_t rsi_38 = (r9_126 ^ var_a4_3) + (r9_164 ^ rdx_510) + rsi_35
            + (((r15_42 | r14_36) & rbp_44) | (r15_42 & r14_36))
        int32_t rdx_517 = (((r11_47 ^ rbx_52) & rdi_52) ^ r11_47) + r9_164 + var_a4_3 + r10_48
        int32_t rbx_53 = ror.d(rbx_52, 0xd)
        int32_t r10_52 = ror.d(rdx_517, 0xf) ^ rol.d(rdx_517, 9) ^ rdx_517
        uint32_t rax_559 = r8_278 ^ r8_200 ^ var_a4_3
        uint32_t var_a4_4 = var_a4_3 ^ rol.d(rax_559, 0xf) ^ ror.d(rax_559, 9) ^ rol.d(r9_115, 7)
            ^ r8_278 ^ r8_236 ^ r8_200
        int32_t r15_43 = rol.d(r15_42, 9)
        int32_t rdx_526 = rol.d(rsi_38, 0xc)
        int32_t r9_167 = rol.d(r10_52 + 0x50f3b14f + rdx_526, 7)
        int32_t rbp_47 = (r8_175 ^ arg_20) + (r9_167 ^ rdx_526) + rbp_44
            + (((rsi_38 | r15_42) & r14_37) | (rsi_38 & r15_42))
        int32_t rdx_533 = (((rbx_53 ^ rdi_52) & r10_52) ^ rbx_53) + r9_167 + arg_20 + r11_47
        int32_t rdi_53 = ror.d(rdi_52, 0xd)
        uint32_t r8_284 = rol.d(r12_35, 0xf)
        int32_t r11_51 = ror.d(rdx_533, 0xf) ^ rol.d(rdx_533, 9) ^ rdx_533
        uint32_t rax_573 = r8_284 ^ r8_212 ^ arg_20
        arg_20 ^=
            rol.d(rax_573, 0xf) ^ ror.d(rax_573, 9) ^ rol.d(r9_126, 7) ^ r8_284 ^ r8_248 ^ r8_212
        int32_t rsi_39 = rol.d(rsi_38, 9)
        int32_t rdx_542 = rol.d(rbp_47, 0xc)
        int32_t r9_170 = rol.d(r11_51 - 0x5e189d62 + rdx_542, 7)
        int32_t r10_53 = ror.d(r10_52, 0xd)
        int32_t r14_40 = (r8_188 ^ r9_104) + (r9_170 ^ rdx_542) + r14_37
            + (((rbp_47 | rsi_38) & r15_43) | (rbp_47 & rsi_38))
        int32_t rdx_549 = (((r10_52 ^ rdi_53) & r11_51) ^ rdi_53) + r9_170 + r9_104 + rbx_53
        int32_t rbx_57 = ror.d(rdx_549, 0xf) ^ rol.d(rdx_549, 9) ^ rdx_549
        uint32_t rdx_551 = rol.d(r9_161, 0xf)
        uint32_t rax_587 = rdx_551 ^ r8_224 ^ r9_104
        int32_t rdx_553 = rol.d(r14_40, 0xc)
        uint32_t r9_178 = rol.d(rax_587, 0xf) ^ ror.d(rax_587, 9) ^ rol.d(r8_175, 7) ^ rdx_551
            ^ r8_224 ^ r9_104 ^ rbp_40
        int32_t r9_181 = rol.d(rbx_57 + 0x43cec53d + rdx_553, 7)
        int32_t rbp_48 = rol.d(rbp_47, 9)
        int32_t r11_52 = ror.d(r11_51, 0xd)
        int32_t r15_46 = (r8_200 ^ r9_115) + (r9_181 ^ rdx_553) + r15_43
            + (((r14_40 | rbp_47) & rsi_39) | (r14_40 & rbp_47))
        int32_t rdx_560 = (((r10_53 ^ r11_51) & rbx_57) ^ r10_53) + r9_181 + r9_115 + rdi_53
        int32_t rdi_57 = ror.d(rdx_560, 0xf) ^ rol.d(rdx_560, 9) ^ rdx_560
        uint32_t rdx_562 = rol.d(var_a4_4, 0xf)
        uint32_t rax_601 = rdx_562 ^ r8_236 ^ r9_115
        int32_t r14_41 = rol.d(r14_40, 9)
        uint32_t r12_45 = rol.d(rax_601, 0xf) ^ ror.d(rax_601, 9) ^ rol.d(r8_188, 7) ^ rdx_562
            ^ r8_236 ^ r9_115 ^ r12_33
        int32_t rdx_564 = rol.d(r15_46, 0xc)
        int32_t r9_185 = rol.d(rdi_57 - 0x78627586 + rdx_564, 7)
        int32_t rbx_58 = ror.d(rbx_57, 0xd)
        int32_t rsi_42 = (r8_212 ^ r9_126) + (r9_185 ^ rdx_564) + rsi_39
            + (((r15_46 | r14_40) & rbp_48) | (r15_46 & r14_40))
        int32_t rdx_571 = (((r11_52 ^ rbx_57) & rdi_57) ^ r11_52) + r9_185 + r9_126 + r10_53
        int32_t r10_57 = ror.d(rdx_571, 0xf) ^ rol.d(rdx_571, 9) ^ rdx_571
        uint32_t rdx_573 = rol.d(arg_20, 0xf)
        uint32_t rax_615 = rdx_573 ^ r8_248 ^ r9_126
        int32_t rdx_575 = rol.d(rsi_42, 0xc)
        uint32_t rax_623 = rol.d(rax_615, 0xf) ^ ror.d(rax_615, 9) ^ rol.d(r8_200, 7) ^ rdx_573
            ^ r8_248 ^ r9_126 ^ r12_35
        int32_t r9_189 = rol.d(r10_57 + 0xf3b14f5 + rdx_575, 7)
        int32_t r15_47 = rol.d(r15_46, 9)
        int32_t rdi_58 = ror.d(rdi_57, 0xd)
        int32_t rbp_51 = (r8_224 ^ r8_175) + (r9_189 ^ rdx_575) + rbp_48
            + (((rsi_42 | r15_46) & r14_41) | (rsi_42 & r15_46))
        int32_t rdx_582 = (((rbx_58 ^ rdi_57) & r10_57) ^ rbx_58) + r9_189 + r8_175 + r11_52
        int32_t r11_56 = ror.d(rdx_582, 0xf) ^ rol.d(rdx_582, 9) ^ rdx_582
        uint32_t rdx_584 = rol.d(r9_178, 0xf)
        uint32_t rax_634 = rdx_584 ^ r8_175 ^ rbp_40
        uint32_t r8_308 = rol.d(rax_634, 0xf) ^ ror.d(rax_634, 9) ^ rol.d(r8_212, 7) ^ rdx_584
            ^ r8_175 ^ r9_161 ^ rbp_40
        int32_t rdx_586 = rol.d(rbp_51, 0xc)
        int32_t r9_192 = rol.d(r11_56 + 0x1e7629ea + rdx_586, 7)
        int32_t r14_44 = (r8_236 ^ r8_188) + (r9_192 ^ rdx_586) + r14_41
            + (((rbp_51 | rsi_42) & r15_47) | (rbp_51 & rsi_42))
        int32_t rsi_43 = rol.d(rsi_42, 9)
        int32_t r10_58 = ror.d(r10_57, 0xd)
        int32_t rdx_593 = (((r10_57 ^ rdi_58) & r11_56) ^ rdi_58) + r9_192 + r8_188 + rbx_58
        int32_t rbx_62 = ror.d(rdx_593, 0xf) ^ rol.d(rdx_593, 9) ^ rdx_593
        uint32_t rdx_595 = rol.d(r12_45, 0xf)
        uint32_t rax_648 = rdx_595 ^ r8_188 ^ r12_33
        uint32_t r8_320 = rol.d(rax_648, 0xf) ^ ror.d(rax_648, 9) ^ rol.d(r8_224, 7) ^ rdx_595
            ^ r8_188 ^ var_a4_4 ^ r12_33
        int32_t rdx_597 = rol.d(r14_44, 0xc)
        int32_t r9_195 = rol.d(rbx_62 + 0x3cec53d4 + rdx_597, 7)
        int32_t rbp_52 = rol.d(rbp_51, 9)
        int32_t r11_57 = ror.d(r11_56, 0xd)
        int32_t r15_50 = (r8_248 ^ r8_200) + (r9_195 ^ rdx_597) + r15_47
            + (((r14_44 | rbp_51) & rsi_43) | (r14_44 & rbp_51))
        int32_t rdx_604 = (((r10_58 ^ r11_56) & rbx_62) ^ r10_58) + r9_195 + r8_200 + rdi_58
        int32_t rdi_62 = ror.d(rdx_604, 0xf) ^ rol.d(rdx_604, 9) ^ rdx_604
        uint32_t rdx_606 = rol.d(rax_623, 0xf)
        uint32_t rax_662 = rdx_606 ^ r8_200 ^ r12_35
        uint32_t r8_332 = rol.d(rax_662, 0xf) ^ ror.d(rax_662, 9) ^ rol.d(r8_236, 7) ^ rdx_606
            ^ r8_200 ^ arg_20 ^ r12_35
        int32_t rdx_608 = rol.d(r15_50, 0xc)
        int32_t r9_198 = rol.d(rdi_62 + 0x79d8a7a8 + rdx_608, 7)
        int32_t r14_45 = rol.d(r14_44, 9)
        int32_t rbx_63 = ror.d(rbx_62, 0xd)
        int32_t r13_22 = (r8_212 ^ rbp_40) + (r9_198 ^ rdx_608) + rsi_43
            + (((r15_50 | r14_44) & rbp_52) | (r15_50 & r14_44))
        int32_t rdx_615 = (((r11_57 ^ rbx_62) & rdi_62) ^ r11_57) + r9_198 + r8_212 + r10_58
        int32_t rsi_47 = ror.d(rdx_615, 0xf) ^ rol.d(rdx_615, 9) ^ rdx_615
        uint32_t rdx_617 = rol.d(r8_308, 0xf)
        uint32_t rax_676 = rdx_617 ^ r8_212 ^ r9_161
        uint32_t r8_344 = rol.d(rax_676, 0xf) ^ ror.d(rax_676, 9) ^ rol.d(r8_248, 7) ^ rdx_617
            ^ r8_212 ^ r9_178 ^ r9_161
        int32_t rdx_619 = rol.d(r13_22, 0xc)
        int32_t r9_201 = rol.d(rsi_47 - 0xc4eb0b0 + rdx_619, 7)
        int32_t rdx_626 = (((rbx_63 ^ rdi_62) & rsi_47) ^ rbx_63) + r9_201 + r8_224 + r11_57
        int32_t r12_50 = (r8_224 ^ r12_33) + (r9_201 ^ rdx_619) + rbp_52
            + (((r13_22 | r15_50) & r14_45) | (r13_22 & r15_50))
        int32_t r15_51 = rol.d(r15_50, 9)
        int32_t rdi_63 = ror.d(rdi_62, 0xd)
        int32_t r10_62 = ror.d(rdx_626, 0xf) ^ rol.d(rdx_626, 9) ^ rdx_626
        uint32_t rdx_628 = rol.d(r8_320, 0xf)
        uint32_t rax_690 = rdx_628 ^ r8_224 ^ var_a4_4
        uint32_t r8_356 = rol.d(rax_690, 0xf) ^ ror.d(rax_690, 9) ^ rol.d(rbp_40, 7) ^ rdx_628
            ^ r8_224 ^ r12_45 ^ var_a4_4
        int32_t rdx_630 = rol.d(r12_50, 0xc)
        int32_t r9_204 = rol.d(r10_62 - 0x189d615f + rdx_630, 7)
        int32_t r13_23 = rol.d(r13_22, 9)
        int32_t rsi_48 = ror.d(rsi_47, 0xd)
        int32_t rbp_56 = (r8_236 ^ r12_35) + (r9_204 ^ rdx_630) + r14_45
            + (((r12_50 | r13_22) & r15_51) | (r12_50 & r13_22))
        int32_t rdx_637 = (((rsi_47 ^ rdi_63) & r10_62) ^ rdi_63) + r9_204 + r8_236 + rbx_63
        int32_t r11_61 = ror.d(rdx_637, 0xf) ^ rol.d(rdx_637, 9) ^ rdx_637
        uint32_t rdx_639 = rol.d(r8_332, 0xf)
        uint32_t rax_704 = rdx_639 ^ r8_236 ^ arg_20
        int32_t rdx_641 = rol.d(rbp_56, 0xc)
        uint32_t r8_368 = rol.d(rax_704, 0xf) ^ ror.d(rax_704, 9) ^ rol.d(r12_33, 7) ^ rdx_639
            ^ r8_236 ^ rax_623 ^ arg_20
        int32_t r9_207 = rol.d(r11_61 - 0x313ac2bd + rdx_641, 7)
        int32_t r12_51 = rol.d(r12_50, 9)
        int32_t r10_63 = ror.d(r10_62, 0xd)
        int32_t r14_49 = (r8_248 ^ r9_161) + (r9_207 ^ rdx_641) + r15_51
            + (((rbp_56 | r12_50) & r13_23) | (rbp_56 & r12_50))
        int32_t rdx_648 = (((rsi_48 ^ r10_62) & r11_61) ^ rsi_48) + r9_207 + r8_248 + rdi_63
        int32_t rbx_67 = ror.d(rdx_648, 0xf) ^ rol.d(rdx_648, 9) ^ rdx_648
        uint32_t rdx_650 = rol.d(r8_344, 0xf)
        uint32_t rax_718 = rdx_650 ^ r8_248 ^ r9_178
        uint32_t r8_380 = rol.d(rax_718, 0xf) ^ ror.d(rax_718, 9) ^ rol.d(r12_35, 7) ^ rdx_650
            ^ r8_248 ^ r8_308 ^ r9_178
        int32_t rdx_652 = rol.d(r14_49, 0xc)
        int32_t r9_210 = rol.d(rbx_67 - 0x62758579 + rdx_652, 7)
        int32_t rbp_57 = rol.d(rbp_56, 9)
        int32_t r11_62 = ror.d(r11_61, 0xd)
        int32_t r15_55 = (var_a4_4 ^ rbp_40) + (r9_210 ^ rdx_652) + r13_23
            + (((r14_49 | rbp_56) & r12_51) | (r14_49 & rbp_56))
        int32_t rdx_659 = (((r10_63 ^ r11_61) & rbx_67) ^ r10_63) + r9_210 + rbp_40 + rsi_48
        int32_t rdi_67 = ror.d(rdx_659, 0xf) ^ rol.d(rdx_659, 9) ^ rdx_659
        uint32_t r8_386 = rol.d(r8_356, 0xf)
        uint32_t rax_732 = r8_386 ^ r12_45 ^ rbp_40
        uint32_t r9_212 = rbp_40 ^ rol.d(rax_732, 0xf) ^ ror.d(rax_732, 9) ^ rol.d(r9_161, 7)
            ^ r8_386 ^ r8_320 ^ r12_45
        int32_t r14_50 = rol.d(r14_49, 9)
        int32_t rdx_668 = rol.d(r15_55, 0xc)
        int32_t r9_215 = rol.d(rdi_67 + 0x3b14f50f + rdx_668, 7)
        int32_t rbx_68 = ror.d(rbx_67, 0xd)
        int32_t rsi_51 = (arg_20 ^ r12_33) + (r9_215 ^ rdx_668) + r12_51
            + (((r15_55 | r14_49) & rbp_57) | (r15_55 & r14_49))
        int32_t rdx_675 = (((r11_62 ^ rbx_67) & rdi_67) ^ r11_62) + r9_215 + r12_33 + r10_63
        int32_t r10_67 = ror.d(rdx_675, 0xf) ^ rol.d(rdx_675, 9) ^ rdx_675
        int32_t r15_56 = rol.d(r15_55, 9)
        int32_t rdx_677 = rol.d(rsi_51, 0xc)
        int32_t r9_218 = rol.d(r10_67 + 0x7629ea1e + rdx_677, 7)
        int32_t rdi_68 = ror.d(rdi_67, 0xd)
        int32_t rbp_60 = (r9_178 ^ r12_35) + (r9_218 ^ rdx_677) + rbp_57
            + (((rsi_51 | r15_55) & r14_50) | (rsi_51 & r15_55))
        int32_t rdx_684 = (((rdi_67 ^ rbx_68) & r10_67) ^ rbx_68) + r9_218 + r12_35 + r11_62
        int32_t r11_66 = ror.d(rdx_684, 0xf) ^ rol.d(rdx_684, 9) ^ rdx_684
        int32_t rdx_686 = rol.d(rbp_60, 0xc)
        int32_t rsi_52 = rol.d(rsi_51, 9)
        int32_t r9_221 = rol.d(r11_66 - 0x13ac2bc4 + rdx_686, 7)
        int32_t r10_68 = ror.d(r10_67, 0xd)
        int32_t r14_53 = (r12_45 ^ r9_161) + (r9_221 ^ rdx_686) + r14_50
            + (((rbp_60 | rsi_51) & r15_56) | (rbp_60 & rsi_51))
        int32_t rdx_693 = (((rdi_68 ^ r10_67) & r11_66) ^ rdi_68) + r9_221 + r9_161 + rbx_68
        int32_t rbx_72 = ror.d(rdx_693, 0xf) ^ rol.d(rdx_693, 9) ^ rdx_693
        int32_t rbp_61 = rol.d(rbp_60, 9)
        int32_t rdx_695 = rol.d(r14_53, 0xc)
        int32_t r9_224 = rol.d(rbx_72 - 0x27585787 + rdx_695, 7)
        int32_t r11_67 = ror.d(r11_66, 0xd)
        int32_t r15_59 = (rax_623 ^ var_a4_4) + (r9_224 ^ rdx_695) + r15_56
            + (((r14_53 | rbp_60) & rsi_52) | (r14_53 & rbp_60))
        int32_t rdx_702 = (((r10_68 ^ r11_66) & rbx_72) ^ r10_68) + r9_224 + var_a4_4 + rdi_68
        int32_t rdi_72 = ror.d(rdx_702, 0xf) ^ rol.d(rdx_702, 9) ^ rdx_702
        int32_t rdx_704 = rol.d(r15_59, 0xc)
        int32_t r9_227 = rol.d(rdi_72 - 0x4eb0af0d + rdx_704, 7)
        int32_t r14_54 = rol.d(r14_53, 9)
        int32_t rsi_55 = (r8_308 ^ arg_20) + (r9_227 ^ rdx_704) + rsi_52
            + (((r14_53 | r15_59) & rbp_61) | (r14_53 & r15_59))
        int32_t rbx_73 = ror.d(rbx_72, 0xd)
        int32_t rdx_711 = (((r11_67 ^ rbx_72) & rdi_72) ^ r11_67) + r9_227 + arg_20 + r10_68
        int32_t r10_72 = ror.d(rdx_711, 0xf) ^ rol.d(rdx_711, 9) ^ rdx_711
        int32_t r15_60 = rol.d(r15_59, 9)
        int32_t rdx_713 = rol.d(rsi_55, 0xc)
        int32_t r9_230 = rol.d(r10_72 + 0x629ea1e7 + rdx_713, 7)
        int32_t rdi_73 = ror.d(rdi_72, 0xd)
        int32_t rdx_720 = (((rdi_72 ^ rbx_73) & r10_72) ^ rbx_73) + r9_230 + r9_178 + r11_67
        int32_t rbp_64 = (r8_320 ^ r9_178) + (r9_230 ^ rdx_713) + rbp_61
            + (((rsi_55 | r15_59) & r14_54) | (rsi_55 & r15_59))
        int32_t r11_71 = ror.d(rdx_720, 0xf) ^ rol.d(rdx_720, 9) ^ rdx_720
        int32_t rdx_722 = rol.d(rbp_64, 0xc)
        int32_t rsi_56 = rol.d(rsi_55, 9)
        int32_t r9_233 = rol.d(r11_71 - 0x3ac2bc32 + rdx_722, 7)
        int32_t r14_57 = (r8_332 ^ r12_45) + (r9_233 ^ rdx_722) + r14_54
            + (((rbp_64 | rsi_55) & r15_60) | (rbp_64 & rsi_55))
        int32_t rdx_729 = (((rdi_73 ^ r10_72) & r11_71) ^ rdi_73) + r9_233 + r12_45 + rbx_73
        int32_t r10_73 = ror.d(r10_72, 0xd)
        int32_t rbx_77 = ror.d(rdx_729, 0xf) ^ rol.d(rdx_729, 9) ^ rdx_729
        int32_t rdx_731 = rol.d(r14_57, 0xc)
        int32_t rbp_65 = rol.d(rbp_64, 9)
        int32_t r9_236 = rol.d(rbx_77 - 0x75857863 + rdx_731, 7)
        int32_t r11_72 = ror.d(r11_71, 0xd)
        int32_t r15_63 = (r8_344 ^ rax_623) + (r9_236 ^ rdx_731) + r15_60
            + (((r14_57 | rbp_64) & rsi_56) | (r14_57 & rbp_64))
        int32_t rdx_738 = (((r10_73 ^ r11_71) & rbx_77) ^ r10_73) + r9_236 + rax_623 + rdi_73
        int32_t rdi_77 = ror.d(rdx_738, 0xf) ^ rol.d(rdx_738, 9) ^ rdx_738
        int32_t rdx_740 = rol.d(r15_63, 0xc)
        int32_t r14_58 = rol.d(r14_57, 9)
        int32_t r9_239 = rol.d(rdi_77 + 0x14f50f3b + rdx_740, 7)
        int32_t rbx_78 = ror.d(rbx_77, 0xd)
        int32_t r12_55 = (r8_356 ^ r8_308) + (r9_239 ^ rdx_740) + rsi_56
            + (((r15_63 | r14_57) & rbp_65) | (r15_63 & r14_57))
        int32_t rdx_747 = (((r11_72 ^ rbx_77) & rdi_77) ^ r11_72) + r9_239 + r8_308 + r10_73
        int32_t rsi_60 = ror.d(rdx_747, 0xf) ^ rol.d(rdx_747, 9) ^ rdx_747
        int32_t rdx_749 = rol.d(r12_55, 0xc)
        int32_t r9_242 = rol.d(rsi_60 + 0x29ea1e76 + rdx_749, 7)
        int32_t r15_64 = rol.d(r15_63, 9)
        int32_t rdi_78 = ror.d(rdi_77, 0xd)
        int32_t r13_27 = (r8_368 ^ r8_320) + (r9_242 ^ rdx_749) + rbp_65
            + (((r12_55 | r15_63) & r14_58) | (r12_55 & r15_63))
        int32_t rdx_756 = (((rdi_77 ^ rbx_78) & rsi_60) ^ rbx_78) + r9_242 + r8_320 + r11_72
        int32_t r11_76 = ror.d(rdx_756, 0xf) ^ rol.d(rdx_756, 9) ^ rdx_756
        int32_t r12_56 = rol.d(r12_55, 9)
        int32_t rdx_758 = rol.d(r13_27, 0xc)
        int32_t r9_245 = rol.d(r11_76 + 0x53d43cec + rdx_758, 7)
        int32_t rsi_61 = ror.d(rsi_60, 0xd)
        int32_t rbp_68 = (r8_380 ^ r8_332) + (r9_245 ^ rdx_758) + r14_58
            + (((r13_27 | r12_55) & r15_64) | (r13_27 & r12_55))
        int32_t rdx_765 = (((rdi_78 ^ rsi_60) & r11_76) ^ rdi_78) + r9_245 + r8_332 + rbx_78
        int32_t r14_62 = ror.d(rdx_765, 0xf) ^ rol.d(rdx_765, 9) ^ rdx_765
        int32_t rdx_767 = rol.d(rbp_68, 0xc)
        int32_t r9_248 = rol.d(r14_62 - 0x58578628 + rdx_767, 7)
        int32_t rbx_81 = (r8_344 ^ r9_212) + (r9_248 ^ rdx_767) + r15_64
            + (((rbp_68 | r13_27) & r12_56) | (rbp_68 & r13_27))
        int32_t rdx_774 = (((rsi_61 ^ r11_76) & r14_62) ^ rsi_61) + r9_248 + r8_344 + rdi_78
        int32_t r11_77 = ror.d(r11_76, 0xd)
        int32_t r13_28 = rol.d(r13_27, 9)
        int32_t r9_250 = rol.d(rbx_81, 0xc)
        int32_t r15_68 = ror.d(rdx_774, 0xf) ^ rol.d(rdx_774, 9) ^ rdx_774
        uint32_t rdx_776 = rol.d(r8_368, 0xf)
        uint32_t rax_834 = rdx_776 ^ rax_623 ^ r12_33
        int32_t r10_76 = rol.d(r15_68 + 0x4f50f3b1 + r9_250, 7)
        int32_t rdx_782 = (((rbx_81 | rbp_68) & r13_28) | (rbx_81 & rbp_68)) + r12_56 + (
            rol.d(rax_834, 0xf) ^ ror.d(rax_834, 9) ^ rol.d(var_a4_4, 7) ^ rdx_776 ^ r8_356 ^ r8_332
            ^ rax_623 ^ r12_33)
        int32_t r12_58 = rol.d(rbp_68, 9)
        int32_t rbp_71 = (r10_76 ^ r9_250) + rdx_782
        int32_t r9_252 = rol.d(rbp_71, 0xc)
        int32_t r14_63 = ror.d(r14_62, 0xd)
        int32_t rdx_789 = (((r11_77 ^ r14_62) & r15_68) ^ r11_77) + r10_76 + r8_356 + rsi_61
        int32_t rsi_65 = ror.d(rdx_789, 0xf) ^ rol.d(rdx_789, 9) ^ rdx_789
        uint32_t rdx_791 = rol.d(r8_380, 0xf)
        uint32_t rax_844 = rdx_791 ^ r8_308 ^ r12_35
        int32_t r10_79 = rol.d(rsi_65 - 0x615e189e + r9_252, 7)
        int32_t rbx_82 = rol.d(rbx_81, 9)
        int32_t rdx_797 = (((rbp_71 | rbx_81) & r12_58) | (rbp_71 & rbx_81)) + r13_28 + (
            rol.d(rax_844, 0xf) ^ ror.d(rax_844, 9) ^ rol.d(arg_20, 7) ^ rdx_791 ^ r8_368 ^ r8_344
            ^ r8_308 ^ r12_35)
        int32_t rdi_81 = (r10_79 ^ r9_252) + rdx_797
        int32_t r15_69 = ror.d(r15_68, 0xd)
        int32_t r9_254 = rol.d(rdi_81, 0xc)
        int32_t rdx_804 = (((r15_68 ^ r14_63) & rsi_65) ^ r14_63) + r10_79 + r8_368 + r11_77
        uint32_t rax_853 = rol.d(r9_212, 0xf)
        int32_t rbx_86 = ror.d(rdx_804, 0xf) ^ rol.d(rdx_804, 9) ^ rdx_804
        uint32_t rax_855 = rax_853 ^ r8_320 ^ r9_161
        int32_t r10_82 = rol.d(rbx_86 + 0x3d43cec5 + r9_254, 7)
        int32_t r11_84 = (((r15_69 ^ rsi_65) & rbx_86) ^ r15_69) + r10_82 + r8_380 + r14_63
        int32_t rax_862 = var_58_1 ^ rdi_81
        var_58_1 = rax_862
        int32_t rdx_810 = (((rdi_81 | rbp_71) & rbx_82) | (rdi_81 & rbp_71)) + r12_58 + (
            rol.d(rax_855, 0xf) ^ ror.d(rax_855, 9) ^ rol.d(r9_178, 7) ^ rax_853 ^ r8_380 ^ r8_356
            ^ r8_320 ^ r9_161)
        arg1[1] = rax_862
        *arg1 ^= (r10_82 ^ r9_254) + rdx_810
        int32_t rax_864 = var_64_1 ^ rol.d(rbp_71, 9)
        var_64_1 = rax_864
        arg1[2] = rax_864
        int32_t rax_866 = var_50_1 ^ rbx_82
        var_50_1 = rax_866
        arg1[3] = rax_866
        r8 = &r8[0x40]
        r14_1 = var_58_1
        int32_t rax_870 = var_4c_1 ^ rbx_86
        var_4c_1 = rax_870
        r9_1 = ror.d(r11_84, 0xf) ^ rol.d(r11_84, 9) ^ var_60_1 ^ r11_84
        arg1[5] = rax_870
        int32_t rax_872 = var_5c_1 ^ ror.d(rsi_65, 0xd)
        var_60_1 = r9_1
        var_5c_1 = rax_872
        arg1[6] = rax_872
        int32_t rax_874 = var_48_1 ^ r15_69
        arg1[4] = r9_1
        var_48_1 = rax_874
        arg1[7] = rax_874
        i -= 1
    while (i != 0)

return i
