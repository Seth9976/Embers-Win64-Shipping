// 函数: sub_140ff0300
// 地址: 0x140ff0300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_30 = arg8
void* var_38 = arg6
int64_t* rax = sub_1419728f0(arg3, arg4, arg7)
void*** rax_1

if (rax == 0)
    rax_1 = j_sub_140a82f30(0xb0)
    
    if (rax_1 != 0)
        rax_1 = sub_140fd8180(rax_1, arg3, arg4, arg7, arg5, arg6, arg8, *(arg1 + 0x168))
else
    rax_1 = *rax

*arg2 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

return arg2
