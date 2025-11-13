// 函数: sub_14197cea0
// 地址: 0x14197cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("RHICopySubTextureRegion_RenderThread", rdi)
int64_t rbx = 0

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int64_t* rcx_1 = data_143f0f180
int32_t var_38 = arg6[1].d
int128_t var_48 = *arg6
int128_t zmm0 = *arg5
int32_t var_18 = arg5[1].d
int64_t rax_6 = *rcx_1
int128_t var_28 = zmm0
(*(rax_6 + 0x6b0))(zmm0, arg3, arg4, &var_28, &var_48)

if (rbx != 0)
    LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return sub_140b38680("RHICopySubTextureRegion_RenderThread", rdi) __tailcall
