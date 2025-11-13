// 函数: sub_141ecd570
// 地址: 0x141ecd570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t* var_f8 = arg5
int32_t rcx = *arg7

if (rcx != 1)
    if (rcx != 2 && rcx != 3)
        goto label_141ecd720
    
    void* rax_3
    rax_3.b = 9.99999975e-05f f>= arg7[1]
    
    if (rax_3.b != 0)
        goto label_141ecd720
    
    goto label_141ecd605

char rax_5
char const* const rcx_5
int32_t rbp
uint64_t var_108
uint128_t zmm6
uint128_t zmm7

if (9.99999975e-05f f< arg7[1] || 9.99999975e-05f f< arg7[2] || 9.99999975e-05f f< arg7[3])
label_141ecd605:
    rbp = data_143f3a5c8
    zmm7 = zx.o(*arg4)
    int32_t rdi = arg4[1].d
    zmm6 = zx.o(*arg3)
    int32_t rbx = arg3[1].d
    char rsi = (data_143f3a444).b
    sub_140b34200("GeomSweepSingle", rbp)
    int128_t* rdx_1 = var_f8
    var_108 = zmm7.q
    int32_t var_100 = rdi
    uint64_t var_d8 = zmm6.q
    int32_t var_d0_1 = rbx
    void var_c8
    sub_1417c75c0(&var_c8, rdx_1, arg7)
    int32_t* var_88_1 = arg7
    rax_5 = sub_141eb46c0(arg1, arg2, &var_c8, &var_d8, &var_108, rsi, arg8, &data_143f3a660, arg6)
    rcx_5 = "GeomSweepSingle"
else
label_141ecd720:
    rbp = data_143f3a5c8
    zmm7 = zx.o(*arg4)
    int32_t rdi_1 = arg4[1].d
    zmm6 = zx.o(*arg3)
    int32_t rbx_2 = arg3[1].d
    char rsi_1 = (data_143f3a444).b
    sub_140b34200("RaycastSingle", rbp)
    int128_t* var_130_1 = &data_143f3a660
    int128_t** var_148_1 = &var_f8
    var_f8 = zmm7.q
    int32_t var_f0_1 = rdi_1
    var_108 = zmm6.q
    int32_t var_100_1 = rbx_2
    void var_118
    rax_5 = sub_141eb32e0(arg1, arg2, &var_118, &var_108, var_148_1, rsi_1, arg8, var_130_1, arg6)
    rcx_5 = "RaycastSingle"
sub_140b38680(rcx_5, rbp)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rax_5)
