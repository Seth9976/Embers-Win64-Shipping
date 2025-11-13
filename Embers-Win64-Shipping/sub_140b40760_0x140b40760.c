// 函数: sub_140b40760
// 地址: 0x140b40760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = sub_140b3a4e0(&data_1439a90f0, arg1)
bool rcx

if (arg2 == 0)
    rcx = true
else
    rcx = sub_140a54510(arg1, arg2).d == 0

uint64_t result

if (rbx != 0 && rcx != 0 && *(rbx + 0x28) == 0)
    result.b = 0
    return result

result.b = 1
return result
