// 函数: sub_14220a9b0
// 地址: 0x14220a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg2 + 0x20)
int64_t r9 = *(arg2 + 0x18)
int64_t r8 = *(arg2 + 0x10)
int64_t r11 = *(arg2 + 0x40)
arg1[5] = *(arg2 + 0x28)
*arg1 = &arg1[0xa]
arg1[1] = &arg1[0xc]
arg1[2] = r8
arg1[3] = r9
arg1[4] = r10
*(arg1 + 0x31) = 0
*(arg1 + 0x34) = 0xbf800000
arg1[7] = 0
arg1[8] = r11
int32_t* rax_1
rax_1.b = *data_143f510e0 != 0
arg1[9].b = rax_1.b
arg1[0xa] = 0
arg1[0xa] = *(arg2 + 0x50)
__builtin_memset(arg2 + 0x50, 0, 0x20)
arg1[0xb].d = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[0xc] = 0
arg1[0xc] = *(arg2 + 0x60)
arg1[0xd].d = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
void* rax_8 = arg1[8]
arg1[6].b = 1
arg1[7] = 0

if (*(rax_8 + 1) != 0)
    sub_142227700(arg1)

return arg1
