// 函数: sub_14197d070
// 地址: 0x14197d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg3

int64_t* rcx_1 = data_143f0f180
(*(*rcx_1 + 0x88))(rcx_1, arg2, zx.q(arg4), arg5, arg6)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

int64_t rcx_2 = *arg5

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg6

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg2
