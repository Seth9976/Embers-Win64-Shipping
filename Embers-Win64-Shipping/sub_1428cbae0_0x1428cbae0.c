// 函数: sub_1428cbae0
// 地址: 0x1428cbae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x68)
int32_t rbx_1 = arg1[1]
int64_t i = arg3
int32_t r11_1 = arg1[2]
int32_t r10_1 = arg1[3]
int32_t rdi_1 = *arg1
int32_t var_60_1 = rbx_1
int32_t var_5c_1 = r11_1
int32_t var_58_1 = r10_1

do
    uint32_t rcx_3 =
        zx.d(*arg2) | zx.d(arg2[1]) << 8 | zx.d(arg2[2]) << 0x10 | zx.d(arg2[3]) << 0x18
    uint32_t r8_3 =
        zx.d(arg2[4]) | zx.d(arg2[5]) << 8 | zx.d(arg2[6]) << 0x10 | zx.d(arg2[7]) << 0x18
    int32_t rcx_7 =
        rol.d(rcx_3 + (((r10_1 ^ r11_1) & rbx_1) ^ r10_1) - 0x28955b88 + rdi_1, 7) + rbx_1
    uint32_t r9_4 =
        zx.d(arg2[8]) | zx.d(arg2[9]) << 8 | zx.d(arg2[0xa]) << 0x10 | zx.d(arg2[0xb]) << 0x18
    int32_t r8_7 =
        rol.d(r10_1 - 0x173848aa + (((r11_1 ^ rbx_1) & rcx_7) ^ r11_1) + r8_3, 0xc) + rcx_7
    uint32_t r10_5 =
        zx.d(arg2[0xc]) | zx.d(arg2[0xd]) << 8 | zx.d(arg2[0xe]) << 0x10 | zx.d(arg2[0xf]) << 0x18
    int32_t r9_8 = ror.d(r11_1 + 0x242070db + (((rbx_1 ^ rcx_7) & r8_7) ^ rbx_1) + r9_4, 0xf) + r8_7
    uint32_t r11_5 = zx.d(arg2[0x10]) | zx.d(arg2[0x11]) << 8 | zx.d(arg2[0x12]) << 0x10
        | zx.d(arg2[0x13]) << 0x18
    int32_t r10_9 =
        ror.d(r10_5 + (((r8_7 ^ rcx_7) & r9_8) ^ rcx_7) - 0x3e423112 + rbx_1, 0xa) + r9_8
    uint32_t rbx_5 = zx.d(arg2[0x14]) | zx.d(arg2[0x15]) << 8 | zx.d(arg2[0x16]) << 0x10
        | zx.d(arg2[0x17]) << 0x18
    int32_t r11_9 = rol.d(rcx_7 - 0xa83f051 + (((r8_7 ^ r9_8) & r10_9) ^ r8_7) + r11_5, 7) + r10_9
    uint32_t rdi_5 = zx.d(arg2[0x18]) | zx.d(arg2[0x19]) << 8 | zx.d(arg2[0x1a]) << 0x10
        | zx.d(arg2[0x1b]) << 0x18
    int32_t rcx_16 =
        rol.d((((r9_8 ^ r10_9) & r11_9) ^ r9_8) + 0x4787c62a + rbx_5 + r8_7, 0xc) + r11_9
    uint32_t r13_4 = zx.d(arg2[0x1c]) | zx.d(arg2[0x1d]) << 8 | zx.d(arg2[0x1e]) << 0x10
        | zx.d(arg2[0x1f]) << 0x18
    int32_t r8_16 =
        ror.d((((r10_9 ^ r11_9) & rcx_16) ^ r10_9) - 0x57cfb9ed + rdi_5 + r9_8, 0xf) + rcx_16
    uint32_t rdi_9 = zx.d(arg2[0x20]) | zx.d(arg2[0x21]) << 8 | zx.d(arg2[0x22]) << 0x10
        | zx.d(arg2[0x23]) << 0x18
    int32_t r9_12 =
        ror.d(r10_9 - 0x2b96aff + (((rcx_16 ^ r11_9) & r8_16) ^ r11_9) + r13_4, 0xa) + r8_16
    uint32_t rbx_9 = zx.d(arg2[0x24]) | zx.d(arg2[0x25]) << 8 | zx.d(arg2[0x26]) << 0x10
        | zx.d(arg2[0x27]) << 0x18
    int32_t r10_13 =
        rol.d(r11_9 + 0x698098d8 + (((rcx_16 ^ r8_16) & r9_12) ^ rcx_16) + rdi_9, 7) + r9_12
    uint32_t r12_4 = zx.d(arg2[0x28]) | zx.d(arg2[0x29]) << 8 | zx.d(arg2[0x2a]) << 0x10
        | zx.d(arg2[0x2b]) << 0x18
    int32_t r11_13 =
        rol.d(rcx_16 - 0x74bb0851 + (((r8_16 ^ r9_12) & r10_13) ^ r8_16) + rbx_9, 0xc) + r10_13
    uint32_t rbx_13 = zx.d(arg2[0x2c]) | zx.d(arg2[0x2d]) << 8 | zx.d(arg2[0x2e]) << 0x10
        | zx.d(arg2[0x2f]) << 0x18
    int32_t rcx_20 =
        ror.d(r8_16 - 0xa44f + (((r9_12 ^ r10_13) & r11_13) ^ r9_12) + r12_4, 0xf) + r11_13
    uint32_t r14_4 = zx.d(arg2[0x30]) | zx.d(arg2[0x31]) << 8 | zx.d(arg2[0x32]) << 0x10
        | zx.d(arg2[0x33]) << 0x18
    uint32_t r15_1 = zx.d(arg2[0x34])
    uint32_t rsi_1 = zx.d(arg2[0x38])
    uint32_t rbp_1 = zx.d(arg2[0x3c])
    uint32_t rax_129 = zx.d(arg2[0x35])
    arg2 = &arg2[0x40]
    int32_t r8_20 =
        ror.d(r9_12 - 0x76a32842 + (((r11_13 ^ r10_13) & rcx_20) ^ r10_13) + rbx_13, 0xa) + rcx_20
    uint32_t r15_4 = r15_1 | rax_129 << 8 | zx.d(arg2[-0xa]) << 0x10 | zx.d(arg2[-9]) << 0x18
    int32_t r9_16 =
        rol.d(r10_13 + 0x6b901122 + (((r11_13 ^ rcx_20) & r8_20) ^ r11_13) + r14_4, 7) + r8_20
    uint32_t rsi_4 = rsi_1 | zx.d(arg2[-7]) << 8 | zx.d(arg2[-6]) << 0x10 | zx.d(arg2[-5]) << 0x18
    int32_t r10_22 =
        rol.d((((rcx_20 ^ r8_20) & r9_16) ^ rcx_20) - 0x2678e6d + r15_4 + r11_13, 0xc) + r9_16
    uint32_t rbp_4 = rbp_1 | zx.d(arg2[-3]) << 8 | zx.d(arg2[-2]) << 0x10 | zx.d(arg2[-1]) << 0x18
    int32_t rcx_23 =
        ror.d(rcx_20 + (((r8_20 ^ r9_16) & r10_22) ^ r8_20) - 0x5986bc72 + rsi_4, 0xf) + r10_22
    int32_t r8_23 =
        ror.d(r8_20 + (((r10_22 ^ r9_16) & rcx_23) ^ r9_16) + 0x49b40821 + rbp_4, 0xa) + rcx_23
    int32_t r9_19 =
        rol.d(r9_16 + (((rcx_23 ^ r8_23) & r10_22) ^ rcx_23) - 0x9e1da9e + r8_3, 5) + r8_23
    int32_t r10_25 =
        rol.d(r10_22 + (((r8_23 ^ r9_19) & rcx_23) ^ r8_23) - 0x3fbf4cc0 + rdi_5, 9) + r9_19
    int32_t r11_17 =
        rol.d(rcx_23 + 0x265e5a51 + (((r10_25 ^ r9_19) & r8_23) ^ r9_19) + rbx_13, 0xe) + r10_25
    int32_t rcx_27 =
        ror.d(r8_23 - 0x16493856 + (((r10_25 ^ r11_17) & r9_19) ^ r10_25) + rcx_3, 0xc) + r11_17
    int32_t r8_27 =
        rol.d(r9_19 - 0x29d0efa3 + (((r11_17 ^ rcx_27) & r10_25) ^ r11_17) + rbx_5, 5) + rcx_27
    int32_t r9_23 =
        rol.d(r10_25 + 0x2441453 + (((rcx_27 ^ r8_27) & r11_17) ^ rcx_27) + r12_4, 9) + r8_27
    int32_t r10_29 =
        rol.d(r11_17 - 0x275e197f + (((r9_23 ^ r8_27) & rcx_27) ^ r8_27) + rbp_4, 0xe) + r9_23
    int32_t r11_21 =
        ror.d(rcx_27 - 0x182c0438 + (((r9_23 ^ r10_29) & r8_27) ^ r9_23) + r11_5, 0xc) + r10_29
    int32_t rcx_31 =
        rol.d(r8_27 + 0x21e1cde6 + (((r10_29 ^ r11_21) & r9_23) ^ r10_29) + rbx_9, 5) + r11_21
    int32_t r8_31 =
        rol.d(r9_23 - 0x3cc8f82a + (((r11_21 ^ rcx_31) & r10_29) ^ r11_21) + rsi_4, 9) + rcx_31
    int32_t rbx_17 =
        rol.d(r10_29 - 0xb2af279 + (((r8_31 ^ rcx_31) & r11_21) ^ rcx_31) + r10_5, 0xe) + r8_31
    int32_t rdi_13 =
        ror.d(r11_21 + 0x455a14ed + (((r8_31 ^ rbx_17) & rcx_31) ^ r8_31) + rdi_9, 0xc) + rbx_17
    int32_t r9_27 =
        rol.d(rcx_31 - 0x561c16fb + (((rbx_17 ^ rdi_13) & r8_31) ^ rbx_17) + r15_4, 5) + rdi_13
    int32_t r10_33 =
        rol.d(r8_31 - 0x3105c08 + (((rdi_13 ^ r9_27) & rbx_17) ^ rdi_13) + r9_4, 9) + r9_27
    int32_t r11_25 =
        rol.d(rbx_17 + 0x676f02d9 + (((r10_33 ^ r9_27) & rdi_13) ^ r9_27) + r13_4, 0xe) + r10_33
    int32_t rcx_33 = r10_33 ^ r11_25
    int32_t r8_39 = ror.d(((rcx_33 & r9_27) ^ r10_33) - 0x72d5b376 + r14_4 + rdi_13, 0xc) + r11_25
    int32_t r9_30 = rol.d(r9_27 + (rcx_33 ^ r8_39) - 0x5c6be + rbx_5, 4) + r8_39
    int32_t r10_36 = rol.d(r10_33 + (r11_25 ^ r8_39 ^ r9_30) - 0x788e097f + rdi_9, 0xb) + r9_30
    int32_t r11_28 = rol.d(r11_25 + (r10_36 ^ r8_39 ^ r9_30) + 0x6d9d6122 + rbx_13, 0x10) + r10_36
    int32_t rcx_38 = r10_36 ^ r11_28
    int32_t r8_42 = ror.d(r8_39 + (rcx_38 ^ r9_30) - 0x21ac7f4 + rsi_4, 9) + r11_28
    int32_t r9_33 = rol.d(r9_30 + (rcx_38 ^ r8_42) - 0x5b4115bc + r8_3, 4) + r8_42
    int32_t r10_39 = rol.d(r10_36 + (r11_28 ^ r8_42 ^ r9_33) + 0x4bdecfa9 + r11_5, 0xb) + r9_33
    int32_t r11_31 = rol.d(r11_28 + (r10_39 ^ r8_42 ^ r9_33) - 0x944b4a0 + r13_4, 0x10) + r10_39
    int32_t rcx_43 = r10_39 ^ r11_31
    int32_t r8_45 = ror.d(r8_42 + (rcx_43 ^ r9_33) - 0x41404390 + r12_4, 9) + r11_31
    int32_t r9_36 = rol.d(r9_33 + (rcx_43 ^ r8_45) + 0x289b7ec6 + r15_4, 4) + r8_45
    int32_t r10_42 = rol.d(r10_39 + (r11_31 ^ r8_45 ^ r9_36) - 0x155ed806 + rcx_3, 0xb) + r9_36
    int32_t r11_34 = rol.d(r11_31 + (r10_42 ^ r8_45 ^ r9_36) - 0x2b10cf7b + r10_5, 0x10) + r10_42
    int32_t rcx_48 = r10_42 ^ r11_34
    int32_t r8_48 = ror.d(r8_45 + (rcx_48 ^ r9_36) + 0x4881d05 + rdi_5, 9) + r11_34
    int32_t rcx_53 = rol.d((rcx_48 ^ r8_48) + rbx_9 + r9_36 - 0x262b2fc7, 4) + r8_48
    int32_t r9_41 = rol.d(r10_42 - 0x1924661b + (r11_34 ^ r8_48 ^ rcx_53) + r14_4, 0xb) + rcx_53
    int32_t r10_46 = rol.d(r11_34 + 0x1fa27cf8 + (r9_41 ^ r8_48 ^ rcx_53) + rbp_4, 0x10) + r9_41
    int32_t r11_38 = ror.d(r8_48 - 0x3b53a99b + (r9_41 ^ r10_46 ^ rcx_53) + r9_4, 9) + r10_46
    int32_t r8_52 =
        rol.d(rcx_53 - 0xbd6ddbc + ((not.d(r9_41) | r11_38) ^ r10_46) + rcx_3, 6) + r11_38
    int32_t rcx_57 =
        rol.d(r9_41 + 0x432aff97 + ((not.d(r10_46) | r8_52) ^ r11_38) + r13_4, 0xa) + r8_52
    int32_t r9_45 =
        rol.d(r10_46 - 0x546bdc59 + ((not.d(r11_38) | rcx_57) ^ r8_52) + rsi_4, 0xf) + rcx_57
    int32_t r10_50 =
        ror.d(r11_38 - 0x36c5fc7 + ((not.d(r8_52) | r9_45) ^ rcx_57) + rbx_5, 0xb) + r9_45
    int32_t r11_42 =
        rol.d(r8_52 + 0x655b59c3 + ((not.d(rcx_57) | r10_50) ^ r9_45) + r14_4, 6) + r10_50
    int32_t r8_56 =
        rol.d(rcx_57 - 0x70f3336e + ((not.d(r9_45) | r11_42) ^ r10_50) + r10_5, 0xa) + r11_42
    int32_t rcx_61 =
        rol.d(r9_45 - 0x100b83 + ((not.d(r10_50) | r8_56) ^ r11_42) + r12_4, 0xf) + r8_56
    int32_t r9_49 =
        ror.d(r10_50 - 0x7a7ba22f + ((not.d(r11_42) | rcx_61) ^ r8_56) + r8_3, 0xb) + rcx_61
    int32_t r10_54 =
        rol.d(r11_42 + 0x6fa87e4f + ((not.d(r8_56) | r9_49) ^ rcx_61) + rdi_9, 6) + r9_49
    int32_t r11_46 =
        rol.d(r8_56 - 0x1d31920 + ((not.d(rcx_61) | r10_54) ^ r9_49) + rbp_4, 0xa) + r10_54
    int32_t r8_60 =
        rol.d(rcx_61 - 0x5cfebcec + ((not.d(r9_49) | r11_46) ^ r10_54) + rdi_5, 0xf) + r11_46
    int32_t rcx_65 =
        ror.d(r9_49 + 0x4e0811a1 + ((not.d(r10_54) | r8_60) ^ r11_46) + r15_4, 0xb) + r8_60
    int32_t r10_57 =
        rol.d(r10_54 + ((not.d(r11_46) | rcx_65) ^ r8_60) - 0x8ac817e + r11_5, 6) + rcx_65
    int32_t r9_57 =
        rol.d(((not.d(r8_60) | r10_57) ^ rcx_65) + rbx_13 - 0x42c50dcb + r11_46, 0xa) + r10_57
    int32_t r8_63 =
        rol.d(r8_60 + ((not.d(rcx_65) | r9_57) ^ r10_57) + 0x2ad7d2bb + r9_4, 0xf) + r9_57
    *arg1 += r10_57
    rdi_1 = *arg1
    int32_t r10_59 = var_60_1
        + ror.d(rcx_65 + ((not.d(r10_57) | r8_63) ^ r9_57) - 0x14792c6f + rbx_9, 0xb) + r8_63
    rbx_1 = r10_59
    int32_t rcx_70 = var_5c_1 + r8_63
    arg1[1] = r10_59
    arg1[2] = rcx_70
    r11_1 = rcx_70
    var_5c_1 = rcx_70
    int32_t rcx_72 = var_58_1 + r9_57
    var_60_1 = r10_59
    arg1[3] = rcx_72
    r10_1 = rcx_72
    i -= 1
    var_58_1 = rcx_72
while (i != 0)
