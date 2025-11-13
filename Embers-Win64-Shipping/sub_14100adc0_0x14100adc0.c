// 函数: sub_14100adc0
// 地址: 0x14100adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
arg1[2].d = arg3
int32_t rax = 0x20
*(arg1 + 0x14) = arg3

if (arg3 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg3)
    rax = temp0_1

arg1[3].d = rax
arg1[4] = 0
arg1[5] = &data_142efcd90
arg1[6] = 0
arg1[7].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xe].b = 0
int64_t var_10 = 0
*arg1 = &data_142efcf60
*(arg1 + 0x60) = 0.o
arg1[0xf] = 0
arg1[0x10] = 0
void* rcx = &arg1[0x11]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
arg1[0x19].b = 0
InitializeCriticalSection(&arg1[0x1a])
SetCriticalSectionSpinCount(&arg1[0x1a], 0xfa0)
return arg1
