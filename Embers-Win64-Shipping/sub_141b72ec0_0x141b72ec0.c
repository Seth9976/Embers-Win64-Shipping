// 函数: sub_141b72ec0
// 地址: 0x141b72ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)
int64_t rbx = data_143e24410

if (rcx == 0)
    return 0

int64_t* result = (*(*(rcx + 0x28) + 0x10))(rcx + 0x28)
void arg_8

if (result != 0 && *(*(*result + 0x10))(result, &arg_8) == rbx)
    return result

return 0
