// 函数: sub_1409369b0
// 地址: 0x1409369b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = -1
void* rax_1
int64_t r8
rax_1, r8 = (*(*arg1 + 0x20))()
int32_t result

if (rax_1 != 0 && ((*(rax_1 + 0xe0) - 2) & 0xfffffffb) == 0)
    result, r8 = sub_1409389a0(arg1)
    *(rax_1 + 0xe0) = 4
    result_1 = result

if (rax_1 == 0 || ((*(rax_1 + 0xe0) - 2) & 0xfffffffb) != 0 || result != 0x3e5)
    int64_t r9_1 = *arg1
    r8.b = result_1 == 0
    (*(r9_1 + 0x90))(arg1, arg2, r8, r9_1)

if (result_1 != 0 && result_1 != 0x3e5)
    result.b = 0
    return result

result.b = 1
return result
