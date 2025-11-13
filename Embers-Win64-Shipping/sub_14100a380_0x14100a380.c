// 函数: sub_14100a380
// 地址: 0x14100a380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg2
int32_t rax = *(arg2 + 0x10)
arg1[3].d = rax
*(arg1 + 0x1c) = rax
int32_t rax_1

if (rax != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax)
    rax_1 = temp0_1
    int32_t arg_18 = rax_1
else
    rax_1 = 0x20

arg1[4].d = rax_1
*arg1 = &data_142efcdd8
arg1[5] = 0
InitializeCriticalSection(&arg1[6])
SetCriticalSectionSpinCount(&arg1[6], 0xfa0)
int64_t* rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[1] = &data_142efcd90
    rax_2[2] = 0

arg1[0xd] = rax_2
arg1[0xc] = rax_2
arg1[0xe].d = 0
arg1[0x10] = arg2
arg1[0x11] = 0
arg1[0x12] = 0
int64_t* rax_3 = j_sub_140a82f30(0x10)

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = 0

arg1[0x15] = rax_3
arg1[0x14] = rax_3
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e].d = arg3
*(arg1 + 0xf4) = arg4
InitializeCriticalSection(&arg1[0x1f])
SetCriticalSectionSpinCount(&arg1[0x1f], 0xfa0)
InitializeCriticalSection(&arg1[0x24])
SetCriticalSectionSpinCount(&arg1[0x24], 0xfa0)
__builtin_memset(&arg1[0x29], 0, 0x18)
return arg1
