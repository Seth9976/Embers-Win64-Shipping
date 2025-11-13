// 函数: sub_14197dab0
// 地址: 0x14197dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("RHICreateTextureExternal2D", rdi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg3

int64_t* rcx_1 = data_143f0f180
(*(*rcx_1 + 0x210))(rcx_1, arg2, zx.q(arg4), zx.q(arg5), arg6, arg7, arg8, arg9, arg10)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

sub_140b38680("RHICreateTextureExternal2D", rdi)
return arg2
