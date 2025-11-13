// 函数: sub_14291daa0
// 地址: 0x14291daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2
int64_t r9 = *arg3
uint64_t r11 = zx.q(r10.d)
uint64_t r10_1 = r10 u>> 0x20
uint64_t rbx = zx.q(r9.d)
int64_t rax_1 = r10_1 * rbx
uint64_t r9_1 = r9 u>> 0x20
int64_t r10_2 = r10_1 * r9_1
int64_t r8_2 = zx.q(r11.d) * r9_1 + rax_1
int64_t rdx = 0x100000000 + r10_2

if (r8_2 u>= rax_1)
    rdx = r10_2

int64_t r8_3 = r8_2 << 0x20
int64_t rdx_1 = rdx + (r8_2 u>> 0x20)
int64_t rdi = rdx_1 + 1
int64_t rax_4 = r11 * rbx + r8_3
*arg1 = rax_4
int64_t rcx = arg3[1]

if (rax_4 u>= r8_3)
    rdi = rdx_1

uint64_t r9_2 = zx.q(rcx.d)
int64_t rdx_2 = *arg2
uint64_t rcx_1 = rcx u>> 0x20
uint64_t r10_3 = zx.q(rdx_2.d)
uint64_t rdx_3 = rdx_2 u>> 0x20
int64_t rdx_4 = rdx_3 * rcx_1
int64_t rax_6 = rdx_3 * r9_2
int64_t rcx_2 = 0x100000000 + rdx_4
int64_t r8_6 = zx.q(r10_3.d) * rcx_1 + rax_6

if (r8_6 u>= rax_6)
    rcx_2 = rdx_4

int64_t rdx_7 = (r8_6 u>> 0x20) + rcx_2
int64_t r8_7 = r8_6 << 0x20
int64_t rcx_3 = *arg3
int64_t rax_7 = rdx_7 + 1
uint64_t r9_3 = zx.q(rcx_3.d)
int64_t r10_5 = r10_3 * r9_2 + r8_7

if (r10_5 u>= r8_7)
    rax_7 = rdx_7

int64_t rdx_8 = arg2[1]
int64_t rdi_1 = rdi + r10_5
uint64_t r10_6 = zx.q(rdx_8.d)
int64_t rsi = rax_7 + 1

if (rdi_1 u>= r10_5)
    rsi = rax_7

uint64_t rdx_9 = rdx_8 u>> 0x20
uint64_t rcx_4 = rcx_3 u>> 0x20
int64_t rdx_10 = rdx_9 * rcx_4
int64_t rax_9 = rdx_9 * r9_3
int64_t rcx_5 = 0x100000000 + rdx_10
int64_t r8_10 = zx.q(r10_6.d) * rcx_4 + rax_9

if (r8_10 u>= rax_9)
    rcx_5 = rdx_10

int64_t rdx_13 = (r8_10 u>> 0x20) + rcx_5
int64_t r8_11 = r8_10 << 0x20
int64_t rax_10 = rdx_13 + 1
int64_t r10_8 = r10_6 * r9_3 + r8_11

if (r10_8 u>= r8_11)
    rax_10 = rdx_13

int64_t rdi_2 = rdi_1 + r10_8
arg1[1] = rdi_2
int64_t rdx_14 = arg2[2]
int64_t rcx_6 = *arg3
uint64_t r9_4 = zx.q(rcx_6.d)
int64_t rbx_1 = rax_10 + 1

if (rdi_2 u>= r10_8)
    rbx_1 = rax_10

uint64_t r10_9 = zx.q(rdx_14.d)
uint64_t rcx_7 = rcx_6 u>> 0x20
int64_t rsi_1 = rsi + rbx_1
uint64_t rdx_15 = rdx_14 u>> 0x20
int64_t rdx_16 = rdx_15 * rcx_7
int64_t rax_12 = rdx_15 * r9_4
int64_t rcx_8 = 0x100000000 + rdx_16
int64_t r8_14 = zx.q(r10_9.d) * rcx_7 + rax_12

if (r8_14 u>= rax_12)
    rcx_8 = rdx_16

int64_t rdx_19 = (r8_14 u>> 0x20) + rcx_8
int64_t r8_15 = r8_14 << 0x20
int64_t rax_13 = rdx_19 + 1
int64_t r10_11 = r10_9 * r9_4 + r8_15

if (r10_11 u>= r8_15)
    rax_13 = rdx_19

int64_t rdx_20 = arg2[1]
int64_t rsi_2 = rsi_1 + r10_11
uint64_t r10_12 = zx.q(rdx_20.d)
int64_t rcx_9 = rax_13 + 1

if (rsi_2 u>= r10_11)
    rcx_9 = rax_13

int64_t rbp_1 = adc.q(rcx_9, 0, rsi_1 u< rbx_1)
int64_t rcx_10 = arg3[1]
uint64_t r9_5 = zx.q(rcx_10.d)
int64_t r11_3
r11_3.b = rbp_1 u< rcx_9
uint64_t rcx_11 = rcx_10 u>> 0x20
uint64_t rdx_21 = rdx_20 u>> 0x20
int64_t rbx_2 = r11_3 + 1
int64_t rdx_22 = rdx_21 * rcx_11
int64_t rax_15 = rdx_21 * r9_5
int64_t rcx_12 = 0x100000000 + rdx_22
int64_t r8_18 = zx.q(r10_12.d) * rcx_11 + rax_15

if (r8_18 u>= rax_15)
    rcx_12 = rdx_22

int64_t rdx_25 = (r8_18 u>> 0x20) + rcx_12
int64_t r8_19 = r8_18 << 0x20
int64_t r10_14 = r10_12 * r9_5 + r8_19
int64_t rcx_13 = rdx_25 + 1

if (r10_14 u>= r8_19)
    rcx_13 = rdx_25

int64_t rdx_26 = *arg2
int64_t rsi_3 = rsi_2 + r10_14
int64_t rax_16 = rcx_13 + 1

if (rsi_3 u>= r10_14)
    rax_16 = rcx_13

int64_t rcx_14 = arg3[2]
int64_t rbp_2 = rbp_1 + rax_16
uint64_t r9_6 = zx.q(rcx_14.d)

if (rbp_2 u>= rax_16)
    rbx_2 = r11_3

uint64_t rcx_15 = rcx_14 u>> 0x20
uint64_t r10_15 = zx.q(rdx_26.d)
int64_t r11_4 = rbx_2 + 1
uint64_t rdx_27 = rdx_26 u>> 0x20
int64_t rdx_28 = rdx_27 * rcx_15
int64_t rax_18 = rdx_27 * r9_6
int64_t rcx_16 = 0x100000000 + rdx_28
int64_t r8_22 = zx.q(r10_15.d) * rcx_15 + rax_18

if (r8_22 u>= rax_18)
    rcx_16 = rdx_28

int64_t rdx_31 = (r8_22 u>> 0x20) + rcx_16
int64_t r8_23 = r8_22 << 0x20
int64_t rcx_17 = rdx_31 + 1
int64_t r10_17 = r10_15 * r9_6 + r8_23

if (r10_17 u>= r8_23)
    rcx_17 = rdx_31

int64_t rsi_4 = rsi_3 + r10_17
arg1[2] = rsi_4
int64_t rdx_32 = *arg2
uint64_t r10_18 = zx.q(rdx_32.d)
int64_t rax_19 = rcx_17 + 1

if (rsi_4 u>= r10_17)
    rax_19 = rcx_17

int64_t rcx_18 = arg3[3]
int64_t rbp_3 = rbp_2 + rax_19
uint64_t r9_7 = zx.q(rcx_18.d)

if (rbp_3 u>= rax_19)
    r11_4 = rbx_2

uint64_t rcx_19 = rcx_18 u>> 0x20
uint64_t rdx_33 = rdx_32 u>> 0x20
int64_t rdx_34 = rdx_33 * rcx_19
int64_t rax_21 = rdx_33 * r9_7
int64_t rcx_20 = 0x100000000 + rdx_34
int64_t r8_26 = zx.q(r10_18.d) * rcx_19 + rax_21

if (r8_26 u>= rax_21)
    rcx_20 = rdx_34

int64_t rdx_37 = (r8_26 u>> 0x20) + rcx_20
int64_t r8_27 = r8_26 << 0x20
int64_t rcx_21 = rdx_37 + 1
int64_t r10_20 = r10_18 * r9_7 + r8_27

if (r10_20 u>= r8_27)
    rcx_21 = rdx_37

int64_t rdx_38 = arg2[1]
int64_t rbp_4 = rbp_3 + r10_20
uint64_t r10_21 = zx.q(rdx_38.d)
int64_t rax_22 = rcx_21 + 1

if (rbp_4 u>= r10_20)
    rax_22 = rcx_21

int64_t rcx_22 = arg3[2]
uint64_t r9_8 = zx.q(rcx_22.d)
int64_t rsi_5 = rax_22 + r11_4
int64_t r11_5
r11_5.b = rsi_5 u< rax_22
uint64_t rcx_23 = rcx_22 u>> 0x20
uint64_t rdx_39 = rdx_38 u>> 0x20
int64_t rdx_40 = rdx_39 * rcx_23
int64_t rax_24 = rdx_39 * r9_8
int64_t rcx_24 = 0x100000000 + rdx_40
int64_t r8_30 = zx.q(r10_21.d) * rcx_23 + rax_24

if (r8_30 u>= rax_24)
    rcx_24 = rdx_40

int64_t rdx_43 = (r8_30 u>> 0x20) + rcx_24
int64_t r8_31 = r8_30 << 0x20
int64_t rcx_25 = rdx_43 + 1
int64_t r10_23 = r10_21 * r9_8 + r8_31
int64_t rbx_3 = r11_5 + 1

if (r10_23 u>= r8_31)
    rcx_25 = rdx_43

int64_t rdx_44 = arg2[2]
int64_t rbp_5 = rbp_4 + r10_23
uint64_t r10_24 = zx.q(rdx_44.d)
int64_t rax_25 = rcx_25 + 1

if (rbp_5 u>= r10_23)
    rax_25 = rcx_25

int64_t rcx_26 = arg3[1]
int64_t rsi_6 = rsi_5 + rax_25
uint64_t r9_9 = zx.q(rcx_26.d)

if (rsi_6 u>= rax_25)
    rbx_3 = r11_5

uint64_t rcx_27 = rcx_26 u>> 0x20
uint64_t rdx_45 = rdx_44 u>> 0x20
int64_t rdi_3 = rbx_3 + 1
int64_t rdx_46 = rdx_45 * rcx_27
int64_t rax_27 = rdx_45 * r9_9
int64_t rcx_28 = 0x100000000 + rdx_46
int64_t r8_34 = zx.q(r10_24.d) * rcx_27 + rax_27

if (r8_34 u>= rax_27)
    rcx_28 = rdx_46

int64_t rdx_49 = (r8_34 u>> 0x20) + rcx_28
int64_t r8_35 = r8_34 << 0x20
int64_t rcx_29 = rdx_49 + 1
int64_t r10_26 = r10_24 * r9_9 + r8_35

if (r10_26 u>= r8_35)
    rcx_29 = rdx_49

int64_t rdx_50 = arg2[3]
int64_t rbp_6 = rbp_5 + r10_26
uint64_t r10_27 = zx.q(rdx_50.d)
int64_t rax_28 = rcx_29 + 1

if (rbp_6 u>= r10_26)
    rax_28 = rcx_29

int64_t rcx_30 = *arg3
int64_t rsi_7 = rsi_6 + rax_28
uint64_t r9_10 = zx.q(rcx_30.d)

if (rsi_7 u>= rax_28)
    rdi_3 = rbx_3

uint64_t rcx_31 = rcx_30 u>> 0x20
uint64_t rdx_51 = rdx_50 u>> 0x20
int64_t r11_6 = rdi_3 + 1
int64_t rdx_52 = rdx_51 * rcx_31
int64_t rax_30 = rdx_51 * r9_10
int64_t rcx_32 = 0x100000000 + rdx_52
int64_t r8_38 = zx.q(r10_27.d) * rcx_31 + rax_30

if (r8_38 u>= rax_30)
    rcx_32 = rdx_52

int64_t rdx_55 = (r8_38 u>> 0x20) + rcx_32
int64_t r8_39 = r8_38 << 0x20
int64_t r10_29 = r10_27 * r9_10 + r8_39
int64_t rcx_33 = rdx_55 + 1

if (r10_29 u>= r8_39)
    rcx_33 = rdx_55

int64_t rbp_7 = rbp_6 + r10_29
int64_t rax_31 = rcx_33 + 1

if (rbp_7 u>= r10_29)
    rax_31 = rcx_33

int64_t rsi_8 = rsi_7 + rax_31

if (rsi_8 u>= rax_31)
    r11_6 = rdi_3

arg1[3] = rbp_7
int64_t rdx_56 = arg2[4]
int64_t rcx_34 = *arg3
uint64_t r9_11 = zx.q(rcx_34.d)
uint64_t rcx_35 = rcx_34 u>> 0x20
uint64_t r10_30 = zx.q(rdx_56.d)
uint64_t rdx_57 = rdx_56 u>> 0x20
int64_t rdx_58 = rdx_57 * rcx_35
int64_t rax_33 = rdx_57 * r9_11
int64_t rcx_36 = 0x100000000 + rdx_58
int64_t r8_42 = zx.q(r10_30.d) * rcx_35 + rax_33

if (r8_42 u>= rax_33)
    rcx_36 = rdx_58

int64_t rdx_61 = (r8_42 u>> 0x20) + rcx_36
int64_t r8_43 = r8_42 << 0x20
int64_t rcx_37 = rdx_61 + 1
int64_t r10_32 = r10_30 * r9_11 + r8_43

if (r10_32 u>= r8_43)
    rcx_37 = rdx_61

int64_t rdx_62 = arg2[3]
int64_t rsi_9 = rsi_8 + r10_32
uint64_t r10_33 = zx.q(rdx_62.d)
int64_t rax_34 = rcx_37 + 1

if (rsi_9 u>= r10_32)
    rax_34 = rcx_37

int64_t rcx_38 = arg3[1]
uint64_t r9_12 = zx.q(rcx_38.d)
int64_t rbp_8 = rax_34 + r11_6
int64_t r11_7
r11_7.b = rbp_8 u< rax_34
uint64_t rcx_39 = rcx_38 u>> 0x20
uint64_t rdx_63 = rdx_62 u>> 0x20
int64_t rbx_4 = r11_7 + 1
int64_t rdx_64 = rdx_63 * rcx_39
int64_t rax_36 = rdx_63 * r9_12
int64_t rcx_40 = 0x100000000 + rdx_64
int64_t r8_46 = zx.q(r10_33.d) * rcx_39 + rax_36

if (r8_46 u>= rax_36)
    rcx_40 = rdx_64

int64_t rdx_67 = (r8_46 u>> 0x20) + rcx_40
int64_t r8_47 = r8_46 << 0x20
int64_t rcx_41 = rdx_67 + 1
int64_t r10_35 = r10_33 * r9_12 + r8_47

if (r10_35 u>= r8_47)
    rcx_41 = rdx_67

int64_t rdx_68 = arg2[2]
int64_t rsi_10 = rsi_9 + r10_35
uint64_t r10_36 = zx.q(rdx_68.d)
int64_t rax_37 = rcx_41 + 1

if (rsi_10 u>= r10_35)
    rax_37 = rcx_41

int64_t rcx_42 = arg3[2]
int64_t rbp_9 = rbp_8 + rax_37
uint64_t r9_13 = zx.q(rcx_42.d)

if (rbp_9 u>= rax_37)
    rbx_4 = r11_7

uint64_t rcx_43 = rcx_42 u>> 0x20
uint64_t rdx_69 = rdx_68 u>> 0x20
int64_t rax_39 = rdx_69 * r9_13
int64_t rdx_70 = rdx_69 * rcx_43
int64_t r8_50 = zx.q(r10_36.d) * rcx_43 + rax_39
int64_t rcx_44 = 0x100000000 + rdx_70
int64_t r11_8 = rbx_4 + 1

if (r8_50 u>= rax_39)
    rcx_44 = rdx_70

int64_t rdx_73 = (r8_50 u>> 0x20) + rcx_44
int64_t r8_51 = r8_50 << 0x20
int64_t rcx_45 = rdx_73 + 1
int64_t r10_38 = r10_36 * r9_13 + r8_51

if (r10_38 u>= r8_51)
    rcx_45 = rdx_73

int64_t rdx_74 = arg2[1]
int64_t rsi_11 = rsi_10 + r10_38
uint64_t r10_39 = zx.q(rdx_74.d)
int64_t rax_40 = rcx_45 + 1

if (rsi_11 u>= r10_38)
    rax_40 = rcx_45

int64_t rcx_46 = arg3[3]
int64_t rbp_10 = rbp_9 + rax_40
uint64_t r9_14 = zx.q(rcx_46.d)

if (rbp_10 u>= rax_40)
    r11_8 = rbx_4

uint64_t rcx_47 = rcx_46 u>> 0x20
uint64_t rdx_75 = rdx_74 u>> 0x20
int64_t rbx_5 = r11_8 + 1
int64_t rdx_76 = rdx_75 * rcx_47
int64_t rax_42 = rdx_75 * r9_14
int64_t rcx_48 = 0x100000000 + rdx_76
int64_t r8_54 = zx.q(r10_39.d) * rcx_47 + rax_42

if (r8_54 u>= rax_42)
    rcx_48 = rdx_76

int64_t rdx_79 = (r8_54 u>> 0x20) + rcx_48
int64_t r8_55 = r8_54 << 0x20
int64_t rcx_49 = rdx_79 + 1
int64_t r10_41 = r10_39 * r9_14 + r8_55

if (r10_41 u>= r8_55)
    rcx_49 = rdx_79

int64_t rdx_80 = *arg2
int64_t rsi_12 = rsi_11 + r10_41
uint64_t r10_42 = zx.q(rdx_80.d)
int64_t rax_43 = rcx_49 + 1

if (rsi_12 u>= r10_41)
    rax_43 = rcx_49

int64_t rcx_50 = arg3[4]
int64_t rbp_11 = rbp_10 + rax_43
uint64_t r9_15 = zx.q(rcx_50.d)

if (rbp_11 u>= rax_43)
    rbx_5 = r11_8

uint64_t rcx_51 = rcx_50 u>> 0x20
uint64_t rdx_81 = rdx_80 u>> 0x20
int64_t rdx_82 = rdx_81 * rcx_51
int64_t rax_45 = rdx_81 * r9_15
int64_t rcx_52 = 0x100000000 + rdx_82
int64_t r8_58 = zx.q(r10_42.d) * rcx_51 + rax_45

if (r8_58 u>= rax_45)
    rcx_52 = rdx_82

int64_t rdx_85 = (r8_58 u>> 0x20) + rcx_52
int64_t r8_59 = r8_58 << 0x20
int64_t r10_44 = r10_42 * r9_15 + r8_59
int64_t rcx_53 = rdx_85 + 1

if (r10_44 u>= r8_59)
    rcx_53 = rdx_85

int64_t rsi_13 = rsi_12 + r10_44
int64_t rax_46 = rcx_53 + 1

if (rsi_13 u>= r10_44)
    rax_46 = rcx_53

int64_t rbp_12 = rbp_11 + rax_46
arg1[4] = rsi_13
int64_t rdx_86 = *arg2
int64_t r11_9 = rbx_5 + 1
int64_t rcx_54 = arg3[5]
uint64_t r9_16 = zx.q(rcx_54.d)

if (rbp_12 u>= rax_46)
    r11_9 = rbx_5

uint64_t r10_45 = zx.q(rdx_86.d)
uint64_t rcx_55 = rcx_54 u>> 0x20
uint64_t rdx_87 = rdx_86 u>> 0x20
int64_t rdx_88 = rdx_87 * rcx_55
int64_t rax_48 = rdx_87 * r9_16
int64_t rcx_56 = 0x100000000 + rdx_88
int64_t r8_62 = zx.q(r10_45.d) * rcx_55 + rax_48

if (r8_62 u>= rax_48)
    rcx_56 = rdx_88

int64_t rdx_91 = (r8_62 u>> 0x20) + rcx_56
int64_t r8_63 = r8_62 << 0x20
int64_t rcx_57 = rdx_91 + 1
int64_t r10_47 = r10_45 * r9_16 + r8_63

if (r10_47 u>= r8_63)
    rcx_57 = rdx_91

int64_t rdx_92 = arg2[1]
int64_t rbp_13 = rbp_12 + r10_47
uint64_t r10_48 = zx.q(rdx_92.d)
int64_t rax_49 = rcx_57 + 1

if (rbp_13 u>= r10_47)
    rax_49 = rcx_57

int64_t rcx_58 = arg3[4]
uint64_t r9_17 = zx.q(rcx_58.d)
int64_t rsi_14 = rax_49 + r11_9
int64_t r11_10
r11_10.b = rsi_14 u< rax_49
uint64_t rcx_59 = rcx_58 u>> 0x20
uint64_t rdx_93 = rdx_92 u>> 0x20
int64_t rbx_6 = r11_10 + 1
int64_t rdx_94 = rdx_93 * rcx_59
int64_t rax_51 = rdx_93 * r9_17
int64_t rcx_60 = 0x100000000 + rdx_94
int64_t r8_66 = zx.q(r10_48.d) * rcx_59 + rax_51

if (r8_66 u>= rax_51)
    rcx_60 = rdx_94

int64_t rdx_97 = (r8_66 u>> 0x20) + rcx_60
int64_t r8_67 = r8_66 << 0x20
int64_t r10_50 = r10_48 * r9_17 + r8_67
int64_t rcx_61 = rdx_97 + 1

if (r10_50 u>= r8_67)
    rcx_61 = rdx_97

int64_t rdx_98 = arg2[2]
int64_t rbp_14 = rbp_13 + r10_50
uint64_t r10_51 = zx.q(rdx_98.d)
int64_t rax_52 = rcx_61 + 1

if (rbp_14 u>= r10_50)
    rax_52 = rcx_61

int64_t rcx_62 = arg3[3]
int64_t rsi_15 = rsi_14 + rax_52
uint64_t r9_18 = zx.q(rcx_62.d)

if (rsi_15 u>= rax_52)
    rbx_6 = r11_10

uint64_t rdx_99 = rdx_98 u>> 0x20
uint64_t rcx_63 = rcx_62 u>> 0x20
int64_t rax_54 = rdx_99 * r9_18
int64_t rdx_100 = rdx_99 * rcx_63
int64_t r11_11 = rbx_6 + 1
int64_t rcx_64 = 0x100000000 + rdx_100
int64_t r8_70 = zx.q(r10_51.d) * rcx_63 + rax_54

if (r8_70 u>= rax_54)
    rcx_64 = rdx_100

int64_t rdx_103 = (r8_70 u>> 0x20) + rcx_64
int64_t r8_71 = r8_70 << 0x20
int64_t rcx_65 = rdx_103 + 1
int64_t r10_53 = r10_51 * r9_18 + r8_71

if (r10_53 u>= r8_71)
    rcx_65 = rdx_103

int64_t rdx_104 = arg2[3]
int64_t rbp_15 = rbp_14 + r10_53
uint64_t r10_54 = zx.q(rdx_104.d)
int64_t rax_55 = rcx_65 + 1

if (rbp_15 u>= r10_53)
    rax_55 = rcx_65

int64_t rcx_66 = arg3[2]
uint64_t r9_19 = zx.q(rcx_66.d)
int64_t rsi_16 = rsi_15 + rax_55

if (rsi_16 u>= rax_55)
    r11_11 = rbx_6

uint64_t rcx_67 = rcx_66 u>> 0x20
uint64_t rdx_105 = rdx_104 u>> 0x20
int64_t rbx_7 = r11_11 + 1
int64_t rdx_106 = rdx_105 * rcx_67
int64_t rax_57 = rdx_105 * r9_19
int64_t rcx_68 = 0x100000000 + rdx_106
int64_t r8_74 = zx.q(r10_54.d) * rcx_67 + rax_57

if (r8_74 u>= rax_57)
    rcx_68 = rdx_106

int64_t rdx_109 = (r8_74 u>> 0x20) + rcx_68
int64_t r8_75 = r8_74 << 0x20
int64_t rcx_69 = rdx_109 + 1
int64_t r10_56 = r10_54 * r9_19 + r8_75

if (r10_56 u>= r8_75)
    rcx_69 = rdx_109

int64_t rdx_110 = arg2[4]
int64_t rbp_16 = rbp_15 + r10_56
uint64_t r10_57 = zx.q(rdx_110.d)
int64_t rax_58 = rcx_69 + 1

if (rbp_16 u>= r10_56)
    rax_58 = rcx_69

int64_t rcx_70 = arg3[1]
uint64_t r9_20 = zx.q(rcx_70.d)
int64_t rsi_17 = rsi_16 + rax_58

if (rsi_17 u>= rax_58)
    rbx_7 = r11_11

uint64_t rcx_71 = rcx_70 u>> 0x20
uint64_t rdx_111 = rdx_110 u>> 0x20
int64_t rdx_112 = rdx_111 * rcx_71
int64_t rax_60 = rdx_111 * r9_20
int64_t rcx_72 = 0x100000000 + rdx_112
int64_t r8_78 = zx.q(r10_57.d) * rcx_71 + rax_60

if (r8_78 u>= rax_60)
    rcx_72 = rdx_112

int64_t rdx_115 = (r8_78 u>> 0x20) + rcx_72
int64_t r8_79 = r8_78 << 0x20
int64_t r10_59 = r10_57 * r9_20 + r8_79
int64_t rcx_73 = rdx_115 + 1

if (r10_59 u>= r8_79)
    rcx_73 = rdx_115

int64_t rdx_116 = arg2[5]
int64_t rax_61 = rcx_73 + 1
int64_t rbp_17 = rbp_16 + r10_59
int64_t rdi_4 = rbx_7 + 1
uint64_t r10_60 = zx.q(rdx_116.d)

if (rbp_17 u>= r10_59)
    rax_61 = rcx_73

int64_t rcx_74 = *arg3
int64_t rsi_18 = rsi_17 + rax_61
uint64_t r9_21 = zx.q(rcx_74.d)

if (rsi_18 u>= rax_61)
    rdi_4 = rbx_7

uint64_t rcx_75 = rcx_74 u>> 0x20
uint64_t rdx_117 = rdx_116 u>> 0x20
int64_t r14 = rdi_4 + 1
int64_t rdx_118 = rdx_117 * rcx_75
int64_t rax_63 = rdx_117 * r9_21
int64_t rcx_76 = 0x100000000 + rdx_118
int64_t r8_82 = zx.q(r10_60.d) * rcx_75 + rax_63

if (r8_82 u>= rax_63)
    rcx_76 = rdx_118

int64_t rdx_121 = (r8_82 u>> 0x20) + rcx_76
int64_t r8_83 = r8_82 << 0x20
int64_t rcx_77 = rdx_121 + 1
int64_t r10_62 = r10_60 * r9_21 + r8_83

if (r10_62 u>= r8_83)
    rcx_77 = rdx_121

int64_t rbp_18 = rbp_17 + r10_62
arg1[5] = rbp_18
int64_t rdx_122 = arg2[6]
uint64_t r10_63 = zx.q(rdx_122.d)
int64_t rax_64 = rcx_77 + 1

if (rbp_18 u>= r10_62)
    rax_64 = rcx_77

int64_t rcx_78 = *arg3
int64_t rsi_19 = rsi_18 + rax_64
uint64_t r9_22 = zx.q(rcx_78.d)

if (rsi_19 u>= rax_64)
    r14 = rdi_4

uint64_t rcx_79 = rcx_78 u>> 0x20
uint64_t rdx_123 = rdx_122 u>> 0x20
int64_t rdx_124 = rdx_123 * rcx_79
int64_t rax_66 = rdx_123 * r9_22
int64_t rcx_80 = 0x100000000 + rdx_124
int64_t r8_86 = zx.q(r10_63.d) * rcx_79 + rax_66

if (r8_86 u>= rax_66)
    rcx_80 = rdx_124

int64_t rdx_127 = (r8_86 u>> 0x20) + rcx_80
int64_t r8_87 = r8_86 << 0x20
int64_t r10_65 = r10_63 * r9_22 + r8_87
int64_t rcx_81 = rdx_127 + 1

if (r10_65 u>= r8_87)
    rcx_81 = rdx_127

int64_t rdx_128 = arg2[5]
int64_t rsi_20 = rsi_19 + r10_65
uint64_t r10_66 = zx.q(rdx_128.d)
int64_t rax_67 = rcx_81 + 1

if (rsi_20 u>= r10_65)
    rax_67 = rcx_81

int64_t rcx_82 = arg3[1]
uint64_t r9_23 = zx.q(rcx_82.d)
int64_t r14_1 = r14 + rax_67
int64_t r11_12
r11_12.b = r14_1 u< rax_67
uint64_t rcx_83 = rcx_82 u>> 0x20
uint64_t rdx_129 = rdx_128 u>> 0x20
int64_t rbx_8 = r11_12 + 1
int64_t rdx_130 = rdx_129 * rcx_83
int64_t rax_69 = rdx_129 * r9_23
int64_t rcx_84 = 0x100000000 + rdx_130
int64_t r8_90 = zx.q(r10_66.d) * rcx_83 + rax_69

if (r8_90 u>= rax_69)
    rcx_84 = rdx_130

int64_t rdx_133 = (r8_90 u>> 0x20) + rcx_84
int64_t r8_91 = r8_90 << 0x20
int64_t rcx_85 = rdx_133 + 1
int64_t r10_68 = r10_66 * r9_23 + r8_91

if (r10_68 u>= r8_91)
    rcx_85 = rdx_133

int64_t rdx_134 = arg2[4]
int64_t rsi_21 = rsi_20 + r10_68
uint64_t r10_69 = zx.q(rdx_134.d)
int64_t rax_70 = rcx_85 + 1

if (rsi_21 u>= r10_68)
    rax_70 = rcx_85

int64_t rcx_86 = arg3[2]
int64_t r14_2 = r14_1 + rax_70
uint64_t r9_24 = zx.q(rcx_86.d)

if (r14_2 u>= rax_70)
    rbx_8 = r11_12

uint64_t rcx_87 = rcx_86 u>> 0x20
uint64_t rdx_135 = rdx_134 u>> 0x20
int64_t r11_13 = rbx_8 + 1
int64_t rdx_136 = rdx_135 * rcx_87
int64_t rax_72 = rdx_135 * r9_24
int64_t rcx_88 = 0x100000000 + rdx_136
int64_t r8_94 = zx.q(r10_69.d) * rcx_87 + rax_72

if (r8_94 u>= rax_72)
    rcx_88 = rdx_136

int64_t rdx_139 = (r8_94 u>> 0x20) + rcx_88
int64_t r8_95 = r8_94 << 0x20
int64_t rcx_89 = rdx_139 + 1
int64_t r10_71 = r10_69 * r9_24 + r8_95

if (r10_71 u>= r8_95)
    rcx_89 = rdx_139

int64_t rdx_140 = arg2[3]
int64_t rsi_22 = rsi_21 + r10_71
uint64_t r10_72 = zx.q(rdx_140.d)
int64_t rax_73 = rcx_89 + 1

if (rsi_22 u>= r10_71)
    rax_73 = rcx_89

int64_t rcx_90 = arg3[3]
uint64_t r9_25 = zx.q(rcx_90.d)
int64_t r14_3 = r14_2 + rax_73

if (r14_3 u>= rax_73)
    r11_13 = rbx_8

uint64_t rdx_141 = rdx_140 u>> 0x20
uint64_t rcx_91 = rcx_90 u>> 0x20
int64_t rdx_142 = rdx_141 * rcx_91
int64_t rax_75 = rdx_141 * r9_25
int64_t rcx_92 = 0x100000000 + rdx_142
int64_t r8_98 = zx.q(r10_72.d) * rcx_91 + rax_75

if (r8_98 u>= rax_75)
    rcx_92 = rdx_142

int64_t rdx_145 = (r8_98 u>> 0x20) + rcx_92
int64_t r8_99 = r8_98 << 0x20
int64_t r10_74 = r10_72 * r9_25 + r8_99
int64_t rcx_93 = rdx_145 + 1
int64_t rbx_9 = r11_13 + 1

if (r10_74 u>= r8_99)
    rcx_93 = rdx_145

int64_t rdx_146 = arg2[2]
int64_t rsi_23 = rsi_22 + r10_74
uint64_t r10_75 = zx.q(rdx_146.d)
int64_t rax_76 = rcx_93 + 1

if (rsi_23 u>= r10_74)
    rax_76 = rcx_93

int64_t rcx_94 = arg3[4]
int64_t r14_4 = r14_3 + rax_76
uint64_t r9_26 = zx.q(rcx_94.d)

if (r14_4 u>= rax_76)
    rbx_9 = r11_13

uint64_t rcx_95 = rcx_94 u>> 0x20
uint64_t rdx_147 = rdx_146 u>> 0x20
int64_t r11_14 = rbx_9 + 1
int64_t rdx_148 = rdx_147 * rcx_95
int64_t rax_78 = rdx_147 * r9_26
int64_t rcx_96 = 0x100000000 + rdx_148
int64_t r8_102 = zx.q(r10_75.d) * rcx_95 + rax_78

if (r8_102 u>= rax_78)
    rcx_96 = rdx_148

int64_t rdx_151 = (r8_102 u>> 0x20) + rcx_96
int64_t r8_103 = r8_102 << 0x20
int64_t rcx_97 = rdx_151 + 1
int64_t r10_77 = r10_75 * r9_26 + r8_103

if (r10_77 u>= r8_103)
    rcx_97 = rdx_151

int64_t rdx_152 = arg2[1]
int64_t rsi_24 = rsi_23 + r10_77
uint64_t r10_78 = zx.q(rdx_152.d)
int64_t rax_79 = rcx_97 + 1

if (rsi_24 u>= r10_77)
    rax_79 = rcx_97

int64_t rcx_98 = arg3[5]
int64_t r14_5 = r14_4 + rax_79
uint64_t r9_27 = zx.q(rcx_98.d)

if (r14_5 u>= rax_79)
    r11_14 = rbx_9

uint64_t rcx_99 = rcx_98 u>> 0x20
uint64_t rdx_153 = rdx_152 u>> 0x20
int64_t rbx_10 = r11_14 + 1
int64_t rdx_154 = rdx_153 * rcx_99
int64_t rax_81 = rdx_153 * r9_27
int64_t rcx_100 = 0x100000000 + rdx_154
int64_t r8_106 = zx.q(r10_78.d) * rcx_99 + rax_81

if (r8_106 u>= rax_81)
    rcx_100 = rdx_154

int64_t rdx_157 = (r8_106 u>> 0x20) + rcx_100
int64_t r8_107 = r8_106 << 0x20
int64_t r10_80 = r10_78 * r9_27 + r8_107
int64_t rcx_101 = rdx_157 + 1

if (r10_80 u>= r8_107)
    rcx_101 = rdx_157

int64_t rsi_25 = rsi_24 + r10_80
int64_t rax_82 = rcx_101 + 1

if (rsi_25 u>= r10_80)
    rax_82 = rcx_101

int64_t rcx_102 = arg3[6]
int64_t r14_6 = r14_5 + rax_82
uint64_t r9_28 = zx.q(rcx_102.d)

if (r14_6 u>= rax_82)
    rbx_10 = r11_14

uint64_t rcx_103 = rcx_102 u>> 0x20
int64_t rdx_158 = *arg2
int64_t rbp_19 = rbx_10 + 1
uint64_t r10_81 = zx.q(rdx_158.d)
uint64_t rdx_159 = rdx_158 u>> 0x20
int64_t rdx_160 = rdx_159 * rcx_103
int64_t rax_84 = rdx_159 * r9_28
int64_t rcx_104 = 0x100000000 + rdx_160
int64_t r8_110 = zx.q(r10_81.d) * rcx_103 + rax_84

if (r8_110 u>= rax_84)
    rcx_104 = rdx_160

int64_t rdx_163 = (r8_110 u>> 0x20) + rcx_104
int64_t r8_111 = r8_110 << 0x20
int64_t rcx_105 = rdx_163 + 1
int64_t r10_83 = r10_81 * r9_28 + r8_111

if (r10_83 u>= r8_111)
    rcx_105 = rdx_163

int64_t rsi_26 = rsi_25 + r10_83
arg1[6] = rsi_26
int64_t rdx_164 = *arg2
uint64_t r10_84 = zx.q(rdx_164.d)
int64_t rax_85 = rcx_105 + 1

if (rsi_26 u>= r10_83)
    rax_85 = rcx_105

int64_t rcx_106 = arg3[7]
uint64_t r9_29 = zx.q(rcx_106.d)
int64_t r14_7 = r14_6 + rax_85

if (r14_7 u>= rax_85)
    rbp_19 = rbx_10

uint64_t rcx_107 = rcx_106 u>> 0x20
uint64_t rdx_165 = rdx_164 u>> 0x20
int64_t rdx_166 = rdx_165 * rcx_107
int64_t rax_87 = rdx_165 * r9_29
int64_t rcx_108 = 0x100000000 + rdx_166
int64_t r8_114 = zx.q(r10_84.d) * rcx_107 + rax_87

if (r8_114 u>= rax_87)
    rcx_108 = rdx_166

int64_t rdx_169 = (r8_114 u>> 0x20) + rcx_108
int64_t r8_115 = r8_114 << 0x20
int64_t rcx_109 = rdx_169 + 1
int64_t r10_86 = r10_84 * r9_29 + r8_115

if (r10_86 u>= r8_115)
    rcx_109 = rdx_169

int64_t rdx_170 = arg2[1]
int64_t r14_8 = r14_7 + r10_86
uint64_t r10_87 = zx.q(rdx_170.d)
int64_t rax_88 = rcx_109 + 1

if (r14_8 u>= r10_86)
    rax_88 = rcx_109

int64_t rcx_110 = arg3[6]
uint64_t r9_30 = zx.q(rcx_110.d)
int64_t rbp_20 = rbp_19 + rax_88
int64_t r11_15
r11_15.b = rbp_20 u< rax_88
uint64_t rcx_111 = rcx_110 u>> 0x20
uint64_t rdx_171 = rdx_170 u>> 0x20
int64_t rdx_172 = rdx_171 * rcx_111
int64_t rax_90 = rdx_171 * r9_30
int64_t rcx_112 = 0x100000000 + rdx_172
int64_t r8_118 = zx.q(r10_87.d) * rcx_111 + rax_90

if (r8_118 u>= rax_90)
    rcx_112 = rdx_172

int64_t rbx_11 = r11_15 + 1
int64_t rdx_175 = (r8_118 u>> 0x20) + rcx_112
int64_t r8_119 = r8_118 << 0x20
int64_t rcx_113 = rdx_175 + 1
int64_t r10_89 = r10_87 * r9_30 + r8_119

if (r10_89 u>= r8_119)
    rcx_113 = rdx_175

int64_t rdx_176 = arg2[2]
int64_t r14_9 = r14_8 + r10_89
uint64_t r10_90 = zx.q(rdx_176.d)
int64_t rax_91 = rcx_113 + 1

if (r14_9 u>= r10_89)
    rax_91 = rcx_113

int64_t rcx_114 = arg3[5]
int64_t rbp_21 = rbp_20 + rax_91
uint64_t r9_31 = zx.q(rcx_114.d)

if (rbp_21 u>= rax_91)
    rbx_11 = r11_15

uint64_t rcx_115 = rcx_114 u>> 0x20
uint64_t rdx_177 = rdx_176 u>> 0x20
int64_t r11_16 = rbx_11 + 1
int64_t rdx_178 = rdx_177 * rcx_115
int64_t rax_93 = rdx_177 * r9_31
int64_t rcx_116 = 0x100000000 + rdx_178
int64_t r8_122 = zx.q(r10_90.d) * rcx_115 + rax_93

if (r8_122 u>= rax_93)
    rcx_116 = rdx_178

int64_t rdx_181 = (r8_122 u>> 0x20) + rcx_116
int64_t r8_123 = r8_122 << 0x20
int64_t rcx_117 = rdx_181 + 1
int64_t r10_92 = r10_90 * r9_31 + r8_123

if (r10_92 u>= r8_123)
    rcx_117 = rdx_181

int64_t rdx_182 = arg2[3]
int64_t r14_10 = r14_9 + r10_92
uint64_t r10_93 = zx.q(rdx_182.d)
int64_t rax_94 = rcx_117 + 1

if (r14_10 u>= r10_92)
    rax_94 = rcx_117

int64_t rcx_118 = arg3[4]
int64_t rbp_22 = rbp_21 + rax_94
uint64_t r9_32 = zx.q(rcx_118.d)

if (rbp_22 u>= rax_94)
    r11_16 = rbx_11

uint64_t rcx_119 = rcx_118 u>> 0x20
uint64_t rdx_183 = rdx_182 u>> 0x20
int64_t rbx_12 = r11_16 + 1
int64_t rdx_184 = rdx_183 * rcx_119
int64_t rax_96 = rdx_183 * r9_32
int64_t rcx_120 = 0x100000000 + rdx_184
int64_t r8_126 = zx.q(r10_93.d) * rcx_119 + rax_96

if (r8_126 u>= rax_96)
    rcx_120 = rdx_184

int64_t rdx_187 = (r8_126 u>> 0x20) + rcx_120
int64_t r8_127 = r8_126 << 0x20
int64_t r10_95 = r10_93 * r9_32 + r8_127
int64_t rcx_121 = rdx_187 + 1

if (r10_95 u>= r8_127)
    rcx_121 = rdx_187

int64_t r14_11 = r14_10 + r10_95
int64_t rax_97 = rcx_121 + 1

if (r14_11 u>= r10_95)
    rax_97 = rcx_121

int64_t rbp_23 = rbp_22 + rax_97

if (rbp_23 u>= rax_97)
    rbx_12 = r11_16

int64_t rdx_188 = arg2[4]
int64_t rcx_122 = arg3[3]
uint64_t r9_33 = zx.q(rcx_122.d)
uint64_t rcx_123 = rcx_122 u>> 0x20
uint64_t r10_96 = zx.q(rdx_188.d)
int64_t r11_17 = rbx_12 + 1
uint64_t rdx_189 = rdx_188 u>> 0x20
int64_t rdx_190 = rdx_189 * rcx_123
int64_t rax_99 = rdx_189 * r9_33
int64_t rcx_124 = 0x100000000 + rdx_190
int64_t r8_130 = zx.q(r10_96.d) * rcx_123 + rax_99

if (r8_130 u>= rax_99)
    rcx_124 = rdx_190

int64_t rdx_193 = (r8_130 u>> 0x20) + rcx_124
int64_t r8_131 = r8_130 << 0x20
int64_t rcx_125 = rdx_193 + 1
int64_t r10_98 = r10_96 * r9_33 + r8_131

if (r10_98 u>= r8_131)
    rcx_125 = rdx_193

int64_t rdx_194 = arg2[5]
int64_t r14_12 = r14_11 + r10_98
uint64_t r10_99 = zx.q(rdx_194.d)
int64_t rax_100 = rcx_125 + 1

if (r14_12 u>= r10_98)
    rax_100 = rcx_125

int64_t rcx_126 = arg3[2]
int64_t rbp_24 = rbp_23 + rax_100
uint64_t r9_34 = zx.q(rcx_126.d)

if (rbp_24 u>= rax_100)
    r11_17 = rbx_12

uint64_t rcx_127 = rcx_126 u>> 0x20
uint64_t rdx_195 = rdx_194 u>> 0x20
int64_t rbx_13 = r11_17 + 1
int64_t rdx_196 = rdx_195 * rcx_127
int64_t rax_102 = rdx_195 * r9_34
int64_t rcx_128 = 0x100000000 + rdx_196
int64_t r8_134 = zx.q(r10_99.d) * rcx_127 + rax_102

if (r8_134 u>= rax_102)
    rcx_128 = rdx_196

int64_t rdx_199 = (r8_134 u>> 0x20) + rcx_128
int64_t r8_135 = r8_134 << 0x20
int64_t rcx_129 = rdx_199 + 1
int64_t r10_101 = r10_99 * r9_34 + r8_135

if (r10_101 u>= r8_135)
    rcx_129 = rdx_199

int64_t rdx_200 = arg2[6]
int64_t r14_13 = r14_12 + r10_101
uint64_t r10_102 = zx.q(rdx_200.d)
int64_t rax_103 = rcx_129 + 1

if (r14_13 u>= r10_101)
    rax_103 = rcx_129

int64_t rcx_130 = arg3[1]
int64_t rbp_25 = rbp_24 + rax_103
uint64_t r9_35 = zx.q(rcx_130.d)

if (rbp_25 u>= rax_103)
    rbx_13 = r11_17

uint64_t rcx_131 = rcx_130 u>> 0x20
uint64_t rdx_201 = rdx_200 u>> 0x20
int64_t rax_105 = rdx_201 * r9_35
int64_t rdx_202 = rdx_201 * rcx_131
int64_t r8_138 = zx.q(r10_102.d) * rcx_131 + rax_105
int64_t rcx_132 = 0x100000000 + rdx_202
int64_t rdi_5 = rbx_13 + 1

if (r8_138 u>= rax_105)
    rcx_132 = rdx_202

int64_t rdx_205 = (r8_138 u>> 0x20) + rcx_132
int64_t r8_139 = r8_138 << 0x20
int64_t rcx_133 = rdx_205 + 1
int64_t r10_104 = r10_102 * r9_35 + r8_139

if (r10_104 u>= r8_139)
    rcx_133 = rdx_205

int64_t rdx_206 = arg2[7]
int64_t r14_14 = r14_13 + r10_104
uint64_t r10_105 = zx.q(rdx_206.d)
int64_t rax_106 = rcx_133 + 1

if (r14_14 u>= r10_104)
    rax_106 = rcx_133

int64_t rcx_134 = *arg3
int64_t rbp_26 = rbp_25 + rax_106
uint64_t r9_36 = zx.q(rcx_134.d)

if (rbp_26 u>= rax_106)
    rdi_5 = rbx_13

uint64_t rcx_135 = rcx_134 u>> 0x20
uint64_t rdx_207 = rdx_206 u>> 0x20
int64_t rsi_27 = rdi_5 + 1
int64_t rdx_208 = rdx_207 * rcx_135
int64_t rax_108 = rdx_207 * r9_36
int64_t rcx_136 = 0x100000000 + rdx_208
int64_t r8_142 = zx.q(r10_105.d) * rcx_135 + rax_108

if (r8_142 u>= rax_108)
    rcx_136 = rdx_208

int64_t rdx_211 = (r8_142 u>> 0x20) + rcx_136
int64_t r8_143 = r8_142 << 0x20
int64_t rcx_137 = rdx_211 + 1
int64_t r10_107 = r10_105 * r9_36 + r8_143

if (r10_107 u>= r8_143)
    rcx_137 = rdx_211

int64_t r14_15 = r14_14 + r10_107
arg1[7] = r14_15
int64_t rdx_212 = arg2[7]
uint64_t r10_108 = zx.q(rdx_212.d)
int64_t rax_109 = rcx_137 + 1

if (r14_15 u>= r10_107)
    rax_109 = rcx_137

int64_t rcx_138 = arg3[1]
int64_t rbp_27 = rbp_26 + rax_109
uint64_t r9_37 = zx.q(rcx_138.d)

if (rbp_27 u>= rax_109)
    rsi_27 = rdi_5

uint64_t rcx_139 = rcx_138 u>> 0x20
uint64_t rdx_213 = rdx_212 u>> 0x20
int64_t rdx_214 = rdx_213 * rcx_139
int64_t rax_111 = rdx_213 * r9_37
int64_t rcx_140 = 0x100000000 + rdx_214
int64_t r8_146 = zx.q(r10_108.d) * rcx_139 + rax_111

if (r8_146 u>= rax_111)
    rcx_140 = rdx_214

int64_t rdx_217 = (r8_146 u>> 0x20) + rcx_140
int64_t r8_147 = r8_146 << 0x20
int64_t r10_110 = r10_108 * r9_37 + r8_147
int64_t rcx_141 = rdx_217 + 1

if (r10_110 u>= r8_147)
    rcx_141 = rdx_217

int64_t rbp_28 = rbp_27 + r10_110
int64_t rax_112 = rcx_141 + 1

if (rbp_28 u>= r10_110)
    rax_112 = rcx_141

int64_t rdx_218 = arg2[6]
int64_t rcx_142 = arg3[2]
int64_t rsi_28 = rsi_27 + rax_112
uint64_t r9_38 = zx.q(rcx_142.d)
uint64_t r10_111 = zx.q(rdx_218.d)
int64_t r11_18
r11_18.b = rsi_28 u< rax_112
uint64_t rcx_143 = rcx_142 u>> 0x20
uint64_t rdx_219 = rdx_218 u>> 0x20
int64_t rbx_14 = r11_18 + 1
int64_t rdx_220 = rdx_219 * rcx_143
int64_t rax_114 = rdx_219 * r9_38
int64_t rcx_144 = 0x100000000 + rdx_220
int64_t r8_150 = zx.q(r10_111.d) * rcx_143 + rax_114

if (r8_150 u>= rax_114)
    rcx_144 = rdx_220

int64_t rdx_223 = (r8_150 u>> 0x20) + rcx_144
int64_t r8_151 = r8_150 << 0x20
int64_t rcx_145 = rdx_223 + 1
int64_t r10_113 = r10_111 * r9_38 + r8_151

if (r10_113 u>= r8_151)
    rcx_145 = rdx_223

int64_t rdx_224 = arg2[5]
int64_t rbp_29 = rbp_28 + r10_113
uint64_t r10_114 = zx.q(rdx_224.d)
int64_t rax_115 = rcx_145 + 1

if (rbp_29 u>= r10_113)
    rax_115 = rcx_145

int64_t rcx_146 = arg3[3]
int64_t rsi_29 = rsi_28 + rax_115
uint64_t r9_39 = zx.q(rcx_146.d)

if (rsi_29 u>= rax_115)
    rbx_14 = r11_18

uint64_t rcx_147 = rcx_146 u>> 0x20
uint64_t rdx_225 = rdx_224 u>> 0x20
int64_t r11_19 = rbx_14 + 1
int64_t rdx_226 = rdx_225 * rcx_147
int64_t rax_117 = rdx_225 * r9_39
int64_t rcx_148 = 0x100000000 + rdx_226
int64_t r8_154 = zx.q(r10_114.d) * rcx_147 + rax_117

if (r8_154 u>= rax_117)
    rcx_148 = rdx_226

int64_t rdx_229 = (r8_154 u>> 0x20) + rcx_148
int64_t r8_155 = r8_154 << 0x20
int64_t r10_116 = r10_114 * r9_39 + r8_155
int64_t rcx_149 = rdx_229 + 1

if (r10_116 u>= r8_155)
    rcx_149 = rdx_229

int64_t rdx_230 = arg2[4]
int64_t rbp_30 = rbp_29 + r10_116
uint64_t r10_117 = zx.q(rdx_230.d)
int64_t rax_118 = rcx_149 + 1

if (rbp_30 u>= r10_116)
    rax_118 = rcx_149

int64_t rcx_150 = arg3[4]
int64_t rsi_30 = rsi_29 + rax_118
uint64_t r9_40 = zx.q(rcx_150.d)

if (rsi_30 u>= rax_118)
    r11_19 = rbx_14

uint64_t rdx_231 = rdx_230 u>> 0x20
uint64_t rcx_151 = rcx_150 u>> 0x20
int64_t rax_120 = rdx_231 * r9_40
int64_t rdx_232 = rdx_231 * rcx_151
int64_t rbx_15 = r11_19 + 1
int64_t rcx_152 = 0x100000000 + rdx_232
int64_t r8_158 = zx.q(r10_117.d) * rcx_151 + rax_120

if (r8_158 u>= rax_120)
    rcx_152 = rdx_232

int64_t rdx_235 = (r8_158 u>> 0x20) + rcx_152
int64_t r8_159 = r8_158 << 0x20
int64_t rcx_153 = rdx_235 + 1
int64_t r10_119 = r10_117 * r9_40 + r8_159

if (r10_119 u>= r8_159)
    rcx_153 = rdx_235

int64_t rdx_236 = arg2[3]
int64_t rbp_31 = rbp_30 + r10_119
uint64_t r10_120 = zx.q(rdx_236.d)
int64_t rax_121 = rcx_153 + 1

if (rbp_31 u>= r10_119)
    rax_121 = rcx_153

int64_t rcx_154 = arg3[5]
uint64_t r9_41 = zx.q(rcx_154.d)
int64_t rsi_31 = rsi_30 + rax_121

if (rsi_31 u>= rax_121)
    rbx_15 = r11_19

uint64_t rcx_155 = rcx_154 u>> 0x20
uint64_t rdx_237 = rdx_236 u>> 0x20
int64_t r11_20 = rbx_15 + 1
int64_t rdx_238 = rdx_237 * rcx_155
int64_t rax_123 = rdx_237 * r9_41
int64_t rcx_156 = 0x100000000 + rdx_238
int64_t r8_162 = zx.q(r10_120.d) * rcx_155 + rax_123

if (r8_162 u>= rax_123)
    rcx_156 = rdx_238

int64_t rdx_241 = (r8_162 u>> 0x20) + rcx_156
int64_t r8_163 = r8_162 << 0x20
int64_t rcx_157 = rdx_241 + 1
int64_t r10_122 = r10_120 * r9_41 + r8_163

if (r10_122 u>= r8_163)
    rcx_157 = rdx_241

int64_t rdx_242 = arg2[2]
int64_t rbp_32 = rbp_31 + r10_122
uint64_t r10_123 = zx.q(rdx_242.d)
int64_t rax_124 = rcx_157 + 1

if (rbp_32 u>= r10_122)
    rax_124 = rcx_157

int64_t rcx_158 = arg3[6]
uint64_t r9_42 = zx.q(rcx_158.d)
int64_t rsi_32 = rsi_31 + rax_124

if (rsi_32 u>= rax_124)
    r11_20 = rbx_15

uint64_t rcx_159 = rcx_158 u>> 0x20
uint64_t rdx_243 = rdx_242 u>> 0x20
int64_t rdx_244 = rdx_243 * rcx_159
int64_t rax_126 = rdx_243 * r9_42
int64_t rcx_160 = 0x100000000 + rdx_244
int64_t r8_166 = zx.q(r10_123.d) * rcx_159 + rax_126

if (r8_166 u>= rax_126)
    rcx_160 = rdx_244

int64_t rdx_247 = (r8_166 u>> 0x20) + rcx_160
int64_t r8_167 = r8_166 << 0x20
int64_t r10_125 = r10_123 * r9_42 + r8_167
int64_t rcx_161 = rdx_247 + 1

if (r10_125 u>= r8_167)
    rcx_161 = rdx_247

int64_t rdx_248 = arg2[1]
int64_t rax_127 = rcx_161 + 1
int64_t rbp_33 = rbp_32 + r10_125
int64_t rbx_16 = r11_20 + 1
uint64_t r10_126 = zx.q(rdx_248.d)

if (rbp_33 u>= r10_125)
    rax_127 = rcx_161

int64_t rcx_162 = arg3[7]
int64_t rsi_33 = rsi_32 + rax_127
uint64_t r9_43 = zx.q(rcx_162.d)

if (rsi_33 u>= rax_127)
    rbx_16 = r11_20

uint64_t rcx_163 = rcx_162 u>> 0x20
uint64_t rdx_249 = rdx_248 u>> 0x20
int64_t r11_21 = rbx_16 + 1
int64_t rdx_250 = rdx_249 * rcx_163
int64_t rax_129 = rdx_249 * r9_43
int64_t rcx_164 = 0x100000000 + rdx_250
int64_t r8_170 = zx.q(r10_126.d) * rcx_163 + rax_129

if (r8_170 u>= rax_129)
    rcx_164 = rdx_250

int64_t rdx_253 = (r8_170 u>> 0x20) + rcx_164
int64_t r8_171 = r8_170 << 0x20
int64_t rcx_165 = rdx_253 + 1
int64_t r10_128 = r10_126 * r9_43 + r8_171

if (r10_128 u>= r8_171)
    rcx_165 = rdx_253

int64_t rbp_34 = rbp_33 + r10_128
arg1[8] = rbp_34
int64_t rdx_254 = arg2[2]
uint64_t r10_129 = zx.q(rdx_254.d)
int64_t rax_130 = rcx_165 + 1

if (rbp_34 u>= r10_128)
    rax_130 = rcx_165

int64_t rcx_166 = arg3[7]
int64_t rsi_34 = rsi_33 + rax_130
uint64_t r9_44 = zx.q(rcx_166.d)

if (rsi_34 u>= rax_130)
    r11_21 = rbx_16

uint64_t rcx_167 = rcx_166 u>> 0x20
uint64_t rdx_255 = rdx_254 u>> 0x20
int64_t rdx_256 = rdx_255 * rcx_167
int64_t rax_132 = rdx_255 * r9_44
int64_t rcx_168 = 0x100000000 + rdx_256
int64_t r8_174 = zx.q(r10_129.d) * rcx_167 + rax_132

if (r8_174 u>= rax_132)
    rcx_168 = rdx_256

int64_t rdx_259 = (r8_174 u>> 0x20) + rcx_168
int64_t r8_175 = r8_174 << 0x20
int64_t r10_131 = r10_129 * r9_44 + r8_175
int64_t rcx_169 = rdx_259 + 1

if (r10_131 u>= r8_175)
    rcx_169 = rdx_259

int64_t rdx_260 = arg2[3]
int64_t rsi_35 = rsi_34 + r10_131
uint64_t r10_132 = zx.q(rdx_260.d)
int64_t rax_133 = rcx_169 + 1

if (rsi_35 u>= r10_131)
    rax_133 = rcx_169

int64_t rcx_170 = arg3[6]
uint64_t r9_45 = zx.q(rcx_170.d)
int64_t rbp_35 = rax_133 + r11_21
int64_t r11_22
r11_22.b = rbp_35 u< rax_133
uint64_t rcx_171 = rcx_170 u>> 0x20
uint64_t rdx_261 = rdx_260 u>> 0x20
int64_t rbx_17 = r11_22 + 1
int64_t rdx_262 = rdx_261 * rcx_171
int64_t rax_135 = rdx_261 * r9_45
int64_t rcx_172 = 0x100000000 + rdx_262
int64_t r8_178 = zx.q(r10_132.d) * rcx_171 + rax_135

if (r8_178 u>= rax_135)
    rcx_172 = rdx_262

int64_t rdx_265 = (r8_178 u>> 0x20) + rcx_172
int64_t r8_179 = r8_178 << 0x20
int64_t rcx_173 = rdx_265 + 1
int64_t r10_134 = r10_132 * r9_45 + r8_179

if (r10_134 u>= r8_179)
    rcx_173 = rdx_265

int64_t rdx_266 = arg2[4]
int64_t rsi_36 = rsi_35 + r10_134
uint64_t r10_135 = zx.q(rdx_266.d)
int64_t rax_136 = rcx_173 + 1

if (rsi_36 u>= r10_134)
    rax_136 = rcx_173

int64_t rcx_174 = arg3[5]
int64_t rbp_36 = rbp_35 + rax_136
uint64_t r9_46 = zx.q(rcx_174.d)

if (rbp_36 u>= rax_136)
    rbx_17 = r11_22

uint64_t rcx_175 = rcx_174 u>> 0x20
uint64_t rdx_267 = rdx_266 u>> 0x20
int64_t r11_23 = rbx_17 + 1
int64_t rdx_268 = rdx_267 * rcx_175
int64_t rax_138 = rdx_267 * r9_46
int64_t rcx_176 = 0x100000000 + rdx_268
int64_t r8_182 = zx.q(r10_135.d) * rcx_175 + rax_138

if (r8_182 u>= rax_138)
    rcx_176 = rdx_268

int64_t rdx_271 = (r8_182 u>> 0x20) + rcx_176
int64_t r8_183 = r8_182 << 0x20
int64_t rcx_177 = rdx_271 + 1
int64_t r10_137 = r10_135 * r9_46 + r8_183

if (r10_137 u>= r8_183)
    rcx_177 = rdx_271

int64_t rdx_272 = arg2[5]
int64_t rsi_37 = rsi_36 + r10_137
uint64_t r10_138 = zx.q(rdx_272.d)
int64_t rax_139 = rcx_177 + 1

if (rsi_37 u>= r10_137)
    rax_139 = rcx_177

int64_t rcx_178 = arg3[4]
uint64_t r9_47 = zx.q(rcx_178.d)
int64_t rbp_37 = rbp_36 + rax_139

if (rbp_37 u>= rax_139)
    r11_23 = rbx_17

uint64_t rdx_273 = rdx_272 u>> 0x20
uint64_t rcx_179 = rcx_178 u>> 0x20
int64_t rdx_274 = rdx_273 * rcx_179
int64_t rax_141 = rdx_273 * r9_47
int64_t rcx_180 = 0x100000000 + rdx_274
int64_t r8_186 = zx.q(r10_138.d) * rcx_179 + rax_141

if (r8_186 u>= rax_141)
    rcx_180 = rdx_274

int64_t rdx_277 = (r8_186 u>> 0x20) + rcx_180
int64_t r8_187 = r8_186 << 0x20
int64_t r10_140 = r10_138 * r9_47 + r8_187
int64_t rcx_181 = rdx_277 + 1
int64_t rbx_18 = r11_23 + 1

if (r10_140 u>= r8_187)
    rcx_181 = rdx_277

int64_t rdx_278 = arg2[6]
int64_t rsi_38 = rsi_37 + r10_140
uint64_t r10_141 = zx.q(rdx_278.d)
int64_t rax_142 = rcx_181 + 1

if (rsi_38 u>= r10_140)
    rax_142 = rcx_181

int64_t rcx_182 = arg3[3]
int64_t rbp_38 = rbp_37 + rax_142
uint64_t r9_48 = zx.q(rcx_182.d)

if (rbp_38 u>= rax_142)
    rbx_18 = r11_23

uint64_t rcx_183 = rcx_182 u>> 0x20
uint64_t rdx_279 = rdx_278 u>> 0x20
int64_t rdi_6 = rbx_18 + 1
int64_t rdx_280 = rdx_279 * rcx_183
int64_t rax_144 = rdx_279 * r9_48
int64_t rcx_184 = 0x100000000 + rdx_280
int64_t r8_190 = zx.q(r10_141.d) * rcx_183 + rax_144

if (r8_190 u>= rax_144)
    rcx_184 = rdx_280

int64_t rdx_283 = (r8_190 u>> 0x20) + rcx_184
int64_t r8_191 = r8_190 << 0x20
int64_t rcx_185 = rdx_283 + 1
int64_t r10_143 = r10_141 * r9_48 + r8_191

if (r10_143 u>= r8_191)
    rcx_185 = rdx_283

int64_t rdx_284 = arg2[7]
int64_t rsi_39 = rsi_38 + r10_143
uint64_t r10_144 = zx.q(rdx_284.d)
int64_t rax_145 = rcx_185 + 1

if (rsi_39 u>= r10_143)
    rax_145 = rcx_185

int64_t rcx_186 = arg3[2]
int64_t rbp_39 = rbp_38 + rax_145
uint64_t r9_49 = zx.q(rcx_186.d)

if (rbp_39 u>= rax_145)
    rdi_6 = rbx_18

uint64_t rcx_187 = rcx_186 u>> 0x20
uint64_t rdx_285 = rdx_284 u>> 0x20
int64_t r11_24 = rdi_6 + 1
int64_t rdx_286 = rdx_285 * rcx_187
int64_t rax_147 = rdx_285 * r9_49
int64_t rcx_188 = 0x100000000 + rdx_286
int64_t r8_194 = zx.q(r10_144.d) * rcx_187 + rax_147

if (r8_194 u>= rax_147)
    rcx_188 = rdx_286

int64_t rdx_289 = (r8_194 u>> 0x20) + rcx_188
int64_t r8_195 = r8_194 << 0x20
int64_t r10_146 = r10_144 * r9_49 + r8_195
int64_t rcx_189 = rdx_289 + 1

if (r10_146 u>= r8_195)
    rcx_189 = rdx_289

int64_t rsi_40 = rsi_39 + r10_146
arg1[9] = rsi_40
int64_t rax_148 = rcx_189 + 1

if (rsi_40 u>= r10_146)
    rax_148 = rcx_189

int64_t rcx_190 = arg3[3]
int64_t rbp_40 = rbp_39 + rax_148
uint64_t r9_50 = zx.q(rcx_190.d)

if (rbp_40 u>= rax_148)
    r11_24 = rdi_6

int64_t rdx_290 = arg2[7]
uint64_t rcx_191 = rcx_190 u>> 0x20
uint64_t r10_147 = zx.q(rdx_290.d)
uint64_t rdx_291 = rdx_290 u>> 0x20
int64_t rdx_292 = rdx_291 * rcx_191
int64_t rax_150 = rdx_291 * r9_50
int64_t rcx_192 = 0x100000000 + rdx_292
int64_t r8_198 = zx.q(r10_147.d) * rcx_191 + rax_150

if (r8_198 u>= rax_150)
    rcx_192 = rdx_292

int64_t rdx_295 = (r8_198 u>> 0x20) + rcx_192
int64_t r8_199 = r8_198 << 0x20
int64_t rcx_193 = rdx_295 + 1
int64_t r10_149 = r10_147 * r9_50 + r8_199

if (r10_149 u>= r8_199)
    rcx_193 = rdx_295

int64_t rdx_296 = arg2[6]
int64_t rbp_41 = rbp_40 + r10_149
uint64_t r10_150 = zx.q(rdx_296.d)
int64_t rax_151 = rcx_193 + 1

if (rbp_41 u>= r10_149)
    rax_151 = rcx_193

int64_t rcx_194 = arg3[4]
uint64_t r9_51 = zx.q(rcx_194.d)
int64_t rsi_41 = rax_151 + r11_24
int64_t r11_25
r11_25.b = rsi_41 u< rax_151
uint64_t rcx_195 = rcx_194 u>> 0x20
uint64_t rdx_297 = rdx_296 u>> 0x20
int64_t rbx_19 = r11_25 + 1
int64_t rdx_298 = rdx_297 * rcx_195
int64_t rax_153 = rdx_297 * r9_51
int64_t rcx_196 = 0x100000000 + rdx_298
int64_t r8_202 = zx.q(r10_150.d) * rcx_195 + rax_153

if (r8_202 u>= rax_153)
    rcx_196 = rdx_298

int64_t rdx_301 = (r8_202 u>> 0x20) + rcx_196
int64_t r8_203 = r8_202 << 0x20
int64_t rcx_197 = rdx_301 + 1
int64_t r10_152 = r10_150 * r9_51 + r8_203

if (r10_152 u>= r8_203)
    rcx_197 = rdx_301

int64_t rdx_302 = arg2[5]
int64_t rbp_42 = rbp_41 + r10_152
uint64_t r10_153 = zx.q(rdx_302.d)
int64_t rax_154 = rcx_197 + 1

if (rbp_42 u>= r10_152)
    rax_154 = rcx_197

int64_t rcx_198 = arg3[5]
uint64_t r9_52 = zx.q(rcx_198.d)
int64_t rsi_42 = rsi_41 + rax_154

if (rsi_42 u>= rax_154)
    rbx_19 = r11_25

uint64_t rcx_199 = rcx_198 u>> 0x20
uint64_t rdx_303 = rdx_302 u>> 0x20
int64_t rdx_304 = rdx_303 * rcx_199
int64_t rax_156 = rdx_303 * r9_52
int64_t rcx_200 = 0x100000000 + rdx_304
int64_t r8_206 = zx.q(r10_153.d) * rcx_199 + rax_156

if (r8_206 u>= rax_156)
    rcx_200 = rdx_304

int64_t r11_26 = rbx_19 + 1
int64_t rdx_307 = (r8_206 u>> 0x20) + rcx_200
int64_t r8_207 = r8_206 << 0x20
int64_t rcx_201 = rdx_307 + 1
int64_t r10_155 = r10_153 * r9_52 + r8_207

if (r10_155 u>= r8_207)
    rcx_201 = rdx_307

int64_t rdx_308 = arg2[4]
int64_t rbp_43 = rbp_42 + r10_155
uint64_t r10_156 = zx.q(rdx_308.d)
int64_t rax_157 = rcx_201 + 1

if (rbp_43 u>= r10_155)
    rax_157 = rcx_201

int64_t rcx_202 = arg3[6]
int64_t rsi_43 = rsi_42 + rax_157
uint64_t r9_53 = zx.q(rcx_202.d)

if (rsi_43 u>= rax_157)
    r11_26 = rbx_19

uint64_t rcx_203 = rcx_202 u>> 0x20
uint64_t rdx_309 = rdx_308 u>> 0x20
int64_t rbx_20 = r11_26 + 1
int64_t rdx_310 = rdx_309 * rcx_203
int64_t rax_159 = rdx_309 * r9_53
int64_t rcx_204 = 0x100000000 + rdx_310
int64_t r8_210 = zx.q(r10_156.d) * rcx_203 + rax_159

if (r8_210 u>= rax_159)
    rcx_204 = rdx_310

int64_t rdx_313 = (r8_210 u>> 0x20) + rcx_204
int64_t r8_211 = r8_210 << 0x20
int64_t rcx_205 = rdx_313 + 1
int64_t r10_158 = r10_156 * r9_53 + r8_211

if (r10_158 u>= r8_211)
    rcx_205 = rdx_313

int64_t rdx_314 = arg2[3]
int64_t rbp_44 = rbp_43 + r10_158
uint64_t r10_159 = zx.q(rdx_314.d)
int64_t rax_160 = rcx_205 + 1

if (rbp_44 u>= r10_158)
    rax_160 = rcx_205

int64_t rcx_206 = arg3[7]
int64_t rsi_44 = rsi_43 + rax_160
uint64_t r9_54 = zx.q(rcx_206.d)

if (rsi_44 u>= rax_160)
    rbx_20 = r11_26

uint64_t rcx_207 = rcx_206 u>> 0x20
uint64_t rdx_315 = rdx_314 u>> 0x20
int64_t r11_27 = rbx_20 + 1
int64_t rdx_316 = rdx_315 * rcx_207
int64_t rax_162 = rdx_315 * r9_54
int64_t rcx_208 = 0x100000000 + rdx_316
int64_t r8_214 = zx.q(r10_159.d) * rcx_207 + rax_162

if (r8_214 u>= rax_162)
    rcx_208 = rdx_316

int64_t rdx_319 = (r8_214 u>> 0x20) + rcx_208
int64_t r8_215 = r8_214 << 0x20
int64_t r10_161 = r10_159 * r9_54 + r8_215
int64_t rcx_209 = rdx_319 + 1

if (r10_161 u>= r8_215)
    rcx_209 = rdx_319

int64_t rbp_45 = rbp_44 + r10_161
int64_t rax_163 = rcx_209 + 1

if (rbp_45 u>= r10_161)
    rax_163 = rcx_209

int64_t rsi_45 = rsi_44 + rax_163

if (rsi_45 u>= rax_163)
    r11_27 = rbx_20

arg1[0xa] = rbp_45
int64_t rdx_320 = arg2[4]
int64_t rcx_210 = arg3[7]
uint64_t r9_55 = zx.q(rcx_210.d)
uint64_t rcx_211 = rcx_210 u>> 0x20
uint64_t r10_162 = zx.q(rdx_320.d)
uint64_t rdx_321 = rdx_320 u>> 0x20
int64_t rdx_322 = rdx_321 * rcx_211
int64_t rax_165 = rdx_321 * r9_55
int64_t rcx_212 = 0x100000000 + rdx_322
int64_t r8_218 = zx.q(r10_162.d) * rcx_211 + rax_165

if (r8_218 u>= rax_165)
    rcx_212 = rdx_322

int64_t rdx_325 = (r8_218 u>> 0x20) + rcx_212
int64_t r8_219 = r8_218 << 0x20
int64_t rcx_213 = rdx_325 + 1
int64_t r10_164 = r10_162 * r9_55 + r8_219

if (r10_164 u>= r8_219)
    rcx_213 = rdx_325

int64_t rdx_326 = arg2[5]
int64_t rsi_46 = rsi_45 + r10_164
uint64_t r10_165 = zx.q(rdx_326.d)
int64_t rax_166 = rcx_213 + 1

if (rsi_46 u>= r10_164)
    rax_166 = rcx_213

int64_t rcx_214 = arg3[6]
uint64_t r9_56 = zx.q(rcx_214.d)
int64_t rbp_46 = r11_27 + rax_166
int64_t r11_28
r11_28.b = rbp_46 u< rax_166
uint64_t rcx_215 = rcx_214 u>> 0x20
uint64_t rdx_327 = rdx_326 u>> 0x20
int64_t rbx_21 = r11_28 + 1
int64_t rdx_328 = rdx_327 * rcx_215
int64_t rax_168 = rdx_327 * r9_56
int64_t rcx_216 = 0x100000000 + rdx_328
int64_t r8_222 = zx.q(r10_165.d) * rcx_215 + rax_168

if (r8_222 u>= rax_168)
    rcx_216 = rdx_328

int64_t rdx_331 = (r8_222 u>> 0x20) + rcx_216
int64_t r8_223 = r8_222 << 0x20
int64_t rcx_217 = rdx_331 + 1
int64_t r10_167 = r10_165 * r9_56 + r8_223

if (r10_167 u>= r8_223)
    rcx_217 = rdx_331

int64_t rdx_332 = arg2[6]
int64_t rsi_47 = rsi_46 + r10_167
uint64_t r10_168 = zx.q(rdx_332.d)
int64_t rax_169 = rcx_217 + 1

if (rsi_47 u>= r10_167)
    rax_169 = rcx_217

int64_t rcx_218 = arg3[5]
int64_t rbp_47 = rbp_46 + rax_169
uint64_t r9_57 = zx.q(rcx_218.d)

if (rbp_47 u>= rax_169)
    rbx_21 = r11_28

uint64_t rcx_219 = rcx_218 u>> 0x20
uint64_t rdx_333 = rdx_332 u>> 0x20
int64_t rdx_334 = rdx_333 * rcx_219
int64_t rax_171 = rdx_333 * r9_57
int64_t r8_226 = zx.q(r10_168.d) * rcx_219 + rax_171
int64_t rcx_220 = 0x100000000 + rdx_334
int64_t rdi_7 = rbx_21 + 1

if (r8_226 u>= rax_171)
    rcx_220 = rdx_334

int64_t rdx_337 = (r8_226 u>> 0x20) + rcx_220
int64_t r8_227 = r8_226 << 0x20
int64_t rcx_221 = rdx_337 + 1
int64_t r10_170 = r10_168 * r9_57 + r8_227

if (r10_170 u>= r8_227)
    rcx_221 = rdx_337

int64_t rdx_338 = arg2[7]
int64_t rsi_48 = rsi_47 + r10_170
uint64_t r10_171 = zx.q(rdx_338.d)
int64_t rax_172 = rcx_221 + 1

if (rsi_48 u>= r10_170)
    rax_172 = rcx_221

int64_t rcx_222 = arg3[4]
int64_t rbp_48 = rbp_47 + rax_172
uint64_t r9_58 = zx.q(rcx_222.d)

if (rbp_48 u>= rax_172)
    rdi_7 = rbx_21

uint64_t rcx_223 = rcx_222 u>> 0x20
uint64_t rdx_339 = rdx_338 u>> 0x20
int64_t r11_29 = rdi_7 + 1
int64_t rdx_340 = rdx_339 * rcx_223
int64_t rax_174 = rdx_339 * r9_58
int64_t rcx_224 = 0x100000000 + rdx_340
int64_t r8_230 = zx.q(r10_171.d) * rcx_223 + rax_174

if (r8_230 u>= rax_174)
    rcx_224 = rdx_340

int64_t rdx_343 = (r8_230 u>> 0x20) + rcx_224
int64_t r8_231 = r8_230 << 0x20
int64_t rcx_225 = rdx_343 + 1
int64_t r10_173 = r10_171 * r9_58 + r8_231

if (r10_173 u>= r8_231)
    rcx_225 = rdx_343

int64_t rsi_49 = rsi_48 + r10_173
arg1[0xb] = rsi_49
int64_t rdx_344 = arg2[7]
uint64_t r10_174 = zx.q(rdx_344.d)
int64_t rax_175 = rcx_225 + 1

if (rsi_49 u>= r10_173)
    rax_175 = rcx_225

int64_t rcx_226 = arg3[5]
uint64_t r9_59 = zx.q(rcx_226.d)
int64_t rbp_49 = rbp_48 + rax_175

if (rbp_49 u>= rax_175)
    r11_29 = rdi_7

uint64_t rcx_227 = rcx_226 u>> 0x20
uint64_t rdx_345 = rdx_344 u>> 0x20
int64_t rdx_346 = rdx_345 * rcx_227
int64_t rax_177 = rdx_345 * r9_59
int64_t rcx_228 = 0x100000000 + rdx_346
int64_t r8_234 = zx.q(r10_174.d) * rcx_227 + rax_177

if (r8_234 u>= rax_177)
    rcx_228 = rdx_346

int64_t rdx_349 = (r8_234 u>> 0x20) + rcx_228
int64_t r8_235 = r8_234 << 0x20
int64_t r10_176 = r10_174 * r9_59 + r8_235
int64_t rcx_229 = rdx_349 + 1

if (r10_176 u>= r8_235)
    rcx_229 = rdx_349

int64_t rbp_50 = rbp_49 + r10_176
int64_t rax_178 = rcx_229 + 1
int64_t rdx_350 = arg2[6]
uint64_t r10_177 = zx.q(rdx_350.d)

if (rbp_50 u>= r10_176)
    rax_178 = rcx_229

int64_t rcx_230 = arg3[6]
uint64_t r9_60 = zx.q(rcx_230.d)
int64_t rsi_50 = r11_29 + rax_178
int64_t r11_30
r11_30.b = rsi_50 u< rax_178
uint64_t rcx_231 = rcx_230 u>> 0x20
uint64_t rdx_351 = rdx_350 u>> 0x20
int64_t rbx_22 = r11_30 + 1
int64_t rdx_352 = rdx_351 * rcx_231
int64_t rax_180 = rdx_351 * r9_60
int64_t rcx_232 = 0x100000000 + rdx_352
int64_t r8_238 = zx.q(r10_177.d) * rcx_231 + rax_180

if (r8_238 u>= rax_180)
    rcx_232 = rdx_352

int64_t rdx_355 = (r8_238 u>> 0x20) + rcx_232
int64_t r8_239 = r8_238 << 0x20
int64_t rcx_233 = rdx_355 + 1
int64_t r10_179 = r10_177 * r9_60 + r8_239

if (r10_179 u>= r8_239)
    rcx_233 = rdx_355

int64_t rdx_356 = arg2[5]
int64_t rbp_51 = rbp_50 + r10_179
uint64_t r10_180 = zx.q(rdx_356.d)
int64_t rax_181 = rcx_233 + 1

if (rbp_51 u>= r10_179)
    rax_181 = rcx_233

int64_t rcx_234 = arg3[7]
int64_t rsi_51 = rsi_50 + rax_181
uint64_t r9_61 = zx.q(rcx_234.d)

if (rsi_51 u>= rax_181)
    rbx_22 = r11_30

uint64_t rcx_235 = rcx_234 u>> 0x20
uint64_t rdx_357 = rdx_356 u>> 0x20
int64_t rdi_8 = rbx_22 + 1
int64_t rdx_358 = rdx_357 * rcx_235
int64_t rax_183 = rdx_357 * r9_61
int64_t rcx_236 = 0x100000000 + rdx_358
int64_t r8_242 = zx.q(r10_180.d) * rcx_235 + rax_183

if (r8_242 u>= rax_183)
    rcx_236 = rdx_358

int64_t rdx_361 = (r8_242 u>> 0x20) + rcx_236
int64_t r8_243 = r8_242 << 0x20
int64_t r10_182 = r10_180 * r9_61 + r8_243
int64_t rcx_237 = rdx_361 + 1

if (r10_182 u>= r8_243)
    rcx_237 = rdx_361

int64_t rbp_52 = rbp_51 + r10_182
arg1[0xc] = rbp_52
int64_t rdx_362 = arg2[6]
uint64_t r10_183 = zx.q(rdx_362.d)
int64_t rax_184 = rcx_237 + 1

if (rbp_52 u>= r10_182)
    rax_184 = rcx_237

int64_t rcx_238 = arg3[7]
int64_t rsi_52 = rsi_51 + rax_184
uint64_t r9_62 = zx.q(rcx_238.d)

if (rsi_52 u>= rax_184)
    rdi_8 = rbx_22

uint64_t rdx_363 = rdx_362 u>> 0x20
uint64_t rcx_239 = rcx_238 u>> 0x20
int64_t rax_186 = rdx_363 * r9_62
int64_t rdx_364 = rdx_363 * rcx_239
int64_t rcx_240 = 0x100000000 + rdx_364
int64_t r8_246 = zx.q(r10_183.d) * rcx_239 + rax_186

if (r8_246 u>= rax_186)
    rcx_240 = rdx_364

int64_t rdx_367 = (r8_246 u>> 0x20) + rcx_240
int64_t r8_247 = r8_246 << 0x20
int64_t rcx_241 = rdx_367 + 1
int64_t r10_185 = r10_183 * r9_62 + r8_247

if (r10_185 u>= r8_247)
    rcx_241 = rdx_367

int64_t rdx_368 = arg2[7]
int64_t rsi_53 = rsi_52 + r10_185
uint64_t r10_186 = zx.q(rdx_368.d)
int64_t rax_187 = rcx_241 + 1

if (rsi_53 u>= r10_185)
    rax_187 = rcx_241

int64_t rcx_242 = arg3[6]
int64_t rdi_9 = rdi_8 + rax_187
uint64_t r9_63 = zx.q(rcx_242.d)
int64_t rbx_23
rbx_23.b = rdi_9 u< rax_187
uint64_t rcx_243 = rcx_242 u>> 0x20
uint64_t rdx_369 = rdx_368 u>> 0x20
int64_t r11_31 = rbx_23 + 1
int64_t rdx_370 = rdx_369 * rcx_243
int64_t rax_189 = rdx_369 * r9_63
int64_t rcx_244 = 0x100000000 + rdx_370
int64_t r8_250 = zx.q(r10_186.d) * rcx_243 + rax_189

if (r8_250 u>= rax_189)
    rcx_244 = rdx_370

int64_t rdx_373 = (r8_250 u>> 0x20) + rcx_244
int64_t r8_251 = r8_250 << 0x20
int64_t rcx_245 = rdx_373 + 1
int64_t r10_188 = r10_186 * r9_63 + r8_251

if (r10_188 u>= r8_251)
    rcx_245 = rdx_373

int64_t rsi_54 = rsi_53 + r10_188
arg1[0xd] = rsi_54
int64_t rdx_374 = arg2[7]
uint64_t r10_189 = zx.q(rdx_374.d)
int64_t rax_190 = rcx_245 + 1

if (rsi_54 u>= r10_188)
    rax_190 = rcx_245

int64_t rcx_246 = arg3[7]
uint64_t r9_64 = zx.q(rcx_246.d)
int64_t rdi_10 = rdi_9 + rax_190

if (rdi_10 u>= rax_190)
    r11_31 = rbx_23

uint64_t rdx_375 = rdx_374 u>> 0x20
uint64_t rcx_247 = rcx_246 u>> 0x20
int64_t rdx_376 = rdx_375 * rcx_247
int64_t rax_192 = rdx_375 * r9_64
int64_t rcx_248 = 0x100000000 + rdx_376
int64_t r8_254 = zx.q(r10_189.d) * rcx_247 + rax_192

if (r8_254 u>= rax_192)
    rcx_248 = rdx_376

int64_t rdx_379 = (r8_254 u>> 0x20) + rcx_248
int64_t r8_255 = r8_254 << 0x20
int64_t r10_191 = r10_189 * r9_64 + r8_255
int64_t rcx_249 = rdx_379 + 1

if (r10_191 u>= r8_255)
    rcx_249 = rdx_379

int64_t rdi_11 = rdi_10 + r10_191
arg1[0xe] = rdi_11
int64_t rax_193 = rcx_249 + 1

if (rdi_11 u>= r10_191)
    rax_193 = rcx_249

int64_t result = rax_193 + r11_31
arg1[0xf] = result
return result
