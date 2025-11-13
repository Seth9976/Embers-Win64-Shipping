// 函数: sub_14100a730
// 地址: 0x14100a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].d = arg2
int32_t rdi = arg2
*(arg1 + 0x14) = arg2
int32_t rax

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rdi)
    rax = temp0_1
    int32_t arg_10 = rax
else
    rax = arg2 + 0x20

arg1[3].d = rax
arg1[4] = arg3
*arg1 = &data_142efd9c0
__builtin_memset(&arg1[5], 0, 0x28)
arg1[0xa] = arg1
arg1[0xb] = 0
arg1[0xc] = 0
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0xf] = rax_1
arg1[0xe] = rax_1
InitializeCriticalSection(&arg1[0x10])
SetCriticalSectionSpinCount(&arg1[0x10], 0xfa0)
arg1[0x15].d = 3
sub_14100b220(&arg1[0x16], rdi, 2)
sub_14100b220(&arg1[0x26], rdi, 3)
sub_14100b220(&arg1[0x36], rdi, 0)
sub_14100b220(&arg1[0x46], rdi, 0)
sub_14100b220(&arg1[0x56], rdi, 1)
sub_14100adc0(&arg1[0x66], arg1, rdi)
sub_14100adc0(&arg1[0x85], arg1, rdi)
sub_14100b3f0(&arg1[0xa4], arg1, 0, 0x10000, 4)
sub_14100b3f0(&arg1[0xbd], arg1, 2, 0x2000, 0x14)
arg1[0xd6] = arg1
arg1[0xd7].d = arg1[2].d
*(arg1 + 0x6bc) = rdi
__builtin_memset(&arg1[0xd8], 0, 0x38)
InitializeCriticalSection(&arg1[0xdf])
SetCriticalSectionSpinCount(&arg1[0xdf], 0xfa0)
__builtin_memset(&arg1[0xe4], 0, 0x20)
void* rcx_13 = &arg1[0xe8]
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_3 = *(rcx_13 + 0x10)

if (rax_3 != 0)
    rcx_13 = rax_3

*rcx_13 = 0
*(rcx_13 + 8) = 0
arg1[0xec].d = 0xffffffff
*(arg1 + 0x764) = 0
arg1[0xee] = 0
arg1[0xef].d = 0
arg1[0xf0].d = 0
arg1[0xf8] = arg1
arg1[0xf9].d = arg1[2].d
*(arg1 + 0x7cc) = rdi
arg1[0xfa] = arg1
arg1[0xfb].d = arg1[2].d
*(arg1 + 0x7dc) = rdi
arg1[0xfc].d = 0x400000
int32_t rax_6

if (data_143f0f1d8 == 0)
    rax_6 = arg1[2].d
else
    rdi = 1
    rax_6 = 1

int32_t var_2c = rax_6
int32_t var_30 = 0
*(arg1 + 0x7e4) = 2.o
*(arg1 + 0x7f4) = rdi
__builtin_memset(&arg1[0xff], 0, 0x18)
InitializeCriticalSection(&arg1[0x102])
SetCriticalSectionSpinCount(&arg1[0x102], 0xfa0)
char rcx_16 = (data_1439c7a34).b
arg1[0x107] = arg1
arg1[0x108].d = arg1[2].d
*(arg1 + 0x844) = (1 << rcx_16) - 1
int32_t rbp = data_1439b4adc
int32_t rsi = data_1439b4ad8
int32_t rdi_1 = data_1439b4ad0
arg1[0x109] = arg1
arg1[0x10a].d = arg1[2].d
void* rcx_19 = &arg1[0x10d]
*(arg1 + 0x854) = (1 << rcx_16) - 1
arg1[0x10b] = 0
arg1[0x10c] = 0
*(rcx_19 + 0x10) = 0
*(rcx_19 + 0x18) = 0
*(rcx_19 + 0x1c) = 0x80
void* rax_9 = *(rcx_19 + 0x10)

if (rax_9 != 0)
    rcx_19 = rax_9

*rcx_19 = 0
*(rcx_19 + 8) = 0
arg1[0x111].d = 0xffffffff
*(arg1 + 0x88c) = 0
arg1[0x113] = 0
arg1[0x114].d = 0
__builtin_memset(&arg1[0x115], 0, 0x20)
InitializeSRWLock(&arg1[0x119])
InitializeCriticalSection(&arg1[0x11a])
SetCriticalSectionSpinCount(&arg1[0x11a], 0xfa0)
arg1[0x11f].d = 1
*(arg1 + 0x8fc) = 0x44
arg1[0x120].d = rdi_1
*(arg1 + 0x904) = rsi
arg1[0x121].d = rbp
arg1[0x122] = 7
arg1[0x123] = 0
arg1[0x124] = -1
arg1[0x125] = -1
InitializeCriticalSectionAndSpinCount(&arg1[0x126], 8)
arg1[0x12b].b = 0
arg1[0x12c] = 0
arg1[0x12d] = 0
arg1[0x130].d = 0
arg1[0x131] = 0
arg1[0x132] = 1
arg1[0x134] = &arg1[0x133]
arg1[0x133] = &arg1[0x133]
arg1[0x137] = 0
arg1[0x138] = -1
arg1[0x139] = -1
arg1[0x13a] = 0
arg1[0x13b].d = 0
arg1[0x13c] = 0
arg1[0x141] = 0
arg1[0x142] = 0
arg1[0x13e] = &arg1[0x13d]
arg1[0x13d] = &arg1[0x13d]
arg1[0x140] = &arg1[0x13f]
arg1[0x13f] = &arg1[0x13f]
InitializeCriticalSectionAndSpinCount(&arg1[0x143], 8)
InitializeCriticalSectionAndSpinCount(&arg1[0x148], 8)
arg1[0x14d].b = 0
*(arg1 + 0xa6c) = 0x3f800000
arg1[0x152] = &arg1[0x153]
arg1[0x14f].d = 0x42700000
__builtin_strncpy(&arg1[0x151], "333?", 4)
*(arg1 + 0xa8c) = 6
arg1[0x12f] = &arg1[0x12e]
arg1[0x12e] = &arg1[0x12e]
arg1[0x136] = &arg1[0x135]
arg1[0x135] = &arg1[0x135]
InitializeCriticalSectionAndSpinCount(&arg1[0x153], 8)
__builtin_memset(&arg1[0x158], 0, 0x20)
__builtin_memset(&arg1[0x15c], 0, 0x18)
sub_141063ec0(arg1)
return arg1
