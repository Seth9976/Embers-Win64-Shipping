// 函数: sub_141968fb0
// 地址: 0x141968fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f025d8
sub_140b34200("CreateShaderResourceView_RenderThread_IB", rsi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg3

int64_t* rcx_1 = data_143f0f180
(*(*rcx_1 + 0x198))(rcx_1, arg2, arg4)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

sub_140b38680("CreateShaderResourceView_RenderThread_IB", rsi)
return arg2
