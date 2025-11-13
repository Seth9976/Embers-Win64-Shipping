// 函数: sub_142948b70
// 地址: 0x142948b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
uint64_t rsi_5 = ((zx.q(arg1[0x31]) & 0x7f) << 8 | zx.q(arg1[0x30])) << 6 | zx.q(arg1[0x2f]) u>> 2
uint64_t r9_7 = ((((zx.q(arg1[0x34]) & 0xf) << 8 | zx.q(arg1[0x33])) << 8 | zx.q(arg1[0x32])) * 2)
    | zx.q(arg1[0x31]) u>> 7
uint64_t rbp_7 = (((zx.q(arg1[0x37]) & 1) << 8 | zx.q(arg1[0x36])) << 8 | zx.q(arg1[0x35])) << 4
    | zx.q(arg1[0x34]) u>> 4
uint64_t r8_5 = ((zx.q(arg1[0x39]) & 0x3f) << 8 | zx.q(arg1[0x38])) << 7 | zx.q(arg1[0x37]) u>> 1
uint64_t rdi_7 = (((zx.q(arg1[0x3c]) & 7) << 8 | zx.q(arg1[0x3b])) << 8 | zx.q(arg1[0x3a])) << 2
    | zx.q(arg1[0x39]) u>> 6
uint64_t rdx_6 = ((zx.q(arg1[0x3f]) << 8 | zx.q(arg1[0x3e])) << 8 | zx.q(arg1[0x3d])) << 5
    | zx.q(arg1[0x3c]) u>> 3
int64_t r12_5 = (((zx.q(zx.d(arg1[0x2c]) << 0x10) | zx.q(arg1[0x2a])) & 0x1fffff)
    | zx.q(arg1[0x2b]) << 8) - rdx_6 * 0xa6f7d
int64_t r15_10 = ((((zx.q(arg1[0x27]) & 7) << 8 | zx.q(arg1[0x26])) << 8 | zx.q(arg1[0x25])) << 2
    | zx.q(arg1[0x24]) u>> 6) - r8_5 * 0xa6f7d - rdx_6 * 0xf39ad + rdi_7 * 0x215d1
int64_t r14_12 = ((((zx.q(arg1[0x22]) & 1) << 8 | zx.q(arg1[0x21])) << 8 | zx.q(arg1[0x20])) << 4
    | zx.q(arg1[0x1f]) u>> 4) + rdi_7 * 0x9fb67 - r9_7 * 0xa6f7d - r8_5 * 0xf39ad + rdx_6 * 0x72d18
    + rbp_7 * 0x215d1
int64_t rcx_8 = ((((zx.q(arg1[0x12]) & 7) << 8 | zx.q(arg1[0x11])) << 8 | zx.q(arg1[0x10])) << 2
    | zx.q(arg1[0xf]) u>> 6) + rsi_5 * 0xa2c13
int64_t r11_7 = (((zx.q(zx.d(arg1[0x17]) << 0x10) | zx.q(arg1[0x15])) & 0x1fffff)
    | zx.q(arg1[0x16]) << 8) + rsi_5 * 0x9fb67 + r9_7 * 0x72d18 + rbp_7 * 0xa2c13
int64_t rbx_1 = (rcx_8 + 0x100000) s>> 0x15
uint64_t r11_9 = (r11_7 + 0x100000) u>> 0x15
int64_t r13_10 = (((zx.q(arg1[0x1c]) & 0x7f) << 8 | zx.q(arg1[0x1b])) << 6 | zx.q(arg1[0x1a]) u>> 2)
    + rbp_7 * 0x9fb67 - r9_7 * 0xf39ad + r8_5 * 0x72d18 + rdi_7 * 0xa2c13 + rsi_5 * 0x215d1
int64_t r10_2 = r9_7 * 0xa2c13 + rsi_5 * 0x72d18 + rbx_1
    + ((zx.q(arg1[0x14]) << 8 | zx.q(arg1[0x13])) << 5 | zx.q(arg1[0x12]) u>> 3)
int64_t r10_5 = r8_5 * 0xa2c13 + rbp_7 * 0x72d18 + r11_9 + (
    (((zx.q(arg1[0x1a]) & 3) << 8 | zx.q(arg1[0x19])) << 8 | zx.q(arg1[0x18])) << 3
    | zx.q(arg1[0x17]) u>> 5) + r9_7 * 0x9fb67 - rsi_5 * 0xf39ad
int64_t r10_7 = (r13_10 + 0x100000) s>> 0x15
int64_t rax_86 = rdx_6 * 0xa2c13 + r10_7 + (((
    ((zx.q(arg1[0x1f]) & 0xf) << 8 | zx.q(arg1[0x1e])) << 8 | zx.q(arg1[0x1d])) * 2)
    | zx.q(arg1[0x1c]) u>> 7) + r8_5 * 0x9fb67 - rsi_5 * 0xa6f7d - rbp_7 * 0xf39ad + rdi_7 * 0x72d18
int64_t r9_9 = r9_7 * 0x215d1 + rax_86
int64_t r9_11 = (r14_12 + 0x100000) s>> 0x15
int64_t r8_7 = (r15_10 + 0x100000) s>> 0x15
int64_t r15_13 = (r10_5 + 0x100000) s>> 0x15
int64_t rsi_7 = r8_5 * 0x215d1 + r9_11
    + (((zx.q(arg1[0x24]) & 0x3f) << 8 | zx.q(arg1[0x23])) << 7 | zx.q(arg1[0x22]) u>> 1)
    + rdx_6 * 0x9fb67 - rbp_7 * 0xa6f7d - rdi_7 * 0xf39ad
int64_t rdx_8 = (r12_5 + 0x100000) s>> 0x15
int64_t r12_8 = (r9_9 + 0x100000) s>> 0x15
int64_t rdi_10 = (r10_2 + 0x100000) s>> 0x15
int64_t r13_13 = rdx_6 * 0x215d1 + r8_7
    + ((zx.q(arg1[0x29]) << 8 | zx.q(arg1[0x28])) << 5 | zx.q(arg1[0x27]) u>> 3) - rdi_7 * 0xa6f7d
int64_t rcx_53 = (rsi_7 + 0x100000) s>> 0x15
int64_t rbp_16 = ((((zx.q(arg1[0x2f]) & 3) << 8 | zx.q(arg1[0x2e])) << 8 | zx.q(arg1[0x2d])) << 3
    | zx.q(arg1[0x2c]) u>> 5) + rdx_8
int64_t r14_13 = r14_12 + r12_8 - (r9_11 << 0x15)
int64_t var_a8_1 = r15_10 + rcx_53 - (r8_7 << 0x15)
int64_t rsi_8 = rsi_7 + (neg.q(rcx_53) << 0x15)
int64_t rcx_57 = (r13_13 + 0x100000) s>> 0x15
int64_t r8_10 = r12_5 + rcx_57 - (rdx_8 << 0x15)
int64_t r13_14 = r13_13 + (neg.q(rcx_57) << 0x15)
int64_t arg_20 = r13_10 + (neg.q(r10_7) << 0x15) - rbp_16 * 0xa6f7d + r15_13
int64_t arg_18 =
    r11_7 + rbp_16 * -0xf39ad - r13_14 * 0xa6f7d + r8_10 * 0x215d1 - (r11_9 << 0x15) + rdi_10
char* rbx_3 = arg1
int64_t arg_10 = rcx_8 + r8_10 * 0x9fb67 - rsi_8 * 0xa6f7d - r13_14 * 0xf39ad + rbp_16 * 0x72d18
    + var_a8_1 * 0x215d1 - (rbx_1 << 0x15)
int64_t rcx_76 = (((zx.q(zx.d(rbx_3[2]) << 0x10) | zx.q(*rbx_3)) & 0x1fffff) | zx.q(rbx_3[1]) << 8)
    + r14_13 * 0xa2c13
int64_t rdx_18 = (((zx.q(rbx_3[7]) & 0x7f) << 8 | zx.q(rbx_3[6])) << 6 | zx.q(rbx_3[5]) u>> 2)
    + r14_13 * 0x9fb67 + rsi_8 * 0x72d18 + var_a8_1 * 0xa2c13
int64_t r9_25 = ((((zx.q(rbx_3[0xd]) & 1) << 8 | zx.q(rbx_3[0xc])) << 8 | zx.q(rbx_3[0xb])) << 4
    | zx.q(rbx_3[0xa]) u>> 4) + var_a8_1 * 0x9fb67 - rsi_8 * 0xf39ad + r13_14 * 0x72d18
    + r8_10 * 0xa2c13 + r14_13 * 0x215d1
int64_t r14_15 = (rcx_76 + 0x100000) s>> 0x15
int64_t rbp_18 = (rdx_18 + 0x100000) s>> 0x15
int64_t r10_13 = rsi_8 * 0xa2c13 + r14_13 * 0x72d18 + r14_15 + (
    (((zx.q(rbx_3[5]) & 3) << 8 | zx.q(rbx_3[4])) << 8 | zx.q(rbx_3[3])) << 3
    | zx.q(rbx_3[2]) u>> 5)
int64_t rsi_10 = (r9_25 + 0x100000) s>> 0x15
int64_t rdx_20 = r13_14 * 0xa2c13 + var_a8_1 * 0x72d18 + rbp_18 + (((
    ((zx.q(rbx_3[0xa]) & 0xf) << 8 | zx.q(rbx_3[9])) << 8 | zx.q(rbx_3[8])) * 2) | zx.q(rbx_3[7]) u>> 7)
    + rsi_8 * 0x9fb67 - r14_13 * 0xf39ad
int64_t r8_14 = (arg_10 + 0x100000) s>> 0x15
int64_t rdx_22 = rsi_8 * 0x215d1 + rbp_16 * 0xa2c13 + rsi_10
    + (((zx.q(rbx_3[0xf]) & 0x3f) << 8 | zx.q(rbx_3[0xe])) << 7 | zx.q(rbx_3[0xd]) u>> 1)
    + r13_14 * 0x9fb67 - r14_13 * 0xa6f7d - var_a8_1 * 0xf39ad + r8_10 * 0x72d18
int64_t rdx_25 = (arg_18 + 0x100000) s>> 0x15
int64_t var_a0_1 = r10_2 + rbp_16 * 0x9fb67 - var_a8_1 * 0xa6f7d - r8_10 * 0xf39ad
    + r13_14 * 0x215d1 - (rdi_10 << 0x15) + r8_14
int64_t r9_28 = (r10_13 + 0x100000) s>> 0x15
int64_t r11_13 = (rdx_22 + 0x100000) s>> 0x15
int64_t r15_16 = r10_5 + rbp_16 * 0x215d1 - r8_10 * 0xa6f7d - (r15_13 << 0x15) + rdx_25
int64_t rcx_117 = (arg_20 + 0x100000) s>> 0x15
int64_t rdi_13 = r9_9 + rcx_117 - (r12_8 << 0x15)
int64_t rbx_6 = (r15_16 + 0x100000) s>> 0x15
int64_t rdi_15 = (rdi_13 + 0x100000) s>> 0x15
int64_t r8_18 = (var_a0_1 + 0x100000) s>> 0x15
int64_t r10_15 = (rdx_20 + 0x100000) s>> 0x15
int64_t rcx_120 = rcx_76 + rdi_15 * 0xa2c13 - (r14_15 << 0x15)
int64_t rcx_121 = rcx_120 s>> 0x15
int64_t rdx_28 = r10_13 + rdi_15 * 0x72d18 - (r9_28 << 0x15) + rcx_121
int64_t rdx_29 = rdx_28 s>> 0x15
int64_t rbp_22 = rdx_18 + rdi_15 * 0x9fb67 - (rbp_18 << 0x15) + r9_28 + rdx_29
int64_t r9_31 = rbp_22 s>> 0x15
int64_t r12_11 = rdx_20 + (neg.q(r10_15) << 0x15) - rdi_15 * 0xf39ad + r9_31
int64_t r10_21 = r12_11 s>> 0x15
int64_t rsi_14 = r9_25 + rdi_15 * 0x215d1 - (rsi_10 << 0x15) + r10_15 + r10_21
int64_t rsi_15 = rsi_14 s>> 0x15
int64_t r13_16 = rdx_22 + rdi_15 * -0xa6f7d - (r11_13 << 0x15) + rsi_15
int64_t r11_16 = r13_16 s>> 0x15
int64_t rax_189 = arg_10 + r11_13 - (r8_14 << 0x15) + r11_16
int64_t rbp_24 = rax_189 s>> 0x15
int64_t r8_21 = var_a0_1 + rbp_24 - (r8_18 << 0x15)
int64_t r8_22 = r8_21 s>> 0x15
int64_t rax_193 = arg_18 + r8_18 - (rdx_25 << 0x15) + r8_22
int64_t r14_18 = rax_193 s>> 0x15
int64_t r15_17 = r15_16 + r14_18 - (rbx_6 << 0x15)
int64_t rbx_9 = r15_17 s>> 0x15
int64_t rax_197 = arg_20 + rbx_6 - (rcx_117 << 0x15) + rbx_9
int64_t r15_19 = rax_197 s>> 0x15
int64_t rdi_18 = rdi_13 + r15_19 - (rdi_15 << 0x15)
int64_t rdi_19 = rdi_18 s>> 0x15
int64_t rcx_124 = rcx_120 + rdi_19 * 0xa2c13 - (rcx_121 << 0x15)
int64_t rcx_125 = rcx_124 s>> 0x15
int64_t rdx_32 = rdx_28 + rdi_19 * 0x72d18 - (rdx_29 << 0x15) + rcx_125
int64_t var_a8_5 = rcx_124 + (neg.q(rcx_125) << 0x15)
int64_t rcx_129 = rdx_32 s>> 0x15
int64_t r9_34 = rbp_22 + rdi_19 * 0x9fb67 - (r9_31 << 0x15) + rcx_129
int64_t rdx_33 = rdx_32 + (neg.q(rcx_129) << 0x15)
int64_t rcx_133 = r9_34 s>> 0x15
int64_t r12_12 = r12_11 + (neg.q(r10_21) << 0x15) - rdi_19 * 0xf39ad + rcx_133
int64_t r9_35 = r9_34 + (neg.q(rcx_133) << 0x15)
int64_t rcx_137 = r12_12 s>> 0x15
int64_t r10_27 = rsi_14 + rdi_19 * 0x215d1 - (rsi_15 << 0x15) + rcx_137
int64_t r12_13 = r12_12 + (neg.q(rcx_137) << 0x15)
int64_t rcx_141 = r10_27 s>> 0x15
int64_t r13_17 = r13_16 + rdi_19 * -0xa6f7d - (r11_16 << 0x15) + rcx_141
int64_t r10_28 = r10_27 + (neg.q(rcx_141) << 0x15)
int64_t rcx_145 = r13_17 s>> 0x15
int64_t r13_18 = r13_17 + (neg.q(rcx_145) << 0x15)
int64_t r11_19 = rax_189 + rcx_145 - (rbp_24 << 0x15)
int64_t rcx_149 = r11_19 s>> 0x15
int64_t r11_20 = r11_19 + (neg.q(rcx_149) << 0x15)
int64_t rsi_18 = r8_21 + rcx_149 - (r8_22 << 0x15)
int64_t rcx_153 = rsi_18 s>> 0x15
int64_t rbp_27 = rax_193 + rcx_153 - (r14_18 << 0x15)
int64_t rsi_19 = rsi_18 + (neg.q(rcx_153) << 0x15)
int64_t rcx_157 = rbp_27 s>> 0x15
int64_t r11_22 = r15_17 + rcx_157 - (rbx_9 << 0x15)
int64_t rbp_28 = rbp_27 + (neg.q(rcx_157) << 0x15)
int64_t rcx_161 = r11_22 s>> 0x15
int64_t rbx_12 = rax_197 + rcx_161 - (r15_19 << 0x15)
int64_t r11_23 = r11_22 + (neg.q(rcx_161) << 0x15)
int64_t rcx_165 = rbx_12 s>> 0x15
int64_t r8_25 = rdi_18 + rcx_165 - (rdi_19 << 0x15)
int64_t rbx_13 = rbx_12 + (neg.q(rcx_165) << 0x15)
arg1[1] = (var_a8_5 s>> 8).b
*arg1 = var_a8_5.b
arg1[2] = rdx_33.b << 5 | (var_a8_5 s>> 0x10).b
arg1[3] = (rdx_33 s>> 3).b
arg1[4] = (rdx_33 s>> 0xb).b
arg1[6] = (r9_35 s>> 6).b
arg1[5] = (rdx_33 s>> 0x13).b | r9_35.b << 2
arg1[7] = r12_13.b << 7 | (r9_35 s>> 0xe).b
arg1[8] = (r12_13 s>> 1).b
arg1[9] = (r12_13 s>> 9).b
arg1[0xb] = (r10_28 s>> 4).b
arg1[0xc] = (r10_28 s>> 0xc).b
arg1[0xa] = (r12_13 s>> 0x11).b | r10_28.b << 4
arg1[0xd] = (r10_28 s>> 0x14).b | (r13_18.b * 2)
arg1[0xe] = (r13_18 s>> 7).b
arg1[0xf] = r11_20.b << 6 | (r13_18 s>> 0xf).b
arg1[0x10] = (r11_20 s>> 2).b
arg1[0x11] = (r11_20 s>> 0xa).b
arg1[0x15] = rbp_28.b
arg1[0x13] = (rsi_19 s>> 5).b
arg1[0x16] = (rbp_28 s>> 8).b
arg1[0x17] = r11_23.b << 5 | (rbp_28 s>> 0x10).b
arg1[0x18] = (r11_23 s>> 3).b
arg1[0x19] = (r11_23 s>> 0xb).b
arg1[0x12] = (r11_20 s>> 0x12).b | rsi_19.b << 3
arg1[0x14] = (rsi_19 s>> 0xd).b
arg1[0x1b] = (rbx_13 s>> 6).b
arg1[0x1a] = (r11_23 s>> 0x13).b | rbx_13.b << 2
arg1[0x1c] = r8_25.b << 7 | (rbx_13 s>> 0xe).b
arg1[0x1d] = (r8_25 s>> 1).b
char result = (r8_25 s>> 9).b
arg1[0x1f] = (r8_25 s>> 0x11).b
arg1[0x1e] = result
return result
