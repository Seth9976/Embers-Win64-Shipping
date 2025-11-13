// 函数: sub_14295d9f0
// 地址: 0x14295d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x60)
int32_t rdi_1 = arg1[1]
int64_t i = arg3
int32_t rbx_1 = arg1[2]
int32_t r11_1 = arg1[3]
int32_t rsi_1 = *arg1
int32_t var_58_1 = rdi_1
int32_t var_54_1 = rbx_1
int32_t var_50_1 = r11_1

do
    uint32_t r8_3 = zx.d(*arg2) | zx.d(arg2[1]) << 8 | zx.d(arg2[2]) << 0x10 | zx.d(arg2[3]) << 0x18
    uint32_t r9_4 =
        zx.d(arg2[4]) | zx.d(arg2[5]) << 8 | zx.d(arg2[6]) << 0x10 | zx.d(arg2[7]) << 0x18
    int32_t rcx_6 = rol.d((((r11_1 ^ rbx_1) & rdi_1) ^ r11_1) + r8_3 + rsi_1, 3)
    uint32_t r10_4 =
        zx.d(arg2[8]) | zx.d(arg2[9]) << 8 | zx.d(arg2[0xa]) << 0x10 | zx.d(arg2[0xb]) << 0x18
    int32_t r8_10 = rol.d((((rbx_1 ^ rdi_1) & rcx_6) ^ rbx_1) + r9_4 + r11_1, 7)
    uint32_t r11_5 =
        zx.d(arg2[0xc]) | zx.d(arg2[0xd]) << 8 | zx.d(arg2[0xe]) << 0x10 | zx.d(arg2[0xf]) << 0x18
    int32_t r9_11 = rol.d((((rdi_1 ^ rcx_6) & r8_10) ^ rdi_1) + r10_4 + rbx_1, 0xb)
    uint32_t rbx_5 = zx.d(arg2[0x10]) | zx.d(arg2[0x11]) << 8 | zx.d(arg2[0x12]) << 0x10
        | zx.d(arg2[0x13]) << 0x18
    int32_t r10_11 = ror.d((((r8_10 ^ rcx_6) & r9_11) ^ rcx_6) + r11_5 + rdi_1, 0xd)
    uint32_t rdi_5 = zx.d(arg2[0x14]) | zx.d(arg2[0x15]) << 8 | zx.d(arg2[0x16]) << 0x10
        | zx.d(arg2[0x17]) << 0x18
    int32_t r11_12 = rol.d((((r8_10 ^ r9_11) & r10_11) ^ r8_10) + rbx_5 + rcx_6, 3)
    uint32_t rbx_9 = zx.d(arg2[0x18]) | zx.d(arg2[0x19]) << 8 | zx.d(arg2[0x1a]) << 0x10
        | zx.d(arg2[0x1b]) << 0x18
    int32_t rcx_13 = rol.d((((r9_11 ^ r10_11) & r11_12) ^ r9_11) + rdi_5 + r8_10, 7)
    uint32_t rdi_9 = zx.d(arg2[0x1c]) | zx.d(arg2[0x1d]) << 8 | zx.d(arg2[0x1e]) << 0x10
        | zx.d(arg2[0x1f]) << 0x18
    int32_t r8_17 = rol.d((((r10_11 ^ r11_12) & rcx_13) ^ r10_11) + rbx_9 + r9_11, 0xb)
    int32_t rbx_16 = ror.d((((rcx_13 ^ r11_12) & r8_17) ^ r11_12) + rdi_9 + r10_11, 0xd)
    uint32_t r13_4 = zx.d(arg2[0x20]) | zx.d(arg2[0x21]) << 8 | zx.d(arg2[0x22]) << 0x10
        | zx.d(arg2[0x23]) << 0x18
    uint32_t r9_15 = zx.d(arg2[0x24]) | zx.d(arg2[0x25]) << 8 | zx.d(arg2[0x26]) << 0x10
        | zx.d(arg2[0x27]) << 0x18
    int32_t r10_18 = rol.d((((rcx_13 ^ r8_17) & rbx_16) ^ rcx_13) + r13_4 + r11_12, 3)
    uint32_t r12_4 = zx.d(arg2[0x28]) | zx.d(arg2[0x29]) << 8 | zx.d(arg2[0x2a]) << 0x10
        | zx.d(arg2[0x2b]) << 0x18
    int32_t r11_19 = rol.d((((r8_17 ^ rbx_16) & r10_18) ^ r8_17) + r9_15 + rcx_13, 7)
    uint32_t rdi_13 = zx.d(arg2[0x2c]) | zx.d(arg2[0x2d]) << 8 | zx.d(arg2[0x2e]) << 0x10
        | zx.d(arg2[0x2f]) << 0x18
    int32_t r9_22 = rol.d((((rbx_16 ^ r10_18) & r11_19) ^ rbx_16) + r12_4 + r8_17, 0xb)
    uint32_t rbp_4 = zx.d(arg2[0x30]) | zx.d(arg2[0x31]) << 8 | zx.d(arg2[0x32]) << 0x10
        | zx.d(arg2[0x33]) << 0x18
    int32_t rcx_20 = ror.d((((r11_19 ^ r10_18) & r9_22) ^ r10_18) + rdi_13 + rbx_16, 0xd)
    uint32_t r15_4 = zx.d(arg2[0x34]) | zx.d(arg2[0x35]) << 8 | zx.d(arg2[0x36]) << 0x10
        | zx.d(arg2[0x37]) << 0x18
    int32_t r8_24 = rol.d((((r11_19 ^ r9_22) & rcx_20) ^ r11_19) + rbp_4 + r10_18, 3)
    uint32_t rax_85 = zx.d(arg2[0x39])
    uint32_t rsi_2 = zx.d(arg2[0x38])
    uint32_t r14_1 = zx.d(arg2[0x3c])
    arg2 = &arg2[0x40]
    int32_t r10_25 = rol.d((((r9_22 ^ rcx_20) & r8_24) ^ r9_22) + r15_4 + r11_19, 7)
    uint32_t rsi_5 = rsi_2 | rax_85 << 8 | zx.d(arg2[-6]) << 0x10 | zx.d(arg2[-5]) << 0x18
    int32_t r11_26 = rol.d((((rcx_20 ^ r8_24) & r10_25) ^ rcx_20) + rsi_5 + r9_22, 0xb)
    uint32_t r14_4 = r14_1 | zx.d(arg2[-3]) << 8 | zx.d(arg2[-2]) << 0x10 | zx.d(arg2[-1]) << 0x18
    int32_t rbx_23 = ror.d((((r10_25 ^ r8_24) & r11_26) ^ r8_24) + r14_4 + rcx_20, 0xd)
    int32_t r9_25 =
        rol.d(r8_24 + 0x5a827999 + (((r11_26 | rbx_23) & r10_25) | (r11_26 & rbx_23)) + r8_3, 3)
    int32_t rcx_27 = rbx_23 & r9_25
    int32_t r8_26 = rbx_23 | r9_25
    int32_t r10_27 = rol.d(r10_25 + ((r8_26 & r11_26) | rcx_27) + 0x5a827999 + rbx_5, 5)
    int32_t r11_28 = rol.d(r11_26 + ((r8_26 & r10_27) | rcx_27) + 0x5a827999 + r13_4, 9)
    int32_t rbx_25 =
        rol.d(rbx_23 + (((r11_28 | r9_25) & r10_27) | (r11_28 & r9_25)) + 0x5a827999 + rbp_4, 0xd)
    int32_t r9_27 =
        rol.d(r9_25 + (((r11_28 | rbx_25) & r10_27) | (r11_28 & rbx_25)) + 0x5a827999 + r9_4, 3)
    int32_t rcx_41 = rbx_25 & r9_27
    int32_t r8_32 = rbx_25 | r9_27
    int32_t r10_29 = rol.d(r10_27 + ((r8_32 & r11_28) | rcx_41) + 0x5a827999 + rdi_5, 5)
    int32_t r11_30 = rol.d(r11_28 + ((r8_32 & r10_29) | rcx_41) + 0x5a827999 + r9_15, 9)
    int32_t rbx_27 =
        rol.d(rbx_25 + (((r11_30 | r9_27) & r10_29) | (r11_30 & r9_27)) + 0x5a827999 + r15_4, 0xd)
    int32_t r9_29 =
        rol.d(r9_27 + (((r11_30 | rbx_27) & r10_29) | (r11_30 & rbx_27)) + 0x5a827999 + r10_4, 3)
    int32_t rcx_55 = rbx_27 & r9_29
    int32_t r8_38 = rbx_27 | r9_29
    int32_t r10_31 = rol.d(r10_29 + ((r8_38 & r11_30) | rcx_55) + 0x5a827999 + rbx_9, 5)
    int32_t r11_32 = rol.d(r11_30 + ((r8_38 & r10_31) | rcx_55) + 0x5a827999 + r12_4, 9)
    int32_t rdi_16 =
        rol.d(rbx_27 + 0x5a827999 + (((r11_32 | r9_29) & r10_31) | (r11_32 & r9_29)) + rsi_5, 0xd)
    int32_t rbx_30 =
        rol.d(r9_29 + 0x5a827999 + (((r11_32 | rdi_16) & r10_31) | (r11_32 & rdi_16)) + r11_5, 3)
    int32_t r8_44 = rdi_16 | rbx_30
    int32_t rcx_67 = rdi_16 & rbx_30
    int32_t r9_32 = rol.d(r10_31 + 0x5a827999 + ((r8_44 & r11_32) | rcx_67) + rdi_9, 5)
    int32_t r10_34 = rol.d(r11_32 + 0x5a827999 + ((r8_44 & r9_32) | rcx_67) + rdi_13, 9)
    int32_t r11_40 =
        rol.d((((r10_34 | rbx_30) & r9_32) | (r10_34 & rbx_30)) + 0x5a827999 + r14_4 + rdi_16, 0xd)
    int32_t r8_54 = rol.d((r9_32 ^ r10_34 ^ r11_40) + 0x6ed9eba1 + r8_3 + rbx_30, 3)
    int32_t r9_34 = rol.d(r9_32 + (r10_34 ^ r11_40 ^ r8_54) + 0x6ed9eba1 + r13_4, 9)
    int32_t r10_36 = rol.d(r10_34 + (r9_34 ^ r11_40 ^ r8_54) + 0x6ed9eba1 + rbx_5, 0xb)
    int32_t rcx_69 = r9_34 ^ r10_36
    int32_t r11_42 = rol.d(r11_40 + (rcx_69 ^ r8_54) + 0x6ed9eba1 + rbp_4, 0xf)
    int32_t r8_56 = rol.d(r8_54 + (rcx_69 ^ r11_42) + 0x6ed9eba1 + r10_4, 3)
    int32_t r9_36 = rol.d(r9_34 + (r10_36 ^ r11_42 ^ r8_56) + 0x6ed9eba1 + r12_4, 9)
    int32_t r10_38 = rol.d(r10_36 + (r9_36 ^ r11_42 ^ r8_56) + 0x6ed9eba1 + rbx_9, 0xb)
    int32_t rcx_74 = r9_36 ^ r10_38
    int32_t r11_44 = rol.d(r11_42 + (rcx_74 ^ r8_56) + 0x6ed9eba1 + rsi_5, 0xf)
    int32_t r8_58 = rol.d(r8_56 + (rcx_74 ^ r11_44) + 0x6ed9eba1 + r9_4, 3)
    int32_t rbx_33 = rol.d(r9_36 + 0x6ed9eba1 + (r10_38 ^ r11_44 ^ r8_58) + r9_15, 9)
    int32_t rdi_19 = rol.d(r10_38 + 0x6ed9eba1 + (rbx_33 ^ r11_44 ^ r8_58) + rdi_5, 0xb)
    int32_t rcx_79 = rbx_33 ^ rdi_19
    int32_t r11_46 = rol.d(r11_44 + (rcx_79 ^ r8_58) + 0x6ed9eba1 + r15_4, 0xf)
    int32_t r9_39 = rol.d(r8_58 + 0x6ed9eba1 + (rcx_79 ^ r11_46) + r11_5, 3)
    int32_t r10_41 = rol.d(rbx_33 + 0x6ed9eba1 + (rdi_19 ^ r11_46 ^ r9_39) + rdi_13, 9)
    int32_t r8_61 = rol.d(rdi_19 + 0x6ed9eba1 + (r10_41 ^ r11_46 ^ r9_39) + rdi_9, 0xb)
    *arg1 += r9_39
    rsi_1 = *arg1
    int32_t r9_41 = var_58_1 + rol.d(r11_46 + 0x6ed9eba1 + (r10_41 ^ r8_61 ^ r9_39) + r14_4, 0xf)
    rdi_1 = r9_41
    int32_t rcx_86 = var_54_1 + r8_61
    arg1[1] = r9_41
    arg1[2] = rcx_86
    rbx_1 = rcx_86
    var_54_1 = rcx_86
    int32_t rcx_88 = var_50_1 + r10_41
    var_58_1 = r9_41
    arg1[3] = rcx_88
    r11_1 = rcx_88
    i -= 1
    var_50_1 = rcx_88
while (i != 0)
