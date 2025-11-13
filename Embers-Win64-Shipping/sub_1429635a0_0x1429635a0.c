// 函数: sub_1429635a0
// 地址: 0x1429635a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x90)
int32_t r10_1 = arg1[1]
int64_t i = arg3
char* r12_1 = arg2
int32_t rsi_1 = arg1[4]
int32_t rdi_1 = arg1[3]
int32_t r15_1 = arg1[2]
int32_t var_68_1 = r15_1
int32_t var_6c_1 = r10_1
int32_t var_64_1 = rdi_1
int32_t var_60_1 = rsi_1

do
    int32_t r9_2 = rol.d(r15_1, 0xa)
    uint32_t r8_3 =
        zx.d(*r12_1) | zx.d(r12_1[1]) << 8 | zx.d(r12_1[2]) << 0x10 | zx.d(r12_1[3]) << 0x18
    int32_t r10_2 = rol.d(r10_1, 0xa)
    int32_t rbx_7 = rol.d((r15_1 ^ rdi_1 ^ r10_1) + *arg1 + r8_3, 0xb) + rsi_1
    uint32_t rdx_3 =
        zx.d(r12_1[4]) | zx.d(r12_1[5]) << 8 | zx.d(r12_1[6]) << 0x10 | zx.d(r12_1[7]) << 0x18
    int32_t r11_7 = rol.d((r10_1 ^ r9_2 ^ rbx_7) + rsi_1 + rdx_3, 0xe) + rdi_1
    uint32_t r8_7 =
        zx.d(r12_1[8]) | zx.d(r12_1[9]) << 8 | zx.d(r12_1[0xa]) << 0x10 | zx.d(r12_1[0xb]) << 0x18
    int32_t rbx_8 = rol.d(rbx_7, 0xa)
    int32_t rdx_10 = rol.d((r11_7 ^ r10_2 ^ rbx_7) + rdi_1 + r8_7, 0xf) + r9_2
    uint32_t rsi_5 = zx.d(r12_1[0xc]) | zx.d(r12_1[0xd]) << 8 | zx.d(r12_1[0xe]) << 0x10
        | zx.d(r12_1[0xf]) << 0x18
    uint32_t rdi_5 = zx.d(r12_1[0x10]) | zx.d(r12_1[0x11]) << 8 | zx.d(r12_1[0x12]) << 0x10
        | zx.d(r12_1[0x13]) << 0x18
    int32_t r11_8 = rol.d(r11_7, 0xa)
    int32_t r8_14 = rol.d((r11_7 ^ rdx_10 ^ rbx_8) + rsi_5 + r9_2, 0xc) + r10_2
    uint32_t rsi_9 = zx.d(r12_1[0x14]) | zx.d(r12_1[0x15]) << 8 | zx.d(r12_1[0x16]) << 0x10
        | zx.d(r12_1[0x17]) << 0x18
    int32_t rdx_11 = rol.d(rdx_10, 0xa)
    int32_t r9_9 = rol.d((r11_8 ^ rdx_10 ^ r8_14) + rdi_5 + r10_2, 5) + rbx_8
    uint32_t rbp_4 = zx.d(r12_1[0x18]) | zx.d(r12_1[0x19]) << 8 | zx.d(r12_1[0x1a]) << 0x10
        | zx.d(r12_1[0x1b]) << 0x18
    int32_t r8_15 = rol.d(r8_14, 0xa)
    int32_t r10_9 = rol.d((rdx_11 ^ r8_14 ^ r9_9) + rsi_9 + rbx_8, 8) + r11_8
    int32_t r9_10 = rol.d(r9_9, 0xa)
    uint32_t rbx_12 = zx.d(r12_1[0x1c]) | zx.d(r12_1[0x1d]) << 8 | zx.d(r12_1[0x1e]) << 0x10
        | zx.d(r12_1[0x1f]) << 0x18
    int32_t rdi_12 = rol.d((r8_15 ^ r9_9 ^ r10_9) + rbp_4 + r11_8, 7) + rdx_11
    uint32_t r13_4 = zx.d(r12_1[0x20]) | zx.d(r12_1[0x21]) << 8 | zx.d(r12_1[0x22]) << 0x10
        | zx.d(r12_1[0x23]) << 0x18
    int32_t r10_10 = rol.d(r10_9, 0xa)
    int32_t rsi_16 = rol.d((rdi_12 ^ r9_10 ^ r10_9) + rbx_12 + rdx_11, 9) + r8_15
    uint32_t rdx_15 = zx.d(r12_1[0x24]) | zx.d(r12_1[0x25]) << 8 | zx.d(r12_1[0x26]) << 0x10
        | zx.d(r12_1[0x27]) << 0x18
    int32_t rdi_13 = rol.d(rdi_12, 0xa)
    int32_t rbp_11 = rol.d((rdi_12 ^ rsi_16 ^ r10_10) + r13_4 + r8_15, 0xb) + r9_10
    uint32_t r15_5 = zx.d(r12_1[0x28]) | zx.d(r12_1[0x29]) << 8 | zx.d(r12_1[0x2a]) << 0x10
        | zx.d(r12_1[0x2b]) << 0x18
    int32_t rsi_17 = rol.d(rsi_16, 0xa)
    int32_t r11_15 = rol.d((rdi_13 ^ rsi_16 ^ rbp_11) + rdx_15 + r9_10, 0xd) + r10_10
    uint32_t r8_19 = zx.d(r12_1[0x2c]) | zx.d(r12_1[0x2d]) << 8 | zx.d(r12_1[0x2e]) << 0x10
        | zx.d(r12_1[0x2f]) << 0x18
    int32_t rbp_12 = rol.d(rbp_11, 0xa)
    int32_t rbx_19 = rol.d((rsi_17 ^ rbp_11 ^ r11_15) + r15_5 + r10_10, 0xe) + rdi_13
    uint32_t r14_4 = zx.d(r12_1[0x30]) | zx.d(r12_1[0x31]) << 8 | zx.d(r12_1[0x32]) << 0x10
        | zx.d(r12_1[0x33]) << 0x18
    int32_t r11_16 = rol.d(r11_15, 0xa)
    int32_t rdx_22 = rol.d((rbp_12 ^ r11_15 ^ rbx_19) + r8_19 + rdi_13, 0xf) + rsi_17
    uint32_t r12_6 = zx.d(r12_1[0x34]) | zx.d(r12_1[0x35]) << 8 | zx.d(r12_1[0x36]) << 0x10
        | zx.d(r12_1[0x37]) << 0x18
    int32_t rbx_20 = rol.d(rbx_19, 0xa)
    int32_t rdx_23 = rol.d(rdx_22, 0xa)
    int32_t r8_26 = rol.d((rdx_22 ^ r11_16 ^ rbx_19) + r14_4 + rsi_17, 6) + rbp_12
    uint32_t rsi_21 = zx.d(r12_1[0x38]) | zx.d(r12_1[0x39]) << 8 | zx.d(r12_1[0x3a]) << 0x10
        | zx.d(r12_1[0x3b]) << 0x18
    int32_t r9_17 = rol.d((rdx_22 ^ r8_26 ^ rbx_20) + r12_6 + rbp_12, 7) + r11_16
    uint32_t rdi_17 = zx.d(r12_1[0x3c]) | zx.d(r12_1[0x3d]) << 8 | zx.d(r12_1[0x3e]) << 0x10
        | zx.d(r12_1[0x3f]) << 0x18
    int32_t r8_27 = rol.d(r8_26, 0xa)
    int32_t r10_19 = rol.d((rdx_23 ^ r8_26 ^ r9_17) + rsi_21 + r11_16, 9) + rbx_20
    int32_t r9_18 = rol.d(r9_17, 0xa)
    int32_t r11_23 = rol.d((r8_27 ^ r9_17 ^ r10_19) + rdi_17 + rbx_20, 8) + rdx_23
    int32_t rdx_26 =
        rol.d(rdx_23 + (((r9_18 ^ r10_19) & r11_23) ^ r9_18) + 0x5a827999 + rbx_12, 7) + r8_27
    int32_t r10_20 = rol.d(r10_19, 0xa)
    int32_t r11_24 = rol.d(r11_23, 0xa)
    int32_t rdx_27 = rol.d(rdx_26, 0xa)
    int32_t r8_30 =
        rol.d(r8_27 + (((r10_20 ^ r11_23) & rdx_26) ^ r10_20) + 0x5a827999 + rdi_5, 6) + r9_18
    int32_t r9_21 =
        rol.d(r9_18 + (((rdx_26 ^ r11_24) & r8_30) ^ r11_24) + 0x5a827999 + r12_6, 8) + r10_20
    int32_t r8_31 = rol.d(r8_30, 0xa)
    int32_t r10_23 =
        rol.d(r10_20 + (((rdx_27 ^ r8_30) & r9_21) ^ rdx_27) + 0x5a827999 + rdx_3, 0xd) + r11_24
    int32_t r9_22 = rol.d(r9_21, 0xa)
    int32_t r11_27 =
        rol.d(r11_24 + (((r8_31 ^ r9_21) & r10_23) ^ r8_31) + 0x5a827999 + r15_5, 0xb) + rdx_27
    int32_t r10_24 = rol.d(r10_23, 0xa)
    int32_t rdx_30 =
        rol.d(rdx_27 + (((r9_22 ^ r10_23) & r11_27) ^ r9_22) + 0x5a827999 + rbp_4, 9) + r8_31
    int32_t r11_28 = rol.d(r11_27, 0xa)
    int32_t rdx_31 = rol.d(rdx_30, 0xa)
    int32_t r8_34 =
        rol.d(r8_31 + (((r10_24 ^ r11_27) & rdx_30) ^ r10_24) + 0x5a827999 + rdi_17, 7) + r9_22
    int32_t r9_25 =
        rol.d(r9_22 + (((rdx_30 ^ r11_28) & r8_34) ^ r11_28) + 0x5a827999 + rsi_5, 0xf) + r10_24
    int32_t r10_27 =
        rol.d(r10_24 + (((rdx_31 ^ r8_34) & r9_25) ^ rdx_31) + 0x5a827999 + r14_4, 7) + r11_28
    int32_t r8_35 = rol.d(r8_34, 0xa)
    int32_t r9_26 = rol.d(r9_25, 0xa)
    int32_t r11_31 =
        rol.d(r11_28 + (((r8_35 ^ r9_25) & r10_27) ^ r8_35) + 0x5a827999 + r8_3, 0xc) + rdx_31
    int32_t r10_28 = rol.d(r10_27, 0xa)
    int32_t rdx_34 =
        rol.d(rdx_31 + (((r9_26 ^ r10_27) & r11_31) ^ r9_26) + 0x5a827999 + rdx_15, 0xf) + r8_35
    int32_t r11_32 = rol.d(r11_31, 0xa)
    int32_t rdx_35 = rol.d(rdx_34, 0xa)
    int32_t r8_38 =
        rol.d(r8_35 + (((r10_28 ^ r11_31) & rdx_34) ^ r10_28) + 0x5a827999 + rsi_9, 9) + r9_26
    int32_t r9_29 =
        rol.d(r9_26 + (((rdx_34 ^ r11_32) & r8_38) ^ r11_32) + 0x5a827999 + r8_7, 0xb) + r10_28
    int32_t r8_39 = rol.d(r8_38, 0xa)
    int32_t r10_31 =
        rol.d(r10_28 + (((rdx_35 ^ r8_38) & r9_29) ^ rdx_35) + 0x5a827999 + rsi_21, 7) + r11_32
    int32_t r9_30 = rol.d(r9_29, 0xa)
    int32_t r11_35 =
        rol.d(r11_32 + (((r8_39 ^ r9_29) & r10_31) ^ r8_39) + 0x5a827999 + r8_19, 0xd) + rdx_35
    int32_t r10_32 = rol.d(r10_31, 0xa)
    int32_t rdx_38 =
        rol.d(rdx_35 + (((r9_30 ^ r10_31) & r11_35) ^ r9_30) + 0x5a827999 + r13_4, 0xc) + r8_39
    int32_t r8_42 =
        rol.d(r8_39 + ((not.d(r11_35) | rdx_38) ^ r10_32) + 0x6ed9eba1 + rsi_5, 0xb) + r9_30
    int32_t r11_36 = rol.d(r11_35, 0xa)
    int32_t rdx_39 = rol.d(rdx_38, 0xa)
    int32_t r8_43 = rol.d(r8_42, 0xa)
    int32_t r9_33 =
        rol.d(r9_30 + ((not.d(rdx_38) | r8_42) ^ r11_36) + 0x6ed9eba1 + r15_5, 0xd) + r10_32
    int32_t r10_35 =
        rol.d(r10_32 + ((not.d(r8_42) | r9_33) ^ rdx_39) + 0x6ed9eba1 + rsi_21, 6) + r11_36
    int32_t r9_34 = rol.d(r9_33, 0xa)
    int32_t r11_39 =
        rol.d(r11_36 + ((not.d(r9_33) | r10_35) ^ r8_43) + 0x6ed9eba1 + rdi_5, 7) + rdx_39
    int32_t r10_36 = rol.d(r10_35, 0xa)
    int32_t r11_40 = rol.d(r11_39, 0xa)
    int32_t rdx_42 =
        rol.d(rdx_39 + ((not.d(r10_35) | r11_39) ^ r9_34) + 0x6ed9eba1 + rdx_15, 0xe) + r8_43
    int32_t r8_46 =
        rol.d(r8_43 + ((not.d(r11_39) | rdx_42) ^ r10_36) + 0x6ed9eba1 + rdi_17, 9) + r9_34
    int32_t rdx_43 = rol.d(rdx_42, 0xa)
    int32_t r9_37 =
        rol.d(r9_34 + ((not.d(rdx_42) | r8_46) ^ r11_40) + 0x6ed9eba1 + r13_4, 0xd) + r10_36
    int32_t r8_47 = rol.d(r8_46, 0xa)
    int32_t r10_39 =
        rol.d(r10_36 + ((not.d(r8_46) | r9_37) ^ rdx_43) + 0x6ed9eba1 + rdx_3, 0xf) + r11_40
    int32_t r11_43 =
        rol.d(r11_40 + ((not.d(r9_37) | r10_39) ^ r8_47) + 0x6ed9eba1 + r8_7, 0xe) + rdx_43
    int32_t r9_38 = rol.d(r9_37, 0xa)
    int32_t r10_40 = rol.d(r10_39, 0xa)
    int32_t rdx_46 =
        rol.d(rdx_43 + ((not.d(r10_39) | r11_43) ^ r9_38) + 0x6ed9eba1 + rbx_12, 8) + r8_47
    int32_t r11_44 = rol.d(r11_43, 0xa)
    int32_t rdx_47 = rol.d(rdx_46, 0xa)
    int32_t r8_50 =
        rol.d(r8_47 + ((not.d(r11_43) | rdx_46) ^ r10_40) + 0x6ed9eba1 + r8_3, 0xd) + r9_38
    int32_t r9_41 =
        rol.d(r9_38 + ((not.d(rdx_46) | r8_50) ^ r11_44) + 0x6ed9eba1 + rbp_4, 6) + r10_40
    int32_t r8_51 = rol.d(r8_50, 0xa)
    int32_t r9_42 = rol.d(r9_41, 0xa)
    int32_t r10_43 =
        rol.d(r10_40 + ((not.d(r8_50) | r9_41) ^ rdx_47) + 0x6ed9eba1 + r12_6, 5) + r11_44
    int32_t r11_47 =
        rol.d(r11_44 + ((not.d(r9_41) | r10_43) ^ r8_51) + 0x6ed9eba1 + r8_19, 0xc) + rdx_47
    int32_t r10_44 = rol.d(r10_43, 0xa)
    int32_t rdx_50 =
        rol.d(rdx_47 + ((not.d(r10_43) | r11_47) ^ r9_42) + 0x6ed9eba1 + rsi_9, 7) + r8_51
    int32_t r11_48 = rol.d(r11_47, 0xa)
    int32_t r8_54 =
        rol.d(r8_51 + ((not.d(r11_47) | rdx_50) ^ r10_44) + 0x6ed9eba1 + r14_4, 5) + r9_42
    int32_t rdx_51 = rol.d(rdx_50, 0xa)
    int32_t r9_45 =
        rol.d(r9_42 + (((rdx_50 ^ r8_54) & r11_48) ^ rdx_50) - 0x70e44324 + rdx_3, 0xb) + r10_44
    int32_t r8_55 = rol.d(r8_54, 0xa)
    int32_t r10_47 =
        rol.d(r10_44 + (((r8_54 ^ r9_45) & rdx_51) ^ r8_54) - 0x70e44324 + rdx_15, 0xc) + r11_48
    int32_t r9_46 = rol.d(r9_45, 0xa)
    int32_t r11_51 =
        rol.d(r11_48 + (((r9_45 ^ r10_47) & r8_55) ^ r9_45) - 0x70e44324 + r8_19, 0xe) + rdx_51
    int32_t r10_48 = rol.d(r10_47, 0xa)
    int32_t rdx_54 =
        rol.d(rdx_51 + (((r10_47 ^ r11_51) & r9_46) ^ r10_47) - 0x70e44324 + r15_5, 0xf) + r8_55
    int32_t r11_52 = rol.d(r11_51, 0xa)
    int32_t r8_58 =
        rol.d(r8_55 + (((rdx_54 ^ r11_51) & r10_48) ^ r11_51) - 0x70e44324 + r8_3, 0xe) + r9_46
    int32_t rdx_55 = rol.d(rdx_54, 0xa)
    int32_t r9_49 =
        rol.d(r9_46 + (((rdx_54 ^ r8_58) & r11_52) ^ rdx_54) - 0x70e44324 + r13_4, 0xf) + r10_48
    int32_t r8_59 = rol.d(r8_58, 0xa)
    int32_t r10_51 =
        rol.d(r10_48 + (((r8_58 ^ r9_49) & rdx_55) ^ r8_58) - 0x70e44324 + r14_4, 9) + r11_52
    int32_t r9_50 = rol.d(r9_49, 0xa)
    int32_t r11_55 =
        rol.d(r11_52 + (((r9_49 ^ r10_51) & r8_59) ^ r9_49) - 0x70e44324 + rdi_5, 8) + rdx_55
    int32_t r10_52 = rol.d(r10_51, 0xa)
    int32_t rdx_58 =
        rol.d(rdx_55 + (((r10_51 ^ r11_55) & r9_50) ^ r10_51) - 0x70e44324 + r12_6, 9) + r8_59
    int32_t r11_56 = rol.d(r11_55, 0xa)
    int32_t r8_62 =
        rol.d(r8_59 + (((rdx_58 ^ r11_55) & r10_52) ^ r11_55) - 0x70e44324 + rsi_5, 0xe) + r9_50
    int32_t rdx_59 = rol.d(rdx_58, 0xa)
    int32_t r9_53 =
        rol.d(r9_50 + (((rdx_58 ^ r8_62) & r11_56) ^ rdx_58) - 0x70e44324 + rbx_12, 5) + r10_52
    int32_t r8_63 = rol.d(r8_62, 0xa)
    int32_t r10_55 =
        rol.d(r10_52 + (((r8_62 ^ r9_53) & rdx_59) ^ r8_62) - 0x70e44324 + rdi_17, 6) + r11_56
    int32_t r9_54 = rol.d(r9_53, 0xa)
    int32_t r11_59 =
        rol.d(r11_56 + (((r9_53 ^ r10_55) & r8_63) ^ r9_53) - 0x70e44324 + rsi_21, 8) + rdx_59
    int32_t r10_56 = rol.d(r10_55, 0xa)
    int32_t rdx_62 =
        rol.d(rdx_59 + (((r10_55 ^ r11_59) & r9_54) ^ r10_55) - 0x70e44324 + rsi_9, 6) + r8_63
    int32_t r11_60 = rol.d(r11_59, 0xa)
    int32_t r8_66 =
        rol.d(r8_63 + (((rdx_62 ^ r11_59) & r10_56) ^ r11_59) - 0x70e44324 + rbp_4, 5) + r9_54
    int32_t rdx_63 = rol.d(rdx_62, 0xa)
    int32_t r9_57 =
        rol.d(r9_54 + (((rdx_62 ^ r8_66) & r11_60) ^ rdx_62) - 0x70e44324 + r8_7, 0xc) + r10_56
    int32_t r8_67 = rol.d(r8_66, 0xa)
    int32_t r10_59 =
        rol.d(r10_56 + ((not.d(rdx_63) | r8_66) ^ r9_57) - 0x56ac02b2 + rdi_5, 9) + r11_60
    int32_t r9_58 = rol.d(r9_57, 0xa)
    int32_t r11_63 =
        rol.d(r11_60 + ((not.d(r8_67) | r9_57) ^ r10_59) - 0x56ac02b2 + r8_3, 0xf) + rdx_63
    int32_t r10_60 = rol.d(r10_59, 0xa)
    int32_t rdx_66 =
        rol.d(rdx_63 + ((not.d(r9_58) | r10_59) ^ r11_63) - 0x56ac02b2 + rsi_9, 5) + r8_67
    int32_t r11_64 = rol.d(r11_63, 0xa)
    int32_t r8_70 =
        rol.d(r8_67 + ((not.d(r10_60) | r11_63) ^ rdx_66) - 0x56ac02b2 + rdx_15, 0xb) + r9_58
    int32_t rdx_67 = rol.d(rdx_66, 0xa)
    int32_t r9_61 =
        rol.d(r9_58 + ((not.d(r11_64) | rdx_66) ^ r8_70) - 0x56ac02b2 + rbx_12, 6) + r10_60
    int32_t r8_71 = rol.d(r8_70, 0xa)
    int32_t r10_63 =
        rol.d(r10_60 + ((not.d(rdx_67) | r8_70) ^ r9_61) - 0x56ac02b2 + r14_4, 8) + r11_64
    int32_t r9_62 = rol.d(r9_61, 0xa)
    int32_t r11_67 =
        rol.d(r11_64 + ((not.d(r8_71) | r9_61) ^ r10_63) - 0x56ac02b2 + r8_7, 0xd) + rdx_67
    int32_t r10_64 = rol.d(r10_63, 0xa)
    int32_t rdx_70 =
        rol.d(rdx_67 + ((not.d(r9_62) | r10_63) ^ r11_67) - 0x56ac02b2 + r15_5, 0xc) + r8_71
    int32_t r11_68 = rol.d(r11_67, 0xa)
    int32_t r8_74 =
        rol.d(r8_71 + ((not.d(r10_64) | r11_67) ^ rdx_70) - 0x56ac02b2 + rsi_21, 5) + r9_62
    int32_t rdx_71 = rol.d(rdx_70, 0xa)
    int32_t r9_65 =
        rol.d(r9_62 + ((not.d(r11_68) | rdx_70) ^ r8_74) - 0x56ac02b2 + rdx_3, 0xc) + r10_64
    int32_t r8_75 = rol.d(r8_74, 0xa)
    int32_t r10_67 =
        rol.d(r10_64 + ((not.d(rdx_71) | r8_74) ^ r9_65) - 0x56ac02b2 + rsi_5, 0xd) + r11_68
    int32_t r9_66 = rol.d(r9_65, 0xa)
    int32_t r11_71 =
        rol.d(r11_68 + ((not.d(r8_75) | r9_65) ^ r10_67) + r13_4 - 0x56ac02b2, 0xe) + rdx_71
    int32_t r10_68 = rol.d(r10_67, 0xa)
    int32_t r11_72 = rol.d(r11_71, 0xa)
    int32_t r13_13 =
        rol.d(((not.d(r9_66) | r10_67) ^ r11_71) + r8_19 - 0x56ac02b2 + rdx_71, 0xb) + r8_75
    int32_t r12_10 =
        rol.d(r8_75 - 0x56ac02b2 + ((not.d(r10_68) | r11_71) ^ r13_13) + rbp_4, 8) + r9_66
    int32_t r13_14 = rol.d(r13_13, 0xa)
    int32_t r15_9 =
        rol.d(r9_66 - 0x56ac02b2 + ((not.d(r11_72) | r13_13) ^ r12_10) + rdi_17, 5) + r10_68
    int32_t rdx_76 =
        rol.d(rsi_9 + 0x50a28be6 + ((not.d(var_64_1) | var_68_1) ^ var_6c_1) + *arg1, 8) + var_60_1
    int32_t r8_82 =
        rol.d(((var_6c_1 | not.d(r9_2)) ^ rdx_76) + var_60_1 + 0x50a28be6 + rsi_21, 9) + var_64_1
    int32_t rdx_77 = rol.d(rdx_76, 0xa)
    int32_t r9_71 =
        rol.d(rbx_12 + 0x50a28be6 + ((not.d(r10_2) | rdx_76) ^ r8_82) + var_64_1, 9) + r9_2
    int32_t r8_83 = rol.d(r8_82, 0xa)
    int32_t r10_73 =
        rol.d(r9_2 + 0x50a28be6 + ((not.d(rdx_77) | r8_82) ^ r9_71) + r8_3, 0xb) + r10_2
    int32_t r9_72 = rol.d(r9_71, 0xa)
    int32_t r11_79 =
        rol.d(r10_2 + 0x50a28be6 + ((not.d(r8_83) | r9_71) ^ r10_73) + rdx_15, 0xd) + rdx_77
    int32_t r10_74 = rol.d(r10_73, 0xa)
    int32_t rdx_80 =
        rol.d(rdx_77 + ((not.d(r9_72) | r10_73) ^ r11_79) + 0x50a28be6 + r8_7, 0xf) + r8_83
    int32_t r11_80 = rol.d(r11_79, 0xa)
    int32_t r8_86 =
        rol.d(r8_83 + ((not.d(r10_74) | r11_79) ^ rdx_80) + 0x50a28be6 + r8_19, 0xf) + r9_72
    int32_t rdx_81 = rol.d(rdx_80, 0xa)
    int32_t r9_75 =
        rol.d(r9_72 + ((not.d(r11_80) | rdx_80) ^ r8_86) + 0x50a28be6 + rdi_5, 5) + r10_74
    int32_t r10_77 =
        rol.d(r10_74 + ((not.d(rdx_81) | r8_86) ^ r9_75) + 0x50a28be6 + r12_6, 7) + r11_80
    int32_t r8_87 = rol.d(r8_86, 0xa)
    int32_t r9_76 = rol.d(r9_75, 0xa)
    int32_t r11_83 =
        rol.d(r11_80 + ((not.d(r8_87) | r9_75) ^ r10_77) + 0x50a28be6 + rbp_4, 7) + rdx_81
    int32_t r10_78 = rol.d(r10_77, 0xa)
    int32_t rdx_84 =
        rol.d(rdx_81 + ((not.d(r9_76) | r10_77) ^ r11_83) + 0x50a28be6 + rdi_17, 8) + r8_87
    int32_t r11_84 = rol.d(r11_83, 0xa)
    int32_t r8_90 =
        rol.d(r8_87 + ((not.d(r10_78) | r11_83) ^ rdx_84) + 0x50a28be6 + r13_4, 0xb) + r9_76
    int32_t rdx_85 = rol.d(rdx_84, 0xa)
    int32_t r9_79 =
        rol.d(r9_76 + ((not.d(r11_84) | rdx_84) ^ r8_90) + 0x50a28be6 + rdx_3, 0xe) + r10_78
    int32_t r8_91 = rol.d(r8_90, 0xa)
    int32_t r10_81 =
        rol.d(r10_78 + ((not.d(rdx_85) | r8_90) ^ r9_79) + 0x50a28be6 + r15_5, 0xe) + r11_84
    int32_t r9_80 = rol.d(r9_79, 0xa)
    int32_t r11_87 =
        rol.d(r11_84 + ((not.d(r8_91) | r9_79) ^ r10_81) + 0x50a28be6 + rsi_5, 0xc) + rdx_85
    int32_t r10_82 = rol.d(r10_81, 0xa)
    int32_t rdx_88 =
        rol.d(rdx_85 + ((not.d(r9_80) | r10_81) ^ r11_87) + 0x50a28be6 + r14_4, 6) + r8_91
    int32_t r8_94 =
        rol.d(r8_91 + (((r11_87 ^ rdx_88) & r10_82) ^ r11_87) + 0x5c4dd124 + rbp_4, 9) + r9_80
    int32_t r11_88 = rol.d(r11_87, 0xa)
    int32_t rdx_89 = rol.d(rdx_88, 0xa)
    int32_t r9_83 =
        rol.d(r9_80 + (((r8_94 ^ rdx_88) & r11_88) ^ rdx_88) + 0x5c4dd124 + r8_19, 0xd) + r10_82
    int32_t r8_95 = rol.d(r8_94, 0xa)
    int32_t r10_85 =
        rol.d(r10_82 + (((r8_94 ^ r9_83) & rdx_89) ^ r8_94) + 0x5c4dd124 + rsi_5, 0xf) + r11_88
    int32_t r9_84 = rol.d(r9_83, 0xa)
    int32_t r11_91 =
        rol.d(r11_88 + (((r9_83 ^ r10_85) & r8_95) ^ r9_83) + 0x5c4dd124 + rbx_12, 7) + rdx_89
    int32_t r10_86 = rol.d(r10_85, 0xa)
    int32_t rdx_92 =
        rol.d(rdx_89 + (((r10_85 ^ r11_91) & r9_84) ^ r10_85) + 0x5c4dd124 + r8_3, 0xc) + r8_95
    int32_t r11_92 = rol.d(r11_91, 0xa)
    int32_t r8_98 =
        rol.d(r8_95 + (((r11_91 ^ rdx_92) & r10_86) ^ r11_91) + 0x5c4dd124 + r12_6, 8) + r9_84
    int32_t rdx_93 = rol.d(rdx_92, 0xa)
    int32_t r9_87 =
        rol.d(r9_84 + (((r8_98 ^ rdx_92) & r11_92) ^ rdx_92) + 0x5c4dd124 + rsi_9, 9) + r10_86
    int32_t r8_99 = rol.d(r8_98, 0xa)
    int32_t r10_89 =
        rol.d(r10_86 + (((r8_98 ^ r9_87) & rdx_93) ^ r8_98) + 0x5c4dd124 + r15_5, 0xb) + r11_92
    int32_t r11_95 =
        rol.d(r11_92 + (((r9_87 ^ r10_89) & r8_99) ^ r9_87) + 0x5c4dd124 + rsi_21, 7) + rdx_93
    int32_t r9_88 = rol.d(r9_87, 0xa)
    int32_t r10_90 = rol.d(r10_89, 0xa)
    int32_t rdx_96 =
        rol.d(rdx_93 + (((r10_89 ^ r11_95) & r9_88) ^ r10_89) + 0x5c4dd124 + rdi_17, 7) + r8_99
    int32_t r11_96 = rol.d(r11_95, 0xa)
    int32_t r8_102 =
        rol.d(r8_99 + (((r11_95 ^ rdx_96) & r10_90) ^ r11_95) + 0x5c4dd124 + r13_4, 0xc) + r9_88
    int32_t rdx_97 = rol.d(rdx_96, 0xa)
    int32_t r9_91 =
        rol.d(r9_88 + (((r8_102 ^ rdx_96) & r11_96) ^ rdx_96) + 0x5c4dd124 + r14_4, 7) + r10_90
    int32_t r8_103 = rol.d(r8_102, 0xa)
    int32_t r10_93 =
        rol.d(r10_90 + (((r8_102 ^ r9_91) & rdx_97) ^ r8_102) + 0x5c4dd124 + rdi_5, 6) + r11_96
    int32_t r9_92 = rol.d(r9_91, 0xa)
    int32_t r11_99 =
        rol.d(r11_96 + (((r9_91 ^ r10_93) & r8_103) ^ r9_91) + 0x5c4dd124 + rdx_15, 0xf) + rdx_97
    int32_t r10_94 = rol.d(r10_93, 0xa)
    int32_t rdx_100 =
        rol.d(rdx_97 + (((r10_93 ^ r11_99) & r9_92) ^ r10_93) + 0x5c4dd124 + rdx_3, 0xd) + r8_103
    int32_t r11_100 = rol.d(r11_99, 0xa)
    int32_t r8_106 =
        rol.d(r8_103 + (((r11_99 ^ rdx_100) & r10_94) ^ r11_99) + 0x5c4dd124 + r8_7, 0xb) + r9_92
    int32_t r9_95 =
        rol.d(r9_92 + ((not.d(rdx_100) | r8_106) ^ r11_100) + 0x6d703ef3 + rdi_17, 9) + r10_94
    int32_t rdx_101 = rol.d(rdx_100, 0xa)
    int32_t r8_107 = rol.d(r8_106, 0xa)
    int32_t r10_97 =
        rol.d(r10_94 + ((not.d(r8_106) | r9_95) ^ rdx_101) + 0x6d703ef3 + rsi_9, 7) + r11_100
    int32_t r9_96 = rol.d(r9_95, 0xa)
    int32_t r10_98 = rol.d(r10_97, 0xa)
    int32_t r11_103 =
        rol.d(r11_100 + ((not.d(r9_95) | r10_97) ^ r8_107) + 0x6d703ef3 + rdx_3, 0xf) + rdx_101
    int32_t rdx_104 =
        rol.d(rdx_101 + ((not.d(r10_97) | r11_103) ^ r9_96) + 0x6d703ef3 + rsi_5, 0xb) + r8_107
    int32_t r11_104 = rol.d(r11_103, 0xa)
    int32_t rdx_105 = rol.d(rdx_104, 0xa)
    int32_t r8_110 =
        rol.d(r8_107 + ((not.d(r11_103) | rdx_104) ^ r10_98) + 0x6d703ef3 + rbx_12, 8) + r9_96
    int32_t r9_99 =
        rol.d(r9_96 + ((not.d(rdx_104) | r8_110) ^ r11_104) + 0x6d703ef3 + rsi_21, 6) + r10_98
    int32_t r8_111 = rol.d(r8_110, 0xa)
    int32_t r10_101 =
        rol.d(r10_98 + ((not.d(r8_110) | r9_99) ^ rdx_105) + 0x6d703ef3 + rbp_4, 6) + r11_104
    int32_t r9_100 = rol.d(r9_99, 0xa)
    int32_t r11_107 =
        rol.d(r11_104 + ((not.d(r9_99) | r10_101) ^ r8_111) + 0x6d703ef3 + rdx_15, 0xe) + rdx_105
    int32_t r10_102 = rol.d(r10_101, 0xa)
    int32_t rdx_108 =
        rol.d(rdx_105 + ((not.d(r10_101) | r11_107) ^ r9_100) + 0x6d703ef3 + r8_19, 0xc) + r8_111
    int32_t r11_108 = rol.d(r11_107, 0xa)
    int32_t r8_114 =
        rol.d(r8_111 + ((not.d(r11_107) | rdx_108) ^ r10_102) + 0x6d703ef3 + r13_4, 0xd) + r9_100
    int32_t rdx_109 = rol.d(rdx_108, 0xa)
    int32_t r8_115 = rol.d(r8_114, 0xa)
    int32_t r9_103 =
        rol.d(r9_100 + ((not.d(rdx_108) | r8_114) ^ r11_108) + 0x6d703ef3 + r14_4, 5) + r10_102
    int32_t r10_105 =
        rol.d(r10_102 + ((not.d(r8_114) | r9_103) ^ rdx_109) + 0x6d703ef3 + r8_7, 0xe) + r11_108
    int32_t r9_104 = rol.d(r9_103, 0xa)
    int32_t r10_106 = rol.d(r10_105, 0xa)
    int32_t r11_111 =
        rol.d(r11_108 + ((not.d(r9_103) | r10_105) ^ r8_115) + 0x6d703ef3 + r15_5, 0xd) + rdx_109
    int32_t rdx_112 =
        rol.d(rdx_109 + ((not.d(r10_105) | r11_111) ^ r9_104) + 0x6d703ef3 + r8_3, 0xd) + r8_115
    int32_t r11_112 = rol.d(r11_111, 0xa)
    int32_t r8_118 =
        rol.d(r8_115 + ((not.d(r11_111) | rdx_112) ^ r10_106) + 0x6d703ef3 + rdi_5, 7) + r9_104
    int32_t rdx_113 = rol.d(rdx_112, 0xa)
    int32_t r9_107 =
        rol.d(r9_104 + ((not.d(rdx_112) | r8_118) ^ r11_112) + 0x6d703ef3 + r12_6, 5) + r10_106
    int32_t r8_119 = rol.d(r8_118, 0xa)
    int32_t r10_109 =
        rol.d(r10_106 + (((r8_118 ^ rdx_113) & r9_107) ^ rdx_113) + 0x7a6d76e9 + r13_4, 0xf)
        + r11_112
    int32_t r9_108 = rol.d(r9_107, 0xa)
    int32_t r11_115 =
        rol.d(r11_112 + (((r8_119 ^ r9_107) & r10_109) ^ r8_119) + 0x7a6d76e9 + rbp_4, 5) + rdx_113
    int32_t r10_110 = rol.d(r10_109, 0xa)
    int32_t rdx_116 =
        rol.d(rdx_113 + (((r9_108 ^ r10_109) & r11_115) ^ r9_108) + 0x7a6d76e9 + rdi_5, 8) + r8_119
    int32_t r11_116 = rol.d(r11_115, 0xa)
    int32_t r8_122 =
        rol.d(r8_119 + (((r10_110 ^ r11_115) & rdx_116) ^ r10_110) + 0x7a6d76e9 + rdx_3, 0xb)
        + r9_108
    int32_t rdx_117 = rol.d(rdx_116, 0xa)
    int32_t r8_123 = rol.d(r8_122, 0xa)
    int32_t r9_111 =
        rol.d(r9_108 + (((r11_116 ^ rdx_116) & r8_122) ^ r11_116) + 0x7a6d76e9 + rsi_5, 0xe)
        + r10_110
    int32_t r10_113 =
        rol.d(r10_110 + (((r8_122 ^ rdx_117) & r9_111) ^ rdx_117) + 0x7a6d76e9 + r8_19, 0xe)
        + r11_116
    int32_t r9_112 = rol.d(r9_111, 0xa)
    int32_t r10_114 = rol.d(r10_113, 0xa)
    int32_t r11_119 =
        rol.d(r11_116 + (((r8_123 ^ r9_111) & r10_113) ^ r8_123) + rdi_17 + 0x7a6d76e9, 6) + rdx_117
    int32_t r11_120 = rol.d(r11_119, 0xa)
    int32_t rbx_31 =
        rol.d((((r9_112 ^ r10_113) & r11_119) ^ r9_112) + 0x7a6d76e9 + r8_3 + rdx_117, 0xe) + r8_123
    int32_t rdi_27 =
        rol.d((((r10_114 ^ r11_119) & rbx_31) ^ r10_114) + 0x7a6d76e9 + rsi_9 + r8_123, 6) + r9_112
    int32_t rbx_32 = rol.d(rbx_31, 0xa)
    int32_t rdi_28 = rol.d(rdi_27, 0xa)
    int32_t rsi_27 =
        rol.d(r14_4 + 0x7a6d76e9 + (((r11_120 ^ rbx_31) & rdi_27) ^ r11_120) + r9_112, 9) + r10_114
    int32_t rsi_28 = rol.d(rsi_27, 0xa)
    int32_t rbp_24 =
        rol.d((((rdi_27 ^ rbx_32) & rsi_27) ^ rbx_32) + 0x7a6d76e9 + r8_7 + r10_114, 0xc) + r11_120
    int32_t rbp_25 = rol.d(rbp_24, 0xa)
    int32_t rdx_126 =
        rol.d((((rdi_28 ^ rsi_27) & rbp_24) ^ rdi_28) + 0x7a6d76e9 + r12_6 + r11_120, 9) + rbx_32
    int32_t rdx_127 = rol.d(rdx_126, 0xa)
    int32_t r8_127 =
        rol.d(rbx_32 + 0x7a6d76e9 + (((rsi_28 ^ rbp_24) & rdx_126) ^ rsi_28) + rdx_15, 0xc) + rdi_28
    int32_t r8_128 = rol.d(r8_127, 0xa)
    int32_t r9_121 =
        rol.d((((rbp_25 ^ rdx_126) & r8_127) ^ rbp_25) + 0x7a6d76e9 + rbx_12 + rdi_28, 5) + rsi_28
    int32_t r9_122 = rol.d(r9_121, 0xa)
    int32_t r10_123 =
        rol.d((((rdx_127 ^ r8_127) & r9_121) ^ rdx_127) + 0x7a6d76e9 + r15_5 + rsi_28, 0xf) + rbp_25
    int32_t r10_124 = rol.d(r10_123, 0xa)
    int32_t r11_129 =
        rol.d((((r9_121 ^ r8_128) & r10_123) ^ r8_128) + 0x7a6d76e9 + rsi_21 + rbp_25, 8) + rdx_127
    int32_t rax_807 = rol.d((r9_122 ^ r10_123 ^ r11_129) + r14_4 + rdx_127, 8) + r8_128
    int32_t rdx_134 = rol.d((r10_124 ^ r11_129 ^ rax_807) + rdi_17 + r8_128, 5) + r9_122
    int32_t r11_130 = rol.d(r11_129, 0xa)
    int32_t rax_808 = rol.d(rax_807, 0xa)
    int32_t r8_135 = rol.d((r11_130 ^ rax_807 ^ rdx_134) + r15_5 + r9_122, 0xc) + r10_124
    int32_t rdx_135 = rol.d(rdx_134, 0xa)
    int32_t r9_129 = rol.d((r8_135 ^ rax_808 ^ rdx_134) + rdi_5 + r10_124, 9) + r11_130
    int32_t r8_136 = rol.d(r8_135, 0xa)
    int32_t r10_131 = rol.d((r8_135 ^ r9_129 ^ rdx_135) + rdx_3 + r11_130, 0xc) + rax_808
    int32_t r9_130 = rol.d(r9_129, 0xa)
    int32_t r11_137 = rol.d((r8_136 ^ r9_129 ^ r10_131) + rsi_9 + rax_808, 5) + rdx_135
    int32_t r10_132 = rol.d(r10_131, 0xa)
    int32_t r11_138 = rol.d(r11_137, 0xa)
    int32_t rax_815 = rol.d((r9_130 ^ r10_131 ^ r11_137) + r13_4 + rdx_135, 0xe) + r8_136
    int32_t rdx_142 = rol.d((r10_132 ^ r11_137 ^ rax_815) + rbx_12 + r8_136, 6) + r9_130
    int32_t rdx_143 = rol.d(rdx_142, 0xa)
    int32_t rax_816 = rol.d(rax_815, 0xa)
    int32_t rbx_39 = rol.d((rdx_142 ^ r11_138 ^ rax_815) + rbp_4 + r9_130, 8) + r10_132
    int32_t rdi_35 = rol.d((rdx_142 ^ rbx_39 ^ rax_816) + r8_7 + r10_132, 0xd) + r11_138
    int32_t rbx_40 = rol.d(rbx_39, 0xa)
    int32_t r10_139 = rol.d((rdx_143 ^ rbx_39 ^ rdi_35) + r12_6 + r11_138, 6) + rax_816
    int32_t r11_145 = rol.d((rbx_40 ^ rdi_35 ^ r10_139) + rsi_21 + rax_816, 5) + rdx_143
    int32_t rdi_36 = rol.d(rdi_35, 0xa)
    int32_t r10_140 = rol.d(r10_139, 0xa)
    int32_t rsi_30 =
        *arg1 + rol.d(r10_68 - 0x56ac02b2 + ((not.d(r13_14) | r12_10) ^ r15_9) + r12_6, 6) + r11_72
    int32_t r9_137 = rol.d((rdi_36 ^ r10_139 ^ r11_145) + r8_3 + rdx_143, 0xf) + rbx_40
    int32_t r9_138 = rol.d(r9_137, 0xa)
    int32_t r11_146 = rol.d(r11_145, 0xa)
    int32_t r8_143 = rol.d((r9_137 ^ r10_140 ^ r11_145) + rsi_5 + rbx_40, 0xd) + rdi_36
    int32_t rdi_38 = var_60_1 + r11_72
    r15_1 = var_64_1 + r13_14 + r11_146
    int32_t rdx_150 = rol.d((r9_137 ^ r8_143 ^ r11_146) + rdx_15 + rdi_36, 0xb) + r10_140
    arg1[2] = r15_1
    *arg1 = rol.d(r8_143, 0xa) + var_6c_1 + r15_9
    rsi_1 = rsi_30 + rdx_150
    var_60_1 = rsi_1
    int32_t r10_142 = var_68_1 + rol.d(r12_10, 0xa)
    r12_1 = &r12_1[0x40]
    rdi_1 = rdi_38 + rol.d((r9_138 ^ r8_143 ^ rdx_150) + r8_19 + r10_140, 0xb) + r11_146
    var_68_1 = r15_1
    i -= 1
    r10_1 = r10_142 + r9_138
    var_6c_1 = r10_1
    arg1[1] = r10_1
    var_64_1 = rdi_1
    arg1[3] = rdi_1
    arg1[4] = rsi_1
while (i != 0)
