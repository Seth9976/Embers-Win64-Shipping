// 函数: sub_14198a690
// 地址: 0x14198a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f1a4 != 0)
    jump(*(*data_143f0f180 + 0xb8))

int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_2 = data_143f0f180
int64_t result = (*(*rcx_2 + 0xb8))(rcx_2, arg3)

if (rbx != 0)
    result = LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return result
