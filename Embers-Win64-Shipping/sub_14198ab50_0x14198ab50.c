// 函数: sub_14198ab50
// 地址: 0x14198ab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("UpdateTexture3D_RenderThread", rdi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_1 = data_143f0f180
(*(*rcx_1 + 0x2b8))(rcx_1, arg3, zx.q(arg4), arg5, arg6, arg7, arg8)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return sub_140b38680("UpdateTexture3D_RenderThread", rdi) __tailcall
