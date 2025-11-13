// 函数: sub_142bc8650
// 地址: 0x142bc8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (*(rcx + 0x78) == 0)
    *(arg1 + 0xf8) = *(*(rcx + 0x2b8) + 0x78)
    return 0

int64_t arg_8
uint64_t result = sub_142b93ea0(*(rcx + 0x2b8), &arg_8)
*(arg1 + 0xf8) = arg_8
return result
