// 函数: sub_141978210
// 地址: 0x141978210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg10 == 0)
    int32_t rsi_1 = data_143f025d8
    sub_140b34200("LockTexture2D_RenderThread", rsi_1)
    char* rbx_2 = nullptr
    
    if (data_143f01c92 != 0 && sub_141989210() != 0)
        rbx_2 = arg2
    
    int64_t* rcx_5 = data_143f0f180
    int64_t rax_8 = (*(*rcx_5 + 0x288))(rcx_5, arg3, zx.q(arg4), zx.q(arg7), arg8, arg9)
    
    if (rbx_2 != 0)
        LeaveCriticalSection(&data_143f02f58)
        data_143f01c8c -= 1
    
    sub_140b38680("LockTexture2D_RenderThread", rsi_1)
    return rax_8

int32_t rsi = data_143f029c8
sub_140b34200("LockTexture2D_RenderThread", rsi)
int32_t rbx = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rbx)

if (*(arg2 + 0x14) u> 0)
    sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_3
rdx_3.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rbx)
int64_t* rcx_3 = data_143f0f180
int64_t rax_3 = (*(*rcx_3 + 0x288))(rcx_3, arg3, zx.q(arg4), zx.q(arg7), arg8, arg9)
sub_140b38680("LockTexture2D_RenderThread", rsi)
return rax_3
