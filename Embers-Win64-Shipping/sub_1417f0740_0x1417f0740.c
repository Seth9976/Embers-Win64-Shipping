// 函数: sub_1417f0740
// 地址: 0x1417f0740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x440)
int64_t var_18
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x30))(rcx, *(arg1 + 0x410), arg3, &var_18)

int32_t rax_3
int64_t zmm0

if (rcx == 0 || rax_2 == 0)
    *arg4 = 0
    zmm0 = data_143dbb1f8.q
    rax_3 = data_143dbb200
else
    zmm0 = var_18
    int32_t var_10
    rax_3 = var_10
    *arg4 = 1

*arg2 = zmm0
arg2[1].d = rax_3
return arg2
