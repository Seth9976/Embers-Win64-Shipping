// 函数: sub_142141fa0
// 地址: 0x142141fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x140)

if (rcx == 0)
    return 

int64_t* var_18
sub_141ccdd90(rcx, &var_18)
int64_t* rcx_1 = var_18

if (rcx_1 != 0)
    (*(*rcx_1 + 0xc0))(rcx_1, arg2)
    int64_t* rcx_2 = var_18
    (*(*rcx_2 + 0xa0))(rcx_2)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
