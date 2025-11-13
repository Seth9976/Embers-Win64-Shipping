// 函数: sub_141fb3410
// 地址: 0x141fb3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0xdc0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0xdc0) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *(arg1 + 0xd60) + sx.q(*rax_2) * 0x18

arg_8.q = *(sub_140d21d80(arg2) + 0x18)
int64_t var_28
sub_140b63b70(&arg_8, &var_28)
void** var_18
sub_142441630(&var_18, &var_28)
int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t result = sub_141fb32e0(arg1, &var_18)
void** rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void* arg_18 = arg2
int64_t var_10 = result + 0x10
var_18 = &arg_18
sub_1413b83d0(arg1 + 0xdc0, &arg_8, &var_18, nullptr)
return result
