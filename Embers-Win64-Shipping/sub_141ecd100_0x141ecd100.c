// 函数: sub_141ecd100
// 地址: 0x141ecd100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int128_t* var_118 = arg6
int128_t var_e8
int512_t zmm1 = sub_142259c00(&var_e8)
sub_142277d10(&var_e8, 2)
uint32_t var_134
bool rax_4
uint128_t zmm6
uint128_t zmm7
rax_4, zmm6, zmm7 = sub_141ec41c0(arg7, &var_134, &var_e8, zmm1, arg5)
uint8_t r15

if (rax_4 != 0)
    r15 = var_134.b
else
    r15 = 0
    int128_t zmm1_1 = data_143f3a670
    var_e8 = data_143f3a660
    int128_t var_d8_1 = zmm1_1

int32_t rcx_3 = *arg8

if (rcx_3 != 1)
    if (rcx_3 == 2)
        if (9.99999975e-05f f>= arg8[1] != 0)
            goto label_141ecd2e7
        
        goto label_141ecd1da
    
    if (rcx_3 != 3 || 9.99999975e-05f f>= arg8[1] != 0)
        goto label_141ecd2e7
    
    goto label_141ecd1da

char rbx_2
uint64_t var_128

if (9.99999975e-05f f< arg8[1] || 9.99999975e-05f f< arg8[2] || 9.99999975e-05f f< arg8[3])
label_141ecd1da:
    int32_t rdi = arg4[1].d
    uint128_t var_58_1 = zmm6
    zmm6 = zx.o(*arg3)
    int32_t rbx_1 = arg3[1].d
    uint128_t var_68_1 = zmm7
    zmm7 = zx.o(*arg4)
    int32_t rsi_1 = data_143f3a5c8
    sub_140b34200("GeomSweepMultiple", rsi_1)
    int128_t* rdx_2 = var_118
    var_128 = zmm7.q
    int32_t var_120 = rdi
    uint64_t var_f8 = zmm6.q
    int32_t var_f0_1 = rbx_1
    void var_c8
    sub_1417c75c0(&var_c8, rdx_2, arg8)
    int32_t* var_88_1 = arg8
    char rax_6
    int512_t zmm6_1
    int512_t zmm7_1
    rax_6, zmm6_1, zmm7_1 =
        sub_141eb3d30(arg1, arg2, &var_c8, &var_f8, &var_128, r15, arg9, &var_e8, &data_143f3a680)
    rbx_2 = rax_6
    sub_140b38680("GeomSweepMultiple", rsi_1)
    zmm7_1.o = var_68_1
    zmm6_1.o = var_58_1
else
label_141ecd2e7:
    int32_t rdi_1 = data_143f3a5c8
    sub_140b34200("RaycastMultiple", rdi_1)
    int32_t var_110_1 = arg4[1].d
    int32_t var_120_1 = arg3[1].d
    int32_t* var_148_1 = &data_143f3a680
    int128_t* var_150_1 = &var_e8
    var_118 = *arg4
    int128_t* var_168_1 = &var_118
    var_128 = *arg3
    void var_138
    rbx_2 =
        sub_141eb2a30(arg1, arg2, &var_138, &var_128, var_168_1, r15, arg9, var_150_1, var_148_1)
    sub_140b38680("RaycastMultiple", rdi_1)
__security_check_cookie(rax_1 ^ &var_188)
return zx.q(rbx_2)
