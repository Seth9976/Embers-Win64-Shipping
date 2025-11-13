// 函数: sub_142865410
// 地址: 0x142865410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(*(arg1 + 0x488) + 0x1c) & 0x30000

if (r9_1 == 0x10000)
    *arg2 = &data_1434dc6ec
    *arg3 = 1
    return &data_1434dc6ec

if (r9_1 == 0x20000)
    *arg2 = &data_1434dc6ee
    *arg3 = 1
    return &data_1434dc6ee

if (r9_1 == 0x30000)
    *arg2 = &data_1434dc6ec
    *arg3 = 2
    return &data_1434dc6ec

void* rax = *(arg1 + 0x690)

if (rax == 0)
    *arg2 = &data_1434dc6e0
    *arg3 = 5
    return &data_1434dc6e0

*arg2 = rax
int64_t result = *(arg1 + 0x688)
*arg3 = result
return result
