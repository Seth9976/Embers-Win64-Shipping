// 函数: sub_141010680
// 地址: 0x141010680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x90)

if (result == 0)
    return result

int32_t rax_1 = (1 << (data_1439c7a34).b) - 1
void* rdx = *(*arg1 + 0x9d8)
result[2] = rdx
result[3].d = *(rdx + 0x10)
*(result + 0x1c) = rax_1
sub_14103f450(&result[4], rdx)
result[0x11].d = 0x10000
*(result + 0x8c) = 0x10000
*result = &data_142efe4e0
result[1].d = GetCurrentThreadId()
*result = &data_142efe4e8
return result
