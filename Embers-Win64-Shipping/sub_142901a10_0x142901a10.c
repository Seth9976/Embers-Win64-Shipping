// 函数: sub_142901a10
// 地址: 0x142901a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 + 0x100)

if (arg1 == 0 || arg3 == 0)
    return 0xffffffff

if (((arg2 - 0x80) & 0xffffff3f) != 0 || arg2 == 0x140)
    return 0xfffffffe

arg3[0x44] = (temp1 + (temp0 & 0x1f)) s>> 5
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2 - 0x80)
uint32_t rbp_6 = ((zx.d(*arg1) << 8 ^ zx.d(arg1[1])) << 8 ^ zx.d(arg1[2])) << 8 ^ zx.d(arg1[3])
int32_t rbx_1 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + &data_1435194c0) ^ rbp_6
uint32_t r14_6 = ((zx.d(arg1[4]) << 8 ^ zx.d(arg1[5])) << 8 ^ zx.d(arg1[6])) << 8 ^ zx.d(arg1[7])
int32_t r10_1 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194c4) ^ r14_6
uint32_t r15_6 =
    ((zx.d(arg1[8]) << 8 ^ zx.d(arg1[9])) << 8 ^ zx.d(arg1[0xa])) << 8 ^ zx.d(arg1[0xb])
int32_t r8_1 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194c8) ^ r15_6
uint32_t r12_6 =
    ((zx.d(arg1[0xc]) << 8 ^ zx.d(arg1[0xd])) << 8 ^ zx.d(arg1[0xe])) << 8 ^ zx.d(arg1[0xf])
int32_t r9_1 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194cc) ^ r12_6
int32_t rsi_3 = *((zx.q(r8_1) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((r8_1 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((r8_1 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(r8_1.b) << 2) + 0x14351a110)
int32_t r11_3 = *((zx.q(r9_1) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((r9_1 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((r9_1 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(r9_1.b) << 2) + 0x14351a110)
int32_t r8_6 = *((zx.q(r10_1) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((r10_1 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((r10_1 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(r10_1.b) << 2) + 0x14351a110) ^ rsi_3
int32_t r11_4 = r11_3 ^ r8_6
int32_t r10_6 = *((zx.q(rbx_1) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((rbx_1 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((rbx_1 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(rbx_1.b) << 2) + 0x14351a110) ^ r8_6
int32_t rsi_5 = rsi_3 ^ r11_3 ^ r10_6
int32_t r8_7 = r8_6 ^ rsi_5
int32_t rsi_6 = rol.d(rsi_5, 0x10)
int32_t rbx_6 =
    ((r11_4 & 0xff0000) ^ r11_4 u>> 0x10) u>> 8 ^ ((r11_4 & 0xff00) ^ r11_4 << 0x10) << 8
int32_t r9_7 = ((r8_7 u>> 8 ^ r8_7 << 8) & 0xff00ff) ^ r8_7 << 8 ^ rsi_6
int32_t r10_7 = r10_6 ^ r9_7
int32_t rsi_8 = rsi_6 ^ rbx_6 ^ r10_7
uint32_t rcx_17
uint32_t rdx_19
uint32_t r8_15
uint32_t r13_7

if (arg2 s<= 0x80)
    r13_7 = 0
    rdx_19 = 0
    r8_15 = 0
    rcx_17 = 0
else
    r8_15 =
        ((zx.d(arg1[0x10]) << 8 ^ zx.d(arg1[0x11])) << 8 ^ zx.d(arg1[0x12])) << 8 ^ zx.d(arg1[0x13])
    rdx_19 =
        ((zx.d(arg1[0x14]) << 8 ^ zx.d(arg1[0x15])) << 8 ^ zx.d(arg1[0x16])) << 8 ^ zx.d(arg1[0x17])
    
    if (arg2 s<= 0xc0)
        r13_7 = 0
        rcx_17 = 0
    else
        r13_7 = ((zx.d(arg1[0x18]) << 8 ^ zx.d(arg1[0x19])) << 8 ^ zx.d(arg1[0x1a])) << 8
            ^ zx.d(arg1[0x1b])
        rcx_17 = ((zx.d(arg1[0x1c]) << 8 ^ zx.d(arg1[0x1d])) << 8 ^ zx.d(arg1[0x1e])) << 8
            ^ zx.d(arg1[0x1f])

int32_t rdx_20 = rdx_19 ^ r9_7 ^ rsi_8
int32_t rcx_18 = rcx_17 ^ rbx_6 ^ r9_7
int32_t r8_16 = r8_15 ^ r10_7
uint64_t r13_8 = zx.q(r13_7) ^ zx.q(rsi_8)
int32_t rbx_9 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194d0) ^ r8_16
int32_t r10_9 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194d4) ^ rdx_20
int32_t r8_18 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194d8) ^ r13_8.d
int32_t r9_10 = *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194dc) ^ rcx_18
int32_t rdi_4 = *((zx.q(r8_18) u>> 0x18 << 2) + 0x143519d10)
    ^ *((zx.q((r8_18 u>> 0x10).b) << 2) + 0x14351a110)
    ^ *((zx.q((r8_18 u>> 8).b) << 2) + 0x143519510) ^ *((zx.q(r8_18.b) << 2) + 0x143519910)
int32_t r11_9 = *((zx.q(r9_10) u>> 0x18 << 2) + 0x143519d10)
    ^ *((zx.q((r9_10 u>> 0x10).b) << 2) + 0x14351a110)
    ^ *((zx.q((r9_10 u>> 8).b) << 2) + 0x143519510) ^ *((zx.q(r9_10.b) << 2) + 0x143519910)
int32_t r8_23 = *((zx.q(r10_9) u>> 0x18 << 2) + 0x143519d10)
    ^ *((zx.q((r10_9 u>> 0x10).b) << 2) + 0x14351a110)
    ^ *((zx.q((r10_9 u>> 8).b) << 2) + 0x143519510) ^ *((zx.q(r10_9.b) << 2) + 0x143519910) ^ rdi_4
int32_t r11_10 = r11_9 ^ r8_23
int32_t rsi_13 = *((zx.q(rbx_9) u>> 0x18 << 2) + 0x143519d10)
    ^ *((zx.q((rbx_9 u>> 0x10).b) << 2) + 0x14351a110)
    ^ *((zx.q((rbx_9 u>> 8).b) << 2) + 0x143519510) ^ *((zx.q(rbx_9.b) << 2) + 0x143519910) ^ r8_23
int32_t rdi_6 = rdi_4 ^ r11_9 ^ rsi_13
int32_t r8_24 = r8_23 ^ rdi_6
int32_t r9_15 = ((r11_10 u>> 8 ^ r11_10 << 8) & 0xff00ff) ^ r11_10 << 8
int32_t r11_17 =
    ((r8_24 & 0xff0000) ^ r8_24 u>> 0x10) u>> 8 ^ ((r8_24 & 0xff00) ^ r8_24 << 0x10) << 8 ^ rdi_6
int32_t rsi_15 = rol.d(rsi_13, 0x10) ^ r11_17
int32_t r9_17 = r9_15 ^ r11_17 ^ r12_6
int32_t rdi_8 = rdi_6 ^ r9_15 ^ rsi_15
int32_t r11_18 = r11_17 ^ r14_6 ^ rdi_8
int32_t rdi_9 = rdi_8 ^ r15_6
int32_t rsi_16 = rsi_15 ^ rbp_6
uint64_t rbp_7 = zx.q(r9_17)
int32_t r9_18 = r9_17 ^ *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194ec)
int32_t rdi_10 = rdi_9 ^ *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194e8)
int32_t rsi_17 = rsi_16 ^ *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194e0)
int32_t r11_19 = r11_18 ^ *((sx.q((temp3 + (temp2 & 0x3f)) s>> 6) << 4) + 0x1435194e4)
int32_t rbx_13 = *((zx.q(rdi_10) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((rdi_10 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((rdi_10 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(rdi_10.b) << 2) + 0x14351a110)
int32_t r10_13 = *((zx.q(r9_18) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((r9_18 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((r9_18 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(r9_18.b) << 2) + 0x14351a110)
int32_t r9_23 = *((zx.q(r11_19) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((r11_19 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((r11_19 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(r11_19.b) << 2) + 0x14351a110)
    ^ rbx_13
int32_t r10_14 = r10_13 ^ r9_23
int32_t r8_30 = *((zx.q(rsi_17) u>> 0x18 << 2) + 0x143519510)
    ^ *((zx.q((rsi_17 u>> 0x10).b) << 2) + 0x143519910)
    ^ *((zx.q((rsi_17 u>> 8).b) << 2) + 0x143519d10) ^ *((zx.q(rsi_17.b) << 2) + 0x14351a110)
    ^ r9_23
int32_t rbx_15 = rbx_13 ^ r10_13 ^ r8_30
int32_t r9_24 = r9_23 ^ rbx_15
int32_t rbx_16 = rol.d(rbx_15, 0x10)
int32_t rdx_41 =
    ((r10_14 & 0xff0000) ^ r10_14 u>> 0x10) u>> 8 ^ ((r10_14 & 0xff00) ^ r10_14 << 0x10) << 8
int32_t rcx_40 = ((r9_24 u>> 8 ^ r9_24 << 8) & 0xff00ff) ^ r9_24 << 8 ^ rbx_16
int32_t r8_31 = r8_30 ^ rcx_40
int32_t rax_122 = rdx_41 ^ rbx_16 ^ r8_31
int32_t r9_27 = r8_16 ^ r8_31
void* var_90
var_90.d = rdx_20 ^ rax_122 ^ rcx_40
int32_t r8_36 = r13_8.d ^ rax_122
int32_t rax_125 = rcx_18 ^ rdx_41 ^ rcx_40
*arg3 = rcx_18 << 0xd ^ r8_16 u>> 0x13 ^ rbp_6
arg3[1] = r8_16 << 0xd ^ rdx_20 u>> 0x13 ^ r14_6
arg3[2] = rdx_20 << 0xd ^ r13_8.d u>> 0x13 ^ r15_6
arg3[3] = rcx_18 u>> 0x13 ^ r13_8.d << 0xd ^ r12_6
arg3[4] = rbp_7.d << 0xd ^ rsi_16 u>> 0x13 ^ r8_16
arg3[5] = r11_18 u>> 0x13 ^ rsi_16 << 0xd ^ rdx_20
arg3[6] = rdi_9 u>> 0x13 ^ r11_18 << 0xd ^ r13_8.d
arg3[7] = rbp_7.d u>> 0x13 ^ rdi_9 << 0xd ^ rcx_18
arg3[8] = rax_125 << 0xd ^ r9_27 u>> 0x13 ^ rsi_16
arg3[9] = var_90.d u>> 0x13 ^ r9_27 << 0xd ^ r11_18
arg3[0xa] = r8_36 u>> 0x13 ^ var_90.d << 0xd ^ rdi_9
arg3[0xb] = rax_125 u>> 0x13 ^ r8_36 << 0xd ^ rbp_7.d
arg3[0xc] = rbp_6 u>> 0x13 ^ r12_6 << 0xd ^ r9_27
arg3[0xd] = rbp_6 << 0xd ^ r14_6 u>> 0x13 ^ var_90.d
arg3[0xe] = r14_6 << 0xd ^ r15_6 u>> 0x13 ^ r8_36
arg3[0xf] = r15_6 << 0xd ^ r12_6 u>> 0x13 ^ rax_125
arg3[0x10] = (rcx_18 * 2) ^ r8_16 u>> 0x1f ^ rbp_6
arg3[0x11] = rdx_20 u>> 0x1f ^ (r8_16 * 2) ^ r14_6
arg3[0x12] = (rdx_20 * 2) ^ r13_8.d u>> 0x1f ^ r15_6
arg3[0x13] = rcx_18 u>> 0x1f ^ (r13_8 << 1).d ^ r12_6
arg3[0x14] = (rbp_7 << 1).d ^ rsi_16 u>> 0x1f ^ r8_16
arg3[0x15] = r11_18 u>> 0x1f ^ (rsi_16 * 2) ^ rdx_20
arg3[0x16] = rdi_9 u>> 0x1f ^ (r11_18 * 2) ^ r13_8.d
arg3[0x17] = rbp_7.d u>> 0x1f ^ (rdi_9 * 2) ^ rcx_18
arg3[0x18] = (rax_125 * 2) ^ r9_27 u>> 0x1f ^ rsi_16
arg3[0x19] = var_90.d u>> 0x1f ^ (r9_27 * 2) ^ r11_18
arg3[0x1a] = r8_36 u>> 0x1f ^ (var_90.d * 2) ^ rdi_9
arg3[0x1b] = rax_125 u>> 0x1f ^ (r8_36 * 2) ^ rbp_7.d
arg3[0x1c] = rbp_6 u>> 0x1f ^ (r12_6 * 2) ^ r9_27
arg3[0x1d] = r14_6 u>> 0x1f ^ (rbp_6 * 2) ^ var_90.d
arg3[0x1e] = r15_6 u>> 0x1f ^ (r14_6 * 2) ^ r8_36
arg3[0x1f] = r12_6 u>> 0x1f ^ (r15_6 * 2) ^ rax_125
arg3[0x20] = rdx_20 << 0x1d ^ r13_8.d u>> 3 ^ rbp_6
arg3[0x21] = rcx_18 u>> 3 ^ r13_8.d << 0x1d ^ r14_6
arg3[0x22] = rcx_18 << 0x1d ^ r8_16 u>> 3 ^ r15_6
arg3[0x23] = r8_16 << 0x1d ^ rdx_20 u>> 3 ^ r12_6
arg3[0x24] = r11_18 << 0x1d ^ rdi_9 u>> 3 ^ r8_16
arg3[0x25] = rdi_9 << 0x1d ^ rbp_7.d u>> 3 ^ rdx_20
arg3[0x26] = rbp_7.d << 0x1d ^ rsi_16 u>> 3 ^ r13_8.d
arg3[0x27] = rsi_16 << 0x1d ^ r11_18 u>> 3 ^ rcx_18
arg3[0x28] = var_90.d << 0x1d ^ r8_36 u>> 3 ^ rsi_16
int32_t r14_8 = var_90.d
arg3[0x29] = r8_36 << 0x1d ^ rax_125 u>> 3 ^ r11_18
arg3[0x2a] = rax_125 << 0x1d ^ r9_27 u>> 3 ^ rdi_9
arg3[0x2b] = r9_27 << 0x1d ^ r14_8 u>> 3 ^ rbp_7.d
arg3[0x2c] = r14_6 << 0x1d ^ r15_6 u>> 3 ^ r9_27
arg3[0x2d] = r15_6 << 0x1d ^ r12_6 u>> 3 ^ r14_8
arg3[0x2e] = rbp_6 u>> 3 ^ r12_6 << 0x1d ^ r8_36
arg3[0x2f] = rbp_6 << 0x1d ^ r14_6 u>> 3 ^ rax_125
void* rdx_43 = &arg3[0x30]
*rdx_43 = r8_16 << 0x1f ^ rdx_20 u>> 1 ^ rbp_6
*(rdx_43 + 4) = rdx_20 << 0x1f ^ r13_8.d u>> 1 ^ r14_6
*(rdx_43 + 8) = rcx_18 u>> 1 ^ r13_8.d << 0x1f ^ r15_6
*(rdx_43 + 0xc) = rcx_18 << 0x1f ^ r8_16 u>> 1 ^ r12_6

if (arg2 s> 0x80)
    *(rdx_43 + 0x10) = rsi_16 << 0x1f ^ r11_18 u>> 1 ^ r8_16
    *(rdx_43 + 0x14) = rdi_9 u>> 1 ^ r11_18 << 0x1f ^ rdx_20
    *(rdx_43 + 0x18) = r9_17 u>> 1 ^ rdi_9 << 0x1f ^ r13_8.d
    *(rdx_43 + 0x1c) = rsi_16 u>> 1 ^ r9_17 << 0x1f ^ rcx_18
    rdx_43 += 0x20
    *rdx_43 = r9_27 << 0x1f ^ r14_8 u>> 1 ^ rsi_16
    *(rdx_43 + 4) = r8_36 u>> 1 ^ r14_8 << 0x1f ^ r11_18
    *(rdx_43 + 8) = rax_125 u>> 1 ^ r8_36 << 0x1f ^ rdi_9
    *(rdx_43 + 0xc) = rax_125 << 0x1f ^ r9_27 u>> 1 ^ r9_17

if (arg2 s> 0xc0)
    *(rdx_43 + 0x10) = rbp_6 << 0x1f ^ r14_6 u>> 1 ^ r9_27
    *(rdx_43 + 0x14) = r14_6 << 0x1f ^ r15_6 u>> 1 ^ r14_8
    *(rdx_43 + 0x18) = r15_6 << 0x1f ^ r12_6 u>> 1 ^ r8_36
    *(rdx_43 + 0x1c) = rbp_6 u>> 1 ^ r12_6 << 0x1f ^ rax_125
    *(rdx_43 + 0x20) = rdx_20 u>> 0xd ^ r8_16 << 0x13 ^ rbp_6
    *(rdx_43 + 0x24) = rdx_20 << 0x13 ^ r13_8.d u>> 0xd ^ r14_6
    *(rdx_43 + 0x28) = rcx_18 u>> 0xd ^ r13_8.d << 0x13 ^ r15_6
    *(rdx_43 + 0x2c) = rcx_18 << 0x13 ^ r8_16 u>> 0xd ^ r12_6

return 0
