// 函数: sub_14198a860
// 地址: 0x14198a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_1 = data_143f0f180
int64_t result = (*(*rcx_1 + 0x2b0))(rcx_1, arg3, zx.q(arg4), arg5, arg6, arg7, arg8)

if (rbx != 0)
    result = LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return result
