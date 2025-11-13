// 函数: sub_1428ff370
// 地址: 0x1428ff370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg2
int32_t rdi = *arg1
int32_t rsi = arg1[1]
uint32_t rax_1 = rdi u>> 0x10
int32_t r8_1 = r9 * rax_1
uint32_t r10_1

if (r8_1 == 0)
    r10_1 = 1 - r9
else
    r10_1 = zx.d(r8_1.w) - (r8_1 u>> 0x10)
    rax_1 = r10_1 u>> 0x10

int32_t rdi_1 = rdi + arg2[1]
int32_t r11_1 = arg2[3]
int16_t r10_2 = r10_1.w - rax_1.w
int16_t rbx_2 = (rsi u>> 0x10).w + (arg2[2]).w
uint32_t rax_5 = zx.d(rsi.w)
int32_t r8_3 = r11_1 * rax_5
uint32_t r9_2

if (r8_3 == 0)
    r9_2 = 1 - r11_1
else
    r9_2 = zx.d(r8_3.w) - (r8_3 u>> 0x10)
    rax_5 = r9_2 u>> 0x10

int16_t r9_3 = r9_2.w - rax_5.w
uint32_t r11_2 = zx.d(rbx_2) ^ zx.d(r10_2)
int32_t rax_11 = arg2[4]
int32_t r8_5 = rax_11 * r11_2
uint32_t r8_8

if (r8_5 == 0)
    r8_8 = 1 - rax_11 - r11_2
else
    uint32_t r8_7 = zx.d(r8_5.w) - (r8_5 u>> 0x10)
    r8_8 = r8_7 - (r8_7 u>> 0x10)

int32_t rsi_1 = arg2[5]
uint32_t rax_19 = zx.d((r9_3 ^ rdi_1.w) + r8_8.w)
int32_t r11_4 = rsi_1 * rax_19
uint32_t r11_6

if (r11_4 == 0)
    r11_6 = 1 - rsi_1
else
    r11_6 = zx.d(r11_4.w) - (r11_4 u>> 0x10)
    rax_19 = r11_6 u>> 0x10

uint32_t r11_7 = r11_6 - rax_19
uint32_t r8_10 = r8_8 + r11_7
uint32_t rax_23 = zx.d(r11_7.w) ^ zx.d(r10_2)
int32_t rbx_3 = arg2[6]
int32_t r10_4 = rbx_3 * rax_23
uint32_t r11_10

if (r10_4 == 0)
    r11_10 = 1 - rbx_3
else
    r11_10 = zx.d(r10_4.w) - (r10_4 u>> 0x10)
    rax_23 = r11_10 u>> 0x10

int32_t rbx_4 = arg2[9]
int16_t r11_11 = r11_10.w - rax_23.w
int16_t rdi_4 = (r11_7.w ^ rbx_2) + (arg2[7]).w
int32_t r8_12 = (r8_10 ^ rdi_1) + arg2[8]
uint32_t rax_27 = zx.d(r9_3) ^ zx.d(r8_10.w)
int32_t r9_6 = rbx_4 * rax_27
uint32_t r10_6

if (r9_6 == 0)
    r10_6 = 1 - rbx_4
else
    r10_6 = zx.d(r9_6.w) - (r9_6 u>> 0x10)
    rax_27 = r10_6 u>> 0x10

int32_t rbx_5 = arg2[0xa]
int16_t r10_7 = r10_6.w - rax_27.w
uint32_t rax_33 = zx.d(r8_12.w) ^ zx.d(r11_11)
int32_t r9_8 = rbx_5 * rax_33
uint32_t r9_10

if (r9_8 == 0)
    r9_10 = 1 - rbx_5
else
    r9_10 = zx.d(r9_8.w) - (r9_8 u>> 0x10)
    rax_33 = r9_10 u>> 0x10

int32_t rsi_2 = arg2[0xb]
int16_t r9_11 = r9_10.w - rax_33.w
uint32_t rax_40 = zx.d((r10_7 ^ rdi_4) + r9_11)
int32_t rbx_7 = rsi_2 * rax_40
uint32_t rbx_9

if (rbx_7 == 0)
    rbx_9 = 1 - rsi_2
else
    rbx_9 = zx.d(rbx_7.w) - (rbx_7 u>> 0x10)
    rax_40 = rbx_9 u>> 0x10

uint32_t rbx_10 = rbx_9 - rax_40
int16_t r9_12 = r9_11 + rbx_10.w
uint32_t rax_44 = zx.d(rbx_10.w) ^ zx.d(r11_11)
int32_t rbx_12 = arg2[0xc]
int32_t r8_14 = rbx_12 * rax_44
uint32_t r11_13

if (r8_14 == 0)
    r11_13 = 1 - rbx_12
else
    r11_13 = zx.d(r8_14.w) - (r8_14 u>> 0x10)
    rax_44 = r11_13 u>> 0x10

int32_t rbx_13 = arg2[0xf]
int16_t r11_14 = r11_13.w - rax_44.w
int32_t rdi_7 = (rbx_10 ^ r8_12) + arg2[0xd]
int16_t r9_14 = (r9_12 ^ rdi_4) + (arg2[0xe]).w
uint32_t rax_48 = zx.d(r10_7) ^ zx.d(r9_12)
int32_t r8_16 = rbx_13 * rax_48
uint32_t r10_10

if (r8_16 == 0)
    r10_10 = 1 - rbx_13
else
    r10_10 = zx.d(r8_16.w) - (r8_16 u>> 0x10)
    rax_48 = r10_10 u>> 0x10

int32_t rbx_14 = arg2[0x10]
int16_t r10_11 = r10_10.w - rax_48.w
uint32_t rax_54 = zx.d(r9_14) ^ zx.d(r11_14)
int32_t r8_18 = rbx_14 * rax_54
uint32_t r8_20

if (r8_18 == 0)
    r8_20 = 1 - rbx_14
else
    r8_20 = zx.d(r8_18.w) - (r8_18 u>> 0x10)
    rax_54 = r8_20 u>> 0x10

int32_t rsi_3 = arg2[0x11]
uint32_t r8_21 = r8_20 - rax_54
uint32_t rax_61 = zx.d((r10_11 ^ rdi_7.w) + r8_21.w)
int32_t rbx_16 = rsi_3 * rax_61
uint32_t rbx_18

if (rbx_16 == 0)
    rbx_18 = 1 - rsi_3
else
    rbx_18 = zx.d(rbx_16.w) - (rbx_16 u>> 0x10)
    rax_61 = rbx_18 u>> 0x10

uint32_t rbx_19 = rbx_18 - rax_61
uint32_t r8_22 = r8_21 + rbx_19
uint32_t rax_65 = zx.d(rbx_19.w) ^ zx.d(r11_14)
int32_t rbx_21 = arg2[0x12]
int32_t r9_16 = rbx_21 * rax_65
uint32_t r11_16

if (r9_16 == 0)
    r11_16 = 1 - rbx_21
else
    r11_16 = zx.d(r9_16.w) - (r9_16 u>> 0x10)
    rax_65 = r11_16 u>> 0x10

int32_t rbx_22 = arg2[0x15]
int16_t r11_17 = r11_16.w - rax_65.w
int16_t rdi_10 = (rbx_19.w ^ r9_14) + (arg2[0x13]).w
int32_t r8_24 = (r8_22 ^ rdi_7) + arg2[0x14]
uint32_t rax_69 = zx.d(r10_11) ^ zx.d(r8_22.w)
int32_t r9_18 = rbx_22 * rax_69
uint32_t r10_14

if (r9_18 == 0)
    r10_14 = 1 - rbx_22
else
    r10_14 = zx.d(r9_18.w) - (r9_18 u>> 0x10)
    rax_69 = r10_14 u>> 0x10

int32_t rbx_23 = arg2[0x16]
int16_t r10_15 = r10_14.w - rax_69.w
uint32_t rax_75 = zx.d(r8_24.w) ^ zx.d(r11_17)
int32_t r9_20 = rbx_23 * rax_75
uint32_t r9_22

if (r9_20 == 0)
    r9_22 = 1 - rbx_23
else
    r9_22 = zx.d(r9_20.w) - (r9_20 u>> 0x10)
    rax_75 = r9_22 u>> 0x10

int32_t rsi_4 = arg2[0x17]
int16_t r9_23 = r9_22.w - rax_75.w
uint32_t rax_82 = zx.d((r10_15 ^ rdi_10) + r9_23)
int32_t rbx_25 = rsi_4 * rax_82
uint32_t rbx_27

if (rbx_25 == 0)
    rbx_27 = 1 - rsi_4
else
    rbx_27 = zx.d(rbx_25.w) - (rbx_25 u>> 0x10)
    rax_82 = rbx_27 u>> 0x10

uint32_t rbx_28 = rbx_27 - rax_82
int16_t r9_24 = r9_23 + rbx_28.w
uint32_t rax_86 = zx.d(rbx_28.w) ^ zx.d(r11_17)
int32_t rbx_30 = arg2[0x18]
int32_t r8_26 = rbx_30 * rax_86
uint32_t r11_19

if (r8_26 == 0)
    r11_19 = 1 - rbx_30
else
    r11_19 = zx.d(r8_26.w) - (r8_26 u>> 0x10)
    rax_86 = r11_19 u>> 0x10

int32_t rbx_31 = arg2[0x1b]
int16_t r11_20 = r11_19.w - rax_86.w
int32_t rdi_13 = (rbx_28 ^ r8_24) + arg2[0x19]
int16_t r9_26 = (r9_24 ^ rdi_10) + (arg2[0x1a]).w
uint32_t rax_90 = zx.d(r10_15) ^ zx.d(r9_24)
int32_t r8_28 = rbx_31 * rax_90
uint32_t r10_18

if (r8_28 == 0)
    r10_18 = 1 - rbx_31
else
    r10_18 = zx.d(r8_28.w) - (r8_28 u>> 0x10)
    rax_90 = r10_18 u>> 0x10

int32_t rbx_32 = arg2[0x1c]
int16_t r10_19 = r10_18.w - rax_90.w
uint32_t rax_96 = zx.d(r9_26) ^ zx.d(r11_20)
int32_t r8_30 = rbx_32 * rax_96
uint32_t r8_32

if (r8_30 == 0)
    r8_32 = 1 - rbx_32
else
    r8_32 = zx.d(r8_30.w) - (r8_30 u>> 0x10)
    rax_96 = r8_32 u>> 0x10

int32_t rsi_5 = arg2[0x1d]
uint32_t r8_33 = r8_32 - rax_96
uint32_t rax_103 = zx.d((r10_19 ^ rdi_13.w) + r8_33.w)
int32_t rbx_34 = rsi_5 * rax_103
uint32_t rbx_36

if (rbx_34 == 0)
    rbx_36 = 1 - rsi_5
else
    rbx_36 = zx.d(rbx_34.w) - (rbx_34 u>> 0x10)
    rax_103 = rbx_36 u>> 0x10

uint32_t rbx_37 = rbx_36 - rax_103
uint32_t r8_34 = r8_33 + rbx_37
uint32_t rax_107 = zx.d(rbx_37.w) ^ zx.d(r11_20)
int32_t rbx_39 = arg2[0x1e]
int32_t r9_28 = rbx_39 * rax_107
uint32_t r11_22

if (r9_28 == 0)
    r11_22 = 1 - rbx_39
else
    r11_22 = zx.d(r9_28.w) - (r9_28 u>> 0x10)
    rax_107 = r11_22 u>> 0x10

int32_t rbx_40 = arg2[0x21]
int16_t r11_23 = r11_22.w - rax_107.w
int16_t rdi_16 = (rbx_37.w ^ r9_26) + (arg2[0x1f]).w
int32_t r8_36 = (r8_34 ^ rdi_13) + arg2[0x20]
uint32_t rax_111 = zx.d(r10_19) ^ zx.d(r8_34.w)
int32_t r9_30 = rbx_40 * rax_111
uint32_t r10_22

if (r9_30 == 0)
    r10_22 = 1 - rbx_40
else
    r10_22 = zx.d(r9_30.w) - (r9_30 u>> 0x10)
    rax_111 = r10_22 u>> 0x10

int32_t rbx_41 = arg2[0x22]
int16_t r10_23 = r10_22.w - rax_111.w
uint32_t rax_117 = zx.d(r8_36.w) ^ zx.d(r11_23)
int32_t r9_32 = rbx_41 * rax_117
uint32_t r9_34

if (r9_32 == 0)
    r9_34 = 1 - rbx_41
else
    r9_34 = zx.d(r9_32.w) - (r9_32 u>> 0x10)
    rax_117 = r9_34 u>> 0x10

int32_t rsi_6 = arg2[0x23]
int16_t r9_35 = r9_34.w - rax_117.w
uint32_t rax_124 = zx.d((r10_23 ^ rdi_16) + r9_35)
int32_t rbx_43 = rsi_6 * rax_124
uint32_t rbx_45

if (rbx_43 == 0)
    rbx_45 = 1 - rsi_6
else
    rbx_45 = zx.d(rbx_43.w) - (rbx_43 u>> 0x10)
    rax_124 = rbx_45 u>> 0x10

uint32_t rbx_46 = rbx_45 - rax_124
int16_t r9_36 = r9_35 + rbx_46.w
uint32_t rax_128 = zx.d(rbx_46.w) ^ zx.d(r11_23)
int32_t rbx_48 = arg2[0x24]
int32_t r8_38 = rbx_48 * rax_128
uint32_t r11_25

if (r8_38 == 0)
    r11_25 = 1 - rbx_48
else
    r11_25 = zx.d(r8_38.w) - (r8_38 u>> 0x10)
    rax_128 = r11_25 u>> 0x10

int32_t rbx_49 = arg2[0x27]
int16_t r11_26 = r11_25.w - rax_128.w
int32_t rdi_19 = (rbx_46 ^ r8_36) + arg2[0x25]
int16_t r9_38 = (r9_36 ^ rdi_16) + (arg2[0x26]).w
uint32_t rax_132 = zx.d(r10_23) ^ zx.d(r9_36)
int32_t r8_40 = rbx_49 * rax_132
uint32_t r10_26

if (r8_40 == 0)
    r10_26 = 1 - rbx_49
else
    r10_26 = zx.d(r8_40.w) - (r8_40 u>> 0x10)
    rax_132 = r10_26 u>> 0x10

int32_t rbx_50 = arg2[0x28]
int16_t r10_27 = r10_26.w - rax_132.w
uint32_t rax_138 = zx.d(r9_38) ^ zx.d(r11_26)
int32_t r8_42 = rbx_50 * rax_138
uint32_t r8_44

if (r8_42 == 0)
    r8_44 = 1 - rbx_50
else
    r8_44 = zx.d(r8_42.w) - (r8_42 u>> 0x10)
    rax_138 = r8_44 u>> 0x10

int32_t rsi_7 = arg2[0x29]
uint32_t r8_45 = r8_44 - rax_138
uint32_t rax_145 = zx.d((r10_27 ^ rdi_19.w) + r8_45.w)
int32_t rbx_52 = rsi_7 * rax_145
uint32_t rbx_54

if (rbx_52 == 0)
    rbx_54 = 1 - rsi_7
else
    rbx_54 = zx.d(rbx_52.w) - (rbx_52 u>> 0x10)
    rax_145 = rbx_54 u>> 0x10

uint32_t rbx_55 = rbx_54 - rax_145
uint32_t r8_46 = r8_45 + rbx_55
uint32_t rax_149 = zx.d(rbx_55.w) ^ zx.d(r11_26)
int32_t rbx_57 = arg2[0x2a]
int32_t r9_40 = rbx_57 * rax_149
uint32_t r11_28

if (r9_40 == 0)
    r11_28 = 1 - rbx_57
else
    r11_28 = zx.d(r9_40.w) - (r9_40 u>> 0x10)
    rax_149 = r11_28 u>> 0x10

int32_t rbx_58 = arg2[0x2d]
int16_t r11_29 = r11_28.w - rax_149.w
int16_t rdi_22 = (rbx_55.w ^ r9_38) + (arg2[0x2b]).w
int32_t r8_48 = (r8_46 ^ rdi_19) + arg2[0x2c]
uint32_t rax_153 = zx.d(r10_27) ^ zx.d(r8_46.w)
int32_t r9_42 = rbx_58 * rax_153
uint32_t r10_30

if (r9_42 == 0)
    r10_30 = 1 - rbx_58
else
    r10_30 = zx.d(r9_42.w) - (r9_42 u>> 0x10)
    rax_153 = r10_30 u>> 0x10

int32_t rbx_59 = arg2[0x2e]
int16_t r10_31 = r10_30.w - rax_153.w
uint32_t rax_159 = zx.d(r8_48.w) ^ zx.d(r11_29)
int32_t r9_44 = rbx_59 * rax_159
uint32_t r9_46

if (r9_44 == 0)
    r9_46 = 1 - rbx_59
else
    r9_46 = zx.d(r9_44.w) - (r9_44 u>> 0x10)
    rax_159 = r9_46 u>> 0x10

int32_t rsi_8 = arg2[0x2f]
int16_t r9_47 = r9_46.w - rax_159.w
uint32_t rax_166 = zx.d((r10_31 ^ rdi_22) + r9_47)
int32_t rbx_61 = rsi_8 * rax_166
uint32_t rbx_63

if (rbx_61 == 0)
    rbx_63 = 1 - rsi_8
else
    rbx_63 = zx.d(rbx_61.w) - (rbx_61 u>> 0x10)
    rax_166 = rbx_63 u>> 0x10

uint32_t rbx_64 = rbx_63 - rax_166
int16_t r9_48 = r9_47 + rbx_64.w
int32_t r11_30 = arg2[0x30]
uint32_t rax_170 = zx.d(rbx_64.w) ^ zx.d(r11_29)
int32_t r8_50 = r11_30 * rax_170
uint32_t r8_52

if (r8_50 == 0)
    r8_52 = 1 - r11_30
else
    r8_52 = zx.d(r8_50.w) - (r8_50 u>> 0x10)
    rax_170 = r8_52 u>> 0x10

uint32_t rax_174 = zx.d(r10_31) ^ zx.d(r9_48)
int32_t r10_33 = arg2[0x33]
int32_t rcx_2 = r10_33 * rax_174
uint32_t rdx_1

if (rcx_2 == 0)
    rdx_1 = 1 - r10_33
else
    rdx_1 = zx.d(rcx_2.w) - (rcx_2 u>> 0x10)
    rax_174 = rdx_1 u>> 0x10

int32_t r9_52 = (arg2[0x32] + (rbx_64 ^ r8_48)) << 0x10
*arg1 = zx.d((arg2[0x31]).w + (r9_48 ^ rdi_22)) | (r8_52 - rax_170) << 0x10
uint32_t result = zx.d(rdx_1.w - rax_174.w)
arg1[1] = r9_52 | result
return result
