// 函数: sub_141980140
// 地址: 0x141980140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f029c8
sub_140b34200("RHIReadSurfaceFloatData_RenderThread", rdi)
int32_t rsi = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rsi)

if (*(arg2 + 0x14) u> 0)
    sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_3
rdx_3.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rsi)
int64_t* rcx_3 = data_143f0f180
int64_t r10 = *rcx_3
int128_t var_18 = *arg4
(*(r10 + 0x310))(rcx_3, arg3, &var_18, arg7, arg8, arg9, arg10)
return sub_140b38680("RHIReadSurfaceFloatData_RenderThread", rdi) __tailcall
