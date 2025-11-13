// 函数: sub_142944770
// 地址: 0x142944770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*arg1 = *arg2 + arg2[0xa]
arg1[1] = arg2[0xb] + arg2[1]
arg1[2] = arg2[0xc] + arg2[2]
arg1[3] = arg2[3] + arg2[0xd]
arg1[4] = arg2[0xe] + arg2[4]
arg1[5] = arg2[0xf] + arg2[5]
arg1[6] = arg2[0x10] + arg2[6]
arg1[7] = arg2[7] + arg2[0x11]
arg1[8] = arg2[0x12] + arg2[8]
arg1[9] = arg2[0x13] + arg2[9]
arg1[0xa] = arg2[0xa] - *arg2
arg1[0xb] = arg2[0xb] - arg2[1]
arg1[0xc] = arg2[0xc] - arg2[2]
arg1[0xd] = arg2[0xd] - arg2[3]
arg1[0xe] = arg2[0xe] - arg2[4]
arg1[0xf] = arg2[0xf] - arg2[5]
arg1[0x10] = arg2[0x10] - arg2[6]
arg1[0x11] = arg2[0x11] - arg2[7]
arg1[0x12] = arg2[0x12] - arg2[8]
arg1[0x13] = arg2[0x13] - arg2[9]
sub_142942bd0(&arg1[0x14], arg1, arg3)
sub_142942bd0(&arg1[0xa], &arg1[0xa], &arg3[0xa])
sub_142942bd0(&arg1[0x1e], &arg3[0x1e], &arg2[0x1e])
sub_142942bd0(arg1, &arg2[0x14], &arg3[0x14])
int32_t rdx_5 = *arg1 * 2
int32_t r8_4 = arg1[1] * 2
int32_t r9_1 = arg1[2] * 2
int32_t r10_1 = arg1[3] * 2
int32_t r11_1 = arg1[4] * 2
int32_t rdi_2 = arg1[5] * 2
int32_t rsi_2 = arg1[6] * 2
int32_t r14_2 = arg1[7] * 2
int32_t r12 = arg1[9]
int32_t r15_1 = arg1[8] * 2
*arg1 = arg1[0x14] - arg1[0xa]
int32_t r12_1 = r12 * 2
arg1[1] = arg1[0x15] - arg1[0xb]
arg1[2] = arg1[0x16] - arg1[0xc]
arg1[3] = arg1[0x17] - arg1[0xd]
arg1[4] = arg1[0x18] - arg1[0xe]
arg1[5] = arg1[0x19] - arg1[0xf]
arg1[6] = arg1[0x1a] - arg1[0x10]
arg1[7] = arg1[0x1b] - arg1[0x11]
arg1[8] = arg1[0x1c] - arg1[0x12]
arg1[9] = arg1[0x1d] - arg1[0x13]
arg1[0xa] += arg1[0x14]
arg1[0xb] += arg1[0x15]
arg1[0xc] += arg1[0x16]
arg1[0xd] += arg1[0x17]
arg1[0xe] += arg1[0x18]
arg1[0xf] += arg1[0x19]
arg1[0x10] += arg1[0x1a]
arg1[0x11] += arg1[0x1b]
arg1[0x12] += arg1[0x1c]
int32_t result = arg1[0x1d]
arg1[0x13] += result
arg1[0x14] = arg1[0x1e] + rdx_5
arg1[0x15] = arg1[0x1f] + r8_4
arg1[0x16] = arg1[0x20] + r9_1
arg1[0x17] = arg1[0x21] + r10_1
arg1[0x18] = arg1[0x22] + r11_1
arg1[0x19] = arg1[0x23] + rdi_2
arg1[0x1a] = arg1[0x24] + rsi_2
arg1[0x1b] = arg1[0x25] + r14_2
arg1[0x1c] = arg1[0x26] + r15_1
arg1[0x1d] = arg1[0x27] + r12_1
arg1[0x1e] = rdx_5 - arg1[0x1e]
arg1[0x1f] = r8_4 - arg1[0x1f]
arg1[0x20] = r9_1 - arg1[0x20]
arg1[0x21] = r10_1 - arg1[0x21]
arg1[0x22] = r11_1 - arg1[0x22]
arg1[0x23] = rdi_2 - arg1[0x23]
arg1[0x24] = rsi_2 - arg1[0x24]
arg1[0x25] = r14_2 - arg1[0x25]
arg1[0x26] = r15_1 - arg1[0x26]
arg1[0x27] = r12_1 - arg1[0x27]
return result
