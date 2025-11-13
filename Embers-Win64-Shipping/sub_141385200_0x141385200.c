// 函数: sub_141385200
// 地址: 0x141385200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 8)
arg1[7].b ^= (*(r8 + 0x39) u>> 1 ^ arg1[7].b) & 1
uint8_t rdx = ((*(r8 + 0x37) u>> 2 ^ arg1[7].b) & 2) ^ arg1[7].b
arg1[7].b = rdx
arg1[7].b = ((*(r8 + 0x39) u>> 2 ^ rdx) & 4) ^ rdx
*arg1 = arg2
arg1[1] = *(arg2 + 8)
void* rax_3 = *(arg2 + 8)
*(arg1 + 0x10) = *(rax_3 + 0xc0)
arg1[4] = *(rax_3 + 0xd0)
arg1[5].d = *(rax_3 + 0xd8)
*(arg1 + 0x2c) = *(*(arg2 + 8) + 0x138)
arg1[6].d = *(*(arg2 + 8) + 0x134)
*(arg1 + 0x34) = *(*(arg2 + 8) + 0x130)
return arg1
