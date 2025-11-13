// 函数: sub_140b48a30
// 地址: 0x140b48a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rdi = *arg2
char* rax_2 = arg3 + 2
int32_t r10 = arg2[1]
int32_t var_78
int32_t* r8 = &var_78
int32_t r11 = arg2[2]
int64_t i_1 = 0x10
int32_t rbx = arg2[3]
var_88 = rdi
int64_t i

do
    uint32_t rcx = zx.d(*rax_2)
    r8 = &r8[1]
    uint32_t rdx = zx.d(rax_2[1])
    rax_2 = &rax_2[4]
    r8[-1] = ((rdx << 8 | rcx) << 8 | zx.d(rax_2[-5])) << 8 | zx.d(rax_2[-6])
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx_10 = rol.d(rdi - 0x28955b88 + ((not.d(r10) & rbx) | (r11 & r10)) + var_78, 7) + r10
int32_t var_74
int32_t r8_4 =
    rol.d(rbx - 0x173848aa + ((not.d(rdx_10) & r11) | (r10 & rdx_10)) + var_74, 0xc) + rdx_10
int32_t var_70
int32_t r9_3 =
    ror.d(r11 + 0x242070db + ((not.d(r8_4) & r10) | (r8_4 & rdx_10)) + var_70, 0xf) + r8_4
int32_t var_6c
int32_t r10_4 =
    ror.d(r10 - 0x3e423112 + ((not.d(r9_3) & rdx_10) | (r8_4 & r9_3)) + var_6c, 0xa) + r9_3
int32_t var_68
int32_t r11_4 =
    rol.d(rdx_10 - 0xa83f051 + ((not.d(r10_4) & r8_4) | (r9_3 & r10_4)) + var_68, 7) + r10_4
int32_t var_64
int32_t rdx_14 =
    rol.d(r8_4 + 0x4787c62a + ((not.d(r11_4) & r9_3) | (r10_4 & r11_4)) + var_64, 0xc) + r11_4
int32_t var_60
int32_t r8_8 =
    ror.d(r9_3 - 0x57cfb9ed + ((not.d(rdx_14) & r10_4) | (rdx_14 & r11_4)) + var_60, 0xf) + rdx_14
int32_t var_5c
int32_t r9_7 =
    ror.d(r10_4 - 0x2b96aff + ((not.d(r8_8) & r11_4) | (rdx_14 & r8_8)) + var_5c, 0xa) + r8_8
int32_t var_58
int32_t r10_13 =
    rol.d(((not.d(r9_7) & rdx_14) | (r8_8 & r9_7)) + 0x698098d8 + var_58 + r11_4, 7) + r9_7
int32_t var_54
int32_t rdx_17 =
    rol.d(rdx_14 + ((not.d(r10_13) & r8_8) | (r9_7 & r10_13)) - 0x74bb0851 + var_54, 0xc) + r10_13
int32_t var_50
int32_t rdi_9 =
    ror.d(((not.d(rdx_17) & r9_7) | (rdx_17 & r10_13)) - 0xa44f + var_50 + r8_8, 0xf) + rdx_17
int32_t var_4c
int32_t r9_10 =
    ror.d(r9_7 + ((not.d(rdi_9) & r10_13) | (rdx_17 & rdi_9)) - 0x76a32842 + var_4c, 0xa) + rdi_9
int32_t var_48
int32_t r11_8 =
    rol.d(r10_13 + 0x6b901122 + ((not.d(r9_10) & rdx_17) | (rdi_9 & r9_10)) + var_48, 7) + r9_10
int32_t var_44
int32_t rbx_4 =
    rol.d(rdx_17 - 0x2678e6d + ((not.d(r11_8) & rdi_9) | (r9_10 & r11_8)) + var_44, 0xc) + r11_8
int32_t r8_10 = not.d(rbx_4)
int32_t var_40
int32_t r10_17 =
    ror.d(rdi_9 - 0x5986bc72 + ((r8_10 & r9_10) | (rbx_4 & r11_8)) + var_40, 0xf) + rbx_4
int32_t rdx_19 = not.d(r10_17)
int32_t var_3c
int32_t r9_13 =
    ror.d(r9_10 + ((rdx_19 & r11_8) | (rbx_4 & r10_17)) + 0x49b40821 + var_3c, 0xa) + r10_17
int32_t r11_11 = rol.d(r11_8 + ((r8_10 & r10_17) | (rbx_4 & r9_13)) + var_74 - 0x9e1da9e, 5) + r9_13
int32_t r8_21 =
    rol.d(((r10_17 & r11_11) | (rdx_19 & r9_13)) - 0x3fbf4cc0 + var_60 + rbx_4, 9) + r11_11
int32_t rdx_24 =
    rol.d(r10_17 + 0x265e5a51 + ((not.d(r9_13) & r11_11) | (r8_21 & r9_13)) + var_4c, 0xe) + r8_21
int32_t r10_21 =
    ror.d(r9_13 - 0x16493856 + ((not.d(r11_11) & r8_21) | (rdx_24 & r11_11)) + var_78, 0xc) + rdx_24
int32_t r9_17 =
    rol.d(r11_11 - 0x29d0efa3 + ((not.d(r8_21) & rdx_24) | (r8_21 & r10_21)) + var_64, 5) + r10_21
int32_t r11_15 =
    rol.d(r8_21 + 0x2441453 + ((not.d(rdx_24) & r10_21) | (rdx_24 & r9_17)) + var_50, 9) + r9_17
int32_t r8_25 =
    rol.d(rdx_24 - 0x275e197f + ((not.d(r10_21) & r9_17) | (r11_15 & r10_21)) + var_3c, 0xe)
    + r11_15
int32_t rdx_28 =
    ror.d(r10_21 - 0x182c0438 + ((not.d(r9_17) & r11_15) | (r8_25 & r9_17)) + var_68, 0xc) + r8_25
int32_t r10_25 =
    rol.d(r9_17 + 0x21e1cde6 + ((not.d(r11_15) & r8_25) | (r11_15 & rdx_28)) + var_54, 5) + rdx_28
int32_t r9_21 =
    rol.d(r11_15 - 0x3cc8f82a + ((not.d(r8_25) & rdx_28) | (r8_25 & r10_25)) + var_40, 9) + r10_25
int32_t r11_24 =
    rol.d(((not.d(rdx_28) & r10_25) | (r9_21 & rdx_28)) - 0xb2af279 + var_6c + r8_25, 0xe) + r9_21
int32_t rbx_8 =
    ror.d(rdx_28 + 0x455a14ed + ((not.d(r10_25) & r9_21) | (r11_24 & r10_25)) + var_58, 0xc)
    + r11_24
int32_t rdx_32 =
    rol.d(r10_25 - 0x561c16fb + ((not.d(r9_21) & r11_24) | (r9_21 & rbx_8)) + var_44, 5) + rbx_8
int32_t r8_29 =
    rol.d(r9_21 - 0x3105c08 + ((not.d(r11_24) & rbx_8) | (r11_24 & rdx_32)) + var_70, 9) + rdx_32
int32_t r9_25 =
    rol.d(r11_24 + 0x676f02d9 + ((not.d(rbx_8) & rdx_32) | (r8_29 & rbx_8)) + var_5c, 0xe) + r8_29
int32_t r10_34 =
    ror.d(((not.d(rdx_32) & r8_29) | (r9_25 & rdx_32)) - 0x72d5b376 + var_48 + rbx_8, 0xc) + r9_25
int32_t rdx_35 = rol.d(rdx_32 + (r8_29 ^ r9_25 ^ r10_34) - 0x5c6be + var_64, 4) + r10_34
int32_t r8_32 = rol.d(r8_29 + (r9_25 ^ r10_34 ^ rdx_35) - 0x788e097f + var_58, 0xb) + rdx_35
int32_t r9_28 = rol.d(r9_25 + (r8_32 ^ r10_34 ^ rdx_35) + 0x6d9d6122 + var_4c, 0x10) + r8_32
int32_t rcx_137 = r8_32 ^ r9_28
int32_t r10_37 = ror.d(r10_34 + (rcx_137 ^ rdx_35) - 0x21ac7f4 + var_40, 9) + r9_28
int32_t r11_28 = rol.d(rdx_35 - 0x5b4115bc + (rcx_137 ^ r10_37) + var_74, 4) + r10_37
int32_t rdx_39 = rol.d(r8_32 + 0x4bdecfa9 + (r9_28 ^ r10_37 ^ r11_28) + var_68, 0xb) + r11_28
int32_t r8_36 = rol.d(r9_28 - 0x944b4a0 + (rdx_39 ^ r10_37 ^ r11_28) + var_5c, 0x10) + rdx_39
int32_t rcx_141 = rdx_39 ^ r8_36
int32_t r9_32 = ror.d(r10_37 - 0x41404390 + (rcx_141 ^ r11_28) + var_50, 9) + r8_36
int32_t r10_41 = rol.d(r11_28 + 0x289b7ec6 + (rcx_141 ^ r9_32) + var_44, 4) + r9_32
int32_t r11_32 = rol.d(rdx_39 - 0x155ed806 + (r8_36 ^ r9_32 ^ r10_41) + var_78, 0xb) + r10_41
int32_t r8_39 = rol.d(r8_36 + (r11_32 ^ r9_32 ^ r10_41) - 0x2b10cf7b + var_6c, 0x10) + r11_32
int32_t rcx_145 = r11_32 ^ r8_39
int32_t rdx_43 = ror.d(r9_32 + 0x4881d05 + (rcx_145 ^ r10_41) + var_60, 9) + r8_39
int32_t r9_36 = rol.d(r10_41 - 0x262b2fc7 + (rcx_145 ^ rdx_43) + var_54, 4) + rdx_43
int32_t rcx_155 = rol.d((r8_39 ^ rdx_43 ^ r9_36) - 0x1924661b + var_48 + r11_32, 0xb) + r9_36
int32_t r10_45 = rol.d(r8_39 + 0x1fa27cf8 + (rcx_155 ^ rdx_43 ^ r9_36) + var_3c, 0x10) + rcx_155
int32_t r8_43 = ror.d(rdx_43 - 0x3b53a99b + (rcx_155 ^ r10_45 ^ r9_36) + var_70, 9) + r10_45
int32_t rdx_47 = rol.d(r9_36 - 0xbd6ddbc + ((not.d(rcx_155) | r8_43) ^ r10_45) + var_78, 6) + r8_43
int32_t r9_40 =
    rol.d(rcx_155 + 0x432aff97 + ((not.d(r10_45) | rdx_47) ^ r8_43) + var_5c, 0xa) + rdx_47
int32_t rcx_159 =
    rol.d(r10_45 - 0x546bdc59 + ((not.d(r8_43) | r9_40) ^ rdx_47) + var_40, 0xf) + r9_40
int32_t r10_49 =
    ror.d(r8_43 - 0x36c5fc7 + ((not.d(rdx_47) | rcx_159) ^ r9_40) + var_64, 0xb) + rcx_159
int32_t r8_47 =
    rol.d(rdx_47 + 0x655b59c3 + ((not.d(r9_40) | r10_49) ^ rcx_159) + var_48, 6) + r10_49
int32_t rdx_51 =
    rol.d(r9_40 - 0x70f3336e + ((not.d(rcx_159) | r8_47) ^ r10_49) + var_6c, 0xa) + r8_47
int32_t r9_44 =
    rol.d(rcx_159 - 0x100b83 + ((not.d(r10_49) | rdx_51) ^ r8_47) + var_50, 0xf) + rdx_51
int32_t rcx_163 =
    ror.d(r10_49 - 0x7a7ba22f + ((not.d(r8_47) | r9_44) ^ rdx_51) + var_74, 0xb) + r9_44
int32_t r10_53 =
    rol.d(r8_47 + 0x6fa87e4f + ((not.d(rdx_51) | rcx_163) ^ r9_44) + var_58, 6) + rcx_163
int32_t r11_41 =
    rol.d(((not.d(r9_44) | r10_53) ^ rcx_163) - 0x1d31920 + var_3c + rdx_51, 0xa) + r10_53
int32_t r9_47 =
    rol.d(r9_44 + ((not.d(rcx_163) | r11_41) ^ r10_53) - 0x5cfebcec + var_60, 0xf) + r11_41
int32_t rbx_12 =
    ror.d(rcx_163 + 0x4e0811a1 + ((not.d(r10_53) | r9_47) ^ r11_41) + var_44, 0xb) + r9_47
int32_t r8_56 = rol.d(((not.d(r11_41) | rbx_12) ^ r9_47) - 0x8ac817e + var_68 + r10_53, 6) + rbx_12
int32_t rdx_55 =
    rol.d(r11_41 - 0x42c50dcb + ((not.d(r9_47) | r8_56) ^ rbx_12) + var_4c, 0xa) + r8_56
*arg2 = var_88 + r8_56
int32_t rcx_167 =
    rol.d(r9_47 + 0x2ad7d2bb + ((not.d(rbx_12) | rdx_55) ^ r8_56) + var_70, 0xf) + rdx_55
arg2[2] += rcx_167
int32_t result = ror.d(rbx_12 - 0x14792c6f + ((not.d(r8_56) | rcx_167) ^ rdx_55) + var_54, 0xb)
    + arg2[1] + rcx_167
arg2[3] += rdx_55
arg2[1] = result
__security_check_cookie(rax_1 ^ &var_88)
return result
