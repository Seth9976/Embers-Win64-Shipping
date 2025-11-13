// 函数: sub_142864260
// 地址: 0x142864260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x488)
int32_t rax_1 = *(r9 + 0x1c) & 0x30000

if (rax_1 == 0x10000)
    *arg3 = &data_1434dc724
    return 1

if (rax_1 == 0x20000)
    *arg3 = &data_1434dc726
    return 1

if (rax_1 == 0x30000)
    *arg3 = &data_1434dc724
    return 2

if (*(arg1 + 0x38) == arg2)
    int64_t rax_2 = *(r9 + 0x1a8)
    
    if (rax_2 != 0)
        *arg3 = rax_2
        return *(*(arg1 + 0x488) + 0x1b0)

int64_t rax_5 = *(r9 + 0x198)

if (rax_5 == 0)
    *arg3 = &data_1434dc6f0
    return 0x1a

*arg3 = rax_5
return *(*(arg1 + 0x488) + 0x1a0)
