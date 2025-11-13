// 函数: sub_14100a510
// 地址: 0x14100a510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = arg2
*(arg1 + 0xc) = arg2
int32_t rsi = 0x20
int32_t rax

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    rax = temp0_1
    int32_t arg_10 = rax
else
    rax = 0x20

arg1[2].d = rax
__builtin_memset(&arg1[4], 0, 0x48)
sub_14100d820(&arg1[0xe], 0, arg2, arg1)
arg1[0x27] = 0
arg1[0x28].d = arg2
*(arg1 + 0x144) = arg2

if (arg2 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(arg2)
    rsi = temp0_2
    int32_t arg_8 = rsi

arg1[0x29].d = rsi
arg1[0x2a] = arg1
arg1[0x2b] = &data_142efcd90
arg1[0x2c] = 0
int64_t var_20 = 0
arg1[0x2d].d = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x34].b = 0
arg1[0x26] = &data_142efcf80
*(arg1 + 0x190) = 0.o
int64_t* rax_1 = j_sub_140a82f30(0x30)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0
    rax_1[1] = &data_142efcd90
    __builtin_memset(&rax_1[2], 0, 0x1c)
    *(rax_1 + 0x2c) = 1

arg1[0x37] = rax_1
arg1[0x36] = rax_1
arg1[0x38] = 0
arg1[0x39] = 0
arg1[0x3a] = &data_142efcd90
__builtin_memset(&arg1[0x3b], 0, 0x1c)
*(arg1 + 0x1f4) = 1
arg1[0x40] = 0
arg1[0x41] = 0x10f
sub_1405c4f50(&arg1[0x40])
int32_t i = 0

if (arg1[0x41].d s> 0)
    int64_t rcx_2 = 0
    
    do
        rcx_2 += 0x30
        i += 1
        *(rcx_2 + arg1[0x40] - 0x30) = 0
    while (i s< arg1[0x41].d)

void* rcx_3 = &arg1[0x46]
__builtin_memset(&arg1[0x42], 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x4a].d = 0xffffffff
*(arg1 + 0x254) = 0
arg1[0x4c] = 0
arg1[0x4d].d = 0
arg1[0x4e].b = 0
*(arg1 + 0x274) = 0
arg1[3] = 0
return arg1
