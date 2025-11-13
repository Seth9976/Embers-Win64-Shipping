// 函数: sub_141970ba0
// 地址: 0x141970ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("FinalizeAsyncReallocateTexture2D_RenderThread", rdi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = (*(*rcx_1 + 0x278))(rcx_1, arg3, zx.q(arg4))

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

sub_140b38680("FinalizeAsyncReallocateTexture2D_RenderThread", rdi)
return zx.q(rax_3)
