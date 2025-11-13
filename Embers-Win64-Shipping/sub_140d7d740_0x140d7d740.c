// 函数: sub_140d7d740
// 地址: 0x140d7d740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 0x38) u>> 1).b & 1) == 0)
    return 0x80040201

int64_t* rcx = *(arg1 + 0x18)
int32_t rax_4 = (*(*rcx + 0x18))(rcx)

if (arg3 == arg4)
    return 0x80070057

if (arg3 s>= 0 && arg3 s<= rax_4)
    if (arg4 == 0xffffffff)
    label_140d7d7b6:
        int64_t* rcx_1 = *(arg1 + 0x18)
        float var_18
        float arg_8
        char rax_7 = (*(*rcx_1 + 0x48))(rcx_1, zx.q(arg3), zx.q(arg4 - arg3), &arg_8, &var_18)
        float zmm0 = var_18 + arg_8
        *arg7 = zx.d(rax_7)
        *arg6 = int.d(fconvert.t(arg_8))
        arg6[1] = int.d(fconvert.t(arg5))
        arg6[2] = int.d(zmm0)
        float var_14
        arg6[3] = int.d(var_14 + arg5)
        return 0
    
    if (arg4 s>= 0 && arg4 s<= rax_4)
        goto label_140d7d7b6

return 0x80040200
