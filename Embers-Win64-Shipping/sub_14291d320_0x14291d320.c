// 函数: sub_14291d320
// 地址: 0x14291d320
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
int64_t rdx = r10_2 + 0x100000000

if (r8_2 u>= rax_1)
    rdx = r10_2

int64_t rdx_1 = rdx + (r8_2 u>> 0x20)
int64_t r8_3 = r8_2 << 0x20
int64_t rdi = rdx_1 + 1
int64_t rax_4 = r11 * rbx + r8_3
*arg1 = rax_4
int64_t rcx = arg3[1]

if (rax_4 u>= r8_3)
    rdi = rdx_1

uint64_t r9_2 = zx.q(rcx.d)
int64_t rdx_2 = *arg2
uint64_t r10_3 = zx.q(rdx_2.d)
uint64_t rdx_3 = rdx_2 u>> 0x20
uint64_t rcx_1 = rcx u>> 0x20
int64_t rdx_4 = rdx_3 * rcx_1
int64_t rax_6 = rdx_3 * r9_2
int64_t rcx_2 = rdx_4 + 0x100000000
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
int64_t rcx_5 = rdx_10 + 0x100000000
int64_t r8_10 = zx.q(r10_6.d) * rcx_4 + rax_9

if (r8_10 u>= rax_9)
    rcx_5 = rdx_10

int64_t rdx_13 = (r8_10 u>> 0x20) + rcx_5
int64_t r8_11 = r8_10 << 0x20
int64_t r10_8 = r10_6 * r9_3 + r8_11
int64_t rax_10 = rdx_13 + 1

if (r10_8 u>= r8_11)
    rax_10 = rdx_13

int64_t rdi_2 = rdi_1 + r10_8
int64_t rbx_1 = rax_10 + 1
arg1[1] = rdi_2
int64_t rdx_14 = arg2[2]

if (rdi_2 u>= r10_8)
    rbx_1 = rax_10

int64_t rcx_6 = *arg3
uint64_t r9_4 = zx.q(rcx_6.d)
int64_t rsi_1 = rsi + rbx_1
uint64_t rcx_7 = rcx_6 u>> 0x20
uint64_t r10_9 = zx.q(rdx_14.d)
uint64_t rdx_15 = rdx_14 u>> 0x20
int64_t rdx_16 = rdx_15 * rcx_7
int64_t rax_12 = rdx_15 * r9_4
int64_t rcx_8 = rdx_16 + 0x100000000
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
int64_t r11_3
r11_3.b = rbp_1 u< rcx_9
uint64_t r9_5 = zx.q(rcx_10.d)
uint64_t rcx_11 = rcx_10 u>> 0x20
uint64_t rdx_21 = rdx_20 u>> 0x20
int64_t rbx_2 = r11_3 + 1
int64_t rdx_22 = rdx_21 * rcx_11
int64_t rax_15 = rdx_21 * r9_5
int64_t rcx_12 = rdx_22 + 0x100000000
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
uint64_t r10_15 = zx.q(rdx_26.d)
int64_t rax_16 = rcx_13 + 1

if (rsi_3 u>= r10_14)
    rax_16 = rcx_13

int64_t rcx_14 = arg3[2]
int64_t rbp_2 = rbp_1 + rax_16
uint64_t r9_6 = zx.q(rcx_14.d)

if (rbp_2 u>= rax_16)
    rbx_2 = r11_3

uint64_t rcx_15 = rcx_14 u>> 0x20
uint64_t rdx_27 = rdx_26 u>> 0x20
int64_t r11_4 = rbx_2 + 1
int64_t rdx_28 = rdx_27 * rcx_15
int64_t rax_18 = rdx_27 * r9_6
int64_t rcx_16 = rdx_28 + 0x100000000
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

uint64_t rdx_33 = rdx_32 u>> 0x20
uint64_t rcx_19 = rcx_18 u>> 0x20
int64_t rdx_34 = rdx_33 * rcx_19
int64_t rax_21 = rdx_33 * r9_7
int64_t rcx_20 = rdx_34 + 0x100000000
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
int64_t rsi_5 = r11_4 + rax_22
int64_t r11_5
r11_5.b = rsi_5 u< rax_22
uint64_t rdx_39 = rdx_38 u>> 0x20
uint64_t rcx_23 = rcx_22 u>> 0x20
int64_t rdx_40 = rdx_39 * rcx_23
int64_t rax_24 = rdx_39 * r9_8
int64_t rcx_24 = rdx_40 + 0x100000000
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
int64_t rdx_46 = rdx_45 * rcx_27
int64_t rax_27 = rdx_45 * r9_9
int64_t rcx_28 = rdx_46 + 0x100000000
int64_t rdi_3 = rbx_3 + 1
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
arg1[3] = rbp_7
int64_t rdx_56 = arg2[3]
uint64_t r10_30 = zx.q(rdx_56.d)
int64_t rax_31 = rcx_33 + 1

if (rbp_7 u>= r10_29)
    rax_31 = rcx_33

int64_t rcx_34 = arg3[1]
int64_t rsi_8 = rsi_7 + rax_31
uint64_t r9_11 = zx.q(rcx_34.d)

if (rsi_8 u>= rax_31)
    r11_6 = rdi_3

uint64_t rcx_35 = rcx_34 u>> 0x20
uint64_t rdx_57 = rdx_56 u>> 0x20
int64_t rdx_58 = rdx_57 * rcx_35
int64_t rax_33 = rdx_57 * r9_11
int64_t rcx_36 = rdx_58 + 0x100000000
int64_t r8_42 = zx.q(r10_30.d) * rcx_35 + rax_33

if (r8_42 u>= rax_33)
    rcx_36 = rdx_58

int64_t rdx_61 = (r8_42 u>> 0x20) + rcx_36
int64_t r8_43 = r8_42 << 0x20
int64_t rcx_37 = rdx_61 + 1
int64_t r10_32 = r10_30 * r9_11 + r8_43

if (r10_32 u>= r8_43)
    rcx_37 = rdx_61

int64_t rdx_62 = arg2[2]
int64_t rsi_9 = rsi_8 + r10_32
uint64_t r10_33 = zx.q(rdx_62.d)
int64_t rax_34 = rcx_37 + 1

if (rsi_9 u>= r10_32)
    rax_34 = rcx_37

int64_t rcx_38 = arg3[2]
uint64_t r9_12 = zx.q(rcx_38.d)
int64_t rdi_4 = r11_6 + rax_34
int64_t r11_7
r11_7.b = rdi_4 u< rax_34
uint64_t rdx_63 = rdx_62 u>> 0x20
uint64_t rcx_39 = rcx_38 u>> 0x20
int64_t rdx_64 = rdx_63 * rcx_39
int64_t rax_36 = rdx_63 * r9_12
int64_t rcx_40 = rdx_64 + 0x100000000
int64_t rbx_4 = r11_7 + 1
int64_t r8_46 = zx.q(r10_33.d) * rcx_39 + rax_36

if (r8_46 u>= rax_36)
    rcx_40 = rdx_64

int64_t rdx_67 = (r8_46 u>> 0x20) + rcx_40
int64_t r8_47 = r8_46 << 0x20
int64_t rcx_41 = rdx_67 + 1
int64_t r10_35 = r10_33 * r9_12 + r8_47

if (r10_35 u>= r8_47)
    rcx_41 = rdx_67

int64_t rdx_68 = arg2[1]
int64_t rsi_10 = rsi_9 + r10_35
uint64_t r10_36 = zx.q(rdx_68.d)
int64_t rax_37 = rcx_41 + 1

if (rsi_10 u>= r10_35)
    rax_37 = rcx_41

int64_t rcx_42 = arg3[3]
int64_t rdi_5 = rdi_4 + rax_37
uint64_t r9_13 = zx.q(rcx_42.d)

if (rdi_5 u>= rax_37)
    rbx_4 = r11_7

uint64_t rdx_69 = rdx_68 u>> 0x20
uint64_t rcx_43 = rcx_42 u>> 0x20
int64_t rdx_70 = rdx_69 * rcx_43
int64_t rax_39 = rdx_69 * r9_13
int64_t rcx_44 = rdx_70 + 0x100000000
int64_t r8_50 = zx.q(r10_36.d) * rcx_43 + rax_39

if (r8_50 u>= rax_39)
    rcx_44 = rdx_70

int64_t rdx_73 = (r8_50 u>> 0x20) + rcx_44
int64_t r8_51 = r8_50 << 0x20
int64_t r10_38 = r10_36 * r9_13 + r8_51
int64_t rcx_45 = rdx_73 + 1
int64_t r11_8 = rbx_4 + 1

if (r10_38 u>= r8_51)
    rcx_45 = rdx_73

int64_t rsi_11 = rsi_10 + r10_38
arg1[4] = rsi_11
int64_t rdx_74 = arg2[2]
uint64_t r10_39 = zx.q(rdx_74.d)
int64_t rax_40 = rcx_45 + 1

if (rsi_11 u>= r10_38)
    rax_40 = rcx_45

int64_t rcx_46 = arg3[3]
int64_t rdi_6 = rdi_5 + rax_40
uint64_t r9_14 = zx.q(rcx_46.d)

if (rdi_6 u>= rax_40)
    r11_8 = rbx_4

uint64_t rcx_47 = rcx_46 u>> 0x20
uint64_t rdx_75 = rdx_74 u>> 0x20
int64_t rdx_76 = rdx_75 * rcx_47
int64_t rax_42 = rdx_75 * r9_14
int64_t rcx_48 = rdx_76 + 0x100000000
int64_t r8_54 = zx.q(r10_39.d) * rcx_47 + rax_42

if (r8_54 u>= rax_42)
    rcx_48 = rdx_76

int64_t rdx_79 = (r8_54 u>> 0x20) + rcx_48
int64_t r8_55 = r8_54 << 0x20
int64_t rcx_49 = rdx_79 + 1
int64_t r10_41 = r10_39 * r9_14 + r8_55

if (r10_41 u>= r8_55)
    rcx_49 = rdx_79

int64_t rdx_80 = arg2[3]
int64_t rdi_7 = rdi_6 + r10_41
uint64_t r10_42 = zx.q(rdx_80.d)
int64_t rax_43 = rcx_49 + 1

if (rdi_7 u>= r10_41)
    rax_43 = rcx_49

int64_t rcx_50 = arg3[2]
uint64_t r9_15 = zx.q(rcx_50.d)
int64_t rbx_5 = r11_8 + rax_43
int64_t r14
r14.b = rbx_5 u< rax_43
uint64_t rcx_51 = rcx_50 u>> 0x20
uint64_t rdx_81 = rdx_80 u>> 0x20
int64_t r11_9 = r14 + 1
int64_t rdx_82 = rdx_81 * rcx_51
int64_t rax_45 = rdx_81 * r9_15
int64_t rcx_52 = rdx_82 + 0x100000000
int64_t r8_58 = zx.q(r10_42.d) * rcx_51 + rax_45

if (r8_58 u>= rax_45)
    rcx_52 = rdx_82

int64_t rdx_85 = (r8_58 u>> 0x20) + rcx_52
int64_t r8_59 = r8_58 << 0x20
int64_t r10_44 = r10_42 * r9_15 + r8_59
int64_t rcx_53 = rdx_85 + 1

if (r10_44 u>= r8_59)
    rcx_53 = rdx_85

int64_t rdi_8 = rdi_7 + r10_44
arg1[5] = rdi_8
int64_t rdx_86 = arg2[3]
uint64_t r10_45 = zx.q(rdx_86.d)
int64_t rax_46 = rcx_53 + 1

if (rdi_8 u>= r10_44)
    rax_46 = rcx_53

int64_t rcx_54 = arg3[3]
int64_t rbx_6 = rbx_5 + rax_46
uint64_t r9_16 = zx.q(rcx_54.d)

if (rbx_6 u>= rax_46)
    r11_9 = r14

uint64_t rcx_55 = rcx_54 u>> 0x20
uint64_t rdx_87 = rdx_86 u>> 0x20
int64_t rdx_88 = rdx_87 * rcx_55
int64_t rax_48 = rdx_87 * r9_16
int64_t rcx_56 = rdx_88 + 0x100000000
int64_t r8_62 = zx.q(r10_45.d) * rcx_55 + rax_48

if (r8_62 u>= rax_48)
    rcx_56 = rdx_88

int64_t rdx_91 = (r8_62 u>> 0x20) + rcx_56
int64_t r8_63 = r8_62 << 0x20
int64_t r10_47 = r10_45 * r9_16 + r8_63
int64_t rcx_57 = rdx_91 + 1

if (r10_47 u>= r8_63)
    rcx_57 = rdx_91

int64_t rbx_7 = rbx_6 + r10_47
arg1[6] = rbx_7
int64_t rax_49 = rcx_57 + 1

if (rbx_7 u>= r10_47)
    rax_49 = rcx_57

int64_t result = rax_49 + r11_9
arg1[7] = result
return result
