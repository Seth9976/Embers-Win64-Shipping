// 函数: sub_14291fc50
// 地址: 0x14291fc50
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
int64_t rbx = rax_5
int64_t r11 = rax_5 + 1

if (rsi_1 u< r10_5)
    rbx = r11

int64_t rsi_2 = rsi_1 + r10_5
arg1[1] = rsi_2
int64_t rcx_3 = arg2[1]

if (rsi_2 u>= r10_5)
    r11 = rax_5

uint64_t r9_3 = zx.q(rcx_3.d)
uint64_t rcx_4 = rcx_3 u>> 0x20
int64_t rbx_1 = rbx + r11
int64_t r8_9 = zx.q(r9_3.d) * rcx_4
int64_t r8_10 = r8_9 << 0x21
int64_t rdx_8 = (r8_9 u>> 0x1f) + rcx_4 * rcx_4
int64_t r9_5 = r9_3 * r9_3 + r8_10
int64_t rax_6 = rdx_8 + 1

if (r9_5 u>= r8_10)
    rax_6 = rdx_8

int64_t rdx_9 = arg2[2]
int64_t rbx_2 = rbx_1 + r9_5
int64_t rcx_6 = rax_6 + 1

if (rbx_2 u>= r9_5)
    rcx_6 = rax_6

uint64_t r10_7 = zx.q(rdx_9.d)
int64_t r11_2 = adc.q(rcx_6, 0, rbx_1 u< r11)
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

int64_t rbx_3 = rbx_2 + r10_9
int64_t rax_9 = r9_7

if (rbx_3 u< r10_9)
    rax_9 = r9_7 + 1

int64_t r11_3 = r11_2 + rax_9
int64_t rcx_10 = rsi_3 + 1
int64_t rax_10 = r9_7 + 1

if (r11_3 u>= rax_9)
    rcx_10 = rsi_3

int64_t rbx_4 = rbx_3 + r10_9
arg1[2] = rbx_4
int64_t rdx_15 = arg2[3]

if (rbx_4 u>= r10_9)
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

int64_t rsi_5 = rsi_4 + rdx_21
int64_t rdx_22 = arg2[2]
int64_t rax_13
rax_13.b = rsi_5 u< rdx_21
int64_t r11_6 = r11_5 + r10_12
uint64_t r10_13 = zx.q(rdx_22.d)

if (r11_6 u>= r10_12)
    rcx_14 = r9_9

int64_t rsi_6 = rsi_5 + rcx_14
int64_t rbx_5 = rax_13 + 1
int64_t rcx_15 = arg2[1]
uint64_t r9_10 = zx.q(rcx_15.d)

if (rsi_6 u>= rcx_14)
    rbx_5 = rax_13

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

int64_t rsi_7 = rsi_6 + rdx_28
int64_t rax_16 = rbx_5 + 1

if (rsi_7 u>= rdx_28)
    rax_16 = rbx_5

int64_t r11_8 = r11_7 + r10_15
arg1[3] = r11_8

if (r11_8 u>= r10_15)
    rcx_18 = r9_11

int64_t rsi_8 = rsi_7 + rcx_18
int64_t rbx_6 = rax_16 + 1
int64_t rcx_19 = arg2[2]
uint64_t r9_12 = zx.q(rcx_19.d)

if (rsi_8 u>= rcx_18)
    rbx_6 = rax_16

uint64_t rcx_20 = rcx_19 u>> 0x20
int64_t r8_24 = zx.q(r9_12.d) * rcx_20
int64_t r8_25 = r8_24 << 0x21
int64_t rdx_31 = (r8_24 u>> 0x1f) + rcx_20 * rcx_20
int64_t r9_14 = r9_12 * r9_12 + r8_25
int64_t rcx_22 = rdx_31 + 1

if (r9_14 u>= r8_25)
    rcx_22 = rdx_31

int64_t rdx_32 = arg2[3]
int64_t rsi_9 = rsi_8 + r9_14
uint64_t r10_16 = zx.q(rdx_32.d)
int64_t rax_17 = rcx_22 + 1

if (rsi_9 u>= r9_14)
    rax_17 = rcx_22

int64_t rcx_23 = arg2[1]
int64_t rbx_7 = rbx_6 + rax_17
uint64_t r9_15 = zx.q(rcx_23.d)
int64_t r11_9
r11_9.b = rbx_7 u< rax_17
uint64_t rdx_33 = rdx_32 u>> 0x20
uint64_t rcx_24 = rcx_23 u>> 0x20
int64_t rdx_34 = rdx_33 * rcx_24
int64_t rax_19 = rdx_33 * r9_15
int64_t rcx_25 = rdx_34 + 0x100000000
int64_t r8_28 = zx.q(r10_16.d) * rcx_24 + rax_19

if (r8_28 u>= rax_19)
    rcx_25 = rdx_34

int64_t rdx_37 = (r8_28 u>> 0x20) + rcx_25
int64_t r8_29 = r8_28 << 0x20
int64_t r10_18 = r10_16 * r9_15 + r8_29
int64_t r9_16 = rdx_37 + 1

if (r10_18 u>= r8_29)
    r9_16 = rdx_37

int64_t rsi_10 = rsi_9 + r10_18
int64_t rax_20 = r9_16

if (rsi_10 u< r10_18)
    rax_20 = r9_16 + 1

int64_t rbx_8 = rbx_7 + rax_20
int64_t rcx_26 = r11_9 + 1
int64_t rax_21 = r9_16 + 1

if (rbx_8 u>= rax_20)
    rcx_26 = r11_9

int64_t rsi_11 = rsi_10 + r10_18
arg1[4] = rsi_11
int64_t rdx_38 = arg2[3]

if (rsi_11 u>= r10_18)
    rax_21 = r9_16

uint64_t r10_19 = zx.q(rdx_38.d)
int64_t rbx_9 = rbx_8 + rax_21
int64_t r11_10 = rcx_26 + 1

if (rbx_9 u>= rax_21)
    r11_10 = rcx_26

int64_t rcx_27 = arg2[2]
uint64_t rdx_39 = rdx_38 u>> 0x20
uint64_t r9_17 = zx.q(rcx_27.d)
uint64_t rcx_28 = rcx_27 u>> 0x20
int64_t rdx_40 = rdx_39 * rcx_28
int64_t rax_23 = rdx_39 * r9_17
int64_t rcx_29 = rdx_40 + 0x100000000
int64_t r8_32 = zx.q(r10_19.d) * rcx_28 + rax_23

if (r8_32 u>= rax_23)
    rcx_29 = rdx_40

int64_t rdx_43 = (r8_32 u>> 0x20) + rcx_29
int64_t r8_33 = r8_32 << 0x20
int64_t r10_21 = r10_19 * r9_17 + r8_33
int64_t r9_18 = rdx_43 + 1

if (r10_21 u>= r8_33)
    r9_18 = rdx_43

int64_t rbx_10 = rbx_9 + r10_21
int64_t rcx_30 = r9_18
int64_t rax_24 = r9_18 + 1

if (rbx_10 u< r10_21)
    rcx_30 = rax_24

int64_t r11_11 = r11_10 + rcx_30
int64_t rbp
rbp.b = r11_11 u< rcx_30
int64_t rbx_11 = rbx_10 + r10_21
arg1[5] = rbx_11
int64_t rcx_31 = arg2[3]

if (rbx_11 u>= r10_21)
    rax_24 = r9_18

int64_t r10_22 = rbp + 1
int64_t r11_12 = r11_11 + rax_24
uint64_t r9_19 = zx.q(rcx_31.d)

if (r11_12 u>= rax_24)
    r10_22 = rbp

uint64_t rcx_32 = rcx_31 u>> 0x20
int64_t r8_35 = zx.q(r9_19.d) * rcx_32
int64_t r8_36 = r8_35 << 0x21
int64_t rdx_46 = (r8_35 u>> 0x1f) + rcx_32 * rcx_32
int64_t r9_21 = r9_19 * r9_19 + r8_36
int64_t rcx_34 = rdx_46 + 1

if (r9_21 u>= r8_36)
    rcx_34 = rdx_46

int64_t r11_13 = r11_12 + r9_21
arg1[6] = r11_13
int64_t rax_25 = rcx_34 + 1

if (r11_13 u>= r9_21)
    rax_25 = rcx_34

int64_t result = rax_25 + r10_22
arg1[7] = result
return result
