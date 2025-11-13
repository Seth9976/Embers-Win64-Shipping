// 函数: sub_14121ce80
// 地址: 0x14121ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 8)
char r9

if (*(r8 + 0x40) == 1 || arg3 != 0)
    r9 = 1
else
    r9 = 0

int32_t rdx = data_1439b6340

if (r9 != 0)
    rdx = 1

int64_t* rax_1 = sub_141223260(arg1, rdx, r8 + 0xc0, r9, arg3)
int32_t var_18
sub_140598750(arg1 + 0x120, &var_18)
int32_t rcx_2 = *(arg2 + 0x10)
char var_28
var_28.d = var_18
int32_t* var_10
*var_10 = rcx_2
*(var_10 + 8) = rax_1
var_10[4] = 0xffffffff
int32_t arg_8
sub_141224960(arg1 + 0x120, &arg_8, rcx_2, var_10, var_28, nullptr)
return *(*(arg1 + 0x120) + sx.q(arg_8) * 0x18 + 8)
