// 函数: sub_141ecd7b0
// 地址: 0x141ecd7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t var_e8
int512_t zmm1 = sub_142259c00(&var_e8)
sub_142277d10(&var_e8, 2)
uint32_t var_118
bool rax_3
uint128_t zmm6
uint128_t zmm7
rax_3, zmm6, zmm7 = sub_141ec41c0(arg7, &var_118, &var_e8, zmm1, arg5)
uint8_t rbp

if (rax_3 != 0)
    rbp = var_118.b
else
    rbp = 0
    int128_t zmm1_1 = data_143f3a670
    var_e8 = data_143f3a660
    int128_t var_d8_1 = zmm1_1

int32_t rcx_3 = *arg8
uint64_t result
int32_t var_140

if (rcx_3 == 1)
    if (9.99999975e-05f f< arg8[1] || 9.99999975e-05f f< arg8[2] || 9.99999975e-05f f< arg8[3])
    label_141ecd8a2:
        int32_t rsi_1 = data_143f3a5c8
        uint128_t var_58_1 = zmm6
        zmm6 = zx.o(*arg3)
        int32_t rbx_1 = arg3[1].d
        uint128_t var_68_1 = zmm7
        zmm7 = zx.o(*arg4)
        int32_t rdi_1 = arg4[1].d
        sub_140b34200("GeomSweepSingle", rsi_1)
        uint64_t var_108 = zmm7.q
        int32_t var_100_1 = rdi_1
        uint64_t var_f8 = zmm6.q
        int32_t var_f0_1 = rbx_1
        void var_c8
        sub_1417c75c0(&var_c8, arg6, arg8)
        int32_t* var_88_1 = arg8
        char result_1
        int512_t zmm6_1
        int512_t zmm7_1
        result_1, zmm6_1, zmm7_1 = sub_141eb46c0(arg1, arg2, &var_c8, &var_f8, &var_108, rbp, arg9, 
            &var_e8, &data_143f3a680)
        sub_140b38680("GeomSweepSingle", rsi_1)
        zmm7_1.o = var_68_1
        result = zx.q(result_1)
        zmm6_1.o = var_58_1
    else
        var_140.q = arg9
        result = sub_141ec6a20(arg1, arg2, arg3, arg4, rbp, var_140, &var_e8)
else if (rcx_3 == 2)
    if (9.99999975e-05f f>= arg8[1] == 0)
        goto label_141ecd8a2
    
    var_140.q = arg9
    result = sub_141ec6a20(arg1, arg2, arg3, arg4, rbp, var_140, &var_e8)
else
    if (rcx_3 == 3 && 9.99999975e-05f f>= arg8[1] == 0)
        goto label_141ecd8a2
    
    var_140.q = arg9
    result = sub_141ec6a20(arg1, arg2, arg3, arg4, rbp, var_140, &var_e8)
__security_check_cookie(rax_1 ^ &var_168)
return result
