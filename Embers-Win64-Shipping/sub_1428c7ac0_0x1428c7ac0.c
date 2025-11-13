// 函数: sub_1428c7ac0
// 地址: 0x1428c7ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x68)
int32_t rbp = *arg1
char* r13 = arg2
int32_t r14 = arg1[1]
int32_t rbx = arg1[2]
int32_t r11 = arg1[3]
int32_t r10 = arg1[4]
int32_t result

while (true)
    uint32_t r8_4 = zx.d(*r13) << 0x18 | zx.d(r13[1]) << 0x10 | zx.d(r13[2]) << 8 | zx.d(r13[3])
    int32_t r14_1 = ror.d(r14, 2)
    uint32_t r9_5 = zx.d(r13[4]) << 0x18 | zx.d(r13[5]) << 0x10 | zx.d(r13[6]) << 8 | zx.d(r13[7])
    int32_t r8_6 = r10 + 0x5a827999 + (((r11 ^ rbx) & r14) ^ r11) + rol.d(rbp, 5) + r8_4
    int32_t rbp_1 = ror.d(rbp, 2)
    uint32_t r10_5 =
        zx.d(r13[8]) << 0x18 | zx.d(r13[9]) << 0x10 | zx.d(r13[0xa]) << 8 | zx.d(r13[0xb])
    int32_t r9_7 = r11 + 0x5a827999 + (((rbx ^ r14_1) & rbp) ^ rbx) + rol.d(r8_6, 5) + r9_5
    uint32_t r11_5 =
        zx.d(r13[0xc]) << 0x18 | zx.d(r13[0xd]) << 0x10 | zx.d(r13[0xe]) << 8 | zx.d(r13[0xf])
    int32_t r10_7 = rbx + 0x5a827999 + (((r14_1 ^ rbp_1) & r8_6) ^ r14_1) + rol.d(r9_7, 5) + r10_5
    int32_t r8_7 = ror.d(r8_6, 2)
    int32_t r9_8 = ror.d(r9_7, 2)
    uint32_t rbx_5 =
        zx.d(r13[0x10]) << 0x18 | zx.d(r13[0x11]) << 0x10 | zx.d(r13[0x12]) << 8 | zx.d(r13[0x13])
    int32_t r10_8 = ror.d(r10_7, 2)
    uint32_t rdi_5 =
        zx.d(r13[0x14]) << 0x18 | zx.d(r13[0x15]) << 0x10 | zx.d(r13[0x16]) << 8 | zx.d(r13[0x17])
    int32_t r11_8 = r11_5 + rol.d(r10_7, 5) + (((r8_7 ^ rbp_1) & r9_7) ^ rbp_1) + 0x5a827999 + r14_1
    int32_t rbx_8 = rbx_5 + rol.d(r11_8, 5) + (((r8_7 ^ r9_8) & r10_7) ^ r8_7) + 0x5a827999 + rbp_1
    uint32_t rsi_5 =
        zx.d(r13[0x18]) << 0x18 | zx.d(r13[0x19]) << 0x10 | zx.d(r13[0x1a]) << 8 | zx.d(r13[0x1b])
    int32_t r11_9 = ror.d(r11_8, 2)
    int32_t rdi_8 = rdi_5 + rol.d(rbx_8, 5) + (((r9_8 ^ r10_8) & r11_8) ^ r9_8) + 0x5a827999 + r8_7
    uint32_t r8_12 =
        zx.d(r13[0x1c]) << 0x18 | zx.d(r13[0x1d]) << 0x10 | zx.d(r13[0x1e]) << 8 | zx.d(r13[0x1f])
    int32_t rbx_9 = ror.d(rbx_8, 2)
    int32_t r9_9 = r9_8 + (((r10_8 ^ r11_9) & rbx_8) ^ r10_8) + rol.d(rdi_8, 5) + rsi_5 + 0x5a827999
    int32_t rdi_9 = ror.d(rdi_8, 2)
    uint32_t r14_6 =
        zx.d(r13[0x20]) << 0x18 | zx.d(r13[0x21]) << 0x10 | zx.d(r13[0x22]) << 8 | zx.d(r13[0x23])
    int32_t r9_10 = ror.d(r9_9, 2)
    int32_t rsi_13 =
        (((r11_9 ^ rbx_9) & rdi_8) ^ r11_9) + 0x5a827999 + rol.d(r9_9, 5) + r8_12 + r10_8
    uint32_t r8_17 =
        zx.d(r13[0x24]) << 0x18 | zx.d(r13[0x25]) << 0x10 | zx.d(r13[0x26]) << 8 | zx.d(r13[0x27])
    int32_t rsi_14 = ror.d(rsi_13, 2)
    int32_t rbp_7 =
        (((rbx_9 ^ rdi_9) & r9_9) ^ rbx_9) + rol.d(rsi_13, 5) + 0x5a827999 + r14_6 + r11_9
    uint32_t r10_13 =
        zx.d(r13[0x28]) << 0x18 | zx.d(r13[0x29]) << 0x10 | zx.d(r13[0x2a]) << 8 | zx.d(r13[0x2b])
    int32_t r8_19 =
        rbx_9 + 0x5a827999 + (((r9_10 ^ rdi_9) & rsi_13) ^ rdi_9) + rol.d(rbp_7, 5) + r8_17
    uint32_t r12_5 =
        zx.d(r13[0x2c]) << 0x18 | zx.d(r13[0x2d]) << 0x10 | zx.d(r13[0x2e]) << 8 | zx.d(r13[0x2f])
    int32_t rbp_8 = ror.d(rbp_7, 2)
    int32_t rbx_11 =
        rdi_9 + 0x5a827999 + (((r9_10 ^ rsi_14) & rbp_7) ^ r9_10) + rol.d(r8_19, 5) + r10_13
    int32_t r8_20 = ror.d(r8_19, 2)
    uint32_t r11_14 =
        zx.d(r13[0x30]) << 0x18 | zx.d(r13[0x31]) << 0x10 | zx.d(r13[0x32]) << 8 | zx.d(r13[0x33])
    int32_t rbx_12 = ror.d(rbx_11, 2)
    int32_t r10_19 =
        (((rsi_14 ^ rbp_8) & r8_19) ^ rsi_14) + rol.d(rbx_11, 5) + 0x5a827999 + r12_5 + r9_10
    uint32_t r15_5 =
        zx.d(r13[0x34]) << 0x18 | zx.d(r13[0x35]) << 0x10 | zx.d(r13[0x36]) << 8 | zx.d(r13[0x37])
    int32_t r11_17 =
        r11_14 + rol.d(r10_19, 5) + (((rbp_8 ^ r8_20) & rbx_11) ^ rbp_8) + rsi_14 + 0x5a827999
    uint32_t rdi_14 =
        zx.d(r13[0x38]) << 0x18 | zx.d(r13[0x39]) << 0x10 | zx.d(r13[0x3a]) << 8 | zx.d(r13[0x3b])
    int32_t r9_16 =
        (((r8_20 ^ rbx_12) & r10_19) ^ r8_20) + rol.d(r11_17, 5) + 0x5a827999 + r15_5 + rbp_8
    int32_t r10_20 = ror.d(r10_19, 2)
    int32_t r11_18 = ror.d(r11_17, 2)
    uint32_t rsi_20 =
        zx.d(r13[0x3c]) << 0x18 | zx.d(r13[0x3d]) << 0x10 | zx.d(r13[0x3e]) << 8 | zx.d(r13[0x3f])
    int32_t r8_21 =
        r8_20 + (((rbx_12 ^ r10_20) & r11_17) ^ rbx_12) + rol.d(r9_16, 5) + rdi_14 + 0x5a827999
    int32_t r9_17 = ror.d(r9_16, 2)
    uint32_t r13_6 = rol.d(r15_5 ^ r14_6 ^ r10_5 ^ r8_4, 1)
    int32_t rdi_21 =
        (((r11_18 ^ r10_20) & r9_16) ^ r10_20) + rol.d(r8_21, 5) + 0x5a827999 + rsi_20 + rbx_12
    uint32_t r14_11 = rol.d(rdi_14 ^ r8_17 ^ r11_5 ^ r9_5, 1)
    uint32_t rsi_24 = rol.d(rsi_20 ^ r10_13 ^ rbx_5 ^ r10_5, 1)
    int32_t r8_22 = ror.d(r8_21, 2)
    int32_t r10_23 =
        r10_20 + rol.d(rdi_21, 5) + (((r9_17 ^ r11_18) & r8_21) ^ r11_18) + 0x5a827999 + r13_6
    int32_t rdi_22 = ror.d(rdi_21, 2)
    int32_t r11_21 =
        r11_18 + rol.d(r10_23, 5) + (((r9_17 ^ r8_22) & rdi_21) ^ r9_17) + 0x5a827999 + r14_11
    int32_t rbx_18 =
        (((r8_22 ^ rdi_22) & r10_23) ^ r8_22) + rol.d(r11_21, 5) + r9_17 + 0x5a827999 + rsi_24
    int32_t r10_24 = ror.d(r10_23, 2)
    int32_t rbx_19 = ror.d(rbx_18, 2)
    uint32_t r12_9 = rol.d(r12_5 ^ rdi_5 ^ r11_5 ^ r13_6, 1)
    int32_t r11_22 = ror.d(r11_21, 2)
    uint32_t rbp_13 = rol.d(r11_14 ^ rsi_5 ^ rbx_5 ^ r14_11, 1)
    int32_t r8_25 =
        r8_22 + rol.d(rbx_18, 5) + (((rdi_22 ^ r10_24) & r11_21) ^ rdi_22) + 0x5a827999 + r12_9
    int32_t r8_26 = ror.d(r8_25, 2)
    int32_t r9_23 = (rbx_18 ^ r10_24 ^ r11_22) + rol.d(r8_25, 5) + rdi_22 + 0x6ed9eba1 + rbp_13
    uint32_t rdi_28 = rol.d(r15_5 ^ r8_12 ^ rdi_5 ^ rsi_24, 1)
    uint32_t r14_16 = rol.d(rdi_14 ^ r14_6 ^ rsi_5 ^ r12_9, 1)
    int32_t r10_27 = r10_24 + rol.d(r9_23, 5) + (rbx_19 ^ r8_25 ^ r11_22) + 0x6ed9eba1 + rdi_28
    uint32_t r15_10 = rol.d(rsi_20 ^ r8_17 ^ r8_12 ^ rbp_13, 1)
    int32_t r9_24 = ror.d(r9_23, 2)
    int32_t r11_25 = r11_22 + rol.d(r10_27, 5) + (rbx_19 ^ r8_26 ^ r9_23) + 0x6ed9eba1 + r14_16
    int32_t r10_28 = ror.d(r10_27, 2)
    int32_t rbx_22 = rbx_19 + rol.d(r11_25, 5) + (r8_26 ^ r9_24 ^ r10_27) + 0x6ed9eba1 + r15_10
    int32_t r11_26 = ror.d(r11_25, 2)
    int32_t rbx_23 = ror.d(rbx_22, 2)
    uint32_t rsi_29 = rol.d(r10_13 ^ r14_6 ^ rdi_28 ^ r13_6, 1)
    int32_t r8_29 = r8_26 + rol.d(rbx_22, 5) + (r9_24 ^ r10_28 ^ r11_25) + 0x6ed9eba1 + rsi_29
    uint32_t r13_11 = rol.d(r12_5 ^ r8_17 ^ r14_16 ^ r14_11, 1)
    int32_t r9_27 = r9_24 + rol.d(r8_29, 5) + (r10_28 ^ r11_26 ^ rbx_22) + 0x6ed9eba1 + r13_11
    uint32_t rax_155 = rol.d(r11_14 ^ r10_13 ^ r15_10 ^ rsi_24, 1)
    int32_t r8_30 = ror.d(r8_29, 2)
    int32_t r10_31 = r10_28 + rol.d(r9_27, 5) + (r8_29 ^ r11_26 ^ rbx_23) + rax_155 + 0x6ed9eba1
    int32_t r9_28 = ror.d(r9_27, 2)
    uint32_t rax_164 = rol.d(r15_5 ^ r12_5 ^ rsi_29 ^ r12_9, 1)
    int32_t r11_29 = r11_26 + rol.d(r10_31, 5) + (r8_30 ^ r9_27 ^ rbx_23) + rax_164 + 0x6ed9eba1
    int32_t r10_32 = ror.d(r10_31, 2)
    uint32_t rax_173 = rol.d(rdi_14 ^ r11_14 ^ r13_11 ^ rbp_13, 1)
    int32_t rbx_26 = rbx_23 + rol.d(r11_29, 5) + (r8_30 ^ r9_28 ^ r10_31) + rax_173 + 0x6ed9eba1
    uint32_t rax_182 = rol.d(rsi_20 ^ r15_5 ^ rax_155 ^ rdi_28, 1)
    int32_t r11_30 = ror.d(r11_29, 2)
    int32_t r8_33 = r8_30 + rol.d(rbx_26, 5) + (r9_28 ^ r10_32 ^ r11_29) + rax_182 + 0x6ed9eba1
    int32_t rbx_27 = ror.d(rbx_26, 2)
    uint32_t rax_191 = rol.d(rdi_14 ^ rax_164 ^ r14_16 ^ r13_6, 1)
    int32_t r9_31 = r9_28 + rol.d(r8_33, 5) + (r10_32 ^ r11_30 ^ rbx_26) + rax_191 + 0x6ed9eba1
    int32_t r8_34 = ror.d(r8_33, 2)
    uint32_t rax_200 = rol.d(rsi_20 ^ rax_173 ^ r15_10 ^ r14_11, 1)
    int32_t r10_35 = r10_32 + rol.d(r9_31, 5) + (r11_30 ^ rbx_27 ^ r8_33) + rax_200 + 0x6ed9eba1
    int32_t r9_32 = ror.d(r9_31, 2)
    uint32_t rax_209 = rol.d(rax_182 ^ rsi_29 ^ rsi_24 ^ r13_6, 1)
    int32_t r11_33 = r11_30 + rol.d(r10_35, 5) + (r9_31 ^ rbx_27 ^ r8_34) + rax_209 + 0x6ed9eba1
    uint32_t rax_218 = rol.d(rax_191 ^ r13_11 ^ r12_9 ^ r14_11, 1)
    int32_t rbx_30 = rbx_27 + rol.d(r11_33, 5) + (r9_32 ^ r10_35 ^ r8_34) + rax_218 + 0x6ed9eba1
    int32_t r10_36 = ror.d(r10_35, 2)
    uint32_t rax_227 = rol.d(rax_200 ^ rax_155 ^ rbp_13 ^ rsi_24, 1)
    int32_t r11_34 = ror.d(r11_33, 2)
    int32_t r8_37 = r8_34 + rol.d(rbx_30, 5) + (r9_32 ^ r10_36 ^ r11_33) + rax_227 + 0x6ed9eba1
    int32_t rbx_31 = ror.d(rbx_30, 2)
    uint32_t rax_236 = rol.d(rax_164 ^ rdi_28 ^ r12_9 ^ rax_209, 1)
    int32_t r9_35 = r9_32 + rol.d(r8_37, 5) + (r10_36 ^ r11_34 ^ rbx_30) + rax_236 + 0x6ed9eba1
    int32_t r8_38 = ror.d(r8_37, 2)
    uint32_t rax_245 = rol.d(rax_173 ^ r14_16 ^ rbp_13 ^ rax_218, 1)
    int32_t r10_39 = r10_36 + rol.d(r9_35, 5) + (r11_34 ^ rbx_31 ^ r8_37) + 0x6ed9eba1 + rax_245
    uint32_t rax_252 = rol.d(rax_182 ^ r15_10 ^ rdi_28 ^ rax_227, 1)
    int32_t r9_36 = ror.d(r9_35, 2)
    uint32_t rdi_33 = rol.d(rax_191 ^ rsi_29 ^ r14_16 ^ rax_236, 1)
    int32_t r11_37 = r11_34 + rol.d(r10_39, 5) + (rbx_31 ^ r8_38 ^ r9_35) + rax_252 + 0x6ed9eba1
    int32_t r10_40 = ror.d(r10_39, 2)
    int32_t rbx_34 = rbx_31 + rol.d(r11_37, 5) + (r10_39 ^ r8_38 ^ r9_36) + rdi_33 + 0x6ed9eba1
    int32_t r11_38 = ror.d(r11_37, 2)
    uint32_t rdi_39 = rol.d(rax_200 ^ r13_11 ^ r15_10 ^ rax_245, 1)
    int32_t rdi_40 = rdi_39 + (r10_40 ^ r11_37 ^ r9_36) + rol.d(rbx_34, 5) + r8_38 + 0x6ed9eba1
    uint32_t r15_15 = rol.d(rax_155 ^ rsi_29 ^ rax_252 ^ rax_209, 1)
    int32_t rbx_35 = ror.d(rbx_34, 2)
    uint32_t rax_268 = rol.d(rax_164 ^ r13_11 ^ rdi_33 ^ rax_218, 1)
    int32_t r9_38 = rol.d(rdi_40, 5) - 0x70e44324
        + (((r11_38 | rbx_34) & r10_40) | (r11_38 & rbx_34)) + r9_36 + r15_15
    int32_t rdi_41 = ror.d(rdi_40, 2)
    int32_t r10_42 = rol.d(r9_38, 5) - 0x70e44324
        + (((rbx_35 | rdi_40) & r11_38) | (rbx_35 & rdi_40)) + r10_40 + rax_268
    uint32_t rax_275 = rol.d(rax_173 ^ rax_155 ^ rdi_39 ^ rax_227, 1)
    int32_t r11_40 = rol.d(r10_42, 5) - 0x70e44324
        + (((rdi_41 | r9_38) & rbx_35) | (rdi_41 & r9_38)) + r11_38 + rax_275
    int32_t r9_39 = ror.d(r9_38, 2)
    uint32_t rax_282 = rol.d(rax_182 ^ rax_164 ^ r15_15 ^ rax_236, 1)
    int32_t r10_43 = ror.d(r10_42, 2)
    int32_t rbx_37 = rol.d(r11_40, 5) - 0x70e44324
        + (((r9_39 | r10_42) & rdi_41) | (r9_39 & r10_42)) + rbx_35 + rax_282
    uint32_t rax_289 = rol.d(rax_191 ^ rax_173 ^ rax_268 ^ rax_245, 1)
    int32_t r11_41 = ror.d(r11_40, 2)
    int32_t rdi_43 = rol.d(rbx_37, 5) - 0x70e44324
        + (((r11_40 | r10_43) & r9_39) | (r11_40 & r10_43)) + rdi_41 + rax_289
    uint32_t rax_296 = rol.d(rax_200 ^ rax_182 ^ rax_275 ^ rax_252, 1)
    int32_t rbx_38 = ror.d(rbx_37, 2)
    int32_t r9_41 = rol.d(rdi_43, 5) - 0x70e44324
        + (((r11_41 | rbx_37) & r10_43) | (r11_41 & rbx_37)) + r9_39 + rax_296
    uint32_t rax_303 = rol.d(rax_191 ^ rax_282 ^ rdi_33 ^ rax_209, 1)
    int32_t rdi_44 = ror.d(rdi_43, 2)
    int32_t r10_45 = rol.d(r9_41, 5) - 0x70e44324
        + (((rbx_38 | rdi_43) & r11_41) | (rbx_38 & rdi_43)) + r10_43 + rax_303
    uint32_t rax_310 = rol.d(rax_200 ^ rax_289 ^ rdi_39 ^ rax_218, 1)
    uint32_t rbp_18 = rol.d(rax_296 ^ r15_15 ^ rax_227 ^ rax_209, 1)
    int32_t r9_42 = ror.d(r9_41, 2)
    int32_t r11_43 = rol.d(r10_45, 5) - 0x70e44324
        + (((rdi_44 | r9_41) & rbx_38) | (rdi_44 & r9_41)) + r11_41 + rax_310
    uint32_t r14_22 = rol.d(rax_303 ^ rax_268 ^ rax_236 ^ rax_218, 1)
    uint32_t rsi_34 = rol.d(rax_282 ^ rax_252 ^ rax_236 ^ rbp_18, 1)
    int32_t r10_46 = ror.d(r10_45, 2)
    int32_t rbx_40 = rol.d(r11_43, 5) - 0x70e44324
        + (((r9_42 | r10_45) & rdi_44) | (r9_42 & r10_45)) + rbx_38 + rbp_18
    uint32_t rbp_23 = rol.d(rax_310 ^ rax_275 ^ rax_245 ^ rax_227, 1)
    int32_t r11_44 = ror.d(r11_43, 2)
    int32_t rdi_46 = rol.d(rbx_40, 5) - 0x70e44324
        + (((r10_46 | r11_43) & r9_42) | (r10_46 & r11_43)) + rdi_44 + r14_22
    int32_t rbx_41 = ror.d(rbx_40, 2)
    int32_t r9_44 = rol.d(rdi_46, 5) - 0x70e44324
        + (((rbx_40 | r11_44) & r10_46) | (rbx_40 & r11_44)) + r9_42 + rbp_23
    int32_t rdi_47 = ror.d(rdi_46, 2)
    int32_t r10_48 = rol.d(r9_44, 5) - 0x70e44324
        + (((rbx_41 | rdi_46) & r11_44) | (rbx_41 & rdi_46)) + r10_46 + rsi_34
    uint32_t r15_21 = rol.d(rax_289 ^ rdi_33 ^ rax_245 ^ r14_22, 1)
    int32_t r9_45 = ror.d(r9_44, 2)
    uint32_t r14_27 = rol.d(rax_296 ^ rdi_39 ^ rax_252 ^ rbp_23, 1)
    uint32_t rbp_28 = rol.d(rax_303 ^ r15_15 ^ rdi_33 ^ rsi_34, 1)
    uint32_t r12_16 = rol.d(rax_310 ^ rax_268 ^ rdi_39 ^ r15_21, 1)
    int32_t r11_46 = rol.d(r10_48, 5) - 0x70e44324
        + (((rdi_47 | r9_44) & rbx_41) | (rdi_47 & r9_44)) + r11_44 + r15_21
    int32_t r10_49 = ror.d(r10_48, 2)
    int32_t rbx_44 = rbx_41 + (((r9_45 | r10_48) & rdi_47) | (r9_45 & r10_48)) - 0x70e44324 + r14_27
        + rol.d(r11_46, 5)
    int32_t r11_47 = ror.d(r11_46, 2)
    int32_t rsi_37 = rol.d(rbx_44, 5) + (((r10_49 | r11_46) & r9_45) | (r10_49 & r11_46)) + rdi_47
        - 0x70e44324 + rbp_28
    int32_t rdi_51 = rol.d(rsi_37, 5) + (((r11_47 | rbx_44) & r10_49) | (r11_47 & rbx_44)) + r9_45
        - 0x70e44324 + r12_16
    int32_t rbx_45 = ror.d(rbx_44, 2)
    uint32_t r9_51 = rol.d(rax_275 ^ r15_15 ^ r14_27 ^ rbp_18, 1)
    int32_t rsi_38 = ror.d(rsi_37, 2)
    uint32_t r15_26 = rol.d(rax_282 ^ rax_268 ^ rbp_28 ^ r14_22, 1)
    uint32_t r14_32 = rol.d(rax_289 ^ rax_275 ^ r12_16 ^ rbp_23, 1)
    int32_t r10_51 = rol.d(rdi_51, 5) - 0x70e44324
        + (((rsi_37 | rbx_45) & r11_47) | (rsi_37 & rbx_45)) + r10_49 + r9_51
    uint32_t r13_17 = rol.d(rax_296 ^ rax_282 ^ r9_51 ^ rsi_34, 1)
    int32_t rdi_52 = ror.d(rdi_51, 2)
    int32_t r11_49 = rol.d(r10_51, 5) - 0x70e44324
        + (((rsi_38 | rdi_51) & rbx_45) | (rsi_38 & rdi_51)) + r11_47 + r15_26
    int32_t r10_52 = ror.d(r10_51, 2)
    int32_t rbx_47 = rol.d(r11_49, 5) - 0x70e44324
        + (((rdi_52 | r10_51) & rsi_38) | (rdi_52 & r10_51)) + rbx_45 + r14_32
    int32_t r9_54 = rol.d(rbx_47, 5) + (((r10_52 | r11_49) & rdi_52) | (r10_52 & r11_49))
        - 0x70e44324 + rsi_38 + r13_17
    int32_t r11_50 = ror.d(r11_49, 2)
    int32_t rbx_48 = ror.d(rbx_47, 2)
    uint32_t rbp_33 = rol.d(rax_303 ^ rax_289 ^ r15_26 ^ r15_21, 1)
    int32_t r8_77 = rol.d(r9_54, 5) + rdi_52 + (r10_52 ^ r11_50 ^ rbx_47) - 0x359d3e2a + rbp_33
    int32_t r9_55 = ror.d(r9_54, 2)
    uint32_t r15_31 = rol.d(rax_310 ^ rax_296 ^ r14_32 ^ r14_27, 1)
    uint32_t rdi_57 = rol.d(rax_310 ^ rbp_33 ^ r12_16 ^ r14_22, 1)
    int32_t r10_54 = r10_52 + rol.d(r8_77, 5) + (r11_50 ^ rbx_48 ^ r9_54) - 0x359d3e2a + r15_31
    uint32_t r14_37 = rol.d(rax_303 ^ r13_17 ^ rbp_28 ^ rbp_18, 1)
    int32_t r8_78 = ror.d(r8_77, 2)
    int32_t r11_52 = r11_50 + rol.d(r10_54, 5) + (r8_77 ^ rbx_48 ^ r9_55) - 0x359d3e2a + r14_37
    int32_t r10_55 = ror.d(r10_54, 2)
    int32_t rbx_50 = rbx_48 + rol.d(r11_52, 5) + (r8_78 ^ r10_54 ^ r9_55) + rdi_57 - 0x359d3e2a
    uint32_t r12_21 = rol.d(r15_31 ^ r9_51 ^ rbp_23 ^ rbp_18, 1)
    int32_t r9_57 = r9_55 + rol.d(rbx_50, 5) + (r8_78 ^ r10_55 ^ r11_52) - 0x359d3e2a + r12_21
    int32_t r11_53 = ror.d(r11_52, 2)
    uint32_t rsi_43 = rol.d(r14_37 ^ r15_26 ^ rsi_34 ^ r14_22, 1)
    int32_t rbx_51 = ror.d(rbx_50, 2)
    int32_t r8_80 = rsi_43 + rol.d(r9_57, 5) + (r10_55 ^ r11_53 ^ rbx_50) + r8_78 - 0x359d3e2a
    uint32_t r14_42 = rol.d(rdi_57 ^ r14_32 ^ r15_21 ^ rbp_23, 1)
    uint32_t rdi_64 = rol.d(r13_17 ^ r14_27 ^ rsi_34 ^ r12_21, 1)
    int32_t r9_58 = ror.d(r9_57, 2)
    int32_t r10_57 = r10_55 + rol.d(r8_80, 5) + (r11_53 ^ rbx_51 ^ r9_57) - 0x359d3e2a + r14_42
    uint32_t rbp_37 = rol.d(rbp_33 ^ rbp_28 ^ r15_21 ^ rsi_43, 1)
    int32_t r8_81 = ror.d(r8_80, 2)
    int32_t r11_55 = r11_53 + rol.d(r10_57, 5) + (rbx_51 ^ r9_58 ^ r8_80) - 0x359d3e2a + rdi_64
    uint32_t r15_35 = rol.d(r15_31 ^ r12_16 ^ r14_27 ^ r14_42, 1)
    int32_t r10_58 = ror.d(r10_57, 2)
    int32_t rbx_53 = rbx_51 + rol.d(r11_55, 5) + (r10_57 ^ r9_58 ^ r8_81) - 0x359d3e2a + rbp_37
    int32_t r11_56 = ror.d(r11_55, 2)
    int32_t r9_60 = r9_58 + rol.d(rbx_53, 5) + (r10_58 ^ r11_55 ^ r8_81) - 0x359d3e2a + r15_35
    uint32_t rsi_48 = rol.d(r14_37 ^ r9_51 ^ rbp_28 ^ rdi_64, 1)
    int32_t rbx_54 = ror.d(rbx_53, 2)
    int32_t rdi_68 = rol.d(r9_60, 5) + r8_81 + (r10_58 ^ r11_56 ^ rbx_53) - 0x359d3e2a + rsi_48
    uint32_t r13_23 = rol.d(rdi_57 ^ r15_26 ^ r12_16 ^ rbp_37, 1)
    uint32_t r8_86 = rol.d(r14_32 ^ r9_51 ^ r15_35 ^ r12_21, 1)
    int32_t r9_61 = ror.d(r9_60, 2)
    int32_t rbp_41 = rol.d(rdi_68, 5) + r10_58 + (r11_56 ^ rbx_54 ^ r9_60) - 0x359d3e2a + r13_23
    uint32_t r10_63 = rol.d(r13_17 ^ r15_26 ^ rsi_48 ^ rsi_43, 1)
    int32_t rdi_69 = ror.d(rdi_68, 2)
    int32_t r12_25 = rol.d(rbp_41, 5) + r11_56 + (rbx_54 ^ r9_61 ^ rdi_68) - 0x359d3e2a + r8_86
    int32_t rbp_42 = ror.d(rbp_41, 2)
    int32_t r15_39 = rol.d(r12_25, 5) + rbx_54 + (r9_61 ^ rdi_69 ^ rbp_41) - 0x359d3e2a + r10_63
    int32_t r12_26 = ror.d(r12_25, 2)
    uint32_t rbx_59 = rol.d(rbp_33 ^ r14_32 ^ r13_23 ^ r14_42, 1)
    int32_t r14_46 = rol.d(r15_39, 5) + r9_61 + (r12_25 ^ rdi_69 ^ rbp_42) - 0x359d3e2a + rbx_59
    uint32_t r9_66 = rol.d(r15_31 ^ r13_17 ^ r8_86 ^ rdi_64, 1)
    int32_t r15_40 = ror.d(r15_39, 2)
    int32_t rsi_52 = rol.d(r14_46, 5) + rdi_69 + (r12_26 ^ r15_39 ^ rbp_42) - 0x359d3e2a + r9_66
    uint32_t r11_61 = rol.d(r14_37 ^ rbp_33 ^ r10_63 ^ rbp_37, 1)
    int32_t r14_47 = ror.d(r14_46, 2)
    int32_t rdi_73 = rol.d(rsi_52, 5) + rbp_42 + (r12_26 ^ r15_40 ^ r14_46) - 0x359d3e2a + r11_61
    int32_t rsi_53 = ror.d(rsi_52, 2)
    int32_t r10_67 = rol.d(rdi_73, 5) + rol.d(rdi_57 ^ r15_31 ^ rbx_59 ^ r15_35, 1) + r12_26
        + (r15_40 ^ r14_47 ^ rsi_52) - 0x359d3e2a
    int32_t rdi_74 = ror.d(rdi_73, 2)
    result = rol.d(r14_37 ^ r9_66 ^ rsi_48 ^ r12_21, 1) + r15_40
    int32_t r9_70 = rol.d(r10_67, 5) + result + (r14_47 ^ rsi_53 ^ rdi_73) - 0x359d3e2a
    r11 += rdi_74
    r14 += r9_70
    arg1[3] = r11
    arg1[1] = r14
    rbp = rol.d(rdi_57 ^ r11_61 ^ r13_23 ^ rsi_43, 1) + r14_47 - 0x359d3e2a + rol.d(r9_70, 5)
        + (rsi_53 ^ rdi_74 ^ r10_67) + rbp
    rbx += ror.d(r10_67, 2)
    *arg1 = rbp
    r10 += rsi_53
    arg1[2] = rbx
    arg1[4] = r10
    int64_t temp0_1 = arg_18
    arg_18 -= 1
    
    if (temp0_1 == 1)
        break
    
    r13 = &r13[0x40]

return result
