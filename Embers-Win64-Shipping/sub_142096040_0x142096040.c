// 函数: sub_142096040
// 地址: 0x142096040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) != 0)
    return 

EnterCriticalSection(arg1 + 8)
void* i = *(arg1 + 0x40)

for (void* rbp_3 = (sx.q(*(arg1 + 0x48)) << 5) + i; i != rbp_3; i += 0x20)
    int64_t var_28
    char rax = sub_140b9ad30(*(i + 0x10), sub_140b63b70(arg2 + 8, &var_28))
    *(arg1 + 0xb0) |= rax
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)
