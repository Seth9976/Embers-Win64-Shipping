// 函数: sub_1428c9b90
// 地址: 0x1428c9b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x108)
uint64_t r9_1 = arg1[2]
int64_t i = arg3
int64_t r10_1 = arg1[7]
int64_t r11_1 = arg1[3]
int64_t rbp_1 = arg1[4]
int64_t rsi_1 = arg1[6]
int64_t rdi_1 = arg1[5]
int64_t r12_1 = arg1[1]
void* r13_1 = arg2 + 2
int64_t r14_1 = *arg1
int64_t var_88_1 = r14_1
uint64_t arg_10 = r9_1
int64_t var_80_1 = r12_1
uint64_t var_78_1 = r9_1
int64_t var_70_1 = r11_1
int64_t var_68_1 = rbp_1
int64_t var_60_1 = rdi_1
int64_t var_58_1 = rsi_1
int64_t var_50_1 = r10_1
void* var_90_1 = r13_1

do
    int64_t r15_2 = r12_1 ^ r14_1
    uint64_t r8_14 = ((((((zx.q(*(r13_1 - 2)) << 8 | zx.q(*(r13_1 - 1))) << 8 | zx.q(*r13_1)) << 8
        | zx.q(*(r13_1 + 1))) << 8 | zx.q(*(r13_1 + 2))) << 8 | zx.q(*(r13_1 + 3))) << 8
        | zx.q(*(r13_1 + 4))) << 8 | zx.q(*(r13_1 + 5))
    int64_t r8_16 = r12_1 & r14_1
    int64_t rdx_7 = (ror.q(rbp_1, 0x29) ^ ror.q(rbp_1, 0x12) ^ ror.q(rbp_1, 0xe)) + r8_14
        + ((not.q(rbp_1) & rsi_1) ^ (rdi_1 & rbp_1)) - -0x428a2f98d728ae22 + r10_1
    int64_t r10_2 = r11_1 + rdx_7
    int64_t rbx_4 = ((r9_1 & r15_2) ^ r8_16)
        + (ror.q(r14_1, 0x1c) ^ ror.q(r14_1, 0x27) ^ ror.q(r14_1, 0x22)) + rdx_7
    uint64_t r9_16 = ((((
        ((zx.q(*(r13_1 + 6)) << 8 | zx.q(*(r13_1 + 7))) << 8 | zx.q(*(r13_1 + 8))) << 8
        | zx.q(*(r13_1 + 9))) << 8 | zx.q(*(r13_1 + 0xa))) << 8 | zx.q(*(r13_1 + 0xb))) << 8
        | zx.q(*(r13_1 + 0xc))) << 8 | zx.q(*(r13_1 + 0xd))
    uint64_t var_f8_1 = r9_16
    int64_t rdx_13 = 0x7137449123ef65cd + ((not.q(r10_2) & rdi_1) ^ (rbp_1 & r10_2)) + r9_16
        + (ror.q(r10_2, 0x29) ^ ror.q(r10_2, 0x12) ^ ror.q(r10_2, 0xe)) + rsi_1
    int64_t r9_18 = arg_10 + rdx_13
    int64_t r15_5 = ((r15_2 & rbx_4) ^ r8_16)
        + (ror.q(rbx_4, 0x1c) ^ ror.q(rbx_4, 0x27) ^ ror.q(rbx_4, 0x22)) + rdx_13
    uint64_t r8_31 = ((((
        ((zx.q(*(r13_1 + 0xe)) << 8 | zx.q(*(r13_1 + 0xf))) << 8 | zx.q(*(r13_1 + 0x10))) << 8
        | zx.q(*(r13_1 + 0x11))) << 8 | zx.q(*(r13_1 + 0x12))) << 8 | zx.q(*(r13_1 + 0x13))) << 8
        | zx.q(*(r13_1 + 0x14))) << 8 | zx.q(*(r13_1 + 0x15))
    uint64_t var_f0_1 = r8_31
    int64_t rdx_19 = -0x4a3f043013b2c4d1 + ((not.q(r9_18) & rbp_1) ^ (r10_2 & r9_18)) + r8_31
        + (ror.q(r9_18, 0x29) ^ ror.q(r9_18, 0x12) ^ ror.q(r9_18, 0xe)) + rdi_1
    int64_t r11_2 = r12_1 + rdx_19
    int64_t rdi_6 = (((r14_1 ^ r15_5) & rbx_4) ^ (r14_1 & r15_5)) + rdx_19
        + (ror.q(r15_5, 0x27) ^ ror.q(r15_5, 0x22) ^ ror.q(r15_5, 0x1c))
    uint64_t r8_46 = ((((
        ((zx.q(*(r13_1 + 0x16)) << 8 | zx.q(*(r13_1 + 0x17))) << 8 | zx.q(*(r13_1 + 0x18))) << 8
        | zx.q(*(r13_1 + 0x19))) << 8 | zx.q(*(r13_1 + 0x1a))) << 8 | zx.q(*(r13_1 + 0x1b))) << 8
        | zx.q(*(r13_1 + 0x1c))) << 8 | zx.q(*(r13_1 + 0x1d))
    uint64_t var_98_1 = r8_46
    int64_t rdx_25 = -0x164a245a7e762444 + ((not.q(r11_2) & r10_2) ^ (r9_18 & r11_2)) + r8_46
        + (ror.q(r11_2, 0x29) ^ ror.q(r11_2, 0x12) ^ ror.q(r11_2, 0xe)) + rbp_1
    int64_t r8_47 = r14_1 + rdx_25
    int64_t rsi_6 = (((r15_5 ^ rdi_6) & rbx_4) ^ (r15_5 & rdi_6)) + rdx_25
        + (ror.q(rdi_6, 0x27) ^ ror.q(rdi_6, 0x22) ^ ror.q(rdi_6, 0x1c))
    uint64_t r14_16 = ((((
        ((zx.q(*(r13_1 + 0x1e)) << 8 | zx.q(*(r13_1 + 0x1f))) << 8 | zx.q(*(r13_1 + 0x20))) << 8
        | zx.q(*(r13_1 + 0x21))) << 8 | zx.q(*(r13_1 + 0x22))) << 8 | zx.q(*(r13_1 + 0x23))) << 8
        | zx.q(*(r13_1 + 0x24))) << 8 | zx.q(*(r13_1 + 0x25))
    uint64_t var_c0_1 = r14_16
    int64_t rdx_31 = 0x3956c25bf348b538 + ((not.q(r8_47) & r9_18) ^ (r11_2 & r8_47)) + r14_16
        + (ror.q(r8_47, 0x29) ^ ror.q(r8_47, 0x12) ^ ror.q(r8_47, 0xe)) + r10_2
    int64_t rbx_5 = rbx_4 + rdx_31
    int64_t r14_21 = (((rdi_6 ^ rsi_6) & r15_5) ^ (rdi_6 & rsi_6)) + rdx_31
        + (ror.q(rsi_6, 0x27) ^ ror.q(rsi_6, 0x22) ^ ror.q(rsi_6, 0x1c))
    uint64_t r10_17 = ((((
        ((zx.q(*(r13_1 + 0x26)) << 8 | zx.q(*(r13_1 + 0x27))) << 8 | zx.q(*(r13_1 + 0x28))) << 8
        | zx.q(*(r13_1 + 0x29))) << 8 | zx.q(*(r13_1 + 0x2a))) << 8 | zx.q(*(r13_1 + 0x2b))) << 8
        | zx.q(*(r13_1 + 0x2c))) << 8 | zx.q(*(r13_1 + 0x2d))
    uint64_t arg_20 = r10_17
    int64_t rdx_37 = 0x59f111f1b605d019 + ((not.q(rbx_5) & r11_2) ^ (rbx_5 & r8_47)) + r10_17
        + (ror.q(rbx_5, 0x29) ^ ror.q(rbx_5, 0x12) ^ ror.q(rbx_5, 0xe)) + r9_18
    int64_t r15_6 = r15_5 + rdx_37
    int64_t r10_22 = (((rsi_6 ^ r14_21) & rdi_6) ^ (rsi_6 & r14_21)) + rdx_37
        + (ror.q(r14_21, 0x27) ^ ror.q(r14_21, 0x22) ^ ror.q(r14_21, 0x1c))
    uint64_t r9_33 = ((((
        ((zx.q(*(r13_1 + 0x2e)) << 8 | zx.q(*(r13_1 + 0x2f))) << 8 | zx.q(*(r13_1 + 0x30))) << 8
        | zx.q(*(r13_1 + 0x31))) << 8 | zx.q(*(r13_1 + 0x32))) << 8 | zx.q(*(r13_1 + 0x33))) << 8
        | zx.q(*(r13_1 + 0x34))) << 8 | zx.q(*(r13_1 + 0x35))
    uint64_t var_e0_1 = r9_33
    int64_t rdx_43 = -0x6dc07d5b50e6b065 + ((not.q(r15_6) & r8_47) ^ (rbx_5 & r15_6)) + r9_33
        + (ror.q(r15_6, 0x29) ^ ror.q(r15_6, 0x12) ^ ror.q(r15_6, 0xe)) + r11_2
    int64_t rdi_7 = rdi_6 + rdx_43
    int64_t rbp_6 = (((r14_21 ^ r10_22) & rsi_6) ^ (r14_21 & r10_22)) + rdx_43
        + (ror.q(r10_22, 0x27) ^ ror.q(r10_22, 0x22) ^ ror.q(r10_22, 0x1c))
    uint64_t r9_48 = ((((
        ((zx.q(*(r13_1 + 0x36)) << 8 | zx.q(*(r13_1 + 0x37))) << 8 | zx.q(*(r13_1 + 0x38))) << 8
        | zx.q(*(r13_1 + 0x39))) << 8 | zx.q(*(r13_1 + 0x3a))) << 8 | zx.q(*(r13_1 + 0x3b))) << 8
        | zx.q(*(r13_1 + 0x3c))) << 8 | zx.q(*(r13_1 + 0x3d))
    uint64_t var_108_1 = r9_48
    int64_t rdx_49 = -0x54e3a12a25927ee8 + ((not.q(rdi_7) & rbx_5) ^ (r15_6 & rdi_7)) + r8_47
        + (ror.q(rdi_7, 0x29) ^ ror.q(rdi_7, 0x12) ^ ror.q(rdi_7, 0xe)) + r9_48
    int64_t rsi_7 = rsi_6 + rdx_49
    int64_t r11_7 = (((r10_22 ^ rbp_6) & r14_21) ^ (r10_22 & rbp_6)) + rdx_49
        + (ror.q(rbp_6, 0x27) ^ ror.q(rbp_6, 0x22) ^ ror.q(rbp_6, 0x1c))
    int64_t r9_50 = rbp_6 & r11_7
    uint64_t r8_62 = ((((
        ((zx.q(*(r13_1 + 0x3e)) << 8 | zx.q(*(r13_1 + 0x3f))) << 8 | zx.q(*(r13_1 + 0x40))) << 8
        | zx.q(*(r13_1 + 0x41))) << 8 | zx.q(*(r13_1 + 0x42))) << 8 | zx.q(*(r13_1 + 0x43))) << 8
        | zx.q(*(r13_1 + 0x44))) << 8 | zx.q(*(r13_1 + 0x45))
    uint64_t var_c8_1 = r8_62
    int64_t r8_64 = -0x27f855675cfcfdbe + ((not.q(rsi_7) & r15_6) ^ (rdi_7 & rsi_7)) + r8_62
        + (ror.q(rsi_7, 0x29) ^ ror.q(rsi_7, 0x12) ^ ror.q(rsi_7, 0xe)) + rbx_5
    int64_t r14_22 = r14_21 + r8_64
    int64_t rax_181 = rbp_6 ^ r11_7
    int64_t rbx_9 = ((rax_181 & r10_22) ^ r9_50)
        + (ror.q(r11_7, 0x1c) ^ ror.q(r11_7, 0x27) ^ ror.q(r11_7, 0x22)) + r8_64
    uint64_t r12_16 = ((((
        ((zx.q(*(r13_1 + 0x46)) << 8 | zx.q(*(r13_1 + 0x47))) << 8 | zx.q(*(r13_1 + 0x48))) << 8
        | zx.q(*(r13_1 + 0x49))) << 8 | zx.q(*(r13_1 + 0x4a))) << 8 | zx.q(*(r13_1 + 0x4b))) << 8
        | zx.q(*(r13_1 + 0x4c))) << 8 | zx.q(*(r13_1 + 0x4d))
    arg_10 = r12_16
    int64_t r8_70 = 0x12835b0145706fbe + ((not.q(r14_22) & rdi_7) ^ (rsi_7 & r14_22)) + r12_16
        + (ror.q(r14_22, 0x29) ^ ror.q(r14_22, 0x12) ^ ror.q(r14_22, 0xe)) + r15_6
    int64_t r10_23 = r10_22 + r8_70
    int64_t rax_184 = ((rax_181 & rbx_9) ^ r9_50)
        + (ror.q(rbx_9, 0x1c) ^ ror.q(rbx_9, 0x27) ^ ror.q(rbx_9, 0x22)) + r8_70
    uint64_t r9_65 = ((((
        ((zx.q(*(r13_1 + 0x4e)) << 8 | zx.q(*(r13_1 + 0x4f))) << 8 | zx.q(*(r13_1 + 0x50))) << 8
        | zx.q(*(r13_1 + 0x51))) << 8 | zx.q(*(r13_1 + 0x52))) << 8 | zx.q(*(r13_1 + 0x53))) << 8
        | zx.q(*(r13_1 + 0x54))) << 8 | zx.q(*(r13_1 + 0x55))
    uint64_t var_e8_1 = r9_65
    int64_t r8_76 = 0x243185be4ee4b28c + ((not.q(r10_23) & rsi_7) ^ (r14_22 & r10_23)) + rdi_7
        + (ror.q(r10_23, 0x29) ^ ror.q(r10_23, 0x12) ^ ror.q(r10_23, 0xe)) + r9_65
    int64_t rbp_7 = rbp_6 + r8_76
    int64_t r12_21 = (((rax_184 ^ r11_7) & rbx_9) ^ (rax_184 & r11_7)) + r8_76
        + (ror.q(rax_184, 0x27) ^ ror.q(rax_184, 0x22) ^ ror.q(rax_184, 0x1c))
    uint64_t r9_80 = ((((
        ((zx.q(*(r13_1 + 0x56)) << 8 | zx.q(*(r13_1 + 0x57))) << 8 | zx.q(*(r13_1 + 0x58))) << 8
        | zx.q(*(r13_1 + 0x59))) << 8 | zx.q(*(r13_1 + 0x5a))) << 8 | zx.q(*(r13_1 + 0x5b))) << 8
        | zx.q(*(r13_1 + 0x5c))) << 8 | zx.q(*(r13_1 + 0x5d))
    uint64_t var_b8_1 = r9_80
    int64_t r8_82 = 0x550c7dc3d5ffb4e2 + ((not.q(rbp_7) & r14_22) ^ (r10_23 & rbp_7)) + rsi_7
        + (ror.q(rbp_7, 0x29) ^ ror.q(rbp_7, 0x12) ^ ror.q(rbp_7, 0xe)) + r9_80
    int64_t r11_8 = r11_7 + r8_82
    int64_t r13_6 = (((rax_184 ^ r12_21) & rbx_9) ^ (rax_184 & r12_21)) + r8_82
        + (ror.q(r12_21, 0x27) ^ ror.q(r12_21, 0x22) ^ ror.q(r12_21, 0x1c))
    uint64_t r9_95 = ((((((zx.q(*(var_90_1 + 0x5e)) << 8 | zx.q(*(var_90_1 + 0x5f))) << 8
        | zx.q(*(var_90_1 + 0x60))) << 8 | zx.q(*(var_90_1 + 0x61))) << 8 | zx.q(*(var_90_1 + 0x62)))
        << 8 | zx.q(*(var_90_1 + 0x63))) << 8 | zx.q(*(var_90_1 + 0x64))) << 8
        | zx.q(*(var_90_1 + 0x65))
    uint64_t var_d8_1 = r9_95
    int64_t r8_88 = 0x72be5d74f27b896f + ((not.q(r11_8) & r10_23) ^ (rbp_7 & r11_8)) + r14_22
        + (ror.q(r11_8, 0x29) ^ ror.q(r11_8, 0x12) ^ ror.q(r11_8, 0xe)) + r9_95
    int64_t rbx_10 = rbx_9 + r8_88
    int64_t rbx_15 = (((r12_21 ^ r13_6) & rax_184) ^ (r12_21 & r13_6)) + r8_88
        + (ror.q(r13_6, 0x27) ^ ror.q(r13_6, 0x22) ^ ror.q(r13_6, 0x1c))
    uint64_t rdi_22 = ((((((zx.q(*(var_90_1 + 0x66)) << 8 | zx.q(*(var_90_1 + 0x67))) << 8
        | zx.q(*(var_90_1 + 0x68))) << 8 | zx.q(*(var_90_1 + 0x69))) << 8 | zx.q(*(var_90_1 + 0x6a)))
        << 8 | zx.q(*(var_90_1 + 0x6b))) << 8 | zx.q(*(var_90_1 + 0x6c))) << 8
        | zx.q(*(var_90_1 + 0x6d))
    uint64_t var_b0_1 = rdi_22
    int64_t r8_94 = -0x7f214e01c4e9694f + ((not.q(rbx_10) & rbp_7) ^ (rbx_10 & r11_8)) + r10_23
        + (ror.q(rbx_10, 0x29) ^ ror.q(rbx_10, 0x12) ^ ror.q(rbx_10, 0xe)) + rdi_22
    int64_t rax_185 = rax_184 + r8_94
    int64_t r10_24 = rbx_10
    int64_t rdi_27 = (((r13_6 ^ rbx_15) & r12_21) ^ (r13_6 & rbx_15)) + r8_94
        + (ror.q(rbx_15, 0x27) ^ ror.q(rbx_15, 0x22) ^ ror.q(rbx_15, 0x1c))
    uint64_t r9_111 = ((((((zx.q(*(var_90_1 + 0x6e)) << 8 | zx.q(*(var_90_1 + 0x6f))) << 8
        | zx.q(*(var_90_1 + 0x70))) << 8 | zx.q(*(var_90_1 + 0x71))) << 8 | zx.q(*(var_90_1 + 0x72)))
        << 8 | zx.q(*(var_90_1 + 0x73))) << 8 | zx.q(*(var_90_1 + 0x74))) << 8
        | zx.q(*(var_90_1 + 0x75))
    uint64_t var_a8_1 = r9_111
    int64_t r8_100 = -0x6423f958da38edcb + ((not.q(rax_185) & r11_8) ^ (r10_24 & rax_185)) + r9_111
        + (ror.q(rax_185, 0x29) ^ ror.q(rax_185, 0x12) ^ ror.q(rax_185, 0xe)) + rbp_7
    int64_t r12_22 = r12_21 + r8_100
    int64_t rsi_12 = (((rbx_15 ^ rdi_27) & r13_6) ^ (rbx_15 & rdi_27)) + r8_100
        + (ror.q(rdi_27, 0x27) ^ ror.q(rdi_27, 0x22) ^ ror.q(rdi_27, 0x1c))
    uint64_t r14_37 = ((((((zx.q(*(var_90_1 + 0x76)) << 8 | zx.q(*(var_90_1 + 0x77))) << 8
        | zx.q(*(var_90_1 + 0x78))) << 8 | zx.q(*(var_90_1 + 0x79))) << 8 | zx.q(*(var_90_1 + 0x7a)))
        << 8 | zx.q(*(var_90_1 + 0x7b))) << 8 | zx.q(*(var_90_1 + 0x7c))) << 8
        | zx.q(*(var_90_1 + 0x7d))
    uint64_t var_d0_1 = r14_37
    uint64_t r14_38 = r8_14
    int64_t r8_106 = -0x3e640e8b3096d96c + ((not.q(r12_22) & r10_24) ^ (rax_185 & r12_22)) + r14_37
        + (ror.q(r12_22, 0x29) ^ ror.q(r12_22, 0x12) ^ ror.q(r12_22, 0xe)) + r11_8
    void* const j = &data_14350f8b0
    int64_t r13_7 = r13_6 + r8_106
    void* const j_1 = &data_14350f8b0
    int64_t rbp_12 = (((rdi_27 ^ rsi_12) & rbx_15) ^ (rdi_27 & rsi_12)) + r8_106
        + (ror.q(rsi_12, 0x27) ^ ror.q(rsi_12, 0x22) ^ ror.q(rsi_12, 0x1c))
    
    do
        int64_t r15_9 = rsi_12 ^ rbp_12
        int64_t r9_114 = rsi_12 & rbp_12
        uint64_t r14_39 = r14_38 + (ror.q(var_f8_1, 8) ^ ror.q(var_f8_1, 1) ^ var_f8_1 u>> 7)
            + arg_10 + (ror.q(r9_111, 0x3d) ^ ror.q(r9_111, 0x13) ^ r9_111 u>> 6)
        int64_t r8_118 = (ror.q(r13_7, 0x29) ^ ror.q(r13_7, 0x12) ^ ror.q(r13_7, 0xe))
            + ((not.q(r13_7) & rax_185) ^ (r12_22 & r13_7)) + *(j - 0x10) + r14_39 + r10_24
        int64_t rbx_16 = rbx_15 + r8_118
        int64_t r10_28 = ((r15_9 & rdi_27) ^ r9_114)
            + (ror.q(rbp_12, 0x1c) ^ ror.q(rbp_12, 0x27) ^ ror.q(rbp_12, 0x22)) + r8_118
        var_f8_1 += (ror.q(var_f0_1, 8) ^ ror.q(var_f0_1, 1) ^ var_f0_1 u>> 7) + var_e8_1
            + (ror.q(var_d0_1, 0x3d) ^ ror.q(var_d0_1, 0x13) ^ var_d0_1 u>> 6)
        int64_t r8_130 = (ror.q(rbx_16, 0x29) ^ ror.q(rbx_16, 0x12) ^ ror.q(rbx_16, 0xe))
            + ((not.q(rbx_16) & r12_22) ^ (r13_7 & rbx_16)) + *(j - 8) + var_f8_1 + rax_185
        int64_t rdi_28 = rdi_27 + r8_130
        int64_t r15_12 = ((r15_9 & r10_28) ^ r9_114)
            + (ror.q(r10_28, 0x1c) ^ ror.q(r10_28, 0x27) ^ ror.q(r10_28, 0x22)) + r8_130
        uint64_t r9_116 = var_f0_1 + (ror.q(var_98_1, 8) ^ ror.q(var_98_1, 1) ^ var_98_1 u>> 7)
            + var_b8_1 + (ror.q(r14_39, 0x3d) ^ ror.q(r14_39, 0x13) ^ r14_39 u>> 6)
        var_f0_1 = r9_116
        int64_t rdx_152 = (ror.q(rdi_28, 0x29) ^ ror.q(rdi_28, 0x12) ^ ror.q(rdi_28, 0xe))
            + ((not.q(rdi_28) & r13_7) ^ (rbx_16 & rdi_28)) + *j + r9_116 + r12_22
        int64_t rsi_13 = rsi_12 + rdx_152
        int64_t r14_44 = (((r15_12 ^ rbp_12) & r10_28) ^ (r15_12 & rbp_12)) + rdx_152
            + (ror.q(r15_12, 0x27) ^ ror.q(r15_12, 0x22) ^ ror.q(r15_12, 0x1c))
        uint64_t r12_25 = var_98_1 + (ror.q(var_c0_1, 8) ^ ror.q(var_c0_1, 1) ^ var_c0_1 u>> 7)
            + var_d8_1 + (ror.q(var_f8_1, 0x3d) ^ ror.q(var_f8_1, 0x13) ^ var_f8_1 u>> 6)
        var_98_1 = r12_25
        int64_t rdx_164 = (ror.q(rsi_13, 0x29) ^ ror.q(rsi_13, 0x12) ^ ror.q(rsi_13, 0xe))
            + ((not.q(rsi_13) & rbx_16) ^ (rdi_28 & rsi_13)) + *(j + 8) + r12_25 + r13_7
        int64_t rbp_13 = rbp_12 + rdx_164
        int64_t r11_13 = (((r15_12 ^ r14_44) & r10_28) ^ (r15_12 & r14_44)) + rdx_164
            + (ror.q(r14_44, 0x27) ^ ror.q(r14_44, 0x22) ^ ror.q(r14_44, 0x1c))
        uint64_t r9_118 = var_c0_1 + (ror.q(r9_116, 0x3d) ^ ror.q(r9_116, 0x13) ^ r9_116 u>> 6)
            + var_b0_1 + (ror.q(arg_20, 8) ^ ror.q(arg_20, 1) ^ arg_20 u>> 7)
        var_c0_1 = r9_118
        int64_t rdx_176 = (ror.q(rbp_13, 0x29) ^ ror.q(rbp_13, 0x12) ^ ror.q(rbp_13, 0xe))
            + ((not.q(rbp_13) & rdi_28) ^ (rsi_13 & rbp_13)) + *(j_1 + 0x10) + r9_118 + rbx_16
        int64_t r10_29 = r10_28 + rdx_176
        int64_t rbx_21 = (((r14_44 ^ r11_13) & r15_12) ^ (r14_44 & r11_13)) + rdx_176
            + (ror.q(r11_13, 0x27) ^ ror.q(r11_13, 0x22) ^ ror.q(r11_13, 0x1c))
        arg_20 += (ror.q(r12_25, 0x3d) ^ ror.q(r12_25, 0x13) ^ r12_25 u>> 6) + var_a8_1
            + (ror.q(var_e0_1, 8) ^ ror.q(var_e0_1, 1) ^ var_e0_1 u>> 7)
        int64_t rdx_188 = (ror.q(r10_29, 0x29) ^ ror.q(r10_29, 0x12) ^ ror.q(r10_29, 0xe))
            + ((not.q(r10_29) & rsi_13) ^ (r10_29 & rbp_13)) + *(j_1 + 0x18) + arg_20 + rdi_28
        int64_t r15_13 = r15_12 + rdx_188
        int64_t rdi_33 = (((r11_13 ^ rbx_21) & r14_44) ^ (r11_13 & rbx_21)) + rdx_188
            + (ror.q(rbx_21, 0x27) ^ ror.q(rbx_21, 0x22) ^ ror.q(rbx_21, 0x1c))
        uint64_t r9_120 = var_e0_1 + (ror.q(r9_118, 0x3d) ^ ror.q(r9_118, 0x13) ^ r9_118 u>> 6)
            + var_d0_1 + (ror.q(var_108_1, 8) ^ ror.q(var_108_1, 1) ^ var_108_1 u>> 7)
        var_e0_1 = r9_120
        int64_t rdx_200 = (ror.q(r15_13, 0x29) ^ ror.q(r15_13, 0x12) ^ ror.q(r15_13, 0xe))
            + ((not.q(r15_13) & rbp_13) ^ (r10_29 & r15_13)) + *(j_1 + 0x20) + r9_120 + rsi_13
        int64_t r14_45 = r14_44 + rdx_200
        int64_t rsi_18 = (((rbx_21 ^ rdi_33) & r11_13) ^ (rbx_21 & rdi_33)) + rdx_200
            + (ror.q(rdi_33, 0x27) ^ ror.q(rdi_33, 0x22) ^ ror.q(rdi_33, 0x1c))
        uint64_t r9_123 = var_108_1 + (ror.q(arg_20, 0x3d) ^ ror.q(arg_20, 0x13) ^ arg_20 u>> 6)
            + r14_39 + (ror.q(var_c8_1, 8) ^ ror.q(var_c8_1, 1) ^ var_c8_1 u>> 7)
        var_108_1 = r9_123
        int64_t rdx_212 = (ror.q(r14_45, 0x29) ^ ror.q(r14_45, 0x12) ^ ror.q(r14_45, 0xe))
            + ((not.q(r14_45) & r10_29) ^ (r15_13 & r14_45)) + *(j_1 + 0x28) + r9_123 + rbp_13
        int64_t r11_14 = r11_13 + rdx_212
        int64_t rbp_18 = (((rdi_33 ^ rsi_18) & rbx_21) ^ (rdi_33 & rsi_18)) + rdx_212
            + (ror.q(rsi_18, 0x27) ^ ror.q(rsi_18, 0x22) ^ ror.q(rsi_18, 0x1c))
        uint64_t rdx_218 = var_c8_1
            + (ror.q(var_e0_1, 0x3d) ^ ror.q(var_e0_1, 0x13) ^ var_e0_1 u>> 6) + var_f8_1
            + (ror.q(arg_10, 8) ^ ror.q(arg_10, 1) ^ arg_10 u>> 7)
        var_c8_1 = rdx_218
        int64_t r9_126 = rsi_18 & rbp_18
        int64_t rax_346 = rsi_18 ^ rbp_18
        int64_t r8_140 = (ror.q(r11_14, 0x29) ^ ror.q(r11_14, 0x12) ^ ror.q(r11_14, 0xe))
            + ((not.q(r11_14) & r15_13) ^ (r14_45 & r11_14)) + *(j_1 + 0x30) + rdx_218 + r10_29
        int64_t rbx_22 = rbx_21 + r8_140
        int64_t r10_33 = ((rax_346 & rdi_33) ^ r9_126)
            + (ror.q(rbp_18, 0x1c) ^ ror.q(rbp_18, 0x27) ^ ror.q(rbp_18, 0x22)) + r8_140
        arg_10 += (ror.q(var_108_1, 0x3d) ^ ror.q(var_108_1, 0x13) ^ var_108_1 u>> 6) + var_f0_1
            + (ror.q(var_e8_1, 8) ^ ror.q(var_e8_1, 1) ^ var_e8_1 u>> 7)
        int64_t r8_152 = (ror.q(rbx_22, 0x29) ^ ror.q(rbx_22, 0x12) ^ ror.q(rbx_22, 0xe))
            + ((not.q(rbx_22) & r14_45) ^ (r11_14 & rbx_22)) + *(j_1 + 0x38) + arg_10 + r15_13
        int64_t rdi_34 = rdi_33 + r8_152
        int64_t rax_349 = ((rax_346 & r10_33) ^ r9_126)
            + (ror.q(r10_33, 0x1c) ^ ror.q(r10_33, 0x27) ^ ror.q(r10_33, 0x22)) + r8_152
        uint64_t r9_128 = var_e8_1
            + (ror.q(var_c8_1, 0x3d) ^ ror.q(var_c8_1, 0x13) ^ var_c8_1 u>> 6) + r12_25
            + (ror.q(var_b8_1, 8) ^ ror.q(var_b8_1, 1) ^ var_b8_1 u>> 7)
        var_e8_1 = r9_128
        int64_t r8_164 = (ror.q(rdi_34, 0x29) ^ ror.q(rdi_34, 0x12) ^ ror.q(rdi_34, 0xe))
            + ((not.q(rdi_34) & r11_14) ^ (rbx_22 & rdi_34)) + *(j_1 + 0x40) + r9_128 + r14_45
        int64_t rsi_19 = rsi_18 + r8_164
        int64_t r12_30 = (((rax_349 ^ rbp_18) & r10_33) ^ (rax_349 & rbp_18)) + r8_164
            + (ror.q(rax_349, 0x27) ^ ror.q(rax_349, 0x22) ^ ror.q(rax_349, 0x1c))
        uint64_t r14_47 = var_b8_1 + (ror.q(arg_10, 0x3d) ^ ror.q(arg_10, 0x13) ^ arg_10 u>> 6)
            + var_c0_1 + (ror.q(var_d8_1, 8) ^ ror.q(var_d8_1, 1) ^ var_d8_1 u>> 7)
        var_b8_1 = r14_47
        int64_t r8_176 = (ror.q(rsi_19, 0x29) ^ ror.q(rsi_19, 0x12) ^ ror.q(rsi_19, 0xe))
            + ((not.q(rsi_19) & rbx_22) ^ (rdi_34 & rsi_19)) + *(j_1 + 0x48) + r14_47 + r11_14
        int64_t rbp_19 = rbp_18 + r8_176
        int64_t r13_13 = (((rax_349 ^ r12_30) & r10_33) ^ (rax_349 & r12_30)) + r8_176
            + (ror.q(r12_30, 0x27) ^ ror.q(r12_30, 0x22) ^ ror.q(r12_30, 0x1c))
        uint64_t r9_132 = var_d8_1
            + (ror.q(var_e8_1, 0x3d) ^ ror.q(var_e8_1, 0x13) ^ var_e8_1 u>> 6) + arg_20
            + (ror.q(var_b0_1, 8) ^ ror.q(var_b0_1, 1) ^ var_b0_1 u>> 7)
        var_d8_1 = r9_132
        int64_t r8_188 = (ror.q(rbp_19, 0x29) ^ ror.q(rbp_19, 0x12) ^ ror.q(rbp_19, 0xe))
            + ((not.q(rbp_19) & rdi_34) ^ (rsi_19 & rbp_19)) + *(j_1 + 0x50) + r9_132 + rbx_22
        r10_24 = r10_33 + r8_188
        rbx_15 = (((r12_30 ^ r13_13) & rax_349) ^ (r12_30 & r13_13)) + r8_188
            + (ror.q(r13_13, 0x27) ^ ror.q(r13_13, 0x22) ^ ror.q(r13_13, 0x1c))
        uint64_t r14_49 = var_b0_1 + (ror.q(r14_47, 0x3d) ^ ror.q(r14_47, 0x13) ^ r14_47 u>> 6)
            + var_e0_1 + (ror.q(var_a8_1, 8) ^ ror.q(var_a8_1, 1) ^ var_a8_1 u>> 7)
        var_b0_1 = r14_49
        int64_t r8_200 = (ror.q(r10_24, 0x29) ^ ror.q(r10_24, 0x12) ^ ror.q(r10_24, 0xe))
            + ((not.q(r10_24) & rsi_19) ^ (r10_24 & rbp_19)) + *(j_1 + 0x58) + r14_49 + rdi_34
        rax_185 = rax_349 + r8_200
        rdi_27 = (((r13_13 ^ rbx_15) & r12_30) ^ (r13_13 & rbx_15)) + r8_200
            + (ror.q(rbx_15, 0x27) ^ ror.q(rbx_15, 0x22) ^ ror.q(rbx_15, 0x1c))
        r9_111 = var_a8_1 + (ror.q(r9_132, 0x3d) ^ ror.q(r9_132, 0x13) ^ r9_132 u>> 6) + var_108_1
            + (ror.q(var_d0_1, 8) ^ ror.q(var_d0_1, 1) ^ var_d0_1 u>> 7)
        var_a8_1 = r9_111
        int64_t r8_212 = (ror.q(rax_185, 0x29) ^ ror.q(rax_185, 0x12) ^ ror.q(rax_185, 0xe))
            + ((not.q(rax_185) & rbp_19) ^ (r10_24 & rax_185)) + *(j_1 + 0x60) + r9_111 + rsi_19
        r12_22 = r12_30 + r8_212
        rsi_12 = (((rbx_15 ^ rdi_27) & r13_13) ^ (rbx_15 & rdi_27)) + r8_212
            + (ror.q(rdi_27, 0x27) ^ ror.q(rdi_27, 0x22) ^ ror.q(rdi_27, 0x1c))
        r14_38 = r14_39
        uint64_t r15_16 = var_d0_1 + (ror.q(r14_38, 8) ^ ror.q(r14_38, 1) ^ r14_38 u>> 7) + var_c8_1
            + (ror.q(r14_49, 0x3d) ^ ror.q(r14_49, 0x13) ^ r14_49 u>> 6)
        var_d0_1 = r15_16
        int64_t r8_224 = (ror.q(r12_22, 0x29) ^ ror.q(r12_22, 0x12) ^ ror.q(r12_22, 0xe))
            + ((not.q(r12_22) & r10_24) ^ (rax_185 & r12_22)) + *(j_1 + 0x68) + r15_16 + rbp_19
        j = j_1 + 0x80
        j_1 = j
        r13_7 = r13_13 + r8_224
        rbp_12 = (((rdi_27 ^ rsi_12) & rbx_15) ^ (rdi_27 & rsi_12)) + r8_224
            + (ror.q(rsi_12, 0x27) ^ ror.q(rsi_12, 0x22) ^ ror.q(rsi_12, 0x1c))
    while (j s< "t.c")
    
    int64_t r8_226 = var_80_1 + rsi_12
    r11_1 = var_70_1 + rbx_15
    rsi_1 = var_58_1 + rax_185
    r9_1 = var_78_1 + rdi_27
    int64_t rax_351 = var_50_1 + r10_24
    int64_t rbx_28 = var_68_1 + r13_7
    int64_t rdx_319 = var_88_1 + rbp_12
    rdi_1 = var_60_1 + r12_22
    r13_1 = var_90_1 + 0x80
    var_50_1 = rax_351
    arg1[7] = rax_351
    r10_1 = rax_351
    i -= 1
    rbp_1 = rbx_28
    var_68_1 = rbx_28
    r14_1 = rdx_319
    arg1[4] = rbx_28
    r12_1 = r8_226
    var_88_1 = rdx_319
    *arg1 = rdx_319
    var_80_1 = r8_226
    arg1[1] = r8_226
    var_78_1 = r9_1
    arg1[2] = r9_1
    var_70_1 = r11_1
    arg1[3] = r11_1
    var_60_1 = rdi_1
    arg1[5] = rdi_1
    var_58_1 = rsi_1
    arg1[6] = rsi_1
    var_90_1 = r13_1
    arg_10 = r9_1
while (i != 0)
