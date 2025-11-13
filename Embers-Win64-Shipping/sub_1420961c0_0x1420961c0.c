// 函数: sub_1420961c0
// 地址: 0x1420961c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140baf760(&var_38, arg3)
char result = EnterCriticalSection(arg1 + 8)
void* i = *(arg1 + 0x40)

for (void* rbp_2 = (sx.q(*(arg1 + 0x48)) << 5) + i; i != rbp_2; i += 0x20)
    char rax = sub_140bb6ec0(*(i + 0x10), &var_38)
    *(arg1 + 0xb0) |= rax
    int64_t var_28
    result = sub_140b9ad30(*(i + 0x10), sub_140b63b70(arg2 + 8, &var_28))
    *(arg1 + 0xb0) |= result
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

if (arg1 != -8)
    result = LeaveCriticalSection(arg1 + 8)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
