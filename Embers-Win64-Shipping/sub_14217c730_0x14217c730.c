// 函数: sub_14217c730
// 地址: 0x14217c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t* var_28 = arg2 + 0xc
int32_t* var_20 = &arg_18
void arg_8
sub_14215a820(arg1 + 0x158, &arg_8, &var_28, nullptr)
var_28.d = arg_18
int64_t var_20_1 = *(*(arg1 + 0x148) + 0x218)
sub_142159880(arg1 + 0x2a0, arg2 + 0xc, &var_28)
int32_t rax_2 = *(arg1 + 0x358)
int32_t rcx_3 = *(arg1 + 0x2a8) - *(arg1 + 0x2d4)

if (rax_2 u>= rcx_3)
    rcx_3 = rax_2

*(arg1 + 0x358) = rcx_3
*(arg2 + 0x20) |= 4
var_28 = nullptr
var_20_1.d = 0
void*** rax_3 = sub_1405978f0(0x28, &var_28)

if (rax_3 != 0)
    rax_3[1] = arg1
    *rax_3 = &data_142d3fe58
    rax_3[2] = sub_142160f50
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_142d3feb0

int64_t var_18
uint64_t result = sub_140bcb5c0(sub_140b63b70(arg2 + 0xc, &var_18), &var_28, 0, 0, 0xffffffff)
int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
