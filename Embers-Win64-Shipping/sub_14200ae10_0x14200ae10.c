// 函数: sub_14200ae10
// 地址: 0x14200ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) == 0)
    return 

bool cond:1_1 = *(arg1 + 0x58) == 0
int128_t zmm0 = *arg2
char var_28 = arg3
int128_t var_24_1 = zmm0

if (cond:1_1)
    return 

int64_t* rcx = *(arg1 + 0x50)

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

if (*(arg1 + 0x58) != 0)
    int64_t* rcx_1 = *(arg1 + 0x50)
    (*(*rcx_1 + 0x50))(rcx_1, &var_28)
    return 

(*(*nullptr + 0x50))(0, &var_28)
