// 函数: sub_14100d820
// 地址: 0x14100d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
arg1[2].d = arg3
*(arg1 + 0x14) = arg3
int32_t rax

if (arg3 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg3)
    rax = temp0_1
    int32_t arg_18 = rax
else
    rax = arg3 + 0x20

arg1[3].d = rax
arg1[4] = arg4
arg1[5] = &data_142efcd90
arg1[6] = 0
int64_t var_10 = 0
arg1[7].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
*(arg1 + 0x60) = 0.o
arg1[0xe].b = 1
*arg1 = &data_142efcfa0
int64_t* rax_1 = j_sub_140a82f30(0x28)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0
    rax_1[1] = &data_142efcd90
    __builtin_memset(&rax_1[2], 0, 0x14)

arg1[0x11] = rax_1
arg1[0x10] = rax_1
arg1[0x12] = 0
arg1[0x13] = &data_142efcd90
arg1[0x14] = 0
arg1[0x15] = 0
int64_t* rax_2 = j_sub_140a82f30(0x28)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[1] = 0
    rax_2[2] = &data_142efcd90
    rax_2[3] = 0
    rax_2[4] = 0

arg1[0x17] = rax_2
arg1[0x16] = rax_2
return arg1
