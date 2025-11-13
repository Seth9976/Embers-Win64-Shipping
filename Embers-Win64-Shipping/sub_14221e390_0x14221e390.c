// 函数: sub_14221e390
// 地址: 0x14221e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x628))(arg1)
int64_t* rcx_1 = arg1[0x26]

if (rcx_1 == 0 || result == 0 || (*(result + 0x124) & 1) == 0)
    return result

int64_t rdx_1 = *rcx_1
(*(rdx_1 + 0x498))(rcx_1, rdx_1)
return sub_141f2a170(result, arg1)
