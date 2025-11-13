// 函数: sub_14290d020
// 地址: 0x14290d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* var_18
int32_t arg_18
int64_t arg_20
sub_1428f1040(nullptr, &arg_20, &arg_18, &var_18, arg2)
char* rax = sub_1428c36f0(nullptr, &arg_20, arg_18)
int32_t rax_1
int64_t r9_1

if (rax != 0)
    arg_20 = sub_14060aa50(rax)
    rax_1 = sub_1406938b0(rax)
    r9_1 = arg_20
else
    r9_1 = 0
    arg_20 = 0
    rax_1 = 0

int32_t* rcx_2 = *(arg1 + 0x10)
int64_t* r8_2 = var_18
arg_18 = rax_1
void* var_28
var_28.d = rax_1
int32_t rax_3 = sub_14290df20(arg1, *rcx_2, r8_2, r9_1, var_28.d, 1)
sub_1428c3460(rax)
return zx.q(rax_3)
