// 函数: sub_141f8a410
// 地址: 0x141f8a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x30)
int64_t* rax_1
int64_t var_18

if (rcx == 0)
    int32_t var_10_1 = data_143dbb200
    rax_1 = &var_18
    var_18 = data_143dbb1f8.q
else
    rax_1 = (*(*(rcx + 0x220) + 0x18))(rcx + 0x220, &var_18)
int32_t rax_3 = rax_1[1].d
*arg2 = *rax_1
arg2[1].d = rax_3
return arg2
