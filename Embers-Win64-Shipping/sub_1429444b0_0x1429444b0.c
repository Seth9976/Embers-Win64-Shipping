// 函数: sub_1429444b0
// 地址: 0x1429444b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
int32_t rsi = arg2[9]
int32_t r14 = *arg2
int32_t r15 = arg2[1]
int32_t r12 = arg2[2]
int32_t r13 = arg2[3]
int32_t r10 = arg2[4]
int32_t r11 = arg2[5]
int32_t rbx = arg2[6]
int32_t rdi = arg2[7]
int32_t rbp = arg2[8]
int32_t rax_15 = ((((((((((((((rsi * 0x13 + 0x1000000) s>> 0x19) + r14) s>> 0x1a) + r15) s>> 0x19)
    + r12) s>> 0x1a) + r13) s>> 0x19) + r10) s>> 0x1a) + r11) s>> 0x19) + rbx
int32_t r14_1 =
    r14 + (((((((rax_15 s>> 0x1a) + rdi) s>> 0x19) + rbp) s>> 0x1a) + rsi) s>> 0x19) * 0x13
int32_t r14_2 = r14_1 & 0x3ffffff
int32_t r15_1 = r15 + (r14_1 s>> 0x1a)
int32_t r15_2 = r15_1 & 0x1ffffff
int32_t r12_1 = r12 + (r15_1 s>> 0x19)
int32_t r12_2 = r12_1 & 0x3ffffff
int32_t r13_1 = r13 + (r12_1 s>> 0x1a)
int32_t r13_2 = r13_1 & 0x1ffffff
int32_t r10_1 = r10 + (r13_1 s>> 0x19)
int32_t r10_2 = r10_1 & 0x3ffffff
int32_t r11_1 = r11 + (r10_1 s>> 0x1a)
int32_t r11_2 = r11_1 & 0x1ffffff
int32_t rbx_1 = rbx + (r11_1 s>> 0x19)
int32_t arg_20 = r11_2
int32_t rbx_2 = rbx_1 & 0x3ffffff
int32_t rdi_1 = rdi + (rbx_1 s>> 0x1a)
int32_t var_58 = rbx_2
int32_t rbp_1 = rbp + (rdi_1 s>> 0x19)
int32_t rdi_2 = rdi_1 & 0x1ffffff
char arg_10 = rbp_1.b
int32_t var_54 = rdi_2
int32_t rdi_4 = rbp_1 & 0x3ffffff
int32_t rax_43 = ((rbp_1 s>> 0x1a) + rsi) & 0x1ffffff
*arg1 = r14_2.b
arg1[1] = (r14_2 u>> 8).b
arg1[2] = (r14_2 u>> 0x10).b
arg1[4] = (r15_2 u>> 6).b
arg1[3] = (r14_2 u>> 0x18).b | r15_2.b << 2
arg1[7] = (r12_2 u>> 5).b
arg1[0xa] = (r13_2 u>> 3).b
arg1[5] = (r15_2 u>> 0xe).b
arg1[0xd] = (r10_2 u>> 2).b
arg1[0xe] = (r10_2 u>> 0xa).b
arg1[0xf] = (r10_2 u>> 0x12).b
arg1[0x10] = r11_2.b
arg1[0x11] = (r11_2 u>> 8).b
arg1[0x12] = (r11_2 u>> 0x10).b
arg1[6] = (r15_2 u>> 0x16).b | r12_2.b << 3
arg1[8] = (r12_2 u>> 0xd).b
arg1[9] = (r12_2 u>> 0x15).b | r13_2.b << 5
arg1[0x14] = (rbx_2 u>> 7).b
arg1[0xb] = (r13_2 u>> 0xb).b
arg1[0xc] = (r13_2 u>> 0x13).b | r10_2.b << 6
arg1[0x13] = (r11_2 u>> 0x18).b | (rbx_2.b * 2)
arg1[0x15] = (rbx_2 u>> 0xf).b
arg1[0x18] = (rdi_2 u>> 0xd).b
arg1[0x16] = (rbx_2 u>> 0x17).b | rdi_2.b << 3
arg1[0x17] = (rdi_2 u>> 5).b
arg1[0x19] = (rdi_2 u>> 0x15).b | rdi_4.b << 4
arg1[0x1b] = (rdi_4 u>> 0xc).b
arg1[0x1a] = (rdi_4 u>> 4).b
arg1[0x1c] = (rdi_4 u>> 0x14).b | rax_43.b << 6
arg1[0x1d] = (rax_43 u>> 2).b
uint8_t result = (rax_43 u>> 0xa).b
arg1[0x1f] = (rax_43 u>> 0x12).b
arg1[0x1e] = result
return result
