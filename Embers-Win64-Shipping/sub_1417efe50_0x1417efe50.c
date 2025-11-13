// 函数: sub_1417efe50
// 地址: 0x1417efe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1 + 8) + 0x50) = (arg2 == 0) + 1
int64_t* rbx = *(arg1 + 8)
int64_t result = rbx[0xb]

if (result == 0)
    return result

int64_t result_1 = result
void* rcx = &rbx[6]

if (arg2 == 0)
    rcx = &rbx[8]

sub_1405a9f90(rcx, &result_1)
jump(*(*rbx + 0x278))
