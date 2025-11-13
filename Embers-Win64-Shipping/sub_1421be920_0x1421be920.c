// 函数: sub_1421be920
// 地址: 0x1421be920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28

if (arg11 u> 1)
    int64_t rax_1 = sx.q(data_143f0f1a0)
    
    if (rax_1.d != 0xb && rax_1.d != 0x1e)
        int64_t rdx = rax_1 * 5
        
        if ((*(&data_143f025f0 + (rdx << 2)) != data_143f025b8
                || (*((rdx << 2) + &data_143f025fc) & 1) == 0) && rax_1.d != 0x18
                && ((*((rdx << 2) + &data_143f025fc) u>> 4).b & 1) == 0)
            goto label_1421be9a4
else if (arg7 != 0)
label_1421be9a4:
    int64_t* rcx_1 = data_143f0f180
    (*(*rcx_1 + 0x560))(rcx_1, &var_28, &data_143f02b98, zx.q(arg1), arg2, arg3, arg4, arg11, 
        arg5 | arg6, arg8)
    sub_1405d1600(arg9, &var_28)
    sub_1405d1550(&var_28)
    int64_t* rcx_4 = data_143f0f180
    (*(*rcx_4 + 0x560))(rcx_4, &var_28, &data_143f02b98, zx.q(arg1), arg2, arg3, arg4, 1, 
        (arg6 & 4) << 0x18 | arg5 | 0xa, arg8)
    sub_1405d1600(arg10, &var_28)
    return sub_1405d1550(&var_28)

int64_t* rcx_7 = data_143f0f180
(*(*rcx_7 + 0x560))(rcx_7, &var_28, &data_143f02b98, zx.q(arg1), arg2, arg3, arg4, arg11, 
    arg5 | arg6 | 8, arg8)
sub_1405d16e0(arg9, *sub_1405d1600(arg10, &var_28))
return sub_1405d1550(&var_28)
