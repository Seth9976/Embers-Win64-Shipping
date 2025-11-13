// 函数: sub_14293f960
// 地址: 0x14293f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = arg1[0xf]
uint32_t r9_1 = rdx_2 u>> 0x1c
arg1[8] += r9_1
int32_t r8 = arg1[0xe]
arg1[0xf] = (rdx_2 & 0xfffffff) + (r8 u>> 0x1c)
arg1[0xe] = (r8 & 0xfffffff) + (arg1[0xd] u>> 0x1c)
arg1[0xd] = (arg1[0xd] & 0xfffffff) + (arg1[0xc] u>> 0x1c)
arg1[0xc] = (arg1[0xc] & 0xfffffff) + (arg1[0xb] u>> 0x1c)
arg1[0xb] = (arg1[0xb] & 0xfffffff) + (arg1[0xa] u>> 0x1c)
arg1[0xa] = (arg1[0xa] & 0xfffffff) + (arg1[9] u>> 0x1c)
arg1[9] = (arg1[9] & 0xfffffff) + (arg1[8] u>> 0x1c)
arg1[8] = (arg1[8] & 0xfffffff) + (arg1[7] u>> 0x1c)
arg1[7] = (arg1[7] & 0xfffffff) + (arg1[6] u>> 0x1c)
arg1[6] = (arg1[6] & 0xfffffff) + (arg1[5] u>> 0x1c)
arg1[5] = (arg1[5] & 0xfffffff) + (arg1[4] u>> 0x1c)
arg1[4] = (arg1[4] & 0xfffffff) + (arg1[3] u>> 0x1c)
arg1[3] = (arg1[3] & 0xfffffff) + (arg1[2] u>> 0x1c)
arg1[2] = (arg1[2] & 0xfffffff) + (arg1[1] u>> 0x1c)
arg1[1] = (*arg1 u>> 0x1c) + (arg1[1] & 0xfffffff)
int32_t result = (*arg1 & 0xfffffff) + r9_1
*arg1 = result
return result
