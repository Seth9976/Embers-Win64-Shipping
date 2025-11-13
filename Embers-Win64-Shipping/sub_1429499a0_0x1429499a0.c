// 函数: sub_1429499a0
// 地址: 0x1429499a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1d0)
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int128_t zmm0 = *arg2
uint128_t zmm1 = arg2[1]
int32_t rdi = 0
uint128_t var_50 = zmm1
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
int128_t var_60 = zmm0
var_60.b = zmm0.b & 0xf8
var_50:0xf.b = ((temp0.q u>> 0x38).b & 0x3f) | 0x40
void var_88
sub_142942680(&var_88, arg3)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x28)
int32_t rbx = 1
int64_t var_150
__builtin_memset(&var_150, 0, 0x28)
int32_t var_b0
memmove(&var_b0, &var_88, 0x28)
int32_t r8 = 0xfe
int64_t var_178
__builtin_memset(&var_178, 0, 0x28)
int32_t r10 = 1
int32_t var_18c = 0xfe

while (true)
    int32_t rax_5 = r8
    
    if (r8 s< 0)
        rax_5 = r8 + 7
    
    int32_t rcx_5 = var_b0
    int32_t rdx_4 = zx.d(*(&var_60 + sx.q(rax_5 s>> 3))) u>> (r8.b & 7) & 1
    int32_t r9_3 = neg.d(rdx_4 ^ rdi)
    int32_t rax_9 = (rbx ^ rcx_5) & r9_3
    int32_t rcx_6 = rcx_5 ^ rax_9
    int32_t rbx_1 = rbx ^ rax_9
    int32_t rcx_7 = var_d8:4.d
    int32_t var_ac
    int32_t rax_12 = (var_ac ^ rcx_7) & r9_3
    int32_t rdx_6 = var_ac ^ rax_12
    int32_t rcx_8 = rcx_7 ^ rax_12
    int64_t var_d0_1
    int32_t rcx_9 = var_d0_1.d
    int32_t var_a8
    int32_t rax_15 = (var_a8 ^ rcx_9) & r9_3
    int32_t rdx_8 = var_a8 ^ rax_15
    int32_t rcx_10 = rcx_9 ^ rax_15
    int32_t rcx_11 = var_d0_1:4.d
    int32_t var_a4
    int32_t rax_18 = (var_a4 ^ rcx_11) & r9_3
    int32_t rdx_10 = var_a4 ^ rax_18
    int32_t rcx_12 = rcx_11 ^ rax_18
    int64_t var_c8_1
    int32_t rcx_13 = var_c8_1.d
    int32_t var_a0
    int32_t rax_21 = (var_a0 ^ rcx_13) & r9_3
    int32_t rdx_12 = var_a0 ^ rax_21
    int32_t rcx_14 = rcx_13 ^ rax_21
    int32_t rcx_15 = var_c8_1:4.d
    int32_t var_9c
    int32_t rax_24 = (var_9c ^ rcx_15) & r9_3
    int32_t rdx_14 = var_9c ^ rax_24
    int32_t rcx_16 = rcx_15 ^ rax_24
    int64_t var_c0_1
    int32_t rcx_17 = var_c0_1.d
    int32_t var_98
    int32_t rax_27 = (var_98 ^ rcx_17) & r9_3
    int32_t rdx_16 = var_98 ^ rax_27
    int32_t rcx_18 = rcx_17 ^ rax_27
    int32_t rcx_19 = var_c0_1:4.d
    int32_t var_94
    int32_t rax_30 = (var_94 ^ rcx_19) & r9_3
    int32_t rcx_20 = rcx_19 ^ rax_30
    int32_t rdx_18 = var_94 ^ rax_30
    int64_t var_b8_1
    int32_t rcx_21 = var_b8_1.d
    int64_t var_168_1
    int32_t r12_1 = var_168_1:4.d
    int64_t var_148_1
    int32_t r13_1 = var_148_1.d
    int64_t var_160_1
    int32_t r14_1 = var_160_1.d
    int32_t r15_1 = var_148_1:4.d
    int64_t var_140_1
    int32_t rsi_1 = var_140_1.d
    int32_t rbx_2 = var_140_1:4.d
    int32_t rdi_1 = var_160_1:4.d
    int64_t var_138_1
    int32_t r8_1 = var_138_1:4.d
    int32_t var_90
    int32_t rax_33 = (var_90 ^ rcx_21) & r9_3
    int32_t rcx_22 = rcx_21 ^ rax_33
    int32_t rdx_20 = var_90 ^ rax_33
    int32_t rcx_23 = var_b8_1:4.d
    int32_t var_8c
    int32_t rax_36 = (var_8c ^ rcx_23) & r9_3
    int32_t rcx_24 = rcx_23 ^ rax_36
    int32_t rdx_22 = var_8c ^ rax_36
    int32_t rcx_25 = var_150.d
    int32_t rax_39 = (r10 ^ rcx_25) & r9_3
    int32_t rdx_23 = var_178:4.d
    int32_t rcx_26 = rcx_25 ^ rax_39
    int32_t r10_1 = r10 ^ rax_39
    int32_t rcx_27 = var_150:4.d
    int32_t rax_42 = (rdx_23 ^ rcx_27) & r9_3
    var_178.d = r10_1
    int32_t r10_2 = var_138_1.d
    int32_t rcx_28 = rcx_27 ^ rax_42
    int64_t var_170_1
    int32_t rcx_29 = var_170_1.d
    var_178:4.d = rdx_23 ^ rax_42
    int32_t rax_45 = (rcx_29 ^ r13_1) & r9_3
    int32_t r13_2 = r13_1 ^ rax_45
    var_170_1.d = rcx_29 ^ rax_45
    int32_t rcx_31 = var_170_1:4.d
    int32_t rax_48 = (rcx_31 ^ r15_1) & r9_3
    int32_t r15_2 = r15_1 ^ rax_48
    var_170_1:4.d = rcx_31 ^ rax_48
    int32_t rcx_33 = var_168_1.d
    int32_t rax_51 = (rcx_33 ^ rsi_1) & r9_3
    int32_t rsi_2 = rsi_1 ^ rax_51
    var_168_1.d = rcx_33 ^ rax_51
    int32_t rax_54 = (r12_1 ^ rbx_2) & r9_3
    int32_t r12_2 = r12_1 ^ rax_54
    int32_t rbx_3 = rbx_2 ^ rax_54
    var_168_1:4.d = r12_2
    int32_t rax_57 = (r14_1 ^ r10_2) & r9_3
    int32_t r10_3 = r10_2 ^ rax_57
    int32_t r14_2 = r14_1 ^ rax_57
    var_160_1.d = r14_2
    int64_t var_158_1
    int32_t r11_1 = var_158_1.d
    int32_t rax_60 = (rdi_1 ^ r8_1) & r9_3
    int64_t var_130_1
    int32_t rdx_25 = var_130_1.d
    int32_t rdi_2 = rdi_1 ^ rax_60
    int32_t rcx_35 = var_130_1:4.d
    int32_t r8_2 = r8_1 ^ rax_60
    var_160_1:4.d = rdi_2
    int32_t rax_63 = (r11_1 ^ rdx_25) & r9_3
    int32_t r9_4 = var_158_1:4.d
    int32_t r11_2 = r11_1 ^ rax_63
    int32_t rdx_26 = rdx_25 ^ rax_63
    var_158_1.d = r11_2
    int32_t rax_66 = (r9_4 ^ rcx_35) & r9_3
    int32_t r9_5 = r9_4 ^ rax_66
    int32_t rcx_36 = rcx_35 ^ rax_66
    int32_t var_128 = rcx_6 - r10_1
    int32_t rax_71 = rdx_6 - var_178:4.d
    int32_t rax_73 = rdx_8 - var_170_1.d
    int32_t rax_75 = rdx_10 - var_170_1:4.d
    int32_t rax_77 = rdx_12 - var_168_1.d
    int32_t rax_79 = rdx_14 - r12_2
    var_158_1:4.d = r9_5
    int32_t rax_81 = rdx_16 - r14_2
    int32_t rax_83 = rdx_18 - rdi_2
    int32_t rax_85 = rdx_20 - r11_2
    int32_t rax_87 = rdx_22 - r9_5
    int32_t var_100 = rbx_1 - rcx_26
    var_d8.d = rbx_1 + rcx_26
    var_d8:4.d = rcx_8 + rcx_28
    var_d0_1.d = rcx_10 + r13_2
    var_d0_1:4.d = rcx_12 + r15_2
    var_c8_1.d = rcx_14 + rsi_2
    var_c8_1:4.d = rcx_16 + rbx_3
    var_c0_1.d = rcx_18 + r10_3
    var_c0_1:4.d = rcx_20 + r8_2
    var_b8_1.d = rcx_22 + rdx_26
    var_b8_1:4.d = rcx_24 + rcx_36
    var_150.d = rcx_6 + r10_1
    var_150:4.d = var_178:4.d + rdx_6
    var_148_1.d = var_170_1.d + rdx_8
    var_148_1:4.d = var_170_1:4.d + rdx_10
    var_140_1.d = var_168_1.d + rdx_12
    var_140_1:4.d = rdx_14 + r12_2
    var_138_1.d = rdx_16 + r14_2
    var_138_1:4.d = rdx_18 + rdi_2
    var_130_1.d = rdx_20 + r11_2
    var_130_1:4.d = rdx_22 + r9_5
    sub_142942bd0(&var_178, &var_128, &var_d8)
    sub_142942bd0(&var_150, &var_150, &var_100)
    sub_1429439b0(&var_128, &var_100)
    sub_1429439b0(&var_100, &var_d8)
    var_b0 = var_150.d + var_178.d
    int32_t r10_4 = var_138_1.d
    int32_t r8_5 = var_138_1:4.d
    int32_t rdx_31 = var_130_1.d
    int32_t rcx_41 = var_130_1:4.d
    int32_t rbx_4 = var_140_1:4.d
    int32_t r11_3 = var_158_1.d
    int32_t r9_6 = var_158_1:4.d
    int32_t r12_3 = var_168_1:4.d
    int32_t r14_3 = var_160_1.d
    int32_t rdi_3 = var_160_1:4.d
    var_ac = var_150:4.d + var_178:4.d
    var_a8 = var_170_1.d + var_148_1.d
    var_a4 = var_170_1:4.d + var_148_1:4.d
    var_a0 = var_168_1.d + var_140_1.d
    var_9c = r12_3 + rbx_4
    var_140_1:4.d = r12_3 - rbx_4
    var_98 = r14_3 + r10_4
    var_138_1.d = r14_3 - r10_4
    var_94 = rdi_3 + r8_5
    var_138_1:4.d = rdi_3 - r8_5
    var_90 = r11_3 + rdx_31
    var_8c = r9_6 + rcx_41
    var_150.d = var_178.d - var_150.d
    var_150:4.d = var_178:4.d - var_150:4.d
    var_148_1.d = var_170_1.d - var_148_1.d
    var_148_1:4.d = var_170_1:4.d - var_148_1:4.d
    var_140_1.d = var_168_1.d - var_140_1.d
    var_130_1.d = r11_3 - rdx_31
    var_130_1:4.d = r9_6 - rcx_41
    sub_142942bd0(&var_d8, &var_100, &var_128)
    int32_t var_e4_2 = rcx_20 - r8_2 - rax_83
    int32_t var_e0_2 = rcx_22 - rdx_26 - rax_85
    int32_t rbx_5 = var_128
    var_100 -= rbx_5
    int32_t var_fc_2 = rcx_8 - rcx_28 - rax_71
    int32_t var_f8_2 = rcx_10 - r13_2 - rax_73
    int32_t var_f4_2 = rcx_12 - r15_2 - rax_75
    int32_t var_f0_2 = rcx_14 - rsi_2 - rax_77
    int32_t var_ec_2 = rcx_16 - rbx_3 - rax_79
    int32_t var_e8_2 = rcx_18 - r10_3 - rax_81
    int32_t var_dc_2 = rcx_24 - rcx_36 - rax_87
    sub_1429439b0(&var_150, &var_150)
    sub_142943540(&var_178, &var_100)
    sub_1429439b0(&var_b0, &var_b0)
    int32_t rdi_6 = rax_71 + var_178:4.d
    int32_t var_10c_2 = rax_83 + var_160_1:4.d
    int32_t var_108_2 = rax_85 + var_158_1.d
    int32_t var_104_2 = rax_87 + var_158_1:4.d
    var_128 = rbx_5 + var_178.d
    int32_t var_124_2 = rdi_6
    int32_t var_120_2 = rax_73 + var_170_1.d
    int32_t var_11c_2 = rax_75 + var_170_1:4.d
    int32_t var_118_2 = rax_77 + var_168_1.d
    int32_t var_114_2 = rax_79 + var_168_1:4.d
    int32_t var_110_2 = rax_81 + var_160_1.d
    sub_142942bd0(&var_178, &var_88, &var_150)
    sub_142942bd0(&var_150, &var_100, &var_128)
    r8 = var_18c - 1
    bool cond:0_1 = var_18c - 1 s< 0
    var_18c = r8
    
    if (cond:0_1)
        break
    
    rbx = var_d8.d
    r10 = var_178.d
    rdi = rdx_4

sub_142942950(&var_150, &var_150)
sub_142942bd0(&var_d8, &var_d8, &var_150)
sub_1429444b0(arg1, &var_d8)
int64_t result = sub_1428b8960(&var_60, 0x20)
__security_check_cookie(rax_1 ^ &var_208)
return result
