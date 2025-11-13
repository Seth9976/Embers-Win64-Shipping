// 函数: sub_142bc00c0
// 地址: 0x142bc00c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xd0)
int64_t* rcx = *(result + 0x50)

if (rcx != 0)
    int64_t var_18 = *arg2
    return (*(*rcx + 8))(rcx[1], &var_18, arg4, arg1, var_18, arg3)

void* rcx_2 = *(arg1 + 0x3e8)

if (*(rcx_2 + 0x518) != 0)
    return result

return sub_142b97020(*(rcx_2 + 0x4f0), arg2) __tailcall
