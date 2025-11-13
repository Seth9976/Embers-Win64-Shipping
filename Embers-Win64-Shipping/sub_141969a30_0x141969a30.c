// 函数: sub_141969a30
// 地址: 0x141969a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("CreateVertexShader_RenderThread", rdi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg3

int64_t rax_2 = *arg4
int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = arg4[1].d
int64_t rax_4 = *rcx_1
int128_t var_18 = rax_2.o
(*(rax_4 + 0x58))(rcx_1, arg2, &var_18, arg5, rax_2, rax_3, var_18)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

sub_140b38680("CreateVertexShader_RenderThread", rdi)
return arg2
