// 函数: sub_1429451c0
// 地址: 0x1429451c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_142942680(&arg1[0xa], arg2)
__builtin_memset(&arg1[0x14], 0, 0x28)
arg1[0x14] = 1
int32_t var_e8
sub_1429439b0(&var_e8, &arg1[0xa])
int32_t var_c0
sub_142942bd0(&var_c0, &var_e8, &data_14353e140)
int32_t rdx_2 = arg1[0x1b]
int32_t rcx_3 = arg1[0x1c]
int32_t r11 = arg1[0x17]
int32_t r10 = arg1[0x18]
int32_t r9 = arg1[0x19]
int32_t r8 = arg1[0x1a]
int32_t rax_2 = arg1[0x1d]
int32_t rdi = arg1[0x15]
int32_t var_e4
int32_t r12_1 = var_e4 - rdi
int32_t rbx = arg1[0x16]
int32_t var_e0
int32_t r13_1 = var_e0 - rbx
int32_t var_cc
int32_t var_cc_1 = var_cc - rdx_2
int32_t var_c8
int32_t var_c8_1 = var_c8 - rcx_3
int32_t var_a4
int32_t var_a4_1 = var_a4 + rdx_2
int32_t var_a0
int32_t var_a0_1 = var_a0 + rcx_3
var_e8 -= 1
int32_t var_dc
int32_t var_dc_1 = var_dc - r11
int32_t var_d8
int32_t var_d8_1 = var_d8 - r10
int32_t var_d4
int32_t var_d4_1 = var_d4 - r9
int32_t var_d0
int32_t var_d0_1 = var_d0 - r8
int32_t var_c4
int32_t var_c4_1 = var_c4 - rax_2
var_c0 += 1
int32_t var_bc
int32_t var_bc_1 = var_bc + rdi
int32_t var_b8
int32_t var_b8_1 = var_b8 + rbx
int32_t var_b4
int32_t var_b4_1 = var_b4 + r11
int32_t var_b0
int32_t var_b0_1 = var_b0 + r10
int32_t var_ac
int32_t var_ac_1 = var_ac + r9
int32_t var_a8
int32_t var_a8_1 = var_a8 + r8
int32_t var_9c
int32_t var_9c_1 = var_9c + rax_2
int32_t var_e4_1 = r12_1
int32_t var_e0_1 = r13_1
int32_t var_98
sub_1429439b0(&var_98, &var_c0)
sub_142942bd0(&var_98, &var_98, &var_c0)
sub_1429439b0(arg1, &var_98)
sub_142942bd0(arg1, arg1, &var_c0)
sub_142942bd0(arg1, arg1, &var_e8)
sub_142943740(arg1, arg1)
sub_142942bd0(arg1, arg1, &var_98)
sub_142942bd0(arg1, arg1, &var_e8)
int32_t var_70
sub_1429439b0(&var_70, arg1)
sub_142942bd0(&var_70, &var_70, &var_c0)
var_98 = var_70 - var_e8
int32_t var_6c
int32_t var_94 = var_6c - r12_1
int32_t var_68
int32_t var_90 = var_68 - r13_1
int32_t var_64
int32_t var_8c = var_64 - var_dc_1
int32_t var_60
int32_t var_88 = var_60 - var_d8_1
int32_t var_5c
int32_t var_84 = var_5c - var_d4_1
int32_t var_58
int32_t var_80 = var_58 - var_d0_1
int32_t var_54
int32_t var_7c = var_54 - var_cc_1
int32_t var_50
int32_t var_78 = var_50 - var_c8_1
int32_t var_4c
int32_t var_74 = var_4c - var_c4_1
sub_1429444b0(&var_c0, &var_98)

if (sub_1428bc500(&var_c0, &data_14353e120, 0x20) == 0)
    goto label_142945474

var_98 = var_e8 + var_70
int32_t var_94_1 = var_6c + r12_1
int32_t var_90_1 = var_68 + r13_1
int32_t var_8c_1 = var_64 + var_dc_1
int32_t var_88_1 = var_60 + var_d8_1
int32_t var_84_1 = var_d4_1 + var_5c
int32_t var_80_1 = var_d0_1 + var_58
int32_t var_7c_1 = var_cc_1 + var_54
int32_t var_78_1 = var_c8_1 + var_50
int32_t var_74_1 = var_c4_1 + var_4c
sub_1429444b0(&var_c0, &var_98)
int64_t result

if (sub_1428bc500(&var_c0, &data_14353e120, 0x20) == 0)
    sub_142942bd0(arg1, arg1, &data_14353e168)
label_142945474:
    sub_1429444b0(&var_c0, arg1)
    
    if ((var_c0.b & 1) != arg2[0x1f] u>> 7)
        *arg1 = neg.d(*arg1)
        arg1[1] = neg.d(arg1[1])
        arg1[2] = neg.d(arg1[2])
        arg1[3] = neg.d(arg1[3])
        arg1[4] = neg.d(arg1[4])
        arg1[5] = neg.d(arg1[5])
        arg1[6] = neg.d(arg1[6])
        arg1[7] = neg.d(arg1[7])
        arg1[8] = neg.d(arg1[8])
        arg1[9] = neg.d(arg1[9])
    
    sub_142942bd0(&arg1[0x1e], arg1, &arg1[0xa])
    result = 0
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_108)
return result
