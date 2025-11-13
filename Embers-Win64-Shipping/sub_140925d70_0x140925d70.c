// 函数: sub_140925d70
// 地址: 0x140925d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = -1
void* rax_1
int64_t r8
rax_1, r8 = (*(*arg1 + 0x20))()

if (rax_1 == 0)
    goto label_140925dc8

int32_t result

if (*(rax_1 + 0xe0) == 4)
    *(rax_1 + 0xe0) = 6
    result, r8 = sub_1409389a0(arg1)
    result_1 = result

if (*(rax_1 + 0xe0) != 4 || result != 0x3e5)
    *(rax_1 + 0xe0) = 6
label_140925dc8:
    int64_t r9_1 = *arg1
    r8.b = result_1 == 0
    (*(r9_1 + 0xe0))(arg1, arg2, r8, r9_1)

if (result_1 != 0 && result_1 != 0x3e5)
    result.b = 0
    return result

result.b = 1
return result
