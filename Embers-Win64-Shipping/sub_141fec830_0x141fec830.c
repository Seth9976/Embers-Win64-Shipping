// 函数: sub_141fec830
// 地址: 0x141fec830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
int64_t* r8 = arg2[1]
*(arg2 + 0x29) |= 0x10
int64_t rdx = *r8
int64_t result
bool cond:1

if (rdx + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    int32_t arg_10 = rax_1
    result = (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rdx != 0
    result = rdx + 4
    *r8 = result

if (cond:1 != 0 || (arg2[5].b & 1) == 0)
    return result

int64_t var_18
int64_t* rax_3 = sub_140d21830(arg1, &var_18, 0, 0)
int16_t* const r9_1

if (rax_3[1].d == 0)
    r9_1 = &data_142d40450
else
    r9_1 = *rax_3

sub_140af98a0("Unknown", 0x20f, 
    This platform requires cooked packages, and audio data was not cooked into %s.", r9_1)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_140afbb40()
