// 函数: sub_142c79a90
// 地址: 0x142c79a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142c8f410(&arg1[0xe2], arg1) == 0)
    arg1[0xe1].d = 0
    return 0

int32_t arg_8
int32_t result
int64_t r8_1
int512_t entry_zmm2
int512_t zmm2
result, r8_1, zmm2 = sub_142c8fa60(&arg1[0xe2], arg1, *(arg1 + 0x73f), &arg_8, entry_zmm2)

if (result != 0)
    return result

if (arg_8 == 1)
    arg1[0xe1].d = 5
    return result

if (*(arg1 + 0x73e) == 0 && (arg1[0xe6].b & 1) != 0)
    return sub_142c79cb0(arg1)

sub_142c64850(*arg1, "No known authentication mechanisms supported!\n", r8_1, zmm2)
return 0x43
