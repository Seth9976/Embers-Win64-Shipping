// 函数: sub_1406c86e0
// 地址: 0x1406c86e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_20
sub_1405b3620(arg1, &var_20)
int64_t* var_78
int64_t* var_18

if (var_18 == 0)
    var_78 = nullptr
else
    int64_t* rax_4 = arg3[1]
    *var_18 = **arg3
    var_18[1] = *rax_4
    var_18[2].d = 0xffffffff
    var_78 = var_18

int64_t rax_17 = *var_78
int64_t var_28 = var_78[1]
int32_t rax_26 = sub_140b5ead0(rax_17.d) + rax_17:4.d
void var_60
void* var_68 = &var_60
*var_68 = var_20
sub_1405b8300(arg1, arg2, rax_26, var_78, *var_68, arg4)
return arg2
