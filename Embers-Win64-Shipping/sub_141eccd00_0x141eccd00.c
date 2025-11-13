// 函数: sub_141eccd00
// 地址: 0x141eccd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rcx = *arg7
uint64_t result
int32_t var_120

if (rcx == 1)
    if (9.99999975e-05f f< arg7[1] || 9.99999975e-05f f< arg7[2] || 9.99999975e-05f f< arg7[3])
    label_141eccd8f:
        int32_t rbx_1 = arg3[1].d
        int32_t rsi_1 = data_143f3a5c8
        int32_t rdi_1 = arg4[1].d
        uint128_t zmm6 = zx.o(*arg3)
        uint128_t zmm7 = zx.o(*arg4)
        sub_140b34200("GeomSweepMultiple", rsi_1)
        uint64_t var_e8 = zmm7.q
        int32_t var_e0_1 = rdi_1
        uint64_t var_d8 = zmm6.q
        int32_t var_d0_1 = rbx_1
        void var_c8
        sub_1417c75c0(&var_c8, arg5, arg7)
        int32_t* var_88_1 = arg7
        char result_1 =
            sub_141eb3d30(arg1, arg2, &var_c8, &var_d8, &var_e8, arg6, arg8, arg9, &data_143f3a680)
        sub_140b38680("GeomSweepMultiple", rsi_1)
        result = zx.q(result_1)
    else
        var_120.q = arg8
        result = sub_141ec8a30(arg1, arg2, arg3, arg4, arg6, var_120, arg9, &data_143f3a680)
else if (rcx == 2 || rcx == 3)
    int128_t* rax_2
    rax_2.b = 9.99999975e-05f f>= arg7[1]
    
    if (rax_2.b == 0)
        goto label_141eccd8f
    
    var_120.q = arg8
    result = sub_141ec8a30(arg1, arg2, arg3, arg4, arg6, var_120, arg9, &data_143f3a680)
else
    var_120.q = arg8
    result = sub_141ec8a30(arg1, arg2, arg3, arg4, arg6, var_120, arg9, &data_143f3a680)
__security_check_cookie(rax_1 ^ &var_148)
return result
