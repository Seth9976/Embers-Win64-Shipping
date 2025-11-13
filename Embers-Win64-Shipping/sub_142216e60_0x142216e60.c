// 函数: sub_142216e60
// 地址: 0x142216e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x258)
int64_t* rax_1
int64_t var_18

if (rcx == 0)
    int32_t var_10_1 = data_143dbb210
    rax_1 = &var_18
    var_18 = data_143dbb208
else
    rax_1 = (*(*rcx + 0x660))(rcx, &var_18)
int32_t rax_3 = rax_1[1].d
*arg2 = *rax_1
arg2[1].d = rax_3
return arg2
