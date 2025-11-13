// 函数: sub_141f9d940
// 地址: 0x141f9d940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = arg7
int32_t zmm1 = arg6
arg5 = arg5
int32_t arg_28 = arg_28
arg7 = zmm0
arg6 = zmm1
int32_t arg_8 = arg4
int32_t arg_10 = arg3
void* rax_3 = *(((sx.q(arg2) + (sx.q(arg1) << 1)) << 6) + 0x143a2d900)
void* rcx_1 = &(&data_143a2d910)[(sx.q(arg2) + (sx.q(arg1) << 1)) * 8]

if (rax_3 != 0)
    rcx_1 = rax_3

return (&data_143a2d8f0)[(sx.q(arg2) + (sx.q(arg1) << 1)) * 8]((*(*rcx_1 + 8))(rcx_1), &arg_10, 
    &arg_8, &arg_28, &arg5, &arg6, &arg7)
