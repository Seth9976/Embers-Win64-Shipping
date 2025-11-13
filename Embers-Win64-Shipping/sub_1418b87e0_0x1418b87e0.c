// 函数: sub_1418b87e0
// 地址: 0x1418b87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
void* rbx = &arg1[3]
*arg1 = &data_142fec118
arg1[2].d = 0
__builtin_memset(rbx, 0, 0x90)
InitializeCriticalSection(&arg1[0x15])
SetCriticalSectionSpinCount(&arg1[0x15], 0xfa0)
int64_t i_1 = 3
int64_t i

do
    sub_1418c1490(rbx, arg1[1], 0x400000)
    rbx += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
