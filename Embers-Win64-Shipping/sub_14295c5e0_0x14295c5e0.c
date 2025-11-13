// 函数: sub_14295c5e0
// 地址: 0x14295c5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi_6 = ((zx.d(arg1[4]) << 8 | zx.d(arg1[5])) << 8 | zx.d(arg1[6])) << 8 | zx.d(arg1[7])
uint32_t rdi_6 =
    ((zx.d(arg1[8]) << 8 | zx.d(arg1[9])) << 8 | zx.d(arg1[0xa])) << 8 | zx.d(arg1[0xb])
uint32_t rbx_6 =
    ((zx.d(arg1[0xc]) << 8 | zx.d(arg1[0xd])) << 8 | zx.d(arg1[0xe])) << 8 | zx.d(arg1[0xf])
int32_t rdx_3 = *arg3 ^ rbx_6 ^ rdi_6 ^ rsi_6
uint32_t r8_6 = ((zx.d(*((zx.q(rdx_3) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_3 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_3 u>> 8).b) + &data_143549af0))) << 8 | zx.d(*(zx.q(rdx_3.b) + &data_143549af0))
uint32_t r11_5 = ror.d(r8_6, 0xe) ^ rol.d(r8_6, 0xa) ^ ror.d(r8_6, 8) ^ rol.d(r8_6, 2)
    ^ (((zx.d(*arg1) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[3]))
uint32_t r11_6 = r11_5 ^ r8_6
int32_t rdx_7 = arg3[1] ^ rbx_6 ^ rdi_6 ^ r11_6
uint32_t r8_13 = ((zx.d(*((zx.q(rdx_7) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_7 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_7 u>> 8).b) + &data_143549af0))) << 8 | zx.d(*(zx.q(rdx_7.b) + &data_143549af0))
uint32_t rsi_7 =
    rsi_6 ^ ror.d(r8_13, 0xe) ^ rol.d(r8_13, 0xa) ^ ror.d(r8_13, 8) ^ rol.d(r8_13, 2) ^ r8_13
int32_t rdx_11 = arg3[2] ^ rbx_6 ^ rsi_7 ^ r11_6
uint32_t r8_20 = ((zx.d(*((zx.q(rdx_11) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_11 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_11 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_11.b) + &data_143549af0))
uint32_t rdi_7 =
    rdi_6 ^ ror.d(r8_20, 0xe) ^ rol.d(r8_20, 0xa) ^ ror.d(r8_20, 8) ^ rol.d(r8_20, 2) ^ r8_20
int32_t rdx_15 = arg3[3] ^ rdi_7 ^ rsi_7 ^ r11_6
uint32_t r8_27 = ((zx.d(*((zx.q(rdx_15) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_15 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_15 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_15.b) + &data_143549af0))
uint32_t rbx_7 =
    rbx_6 ^ ror.d(r8_27, 0xe) ^ rol.d(r8_27, 0xa) ^ ror.d(r8_27, 8) ^ rol.d(r8_27, 2) ^ r8_27
int32_t r8_31 = arg3[4] ^ rbx_7 ^ rdi_7 ^ rsi_7
int32_t rdx_19 = rol.d(*((zx.q((r8_31 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_31 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_31.b) << 2) + 0x143549bf0), 8)
int32_t r11_7 = r11_6 ^ rdx_19 ^ *((zx.q(r8_31) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_35 = arg3[5] ^ rbx_7 ^ rdi_7 ^ r11_7
int32_t rdx_24 = rol.d(*((zx.q((r8_35 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_35 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_35.b) << 2) + 0x143549bf0), 8)
int32_t rsi_8 = rsi_7 ^ rdx_24 ^ *((zx.q(r8_35) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_39 = arg3[6] ^ rbx_7 ^ rsi_8 ^ r11_7
int32_t rdx_29 = rol.d(*((zx.q((r8_39 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_39 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_39.b) << 2) + 0x143549bf0), 8)
int32_t rdi_8 = rdi_7 ^ rdx_29 ^ *((zx.q(r8_39) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_43 = arg3[7] ^ rdi_8 ^ rsi_8 ^ r11_7
int32_t rdx_34 = rol.d(*((zx.q((r8_43 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_43 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_43.b) << 2) + 0x143549bf0), 8)
int32_t rbx_8 = rbx_7 ^ rdx_34 ^ *((zx.q(r8_43) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_47 = arg3[8] ^ rbx_8 ^ rdi_8 ^ rsi_8
int32_t rdx_39 = rol.d(*((zx.q((r8_47 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_47 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_47.b) << 2) + 0x143549bf0), 8)
int32_t r11_8 = r11_7 ^ rdx_39 ^ *((zx.q(r8_47) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_51 = arg3[9] ^ rbx_8 ^ rdi_8 ^ r11_8
int32_t rdx_44 = rol.d(*((zx.q((r8_51 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_51 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_51.b) << 2) + 0x143549bf0), 8)
int32_t rsi_9 = rsi_8 ^ rdx_44 ^ *((zx.q(r8_51) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_55 = arg3[0xa] ^ rbx_8 ^ rsi_9 ^ r11_8
int32_t rdx_49 = rol.d(*((zx.q((r8_55 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_55 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_55.b) << 2) + 0x143549bf0), 8)
int32_t rdi_9 = rdi_8 ^ rdx_49 ^ *((zx.q(r8_55) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_59 = arg3[0xb] ^ rdi_9 ^ rsi_9 ^ r11_8
int32_t rdx_54 = rol.d(*((zx.q((r8_59 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_59 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_59.b) << 2) + 0x143549bf0), 8)
int32_t rbx_9 = rbx_8 ^ rdx_54 ^ *((zx.q(r8_59) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_63 = arg3[0xc] ^ rbx_9 ^ rdi_9 ^ rsi_9
int32_t rdx_59 = rol.d(*((zx.q((r8_63 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_63 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_63.b) << 2) + 0x143549bf0), 8)
int32_t r11_9 = r11_8 ^ rdx_59 ^ *((zx.q(r8_63) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_67 = arg3[0xd] ^ rbx_9 ^ rdi_9 ^ r11_9
int32_t rdx_64 = rol.d(*((zx.q((r8_67 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_67 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_67.b) << 2) + 0x143549bf0), 8)
int32_t rsi_10 = rsi_9 ^ rdx_64 ^ *((zx.q(r8_67) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_71 = arg3[0xe] ^ rbx_9 ^ rsi_10 ^ r11_9
int32_t rdx_69 = rol.d(*((zx.q((r8_71 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_71 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_71.b) << 2) + 0x143549bf0), 8)
int32_t rdi_10 = rdi_9 ^ rdx_69 ^ *((zx.q(r8_71) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_75 = arg3[0xf] ^ rdi_10 ^ rsi_10 ^ r11_9
int32_t rdx_74 = rol.d(*((zx.q((r8_75 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_75 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_75.b) << 2) + 0x143549bf0), 8)
int32_t rbx_10 = rbx_9 ^ rdx_74 ^ *((zx.q(r8_75) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_79 = arg3[0x10] ^ rbx_10 ^ rdi_10 ^ rsi_10
int32_t rdx_79 = rol.d(*((zx.q((r8_79 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_79 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_79.b) << 2) + 0x143549bf0), 8)
int32_t r11_10 = r11_9 ^ rdx_79 ^ *((zx.q(r8_79) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_83 = arg3[0x11] ^ rbx_10 ^ rdi_10 ^ r11_10
int32_t rdx_84 = rol.d(*((zx.q((r8_83 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_83 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_83.b) << 2) + 0x143549bf0), 8)
int32_t rsi_11 = rsi_10 ^ rdx_84 ^ *((zx.q(r8_83) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_87 = arg3[0x12] ^ rbx_10 ^ rsi_11 ^ r11_10
int32_t rdx_89 = rol.d(*((zx.q((r8_87 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_87 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_87.b) << 2) + 0x143549bf0), 8)
int32_t rdi_11 = rdi_10 ^ rdx_89 ^ *((zx.q(r8_87) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_91 = arg3[0x13] ^ rdi_11 ^ rsi_11 ^ r11_10
int32_t rdx_94 = rol.d(*((zx.q((r8_91 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_91 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_91.b) << 2) + 0x143549bf0), 8)
int32_t rbx_11 = rbx_10 ^ rdx_94 ^ *((zx.q(r8_91) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_95 = arg3[0x14] ^ rbx_11 ^ rdi_11 ^ rsi_11
int32_t rdx_99 = rol.d(*((zx.q((r8_95 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_95 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_95.b) << 2) + 0x143549bf0), 8)
int32_t r11_11 = r11_10 ^ rdx_99 ^ *((zx.q(r8_95) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_99 = arg3[0x15] ^ rbx_11 ^ rdi_11 ^ r11_11
int32_t rdx_104 = rol.d(*((zx.q((r8_99 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_99 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_99.b) << 2) + 0x143549bf0), 8)
int32_t rsi_12 = rsi_11 ^ rdx_104 ^ *((zx.q(r8_99) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_103 = arg3[0x16] ^ rbx_11 ^ rsi_12 ^ r11_11
int32_t rdx_109 = rol.d(*((zx.q((r8_103 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_103 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_103.b) << 2) + 0x143549bf0), 8)
int32_t rdi_12 = rdi_11 ^ rdx_109 ^ *((zx.q(r8_103) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_107 = arg3[0x17] ^ rdi_12 ^ rsi_12 ^ r11_11
int32_t rdx_114 = rol.d(*((zx.q((r8_107 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_107 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_107.b) << 2) + 0x143549bf0), 8)
int32_t rbx_12 = rbx_11 ^ rdx_114 ^ *((zx.q(r8_107) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_111 = arg3[0x18] ^ rbx_12 ^ rdi_12 ^ rsi_12
int32_t rdx_119 = rol.d(*((zx.q((r8_111 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_111 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_111.b) << 2) + 0x143549bf0), 8)
int32_t r11_12 = r11_11 ^ rdx_119 ^ *((zx.q(r8_111) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_115 = arg3[0x19] ^ rbx_12 ^ rdi_12 ^ r11_12
int32_t rdx_124 = rol.d(*((zx.q((r8_115 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_115 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_115.b) << 2) + 0x143549bf0), 8)
int32_t rsi_13 = rsi_12 ^ rdx_124 ^ *((zx.q(r8_115) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_119 = arg3[0x1a] ^ rbx_12 ^ rsi_13 ^ r11_12
int32_t rdx_129 = rol.d(*((zx.q((r8_119 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_119 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_119.b) << 2) + 0x143549bf0), 8)
int32_t rdi_13 = rdi_12 ^ rdx_129 ^ *((zx.q(r8_119) u>> 0x18 << 2) + 0x143549bf0)
int32_t r8_123 = arg3[0x1b] ^ rdi_13 ^ rsi_13 ^ r11_12
int32_t rdx_134 = rol.d(*((zx.q((r8_123 u>> 8).b) << 2) + 0x143549bf0), 0x10)
    ^ ror.d(*((zx.q((r8_123 u>> 0x10).b) << 2) + 0x143549bf0), 8)
    ^ rol.d(*((zx.q(r8_123.b) << 2) + 0x143549bf0), 8)
int32_t rbx_13 = rbx_12 ^ rdx_134 ^ *((zx.q(r8_123) u>> 0x18 << 2) + 0x143549bf0)
int32_t rdx_139 = arg3[0x1c] ^ rbx_13 ^ rdi_13 ^ rsi_13
uint32_t r8_130 = ((zx.d(*((zx.q(rdx_139) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_139 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_139 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_139.b) + &data_143549af0))
int32_t r11_13 =
    r11_12 ^ ror.d(r8_130, 0xe) ^ rol.d(r8_130, 0xa) ^ ror.d(r8_130, 8) ^ rol.d(r8_130, 2) ^ r8_130
int32_t rdx_143 = arg3[0x1d] ^ rbx_13 ^ rdi_13 ^ r11_13
uint32_t r8_137 = ((zx.d(*((zx.q(rdx_143) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_143 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_143 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_143.b) + &data_143549af0))
int32_t rsi_14 =
    rsi_13 ^ ror.d(r8_137, 0xe) ^ rol.d(r8_137, 0xa) ^ ror.d(r8_137, 8) ^ rol.d(r8_137, 2) ^ r8_137
int32_t rdx_147 = arg3[0x1e] ^ rbx_13 ^ rsi_14 ^ r11_13
uint32_t r8_144 = ((zx.d(*((zx.q(rdx_147) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_147 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_147 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_147.b) + &data_143549af0))
int32_t rdi_14 =
    rdi_13 ^ ror.d(r8_144, 0xe) ^ rol.d(r8_144, 0xa) ^ ror.d(r8_144, 8) ^ rol.d(r8_144, 2) ^ r8_144
int32_t rdx_151 = arg3[0x1f] ^ rdi_14 ^ rsi_14 ^ r11_13
uint32_t r8_151 = ((zx.d(*((zx.q(rdx_151) u>> 0x18) + &data_143549af0)) << 8
    | zx.d(*(zx.q((rdx_151 u>> 0x10).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q((rdx_151 u>> 8).b) + &data_143549af0))) << 8
    | zx.d(*(zx.q(rdx_151.b) + &data_143549af0))
int32_t rbx_14 =
    rbx_13 ^ ror.d(r8_151, 0xe) ^ rol.d(r8_151, 0xa) ^ ror.d(r8_151, 8) ^ rol.d(r8_151, 2) ^ r8_151
*arg2 = (rbx_14 u>> 0x18).b
arg2[1] = (rbx_14 u>> 0x10).b
arg2[2] = (rbx_14 u>> 8).b
arg2[3] = rbx_14.b
arg2[4] = (rdi_14 u>> 0x18).b
arg2[5] = (rdi_14 u>> 0x10).b
arg2[6] = (rdi_14 u>> 8).b
arg2[7] = rdi_14.b
arg2[8] = (rsi_14 u>> 0x18).b
arg2[9] = (rsi_14 u>> 0x10).b
arg2[0xa] = (rsi_14 u>> 8).b
arg2[0xb] = rsi_14.b
arg2[0xc] = (r11_13 u>> 0x18).b
arg2[0xd] = (r11_13 u>> 0x10).b
uint8_t result = (r11_13 u>> 8).b
arg2[0xe] = result
arg2[0xf] = r11_13.b
return result
