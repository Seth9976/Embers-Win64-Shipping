// 函数: sub_1426df900
// 地址: 0x1426df900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg3[0x2b]
int64_t* rax_1
int64_t var_18

if (rcx == 0)
    int32_t var_10_1 = data_143dbb200
    rax_1 = &var_18
    var_18 = data_143dbb1f8.q
else
    rax_1 = (*(*rcx + 0x278))(rcx, &var_18, 
        (sx.q(*(*arg3 + (sx.q(arg4) << 3) + 4) * 2) s>> 1) + arg3[3])
int32_t rax_3 = rax_1[1].d
*arg2 = *rax_1
arg2[1].d = rax_3
return arg2
