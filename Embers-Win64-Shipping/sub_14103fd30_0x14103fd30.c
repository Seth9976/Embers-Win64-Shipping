// 函数: sub_14103fd30
// 地址: 0x14103fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = 0
arg1[3].d = arg2
*(arg1 + 0x1c) = arg2
int32_t rax = 0x20

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    rax = temp0_1

arg1[4].d = rax
*arg1 = &data_142efcfe8
sub_14103de70(&arg1[8])
sub_14100a510(&arg1[0x604], arg2)
arg1[0x654].d = 1
return arg1
