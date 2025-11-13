// 函数: sub_1428d5190
// 地址: 0x1428d5190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r9 = arg1[0xf]
arg3[0xf] = r9 << arg2
uint8_t r10 = arg1[0xe]
arg3[0xe] = r10 << arg2 | r9 u>> (8 - arg2)
uint8_t rdx = arg1[0xd]
arg3[0xd] = rdx << arg2 | r10 u>> (8 - arg2)
uint8_t r8 = arg1[0xc]
arg3[0xc] = r8 << arg2 | rdx u>> (8 - arg2)
uint8_t rdx_1 = arg1[0xb]
arg3[0xb] = rdx_1 << arg2 | r8 u>> (8 - arg2)
uint8_t r8_1 = arg1[0xa]
arg3[0xa] = r8_1 << arg2 | rdx_1 u>> (8 - arg2)
uint8_t rdx_2 = arg1[9]
arg3[9] = rdx_2 << arg2 | r8_1 u>> (8 - arg2)
uint8_t r8_2 = arg1[8]
arg3[8] = r8_2 << arg2 | rdx_2 u>> (8 - arg2)
uint8_t rdx_3 = arg1[7]
arg3[7] = rdx_3 << arg2 | r8_2 u>> (8 - arg2)
uint8_t r8_3 = arg1[6]
arg3[6] = r8_3 << arg2 | rdx_3 u>> (8 - arg2)
uint8_t rdx_4 = arg1[5]
arg3[5] = rdx_4 << arg2 | r8_3 u>> (8 - arg2)
uint8_t r8_4 = arg1[4]
arg3[4] = r8_4 << arg2 | rdx_4 u>> (8 - arg2)
uint8_t rdx_5 = arg1[3]
arg3[3] = rdx_5 << arg2 | r8_4 u>> (8 - arg2)
uint8_t r8_5 = arg1[2]
arg3[2] = r8_5 << arg2 | rdx_5 u>> (8 - arg2)
char rdx_6 = arg1[1]
arg3[1] = r8_5 u>> (8 - arg2) | rdx_6 << arg2
char result = *arg1 << arg2 | rdx_6 u>> (8 - arg2)
*arg3 = result
return result
