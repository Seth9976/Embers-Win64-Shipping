// 函数: sub_1428fc900
// 地址: 0x1428fc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const i = &data_143519388
int32_t* r14 = arg2
uint32_t rax_3 = zx.d(*arg1) | zx.d(arg1[1]) << 8 | zx.d(arg1[2]) << 0x10 | zx.d(arg1[3]) << 0x18
uint32_t r9_2 = zx.d(arg1[4]) | zx.d(arg1[5]) << 8 | (zx.d(arg1[7]) << 8 | zx.d(arg1[6])) << 0x10
int32_t rcx_12 = (r9_2 u>> 4 ^ rax_3) & 0xf0f0f0f
int32_t rax_4 = rax_3 ^ rcx_12
int32_t r9_3 = r9_2 ^ rcx_12 << 4
int32_t rdx_7 = (rax_4 << 0x12 ^ rax_4) & 0xcccc0000
int32_t rax_5 = rax_4 ^ rdx_7 u>> 0x12 ^ rdx_7
int32_t rdx_11 = (r9_3 << 0x12 ^ r9_3) & 0xcccc0000
int32_t r9_4 = r9_3 ^ rdx_11 u>> 0x12 ^ rdx_11
int32_t rcx_23 = (r9_4 u>> 1 ^ rax_5) & 0x55555555
int32_t rax_6 = rax_5 ^ rcx_23
int32_t r9_5 = r9_4 ^ (rcx_23 * 2)
int32_t rcx_28 = (rax_6 u>> 8 ^ r9_5) & 0xff00ff
int32_t r9_6 = r9_5 ^ rcx_28
int32_t rax_7 = rax_6 ^ rcx_28 << 8
int32_t rcx_33 = (r9_6 u>> 1 ^ rax_7) & 0x55555555
int32_t rax_8 = rax_7 ^ rcx_33
int32_t r9_7 = r9_6 ^ (rcx_33 * 2)
int32_t rbx_6 =
    ((r9_7 u>> 0xc & 0xff0) | (rax_8 & 0xf000000f)) u>> 4 | zx.d(r9_7.b) << 0x10 | (r9_7 & 0xff00)
int32_t result = rax_8 & 0xfffffff

do
    uint32_t rax_9
    uint32_t rbx_7
    int32_t rdi_2
    int32_t r11_2
    
    if (*(i - 8) == 0)
        r11_2 = result << 0x1b
        rax_9 = result u>> 1
        rdi_2 = rbx_6 << 0x1b
        rbx_7 = rbx_6 u>> 1
    else
        r11_2 = result << 0x1a
        rax_9 = result u>> 2
        rdi_2 = rbx_6 << 0x1a
        rbx_7 = rbx_6 u>> 2
    
    int32_t r11_4 = (r11_2 | rax_9) & 0xfffffff
    int32_t rdi_4 = (rdi_2 | rbx_7) & 0xfffffff
    uint32_t r8_2 = r11_4 u>> 1
    int32_t r10_2 = *(((((zx.q(r11_4) & 0xc00000) | (zx.q(r8_2) & 0x7000000)) u>> 1
        | (zx.q(r11_4) & 0x100000)) u>> 0x14 << 2) + 0x143518e80)
        | *((((zx.q(r8_2) & 0xf00) | (zx.q(r11_4) & 0xc0)) u>> 6 << 2) + 0x143518c80)
    int32_t r10_4 = r10_2
        | *((((zx.q(r11_4) & 0x1e000) | (zx.q(r8_2) & 0x60000)) u>> 0xd << 2) + 0x143518d80)
        | *(&data_143518b80 + ((zx.q(r11_4) & 0x3f) << 2))
    uint32_t rcx_44 = rdi_4 u>> 1
    int32_t r8_5 = *((((zx.q(rdi_4) & 0x180) | (zx.q(rcx_44) & 0x1e00)) u>> 7 << 2) + 0x143519080)
        | *((((zx.q(rdi_4) & 0x1e00000) | (zx.q(rcx_44) & 0x6000000)) u>> 0x15 << 2) + 0x143519280)
    int32_t r8_7 = r8_5 | *(((zx.q(rdi_4 u>> 0xf) & 0x3f) << 2) + 0x143519180)
        | *(((zx.q(rdi_4) & 0x3f) << 2) + 0x143518f80)
    bool cond:0_1 = *(i - 4) == 0
    *r14 = ror.d(zx.d(r10_4.w) | r8_7 << 0x10, 0x1e)
    r14[1] = ror.d(r10_4 u>> 0x10 | (r8_7 & 0xffff0000), 0x1a)
    int32_t rbx_10
    uint32_t rdi_5
    int32_t r11_7
    
    if (cond:0_1)
        rbx_10 = r11_4 << 0x1b | r11_4 u>> 1
        r11_7 = rdi_4 << 0x1b
        rdi_5 = rdi_4 u>> 1
    else
        rbx_10 = r11_4 << 0x1a | r11_4 u>> 2
        r11_7 = rdi_4 << 0x1a
        rdi_5 = rdi_4 u>> 2
    
    int32_t rbx_12 = rbx_10 & 0xfffffff
    int32_t r11_11 = (r11_7 | rdi_5) & 0xfffffff
    uint32_t r8_10 = rbx_12 u>> 1
    int32_t r10_9 = *(((((zx.q(rbx_12) & 0xc00000) | (zx.q(r8_10) & 0x7000000)) u>> 1
        | (zx.q(rbx_12) & 0x100000)) u>> 0x14 << 2) + 0x143518e80)
        | *((((zx.q(r8_10) & 0xf00) | (zx.q(rbx_12) & 0xc0)) u>> 6 << 2) + 0x143518c80)
    int32_t r10_11 = r10_9
        | *((((zx.q(rbx_12) & 0x1e000) | (zx.q(r8_10) & 0x60000)) u>> 0xd << 2) + 0x143518d80)
        | *(&data_143518b80 + ((zx.q(rbx_12) & 0x3f) << 2))
    uint32_t rcx_54 = r11_11 u>> 1
    int32_t r8_13 =
        *((((zx.q(r11_11) & 0x1e00000) | (zx.q(rcx_54) & 0x6000000)) u>> 0x15 << 2) + 0x143519280)
        | *((((zx.q(r11_11) & 0x180) | (zx.q(rcx_54) & 0x1e00)) u>> 7 << 2) + 0x143519080)
    int32_t r8_15 = r8_13 | *(((zx.q(r11_11 u>> 0xf) & 0x3f) << 2) + 0x143519180)
        | *(((zx.q(r11_11) & 0x3f) << 2) + 0x143518f80)
    bool cond:1_1 = *i == 0
    r14[2] = ror.d(zx.d(r10_11.w) | r8_15 << 0x10, 0x1e)
    r14[3] = ror.d(r10_11 u>> 0x10 | (r8_15 & 0xffff0000), 0x1a)
    uint32_t rbx_13
    int32_t rsi_2
    int32_t rdi_7
    uint32_t r11_12
    
    if (cond:1_1)
        rdi_7 = rbx_12 << 0x1b
        rbx_13 = rbx_12 u>> 1
        rsi_2 = r11_11 << 0x1b
        r11_12 = r11_11 u>> 1
    else
        rdi_7 = rbx_12 << 0x1a
        rbx_13 = rbx_12 u>> 2
        rsi_2 = r11_11 << 0x1a
        r11_12 = r11_11 u>> 2
    
    int32_t rdi_9 = (rdi_7 | rbx_13) & 0xfffffff
    int32_t rsi_4 = (rsi_2 | r11_12) & 0xfffffff
    uint32_t r8_18 = rdi_9 u>> 1
    int32_t r10_16 = *(((((zx.q(rdi_9) & 0xc00000) | (zx.q(r8_18) & 0x7000000)) u>> 1
        | (zx.q(rdi_9) & 0x100000)) u>> 0x14 << 2) + 0x143518e80)
        | *((((zx.q(r8_18) & 0xf00) | (zx.q(rdi_9) & 0xc0)) u>> 6 << 2) + 0x143518c80)
    int32_t r10_18 = r10_16
        | *((((zx.q(rdi_9) & 0x1e000) | (zx.q(r8_18) & 0x60000)) u>> 0xd << 2) + 0x143518d80)
        | *(&data_143518b80 + ((zx.q(rdi_9) & 0x3f) << 2))
    uint32_t rcx_64 = rsi_4 u>> 1
    int32_t r8_21 =
        *((((zx.q(rsi_4) & 0x1e00000) | (zx.q(rcx_64) & 0x6000000)) u>> 0x15 << 2) + 0x143519280)
        | *((((zx.q(rsi_4) & 0x180) | (zx.q(rcx_64) & 0x1e00)) u>> 7 << 2) + 0x143519080)
    int32_t r8_23 = r8_21 | *(((zx.q(rsi_4 u>> 0xf) & 0x3f) << 2) + 0x143519180)
        | *(((zx.q(rsi_4) & 0x3f) << 2) + 0x143518f80)
    bool cond:2_1 = *(i + 4) == 0
    r14[4] = ror.d(zx.d(r10_18.w) | r8_23 << 0x10, 0x1e)
    r14[5] = ror.d(r10_18 u>> 0x10 | (r8_23 & 0xffff0000), 0x1a)
    int32_t rax_74
    int32_t rbx_15
    uint32_t rsi_5
    uint32_t rdi_10
    
    if (cond:2_1)
        rax_74 = rdi_9 << 0x1b
        rdi_10 = rdi_9 u>> 1
        rbx_15 = rsi_4 << 0x1b
        rsi_5 = rsi_4 u>> 1
    else
        rax_74 = rdi_9 << 0x1a
        rdi_10 = rdi_9 u>> 2
        rbx_15 = rsi_4 << 0x1a
        rsi_5 = rsi_4 u>> 2
    
    result = (rax_74 | rdi_10) & 0xfffffff
    rbx_6 = (rbx_15 | rsi_5) & 0xfffffff
    i += 0x10
    uint32_t r9_22 = result u>> 1
    int32_t r11_14 = *(((((zx.q(result) & 0xc00000) | (zx.q(r9_22) & 0x7000000)) u>> 1
        | (zx.q(result) & 0x100000)) u>> 0x14 << 2) + 0x143518e80)
        | *((((zx.q(r9_22) & 0xf00) | (zx.q(result) & 0xc0)) u>> 6 << 2) + 0x143518c80)
    uint32_t r8_32 = rbx_6 u>> 1
    int32_t r11_16 = r11_14
        | *((((zx.q(result) & 0x1e000) | (zx.q(r9_22) & 0x60000)) u>> 0xd << 2) + 0x143518d80)
        | *(&data_143518b80 + ((zx.q(result) & 0x3f) << 2))
    int32_t r9_25 = *((((zx.q(r8_32) & 0x1e00) | (zx.q(rbx_6) & 0x180)) u>> 7 << 2) + 0x143519080)
        | *((((zx.q(r8_32) & 0x6000000) | (zx.q(rbx_6) & 0x1e00000)) u>> 0x15 << 2) + 0x143519280)
    int32_t r9_27 = r9_25 | *(((zx.q(rbx_6 u>> 0xf) & 0x3f) << 2) + 0x143519180)
        | *(((zx.q(rbx_6) & 0x3f) << 2) + 0x143518f80)
    r14[6] = ror.d(zx.d(r11_16.w) | r9_27 << 0x10, 0x1e)
    r14[7] = ror.d(r11_16 u>> 0x10 | (r9_27 & 0xffff0000), 0x1a)
    r14 = &r14[8]
while (i s< &data_1435193c8)

return result
