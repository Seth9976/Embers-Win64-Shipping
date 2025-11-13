// 函数: sub_141e484b0
// 地址: 0x141e484b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
sub_141e6b3e0(arg1, arg2)
int512_t zmm1 = sub_141e09bd0(arg1 + 0x98, arg2)
int64_t* r8 = arg2[1]
int64_t rdx_2 = *r8
uint64_t result
bool cond:1

if (rdx_2 + 4 u> r8[1])
    int32_t rax_3
    rax_3.b = arg2[0xe] != 0
    int32_t arg_8 = rax_3
    result = (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    cond:1 = arg_8 != 0
else
    cond:1 = *rdx_2 != 0
    result = rdx_2 + 4
    *r8 = result

if (cond:1 != 0)
    return sub_141e48310(arg1 + 0xb8, arg2, arg1, zmm1)

if ((arg2[5].b & 1) == 0)
    return result

int64_t var_18
int64_t* rax_5 = sub_140d21830(arg1, &var_18, 0, 0)
int16_t* const r9

if (rax_5[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *rax_5

sub_140af98a0("Unknown", 0x8a, 
    This platform requires cooked packages, and animation data was not cooked into %s.", r9)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_140afbb40() __tailcall
