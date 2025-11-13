// 函数: sub_141fd1ab0
// 地址: 0x141fd1ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rdi_1 = arg4 * arg3

if (rdi_1 u> data_143a2dccc)
    int128_t var_58
    int128_t* var_60_1 = &var_58
    int32_t var_48_1 = 1
    int64_t* rcx_1 = data_143f0f180
    int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
    var_58 = zx.o(0)
    int32_t var_34_1 = rax_3
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_44_1 = data_143dbb1e0
    (*(*rcx_1 + 0x498))(rcx_1, arg2, &data_143f02b98, zx.q(rdi_1), 0x204, var_60_1, var_58, 
        var_48_1)
else
    sub_140a80f40()
    
    if (data_143f3e848 == 0xffffffff)
        *arg2 = 0
    else
        sub_141fdd560(&data_143f3e420, arg2, rdi_1)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
