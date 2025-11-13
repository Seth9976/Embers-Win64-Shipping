// 函数: sub_14196d650
// 地址: 0x14196d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f025d8
sub_140b34200("EndUpdateTexture3D_RenderThread", rsi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_1 = data_143f0f180
(*(*rcx_1 + 0x2b8))(rcx_1, *arg3, zx.q(arg3[1].d), arg3 + 0xc, arg3[6].d, *(arg3 + 0x34), arg3[7])
sub_140a74f90(arg3[7])
arg3[7] = 0

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return sub_140b38680("EndUpdateTexture3D_RenderThread", rsi) __tailcall
