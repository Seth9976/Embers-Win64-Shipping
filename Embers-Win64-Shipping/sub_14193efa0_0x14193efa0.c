// 函数: sub_14193efa0
// 地址: 0x14193efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi_1 = zx.q(arg2 + 0xf) & 0xfffffff0
int64_t count = sx.q((rdi_1 * 5).d)
*arg1 = sub_140a82f30(count, 0)
int64_t rax_2 = sub_140a82f30(count, 0)
int64_t rcx_2 = *arg1
arg1[0xa] = rax_2
memset(rcx_2, 0, count)
memset(arg1[0xa], 0, count)
int64_t r8_2 = sx.q(rdi_1.d)
int64_t rcx_5 = arg1[0xa] + r8_2
int64_t rdx_1 = *arg1 + r8_2
arg1[0xb] = rcx_5
arg1[1] = rdx_1
arg1[2] = rdx_1 + r8_2
arg1[0xc] = rcx_5 + r8_2
arg1[3] = arg1[2] + r8_2
arg1[0xd] = arg1[0xc] + r8_2
arg1[4] = arg1[3] + r8_2
arg1[0xe] = arg1[0xd] + r8_2
arg1[0xf].d = rdi_1.d
uint32_t rdi_2 = rdi_1.d u>> 4
*(arg1 + 0x2c) = rdi_2
arg1[5].d = 0
arg1[6].d = 0
*(arg1 + 0x34) = rdi_2
arg1[7].d = 0
*(arg1 + 0x3c) = rdi_2
arg1[8].d = 0
*(arg1 + 0x44) = rdi_2
arg1[9].d = 0
*(arg1 + 0x4c) = rdi_2
return 0
