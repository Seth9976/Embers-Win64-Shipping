// 函数: sub_1417f0c70
// 地址: 0x1417f0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rcx = *(data_143f5b298 + 0xb08)
int32_t result
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9

if (rcx == 0)
label_1417f0dd6:
    zmm6 = zx.o(0)
    *arg1 = data_143dbb1f8.q
    zmm9 = zx.o(0)
    zmm7 = zx.o(0)
    arg1[1].d = data_143dbb200
    zmm8 = zx.o(0)
    *arg2 = data_143dbb208
    arg2[1].d = data_143dbb210
    result = 0
    *arg6 = 0
    *arg7 = 0
    *arg5 = 0
else
    if ((*(*rcx + 0x120))(rcx) == 0)
        goto label_1417f0dd6
    
    int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
    char rax_7
    int64_t r8
    rax_7, r8 = (*(*rcx_1 + 0x10))(rcx_1)
    
    if (rax_7 == 0)
        goto label_1417f0dd6
    
    int32_t* var_d8 = nullptr
    r8.b = 2
    int64_t var_d0_1 = 0
    int64_t* rcx_2 = *(data_143f5b298 + 0xb08)
    (*(*rcx_2 + 0x28))(rcx_2, &var_d8, r8)
    int64_t* rcx_3 = *(data_143f5b298 + 0xb08)
    void var_c8
    int32_t var_a8
    (*(*rcx_3 + 0x60))(rcx_3, zx.q(*var_d8), &var_c8, arg1, &var_a8)
    void var_b8
    int32_t* rax_12 = sub_140adf5d0(&var_c8, &var_b8)
    int32_t* rcx_5 = var_d8
    zmm6 = var_a8
    int32_t var_a4
    zmm8 = var_a4
    int32_t var_a0
    zmm7 = var_a0
    int32_t var_9c
    zmm9 = var_9c
    *arg2 = *rax_12
    result = rax_12[2]
    arg2[1].d = result
    int32_t var_90
    *arg5 = var_90.d
    int32_t var_98
    *arg6 = var_98
    int32_t var_94
    *arg7 = var_94.d
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

zmm6.d = zmm6.d f+ zmm8.d
zmm7.d = zmm7.d f+ zmm9.d
*arg3 = zmm6.d
*arg4 = zmm7.d
__security_check_cookie(rax_1 ^ &var_108)
return result
