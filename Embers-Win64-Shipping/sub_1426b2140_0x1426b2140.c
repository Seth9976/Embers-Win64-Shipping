// 函数: sub_1426b2140
// 地址: 0x1426b2140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x2d8)
int64_t var_18
int32_t var_10

if (rcx == 0)
    int32_t rax_1 = data_143dbb200
    var_18 = data_143dbb1f8.q
    var_10 = rax_1
else
    sub_141e912d0(rcx + 0x148, &var_18)

*arg2 = var_18
arg2[1].d = var_10
return arg2
