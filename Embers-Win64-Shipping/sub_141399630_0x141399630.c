// 函数: sub_141399630
// 地址: 0x141399630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x18)
void* result_1 = arg1
int32_t i_1 = *(arg1 + 0x20)

if (result != 0)
    result_1 = result

if (i_1 != 0)
    void* rbx = result_1 + 0x10
    int32_t i
    
    do
        result = sub_1405ec8a0(rbx)
        rbx += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) == arg2)
    return result

return sub_1409dabf0(arg1, arg2)
