// 函数: sub_142920110
// 地址: 0x142920110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
uint64_t r9 = zx.q(r8.d)
uint64_t r8_1 = r8 u>> 0x20
int64_t r10_1 = zx.q(r9.d) * r8_1
int64_t r8_3 = r8_1 * r8_1 + (r10_1 u>> 0x1f)
int64_t r10_2 = r10_1 << 0x21
int64_t rsi = r8_3 + 1
int64_t rax_2 = r9 * r9 + r10_2
*arg1 = rax_2
int64_t rcx = *arg2
int64_t rdx = arg2[1]

if (rax_2 u>= r10_2)
    rsi = r8_3

uint64_t r10_3 = zx.q(rdx.d)
uint64_t rdx_1 = rdx u>> 0x20
uint64_t r9_2 = zx.q(rcx.d)
uint64_t rcx_1 = rcx u>> 0x20
int64_t rdx_2 = rdx_1 * rcx_1
int64_t rax_4 = rdx_1 * r9_2
int64_t rcx_2 = rdx_2 + 0x100000000
int64_t r8_6 = zx.q(r10_3.d) * rcx_1 + rax_4

if (r8_6 u>= rax_4)
    rcx_2 = rdx_2

int64_t rdx_5 = (r8_6 u>> 0x20) + rcx_2
int64_t r8_7 = r8_6 << 0x20
int64_t r10_5 = r10_3 * r9_2 + r8_7
int64_t rax_5 = rdx_5 + 1

if (r10_5 u>= r8_7)
    rax_5 = rdx_5

int64_t rsi_1 = rsi + r10_5
int64_t rdi = rax_5
int64_t r11 = rax_5 + 1

if (rsi_1 u< r10_5)
    rdi = r11

int64_t rsi_2 = rsi_1 + r10_5
arg1[1] = rsi_2
int64_t rcx_3 = arg2[1]

if (rsi_2 u>= r10_5)
    r11 = rax_5

uint64_t r9_3 = zx.q(rcx_3.d)
uint64_t rcx_4 = rcx_3 u>> 0x20
int64_t rdi_1 = rdi + r11
int64_t r8_9 = zx.q(r9_3.d) * rcx_4
int64_t r8_10 = r8_9 << 0x21
int64_t rdx_8 = (r8_9 u>> 0x1f) + rcx_4 * rcx_4
int64_t r9_5 = r9_3 * r9_3 + r8_10
int64_t rax_6 = rdx_8 + 1

if (r9_5 u>= r8_10)
    rax_6 = rdx_8

int64_t rdx_9 = arg2[2]
int64_t rdi_2 = rdi_1 + r9_5
int64_t rcx_6 = rax_6 + 1

if (rdi_2 u>= r9_5)
    rcx_6 = rax_6

uint64_t r10_7 = zx.q(rdx_9.d)
int64_t r11_2 = adc.q(rcx_6, 0, rdi_1 u< r11)
int64_t rcx_7 = *arg2
int64_t rsi_3
rsi_3.b = r11_2 u< rcx_6
uint64_t r9_6 = zx.q(rcx_7.d)
uint64_t rdx_10 = rdx_9 u>> 0x20
uint64_t rcx_8 = rcx_7 u>> 0x20
int64_t rdx_11 = rdx_10 * rcx_8
int64_t rax_8 = rdx_10 * r9_6
int64_t rcx_9 = rdx_11 + 0x100000000
int64_t r8_13 = zx.q(r10_7.d) * rcx_8 + rax_8

if (r8_13 u>= rax_8)
    rcx_9 = rdx_11

int64_t rdx_14 = (r8_13 u>> 0x20) + rcx_9
int64_t r8_14 = r8_13 << 0x20
int64_t r10_9 = r10_7 * r9_6 + r8_14
int64_t r9_7 = rdx_14 + 1

if (r10_9 u>= r8_14)
    r9_7 = rdx_14

int64_t rdi_3 = rdi_2 + r10_9
int64_t rax_9 = r9_7

if (rdi_3 u< r10_9)
    rax_9 = r9_7 + 1

int64_t r11_3 = r11_2 + rax_9
int64_t rcx_10 = rsi_3 + 1
int64_t rax_10 = r9_7 + 1

if (r11_3 u>= rax_9)
    rcx_10 = rsi_3

int64_t rdi_4 = rdi_3 + r10_9
arg1[2] = rdi_4
int64_t rdx_15 = arg2[3]

if (rdi_4 u>= r10_9)
    rax_10 = r9_7

uint64_t r10_10 = zx.q(rdx_15.d)
int64_t r11_4 = r11_3 + rax_10
int64_t rsi_4 = rcx_10 + 1

if (r11_4 u>= rax_10)
    rsi_4 = rcx_10

int64_t rcx_11 = *arg2
uint64_t rdx_16 = rdx_15 u>> 0x20
uint64_t r9_8 = zx.q(rcx_11.d)
uint64_t rcx_12 = rcx_11 u>> 0x20
int64_t rdx_17 = rdx_16 * rcx_12
int64_t rax_12 = rdx_16 * r9_8
int64_t rcx_13 = rdx_17 + 0x100000000
int64_t r8_17 = zx.q(r10_10.d) * rcx_12 + rax_12

if (r8_17 u>= rax_12)
    rcx_13 = rdx_17

int64_t rdx_20 = (r8_17 u>> 0x20) + rcx_13
int64_t r8_18 = r8_17 << 0x20
int64_t r10_12 = r10_10 * r9_8 + r8_18
int64_t r9_9 = rdx_20 + 1

if (r10_12 u>= r8_18)
    r9_9 = rdx_20

int64_t r11_5 = r11_4 + r10_12
int64_t rdx_21 = r9_9
int64_t rcx_14 = r9_9 + 1

if (r11_5 u< r10_12)
    rdx_21 = rcx_14

int64_t rdi_5 = rdx_21 + rsi_4
int64_t rdx_22 = arg2[2]
int64_t rax_13
rax_13.b = rdi_5 u< rdx_21
int64_t r11_6 = r11_5 + r10_12
uint64_t r10_13 = zx.q(rdx_22.d)

if (r11_6 u>= r10_12)
    rcx_14 = r9_9

int64_t rdi_6 = rdi_5 + rcx_14
int64_t rsi_5 = rax_13 + 1
int64_t rcx_15 = arg2[1]
uint64_t r9_10 = zx.q(rcx_15.d)

if (rdi_6 u>= rcx_14)
    rsi_5 = rax_13

uint64_t rdx_23 = rdx_22 u>> 0x20
uint64_t rcx_16 = rcx_15 u>> 0x20
int64_t rdx_24 = rdx_23 * rcx_16
int64_t rax_15 = rdx_23 * r9_10
int64_t rcx_17 = rdx_24 + 0x100000000
int64_t r8_21 = zx.q(r10_13.d) * rcx_16 + rax_15

if (r8_21 u>= rax_15)
    rcx_17 = rdx_24

int64_t rdx_27 = (r8_21 u>> 0x20) + rcx_17
int64_t r8_22 = r8_21 << 0x20
int64_t r10_15 = r10_13 * r9_10 + r8_22
int64_t r9_11 = rdx_27 + 1

if (r10_15 u>= r8_22)
    r9_11 = rdx_27

int64_t r11_7 = r11_6 + r10_15
int64_t rdx_28 = r9_11
int64_t rcx_18 = r9_11 + 1

if (r11_7 u< r10_15)
    rdx_28 = rcx_18

int64_t rdi_7 = rdi_6 + rdx_28
int64_t rax_16 = rsi_5 + 1

if (rdi_7 u>= rdx_28)
    rax_16 = rsi_5

int64_t r11_8 = r11_7 + r10_15
arg1[3] = r11_8

if (r11_8 u>= r10_15)
    rcx_18 = r9_11

int64_t rdi_8 = rdi_7 + rcx_18
int64_t r10_16 = rax_16 + 1
int64_t rcx_19 = arg2[2]
uint64_t r9_12 = zx.q(rcx_19.d)

if (rdi_8 u>= rcx_18)
    r10_16 = rax_16

uint64_t rcx_20 = rcx_19 u>> 0x20
int64_t r8_24 = zx.q(r9_12.d) * rcx_20
int64_t r8_25 = r8_24 << 0x21
int64_t rdx_31 = (r8_24 u>> 0x1f) + rcx_20 * rcx_20
int64_t r9_14 = r9_12 * r9_12 + r8_25
int64_t rcx_22 = rdx_31 + 1

if (r9_14 u>= r8_25)
    rcx_22 = rdx_31

int64_t rdx_32 = arg2[3]
int64_t rdi_9 = rdi_8 + r9_14
int64_t rax_17 = rcx_22 + 1

if (rdi_9 u>= r9_14)
    rax_17 = rcx_22

int64_t rcx_23 = arg2[1]
uint64_t r9_15 = zx.q(rcx_23.d)
int64_t r11_9 = rax_17 + r10_16
uint64_t r10_17 = zx.q(rdx_32.d)
int64_t rsi_6
rsi_6.b = r11_9 u< rax_17
uint64_t rdx_33 = rdx_32 u>> 0x20
uint64_t rcx_24 = rcx_23 u>> 0x20
int64_t rdx_34 = rdx_33 * rcx_24
int64_t rax_19 = rdx_33 * r9_15
int64_t rcx_25 = rdx_34 + 0x100000000
int64_t r8_28 = zx.q(r10_17.d) * rcx_24 + rax_19

if (r8_28 u>= rax_19)
    rcx_25 = rdx_34

int64_t rdx_37 = (r8_28 u>> 0x20) + rcx_25
int64_t r8_29 = r8_28 << 0x20
int64_t r10_19 = r10_17 * r9_15 + r8_29
int64_t r9_16 = rdx_37 + 1

if (r10_19 u>= r8_29)
    r9_16 = rdx_37

int64_t rdi_10 = rdi_9 + r10_19
int64_t rax_20 = r9_16

if (rdi_10 u< r10_19)
    rax_20 = r9_16 + 1

int64_t rdx_38 = arg2[4]
int64_t rcx_26 = rsi_6 + 1
int64_t r11_10 = r11_9 + rax_20
int64_t rax_21 = r9_16 + 1

if (r11_10 u>= rax_20)
    rcx_26 = rsi_6

int64_t rdi_11 = rdi_10 + r10_19
uint64_t r10_20 = zx.q(rdx_38.d)

if (rdi_11 u>= r10_19)
    rax_21 = r9_16

int64_t r11_11 = r11_10 + rax_21
int64_t rsi_7 = rcx_26 + 1

if (r11_11 u>= rax_21)
    rsi_7 = rcx_26

int64_t rcx_27 = *arg2
uint64_t rdx_39 = rdx_38 u>> 0x20
uint64_t r9_17 = zx.q(rcx_27.d)
uint64_t rcx_28 = rcx_27 u>> 0x20
int64_t rdx_40 = rdx_39 * rcx_28
int64_t rax_23 = rdx_39 * r9_17
int64_t rcx_29 = rdx_40 + 0x100000000
int64_t r8_32 = zx.q(r10_20.d) * rcx_28 + rax_23

if (r8_32 u>= rax_23)
    rcx_29 = rdx_40

int64_t rdx_43 = (r8_32 u>> 0x20) + rcx_29
int64_t r8_33 = r8_32 << 0x20
int64_t r10_22 = r10_20 * r9_17 + r8_33
int64_t r9_18 = rdx_43 + 1

if (r10_22 u>= r8_33)
    r9_18 = rdx_43

int64_t rdi_12 = rdi_11 + r10_22
int64_t rdx_44 = r9_18
int64_t rcx_30 = r9_18 + 1

if (rdi_12 u< r10_22)
    rdx_44 = rcx_30

int64_t r11_12 = r11_11 + rdx_44
int64_t rax_24 = rsi_7 + 1

if (r11_12 u>= rdx_44)
    rax_24 = rsi_7

int64_t rdi_13 = rdi_12 + r10_22
arg1[4] = rdi_13
int64_t rdx_45 = arg2[5]

if (rdi_13 u>= r10_22)
    rcx_30 = r9_18

uint64_t r10_23 = zx.q(rdx_45.d)
int64_t r11_13 = r11_12 + rcx_30
int64_t rsi_8 = rax_24 + 1
int64_t rcx_31 = *arg2

if (r11_13 u>= rcx_30)
    rsi_8 = rax_24

uint64_t r9_19 = zx.q(rcx_31.d)
uint64_t rdx_46 = rdx_45 u>> 0x20
uint64_t rcx_32 = rcx_31 u>> 0x20
int64_t rdx_47 = rdx_46 * rcx_32
int64_t rax_26 = rdx_46 * r9_19
int64_t rcx_33 = rdx_47 + 0x100000000
int64_t r8_36 = zx.q(r10_23.d) * rcx_32 + rax_26

if (r8_36 u>= rax_26)
    rcx_33 = rdx_47

int64_t rdx_50 = (r8_36 u>> 0x20) + rcx_33
int64_t r8_37 = r8_36 << 0x20
int64_t r10_25 = r10_23 * r9_19 + r8_37
int64_t r9_20 = rdx_50 + 1

if (r10_25 u>= r8_37)
    r9_20 = rdx_50

int64_t r11_14 = r11_13 + r10_25
int64_t rdx_51 = r9_20
int64_t rcx_34 = r9_20 + 1

if (r11_14 u< r10_25)
    rdx_51 = rcx_34

int64_t rdi_14 = rsi_8 + rdx_51
int64_t rdx_52 = arg2[4]
int64_t rax_27
rax_27.b = rdi_14 u< rdx_51
int64_t r11_15 = r11_14 + r10_25
uint64_t r10_26 = zx.q(rdx_52.d)

if (r11_15 u>= r10_25)
    rcx_34 = r9_20

int64_t rdi_15 = rdi_14 + rcx_34
int64_t rsi_9 = rax_27 + 1
int64_t rcx_35 = arg2[1]
uint64_t r9_21 = zx.q(rcx_35.d)

if (rdi_15 u>= rcx_34)
    rsi_9 = rax_27

uint64_t rdx_53 = rdx_52 u>> 0x20
uint64_t rcx_36 = rcx_35 u>> 0x20
int64_t rdx_54 = rdx_53 * rcx_36
int64_t rax_29 = rdx_53 * r9_21
int64_t rcx_37 = rdx_54 + 0x100000000
int64_t r8_40 = zx.q(r10_26.d) * rcx_36 + rax_29

if (r8_40 u>= rax_29)
    rcx_37 = rdx_54

int64_t rdx_57 = (r8_40 u>> 0x20) + rcx_37
int64_t r8_41 = r8_40 << 0x20
int64_t r10_28 = r10_26 * r9_21 + r8_41
int64_t r9_22 = rdx_57 + 1

if (r10_28 u>= r8_41)
    r9_22 = rdx_57

int64_t r11_16 = r11_15 + r10_28
int64_t rdx_58 = r9_22
int64_t rcx_38 = r9_22 + 1

if (r11_16 u< r10_28)
    rdx_58 = rcx_38

int64_t rdi_16 = rdi_15 + rdx_58
int64_t rax_30 = rsi_9 + 1
int64_t rdx_59 = arg2[3]

if (rdi_16 u>= rdx_58)
    rax_30 = rsi_9

int64_t r11_17 = r11_16 + r10_28
uint64_t r10_29 = zx.q(rdx_59.d)

if (r11_17 u>= r10_28)
    rcx_38 = r9_22

int64_t rdi_17 = rdi_16 + rcx_38
int64_t rsi_10 = rax_30 + 1
int64_t rcx_39 = arg2[2]
uint64_t r9_23 = zx.q(rcx_39.d)

if (rdi_17 u>= rcx_38)
    rsi_10 = rax_30

uint64_t rdx_60 = rdx_59 u>> 0x20
uint64_t rcx_40 = rcx_39 u>> 0x20
int64_t rdx_61 = rdx_60 * rcx_40
int64_t rax_32 = rdx_60 * r9_23
int64_t rcx_41 = rdx_61 + 0x100000000
int64_t r8_44 = zx.q(r10_29.d) * rcx_40 + rax_32

if (r8_44 u>= rax_32)
    rcx_41 = rdx_61

int64_t rdx_64 = (r8_44 u>> 0x20) + rcx_41
int64_t r8_45 = r8_44 << 0x20
int64_t r10_31 = r10_29 * r9_23 + r8_45
int64_t r9_24 = rdx_64 + 1

if (r10_31 u>= r8_45)
    r9_24 = rdx_64

int64_t r11_18 = r11_17 + r10_31
int64_t rdx_65 = r9_24
int64_t rcx_42 = r9_24 + 1

if (r11_18 u< r10_31)
    rdx_65 = rcx_42

int64_t rdi_18 = rdi_17 + rdx_65
int64_t rax_33 = rsi_10 + 1

if (rdi_18 u>= rdx_65)
    rax_33 = rsi_10

int64_t r11_19 = r11_18 + r10_31
arg1[5] = r11_19

if (r11_19 u>= r10_31)
    rcx_42 = r9_24

int64_t rdi_19 = rdi_18 + rcx_42
int64_t r10_32 = rax_33 + 1
int64_t rcx_43 = arg2[3]
uint64_t r9_25 = zx.q(rcx_43.d)

if (rdi_19 u>= rcx_42)
    r10_32 = rax_33

uint64_t rcx_44 = rcx_43 u>> 0x20
int64_t r8_47 = zx.q(r9_25.d) * rcx_44
int64_t r8_48 = r8_47 << 0x21
int64_t rdx_68 = (r8_47 u>> 0x1f) + rcx_44 * rcx_44
int64_t r9_27 = r9_25 * r9_25 + r8_48
int64_t rcx_46 = rdx_68 + 1

if (r9_27 u>= r8_48)
    rcx_46 = rdx_68

int64_t rdx_69 = arg2[4]
int64_t rdi_20 = rdi_19 + r9_27
int64_t rax_34 = rcx_46 + 1

if (rdi_20 u>= r9_27)
    rax_34 = rcx_46

int64_t rcx_47 = arg2[2]
uint64_t r9_28 = zx.q(rcx_47.d)
int64_t r11_20 = r10_32 + rax_34
uint64_t r10_33 = zx.q(rdx_69.d)
int64_t rsi_11
rsi_11.b = r11_20 u< rax_34
uint64_t rdx_70 = rdx_69 u>> 0x20
uint64_t rcx_48 = rcx_47 u>> 0x20
int64_t rdx_71 = rdx_70 * rcx_48
int64_t rax_36 = rdx_70 * r9_28
int64_t rcx_49 = rdx_71 + 0x100000000
int64_t r8_51 = zx.q(r10_33.d) * rcx_48 + rax_36

if (r8_51 u>= rax_36)
    rcx_49 = rdx_71

int64_t rdx_74 = (r8_51 u>> 0x20) + rcx_49
int64_t r8_52 = r8_51 << 0x20
int64_t r10_35 = r10_33 * r9_28 + r8_52
int64_t r9_29 = rdx_74 + 1

if (r10_35 u>= r8_52)
    r9_29 = rdx_74

int64_t rdi_21 = rdi_20 + r10_35
int64_t rax_37 = r9_29

if (rdi_21 u< r10_35)
    rax_37 = r9_29 + 1

int64_t rdx_75 = arg2[5]
int64_t rcx_50 = rsi_11 + 1
int64_t r11_21 = r11_20 + rax_37
int64_t rax_38 = r9_29 + 1

if (r11_21 u>= rax_37)
    rcx_50 = rsi_11

int64_t rdi_22 = rdi_21 + r10_35
uint64_t r10_36 = zx.q(rdx_75.d)

if (rdi_22 u>= r10_35)
    rax_38 = r9_29

int64_t r11_22 = r11_21 + rax_38
int64_t rsi_12 = rcx_50 + 1

if (r11_22 u>= rax_38)
    rsi_12 = rcx_50

int64_t rcx_51 = arg2[1]
uint64_t rdx_76 = rdx_75 u>> 0x20
uint64_t r9_30 = zx.q(rcx_51.d)
uint64_t rcx_52 = rcx_51 u>> 0x20
int64_t rdx_77 = rdx_76 * rcx_52
int64_t rax_40 = rdx_76 * r9_30
int64_t rcx_53 = rdx_77 + 0x100000000
int64_t r8_55 = zx.q(r10_36.d) * rcx_52 + rax_40

if (r8_55 u>= rax_40)
    rcx_53 = rdx_77

int64_t rdx_80 = (r8_55 u>> 0x20) + rcx_53
int64_t r8_56 = r8_55 << 0x20
int64_t r10_38 = r10_36 * r9_30 + r8_56
int64_t r9_31 = rdx_80 + 1

if (r10_38 u>= r8_56)
    r9_31 = rdx_80

int64_t rdi_23 = rdi_22 + r10_38
int64_t rdx_81 = r9_31
int64_t rcx_54 = r9_31 + 1

if (rdi_23 u< r10_38)
    rdx_81 = rcx_54

int64_t r11_23 = r11_22 + rdx_81
int64_t rax_41 = rsi_12 + 1
int64_t rdx_82 = arg2[6]

if (r11_23 u>= rdx_81)
    rax_41 = rsi_12

int64_t rdi_24 = rdi_23 + r10_38
uint64_t r10_39 = zx.q(rdx_82.d)

if (rdi_24 u>= r10_38)
    rcx_54 = r9_31

int64_t r11_24 = r11_23 + rcx_54
int64_t rsi_13 = rax_41 + 1
int64_t rcx_55 = *arg2
uint64_t r9_32 = zx.q(rcx_55.d)

if (r11_24 u>= rcx_54)
    rsi_13 = rax_41

uint64_t rdx_83 = rdx_82 u>> 0x20
uint64_t rcx_56 = rcx_55 u>> 0x20
int64_t rdx_84 = rdx_83 * rcx_56
int64_t rax_43 = rdx_83 * r9_32
int64_t rcx_57 = rdx_84 + 0x100000000
int64_t r8_59 = zx.q(r10_39.d) * rcx_56 + rax_43

if (r8_59 u>= rax_43)
    rcx_57 = rdx_84

int64_t rdx_87 = (r8_59 u>> 0x20) + rcx_57
int64_t r8_60 = r8_59 << 0x20
int64_t r10_41 = r10_39 * r9_32 + r8_60
int64_t r9_33 = rdx_87 + 1

if (r10_41 u>= r8_60)
    r9_33 = rdx_87

int64_t rdi_25 = rdi_24 + r10_41
int64_t rdx_88 = r9_33
int64_t rcx_58 = r9_33 + 1

if (rdi_25 u< r10_41)
    rdx_88 = rcx_58

int64_t r11_25 = r11_24 + rdx_88
int64_t rax_44 = rsi_13 + 1

if (r11_25 u>= rdx_88)
    rax_44 = rsi_13

int64_t rdi_26 = rdi_25 + r10_41
arg1[6] = rdi_26
int64_t rdx_89 = arg2[7]

if (rdi_26 u>= r10_41)
    rcx_58 = r9_33

uint64_t r10_42 = zx.q(rdx_89.d)
int64_t r11_26 = r11_25 + rcx_58
int64_t rsi_14 = rax_44 + 1
int64_t rcx_59 = *arg2

if (r11_26 u>= rcx_58)
    rsi_14 = rax_44

uint64_t r9_34 = zx.q(rcx_59.d)
uint64_t rdx_90 = rdx_89 u>> 0x20
uint64_t rcx_60 = rcx_59 u>> 0x20
int64_t rdx_91 = rdx_90 * rcx_60
int64_t rax_46 = rdx_90 * r9_34
int64_t rcx_61 = rdx_91 + 0x100000000
int64_t r8_63 = zx.q(r10_42.d) * rcx_60 + rax_46

if (r8_63 u>= rax_46)
    rcx_61 = rdx_91

int64_t rdx_94 = (r8_63 u>> 0x20) + rcx_61
int64_t r8_64 = r8_63 << 0x20
int64_t r10_44 = r10_42 * r9_34 + r8_64
int64_t r9_35 = rdx_94 + 1

if (r10_44 u>= r8_64)
    r9_35 = rdx_94

int64_t r11_27 = r11_26 + r10_44
int64_t rdx_95 = r9_35
int64_t rcx_62 = r9_35 + 1

if (r11_27 u< r10_44)
    rdx_95 = rcx_62

int64_t rdi_27 = rsi_14 + rdx_95
int64_t rdx_96 = arg2[6]
int64_t rax_47
rax_47.b = rdi_27 u< rdx_95
int64_t r11_28 = r11_27 + r10_44
uint64_t r10_45 = zx.q(rdx_96.d)

if (r11_28 u>= r10_44)
    rcx_62 = r9_35

int64_t rdi_28 = rdi_27 + rcx_62
int64_t rsi_15 = rax_47 + 1
int64_t rcx_63 = arg2[1]
uint64_t r9_36 = zx.q(rcx_63.d)

if (rdi_28 u>= rcx_62)
    rsi_15 = rax_47

uint64_t rdx_97 = rdx_96 u>> 0x20
uint64_t rcx_64 = rcx_63 u>> 0x20
int64_t rdx_98 = rdx_97 * rcx_64
int64_t rax_49 = rdx_97 * r9_36
int64_t rcx_65 = rdx_98 + 0x100000000
int64_t r8_67 = zx.q(r10_45.d) * rcx_64 + rax_49

if (r8_67 u>= rax_49)
    rcx_65 = rdx_98

int64_t rdx_101 = (r8_67 u>> 0x20) + rcx_65
int64_t r8_68 = r8_67 << 0x20
int64_t r10_47 = r10_45 * r9_36 + r8_68
int64_t r9_37 = rdx_101 + 1

if (r10_47 u>= r8_68)
    r9_37 = rdx_101

int64_t r11_29 = r11_28 + r10_47
int64_t rdx_102 = r9_37
int64_t rcx_66 = r9_37 + 1

if (r11_29 u< r10_47)
    rdx_102 = rcx_66

int64_t rdi_29 = rdi_28 + rdx_102
int64_t rax_50 = rsi_15 + 1
int64_t rdx_103 = arg2[5]

if (rdi_29 u>= rdx_102)
    rax_50 = rsi_15

int64_t r11_30 = r11_29 + r10_47
uint64_t r10_48 = zx.q(rdx_103.d)

if (r11_30 u>= r10_47)
    rcx_66 = r9_37

int64_t rdi_30 = rdi_29 + rcx_66
int64_t rsi_16 = rax_50 + 1
int64_t rcx_67 = arg2[2]
uint64_t r9_38 = zx.q(rcx_67.d)

if (rdi_30 u>= rcx_66)
    rsi_16 = rax_50

uint64_t rdx_104 = rdx_103 u>> 0x20
uint64_t rcx_68 = rcx_67 u>> 0x20
int64_t rdx_105 = rdx_104 * rcx_68
int64_t rax_52 = rdx_104 * r9_38
int64_t rcx_69 = rdx_105 + 0x100000000
int64_t r8_71 = zx.q(r10_48.d) * rcx_68 + rax_52

if (r8_71 u>= rax_52)
    rcx_69 = rdx_105

int64_t rdx_108 = (r8_71 u>> 0x20) + rcx_69
int64_t r8_72 = r8_71 << 0x20
int64_t r10_50 = r10_48 * r9_38 + r8_72
int64_t r9_39 = rdx_108 + 1

if (r10_50 u>= r8_72)
    r9_39 = rdx_108

int64_t r11_31 = r11_30 + r10_50
int64_t rdx_109 = r9_39
int64_t rcx_70 = r9_39 + 1

if (r11_31 u< r10_50)
    rdx_109 = rcx_70

int64_t rdi_31 = rdi_30 + rdx_109
int64_t rax_53 = rsi_16 + 1
int64_t rdx_110 = arg2[4]

if (rdi_31 u>= rdx_109)
    rax_53 = rsi_16

int64_t r11_32 = r11_31 + r10_50
uint64_t r10_51 = zx.q(rdx_110.d)

if (r11_32 u>= r10_50)
    rcx_70 = r9_39

int64_t rdi_32 = rdi_31 + rcx_70
int64_t rsi_17 = rax_53 + 1
int64_t rcx_71 = arg2[3]
uint64_t r9_40 = zx.q(rcx_71.d)

if (rdi_32 u>= rcx_70)
    rsi_17 = rax_53

uint64_t rdx_111 = rdx_110 u>> 0x20
uint64_t rcx_72 = rcx_71 u>> 0x20
int64_t rdx_112 = rdx_111 * rcx_72
int64_t rax_55 = rdx_111 * r9_40
int64_t rcx_73 = rdx_112 + 0x100000000
int64_t r8_75 = zx.q(r10_51.d) * rcx_72 + rax_55

if (r8_75 u>= rax_55)
    rcx_73 = rdx_112

int64_t rdx_115 = (r8_75 u>> 0x20) + rcx_73
int64_t r8_76 = r8_75 << 0x20
int64_t r10_53 = r10_51 * r9_40 + r8_76
int64_t r9_41 = rdx_115 + 1

if (r10_53 u>= r8_76)
    r9_41 = rdx_115

int64_t r11_33 = r11_32 + r10_53
int64_t rdx_116 = r9_41
int64_t rcx_74 = r9_41 + 1

if (r11_33 u< r10_53)
    rdx_116 = rcx_74

int64_t rdi_33 = rdi_32 + rdx_116
int64_t rax_56 = rsi_17 + 1

if (rdi_33 u>= rdx_116)
    rax_56 = rsi_17

int64_t r11_34 = r11_33 + r10_53
arg1[7] = r11_34

if (r11_34 u>= r10_53)
    rcx_74 = r9_41

int64_t rdi_34 = rdi_33 + rcx_74
int64_t r10_54 = rax_56 + 1
int64_t rcx_75 = arg2[4]
uint64_t r9_42 = zx.q(rcx_75.d)

if (rdi_34 u>= rcx_74)
    r10_54 = rax_56

uint64_t rcx_76 = rcx_75 u>> 0x20
int64_t r8_78 = zx.q(r9_42.d) * rcx_76
int64_t r8_79 = r8_78 << 0x21
int64_t rdx_119 = (r8_78 u>> 0x1f) + rcx_76 * rcx_76
int64_t r9_44 = r9_42 * r9_42 + r8_79
int64_t rcx_78 = rdx_119 + 1

if (r9_44 u>= r8_79)
    rcx_78 = rdx_119

int64_t rdx_120 = arg2[5]
int64_t rdi_35 = rdi_34 + r9_44
int64_t rax_57 = rcx_78 + 1

if (rdi_35 u>= r9_44)
    rax_57 = rcx_78

int64_t rcx_79 = arg2[3]
uint64_t r9_45 = zx.q(rcx_79.d)
int64_t r11_35 = r10_54 + rax_57
uint64_t r10_55 = zx.q(rdx_120.d)
int64_t rsi_18
rsi_18.b = r11_35 u< rax_57
uint64_t rdx_121 = rdx_120 u>> 0x20
uint64_t rcx_80 = rcx_79 u>> 0x20
int64_t rdx_122 = rdx_121 * rcx_80
int64_t rax_59 = rdx_121 * r9_45
int64_t rcx_81 = rdx_122 + 0x100000000
int64_t r8_82 = zx.q(r10_55.d) * rcx_80 + rax_59

if (r8_82 u>= rax_59)
    rcx_81 = rdx_122

int64_t rdx_125 = (r8_82 u>> 0x20) + rcx_81
int64_t r8_83 = r8_82 << 0x20
int64_t r10_57 = r10_55 * r9_45 + r8_83
int64_t r9_46 = rdx_125 + 1

if (r10_57 u>= r8_83)
    r9_46 = rdx_125

int64_t rdi_36 = rdi_35 + r10_57
int64_t rax_60 = r9_46

if (rdi_36 u< r10_57)
    rax_60 = r9_46 + 1

int64_t rdx_126 = arg2[6]
int64_t rcx_82 = rsi_18 + 1
int64_t r11_36 = r11_35 + rax_60
int64_t rax_61 = r9_46 + 1

if (r11_36 u>= rax_60)
    rcx_82 = rsi_18

int64_t rdi_37 = rdi_36 + r10_57
uint64_t r10_58 = zx.q(rdx_126.d)

if (rdi_37 u>= r10_57)
    rax_61 = r9_46

int64_t r11_37 = r11_36 + rax_61
int64_t rsi_19 = rcx_82 + 1

if (r11_37 u>= rax_61)
    rsi_19 = rcx_82

int64_t rcx_83 = arg2[2]
uint64_t rdx_127 = rdx_126 u>> 0x20
uint64_t r9_47 = zx.q(rcx_83.d)
uint64_t rcx_84 = rcx_83 u>> 0x20
int64_t rdx_128 = rdx_127 * rcx_84
int64_t rax_63 = rdx_127 * r9_47
int64_t rcx_85 = rdx_128 + 0x100000000
int64_t r8_86 = zx.q(r10_58.d) * rcx_84 + rax_63

if (r8_86 u>= rax_63)
    rcx_85 = rdx_128

int64_t rdx_131 = (r8_86 u>> 0x20) + rcx_85
int64_t r8_87 = r8_86 << 0x20
int64_t r10_60 = r10_58 * r9_47 + r8_87
int64_t r9_48 = rdx_131 + 1

if (r10_60 u>= r8_87)
    r9_48 = rdx_131

int64_t rdi_38 = rdi_37 + r10_60
int64_t rdx_132 = r9_48
int64_t rcx_86 = r9_48 + 1

if (rdi_38 u< r10_60)
    rdx_132 = rcx_86

int64_t r11_38 = r11_37 + rdx_132
int64_t rax_64 = rsi_19 + 1
int64_t rdx_133 = arg2[7]

if (r11_38 u>= rdx_132)
    rax_64 = rsi_19

int64_t rdi_39 = rdi_38 + r10_60
uint64_t r10_61 = zx.q(rdx_133.d)

if (rdi_39 u>= r10_60)
    rcx_86 = r9_48

int64_t r11_39 = r11_38 + rcx_86
int64_t rsi_20 = rax_64 + 1
int64_t rcx_87 = arg2[1]
uint64_t r9_49 = zx.q(rcx_87.d)

if (r11_39 u>= rcx_86)
    rsi_20 = rax_64

uint64_t rdx_134 = rdx_133 u>> 0x20
uint64_t rcx_88 = rcx_87 u>> 0x20
int64_t rdx_135 = rdx_134 * rcx_88
int64_t rax_66 = rdx_134 * r9_49
int64_t rcx_89 = rdx_135 + 0x100000000
int64_t r8_90 = zx.q(r10_61.d) * rcx_88 + rax_66

if (r8_90 u>= rax_66)
    rcx_89 = rdx_135

int64_t rdx_138 = (r8_90 u>> 0x20) + rcx_89
int64_t r8_91 = r8_90 << 0x20
int64_t r10_63 = r10_61 * r9_49 + r8_91
int64_t r9_50 = rdx_138 + 1

if (r10_63 u>= r8_91)
    r9_50 = rdx_138

int64_t rdi_40 = rdi_39 + r10_63
int64_t rdx_139 = r9_50
int64_t rcx_90 = r9_50 + 1

if (rdi_40 u< r10_63)
    rdx_139 = rcx_90

int64_t r11_40 = r11_39 + rdx_139
int64_t rax_67 = rsi_20 + 1

if (r11_40 u>= rdx_139)
    rax_67 = rsi_20

int64_t rdi_41 = rdi_40 + r10_63
arg1[8] = rdi_41
int64_t rdx_140 = arg2[7]

if (rdi_41 u>= r10_63)
    rcx_90 = r9_50

uint64_t r10_64 = zx.q(rdx_140.d)
int64_t r11_41 = r11_40 + rcx_90
int64_t rsi_21 = rax_67 + 1
int64_t rcx_91 = arg2[2]

if (r11_41 u>= rcx_90)
    rsi_21 = rax_67

uint64_t r9_51 = zx.q(rcx_91.d)
uint64_t rdx_141 = rdx_140 u>> 0x20
uint64_t rcx_92 = rcx_91 u>> 0x20
int64_t rdx_142 = rdx_141 * rcx_92
int64_t rax_69 = rdx_141 * r9_51
int64_t rcx_93 = rdx_142 + 0x100000000
int64_t r8_94 = zx.q(r10_64.d) * rcx_92 + rax_69

if (r8_94 u>= rax_69)
    rcx_93 = rdx_142

int64_t rdx_145 = (r8_94 u>> 0x20) + rcx_93
int64_t r8_95 = r8_94 << 0x20
int64_t r10_66 = r10_64 * r9_51 + r8_95
int64_t r9_52 = rdx_145 + 1

if (r10_66 u>= r8_95)
    r9_52 = rdx_145

int64_t r11_42 = r11_41 + r10_66
int64_t rdx_146 = r9_52
int64_t rcx_94 = r9_52 + 1

if (r11_42 u< r10_66)
    rdx_146 = rcx_94

int64_t rdi_42 = rsi_21 + rdx_146
int64_t rdx_147 = arg2[6]
int64_t rax_70
rax_70.b = rdi_42 u< rdx_146
int64_t r11_43 = r11_42 + r10_66
uint64_t r10_67 = zx.q(rdx_147.d)

if (r11_43 u>= r10_66)
    rcx_94 = r9_52

int64_t rdi_43 = rdi_42 + rcx_94
int64_t rsi_22 = rax_70 + 1
int64_t rcx_95 = arg2[3]
uint64_t r9_53 = zx.q(rcx_95.d)

if (rdi_43 u>= rcx_94)
    rsi_22 = rax_70

uint64_t rdx_148 = rdx_147 u>> 0x20
uint64_t rcx_96 = rcx_95 u>> 0x20
int64_t rdx_149 = rdx_148 * rcx_96
int64_t rax_72 = rdx_148 * r9_53
int64_t rcx_97 = rdx_149 + 0x100000000
int64_t r8_98 = zx.q(r10_67.d) * rcx_96 + rax_72

if (r8_98 u>= rax_72)
    rcx_97 = rdx_149

int64_t rdx_152 = (r8_98 u>> 0x20) + rcx_97
int64_t r8_99 = r8_98 << 0x20
int64_t r10_69 = r10_67 * r9_53 + r8_99
int64_t r9_54 = rdx_152 + 1

if (r10_69 u>= r8_99)
    r9_54 = rdx_152

int64_t r11_44 = r11_43 + r10_69
int64_t rdx_153 = r9_54
int64_t rcx_98 = r9_54 + 1

if (r11_44 u< r10_69)
    rdx_153 = rcx_98

int64_t rdi_44 = rdi_43 + rdx_153
int64_t rax_73 = rsi_22 + 1
int64_t rdx_154 = arg2[5]

if (rdi_44 u>= rdx_153)
    rax_73 = rsi_22

int64_t r11_45 = r11_44 + r10_69
uint64_t r10_70 = zx.q(rdx_154.d)

if (r11_45 u>= r10_69)
    rcx_98 = r9_54

int64_t rdi_45 = rdi_44 + rcx_98
int64_t rsi_23 = rax_73 + 1
int64_t rcx_99 = arg2[4]
uint64_t r9_55 = zx.q(rcx_99.d)

if (rdi_45 u>= rcx_98)
    rsi_23 = rax_73

uint64_t rdx_155 = rdx_154 u>> 0x20
uint64_t rcx_100 = rcx_99 u>> 0x20
int64_t rdx_156 = rdx_155 * rcx_100
int64_t rax_75 = rdx_155 * r9_55
int64_t rcx_101 = rdx_156 + 0x100000000
int64_t r8_102 = zx.q(r10_70.d) * rcx_100 + rax_75

if (r8_102 u>= rax_75)
    rcx_101 = rdx_156

int64_t rdx_159 = (r8_102 u>> 0x20) + rcx_101
int64_t r8_103 = r8_102 << 0x20
int64_t r10_72 = r10_70 * r9_55 + r8_103
int64_t r9_56 = rdx_159 + 1

if (r10_72 u>= r8_103)
    r9_56 = rdx_159

int64_t r11_46 = r11_45 + r10_72
int64_t rdx_160 = r9_56
int64_t rcx_102 = r9_56 + 1

if (r11_46 u< r10_72)
    rdx_160 = rcx_102

int64_t rdi_46 = rdi_45 + rdx_160
int64_t rax_76 = rsi_23 + 1

if (rdi_46 u>= rdx_160)
    rax_76 = rsi_23

int64_t r11_47 = r11_46 + r10_72
arg1[9] = r11_47

if (r11_47 u>= r10_72)
    rcx_102 = r9_56

int64_t rdi_47 = rdi_46 + rcx_102
int64_t r10_73 = rax_76 + 1
int64_t rcx_103 = arg2[5]
uint64_t r9_57 = zx.q(rcx_103.d)

if (rdi_47 u>= rcx_102)
    r10_73 = rax_76

uint64_t rcx_104 = rcx_103 u>> 0x20
int64_t r8_105 = zx.q(r9_57.d) * rcx_104
int64_t r8_106 = r8_105 << 0x21
int64_t rdx_163 = (r8_105 u>> 0x1f) + rcx_104 * rcx_104
int64_t r9_59 = r9_57 * r9_57 + r8_106
int64_t rcx_106 = rdx_163 + 1

if (r9_59 u>= r8_106)
    rcx_106 = rdx_163

int64_t rdx_164 = arg2[6]
int64_t rdi_48 = rdi_47 + r9_59
int64_t rax_77 = rcx_106 + 1

if (rdi_48 u>= r9_59)
    rax_77 = rcx_106

int64_t rcx_107 = arg2[4]
uint64_t r9_60 = zx.q(rcx_107.d)
int64_t r11_48 = r10_73 + rax_77
uint64_t r10_74 = zx.q(rdx_164.d)
int64_t rsi_24
rsi_24.b = r11_48 u< rax_77
uint64_t rdx_165 = rdx_164 u>> 0x20
uint64_t rcx_108 = rcx_107 u>> 0x20
int64_t rdx_166 = rdx_165 * rcx_108
int64_t rax_79 = rdx_165 * r9_60
int64_t rcx_109 = rdx_166 + 0x100000000
int64_t r8_109 = zx.q(r10_74.d) * rcx_108 + rax_79

if (r8_109 u>= rax_79)
    rcx_109 = rdx_166

int64_t rdx_169 = (r8_109 u>> 0x20) + rcx_109
int64_t r8_110 = r8_109 << 0x20
int64_t r10_76 = r10_74 * r9_60 + r8_110
int64_t r9_61 = rdx_169 + 1

if (r10_76 u>= r8_110)
    r9_61 = rdx_169

int64_t rdi_49 = rdi_48 + r10_76
int64_t rax_80 = r9_61

if (rdi_49 u< r10_76)
    rax_80 = r9_61 + 1

int64_t rdx_170 = arg2[7]
int64_t rcx_110 = rsi_24 + 1
int64_t r11_49 = r11_48 + rax_80
int64_t rax_81 = r9_61 + 1

if (r11_49 u>= rax_80)
    rcx_110 = rsi_24

int64_t rdi_50 = rdi_49 + r10_76
uint64_t r10_77 = zx.q(rdx_170.d)

if (rdi_50 u>= r10_76)
    rax_81 = r9_61

int64_t r11_50 = r11_49 + rax_81
int64_t rsi_25 = rcx_110 + 1

if (r11_50 u>= rax_81)
    rsi_25 = rcx_110

int64_t rcx_111 = arg2[3]
uint64_t rdx_171 = rdx_170 u>> 0x20
uint64_t r9_62 = zx.q(rcx_111.d)
uint64_t rcx_112 = rcx_111 u>> 0x20
int64_t rdx_172 = rdx_171 * rcx_112
int64_t rax_83 = rdx_171 * r9_62
int64_t rcx_113 = rdx_172 + 0x100000000
int64_t r8_113 = zx.q(r10_77.d) * rcx_112 + rax_83

if (r8_113 u>= rax_83)
    rcx_113 = rdx_172

int64_t rdx_175 = (r8_113 u>> 0x20) + rcx_113
int64_t r8_114 = r8_113 << 0x20
int64_t r10_79 = r10_77 * r9_62 + r8_114
int64_t r9_63 = rdx_175 + 1

if (r10_79 u>= r8_114)
    r9_63 = rdx_175

int64_t rdi_51 = rdi_50 + r10_79
int64_t rdx_176 = r9_63
int64_t rcx_114 = r9_63 + 1

if (rdi_51 u< r10_79)
    rdx_176 = rcx_114

int64_t r11_51 = r11_50 + rdx_176
int64_t rax_84 = rsi_25 + 1

if (r11_51 u>= rdx_176)
    rax_84 = rsi_25

int64_t rdi_52 = rdi_51 + r10_79
arg1[0xa] = rdi_52
int64_t rdx_177 = arg2[7]

if (rdi_52 u>= r10_79)
    rcx_114 = r9_63

uint64_t r10_80 = zx.q(rdx_177.d)
int64_t r11_52 = r11_51 + rcx_114
int64_t rsi_26 = rax_84 + 1
int64_t rcx_115 = arg2[4]

if (r11_52 u>= rcx_114)
    rsi_26 = rax_84

uint64_t r9_64 = zx.q(rcx_115.d)
uint64_t rdx_178 = rdx_177 u>> 0x20
uint64_t rcx_116 = rcx_115 u>> 0x20
int64_t rdx_179 = rdx_178 * rcx_116
int64_t rax_86 = rdx_178 * r9_64
int64_t rcx_117 = rdx_179 + 0x100000000
int64_t r8_117 = zx.q(r10_80.d) * rcx_116 + rax_86

if (r8_117 u>= rax_86)
    rcx_117 = rdx_179

int64_t rdx_182 = (r8_117 u>> 0x20) + rcx_117
int64_t r8_118 = r8_117 << 0x20
int64_t r10_82 = r10_80 * r9_64 + r8_118
int64_t r9_65 = rdx_182 + 1

if (r10_82 u>= r8_118)
    r9_65 = rdx_182

int64_t r11_53 = r11_52 + r10_82
int64_t rdx_183 = r9_65
int64_t rcx_118 = r9_65 + 1

if (r11_53 u< r10_82)
    rdx_183 = rcx_118

int64_t rsi_27 = rsi_26 + rdx_183
int64_t rdx_184 = arg2[6]
int64_t rax_87
rax_87.b = rsi_27 u< rdx_183
int64_t r11_54 = r11_53 + r10_82
uint64_t r10_83 = zx.q(rdx_184.d)

if (r11_54 u>= r10_82)
    rcx_118 = r9_65

int64_t rsi_28 = rsi_27 + rcx_118
int64_t rdi_53 = rax_87 + 1
int64_t rcx_119 = arg2[5]
uint64_t r9_66 = zx.q(rcx_119.d)

if (rsi_28 u>= rcx_118)
    rdi_53 = rax_87

uint64_t rdx_185 = rdx_184 u>> 0x20
uint64_t rcx_120 = rcx_119 u>> 0x20
int64_t rdx_186 = rdx_185 * rcx_120
int64_t rax_89 = rdx_185 * r9_66
int64_t rcx_121 = rdx_186 + 0x100000000
int64_t r8_121 = zx.q(r10_83.d) * rcx_120 + rax_89

if (r8_121 u>= rax_89)
    rcx_121 = rdx_186

int64_t rdx_189 = (r8_121 u>> 0x20) + rcx_121
int64_t r8_122 = r8_121 << 0x20
int64_t r10_85 = r10_83 * r9_66 + r8_122
int64_t r9_67 = rdx_189 + 1

if (r10_85 u>= r8_122)
    r9_67 = rdx_189

int64_t r11_55 = r11_54 + r10_85
int64_t rdx_190 = r9_67
int64_t rcx_122 = r9_67 + 1

if (r11_55 u< r10_85)
    rdx_190 = rcx_122

int64_t rsi_29 = rsi_28 + rdx_190
int64_t rax_90 = rdi_53 + 1

if (rsi_29 u>= rdx_190)
    rax_90 = rdi_53

int64_t r11_56 = r11_55 + r10_85
arg1[0xb] = r11_56

if (r11_56 u>= r10_85)
    rcx_122 = r9_67

int64_t rsi_30 = rsi_29 + rcx_122
int64_t rdi_54 = rax_90 + 1
int64_t rcx_123 = arg2[6]
uint64_t r9_68 = zx.q(rcx_123.d)

if (rsi_30 u>= rcx_122)
    rdi_54 = rax_90

uint64_t rcx_124 = rcx_123 u>> 0x20
int64_t r8_124 = zx.q(r9_68.d) * rcx_124
int64_t r8_125 = r8_124 << 0x21
int64_t rdx_193 = (r8_124 u>> 0x1f) + rcx_124 * rcx_124
int64_t r9_70 = r9_68 * r9_68 + r8_125
int64_t rcx_126 = rdx_193 + 1

if (r9_70 u>= r8_125)
    rcx_126 = rdx_193

int64_t rdx_194 = arg2[7]
int64_t rsi_31 = rsi_30 + r9_70
uint64_t r10_86 = zx.q(rdx_194.d)
int64_t rax_91 = rcx_126 + 1

if (rsi_31 u>= r9_70)
    rax_91 = rcx_126

int64_t rcx_127 = arg2[5]
int64_t rdi_55 = rdi_54 + rax_91
uint64_t r9_71 = zx.q(rcx_127.d)
int64_t r11_57
r11_57.b = rdi_55 u< rax_91
uint64_t rdx_195 = rdx_194 u>> 0x20
uint64_t rcx_128 = rcx_127 u>> 0x20
int64_t rdx_196 = rdx_195 * rcx_128
int64_t rax_93 = rdx_195 * r9_71
int64_t rcx_129 = rdx_196 + 0x100000000
int64_t r8_128 = zx.q(r10_86.d) * rcx_128 + rax_93

if (r8_128 u>= rax_93)
    rcx_129 = rdx_196

int64_t rdx_199 = (r8_128 u>> 0x20) + rcx_129
int64_t r8_129 = r8_128 << 0x20
int64_t r10_88 = r10_86 * r9_71 + r8_129
int64_t r9_72 = rdx_199 + 1

if (r10_88 u>= r8_129)
    r9_72 = rdx_199

int64_t rsi_32 = rsi_31 + r10_88
int64_t rax_94 = r9_72

if (rsi_32 u< r10_88)
    rax_94 = r9_72 + 1

int64_t rdi_56 = rdi_55 + rax_94
int64_t rcx_130 = r11_57 + 1
int64_t rax_95 = r9_72 + 1

if (rdi_56 u>= rax_94)
    rcx_130 = r11_57

int64_t rsi_33 = rsi_32 + r10_88
arg1[0xc] = rsi_33
int64_t rdx_200 = arg2[7]

if (rsi_33 u>= r10_88)
    rax_95 = r9_72

uint64_t r10_89 = zx.q(rdx_200.d)
int64_t rdi_57 = rdi_56 + rax_95
int64_t r11_58 = rcx_130 + 1

if (rdi_57 u>= rax_95)
    r11_58 = rcx_130

int64_t rcx_131 = arg2[6]
uint64_t rdx_201 = rdx_200 u>> 0x20
uint64_t r9_73 = zx.q(rcx_131.d)
uint64_t rcx_132 = rcx_131 u>> 0x20
int64_t rdx_202 = rdx_201 * rcx_132
int64_t rax_97 = rdx_201 * r9_73
int64_t rcx_133 = rdx_202 + 0x100000000
int64_t r8_132 = zx.q(r10_89.d) * rcx_132 + rax_97

if (r8_132 u>= rax_97)
    rcx_133 = rdx_202

int64_t rdx_205 = (r8_132 u>> 0x20) + rcx_133
int64_t r8_133 = r8_132 << 0x20
int64_t r10_91 = r10_89 * r9_73 + r8_133
int64_t r9_74 = rdx_205 + 1

if (r10_91 u>= r8_133)
    r9_74 = rdx_205

int64_t rdi_58 = rdi_57 + r10_91
int64_t rcx_134 = r9_74
int64_t rax_98 = r9_74 + 1

if (rdi_58 u< r10_91)
    rcx_134 = rax_98

int64_t r11_59 = r11_58 + rcx_134
int64_t rbp
rbp.b = r11_59 u< rcx_134
int64_t rdi_59 = rdi_58 + r10_91
arg1[0xd] = rdi_59
int64_t rcx_135 = arg2[7]

if (rdi_59 u>= r10_91)
    rax_98 = r9_74

int64_t r10_92 = rbp + 1
int64_t r11_60 = r11_59 + rax_98
uint64_t r9_75 = zx.q(rcx_135.d)

if (r11_60 u>= rax_98)
    r10_92 = rbp

uint64_t rcx_136 = rcx_135 u>> 0x20
int64_t r8_135 = zx.q(r9_75.d) * rcx_136
int64_t r8_136 = r8_135 << 0x21
int64_t rdx_208 = (r8_135 u>> 0x1f) + rcx_136 * rcx_136
int64_t r9_77 = r9_75 * r9_75 + r8_136
int64_t rcx_138 = rdx_208 + 1

if (r9_77 u>= r8_136)
    rcx_138 = rdx_208

int64_t r11_61 = r11_60 + r9_77
arg1[0xe] = r11_61
int64_t rax_99 = rcx_138 + 1

if (r11_61 u>= r9_77)
    rax_99 = rcx_138

int64_t result = rax_99 + r10_92
arg1[0xf] = result
return result
