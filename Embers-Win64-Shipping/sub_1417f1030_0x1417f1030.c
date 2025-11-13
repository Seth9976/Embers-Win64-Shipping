// 函数: sub_1417f1030
// 地址: 0x1417f1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* var_98 = arg10
*arg10 = 0
int32_t result

if (arg11 s< 0)
label_1417f11ef:
    *arg1 = data_143dbb1f8.q
    arg1[1].d = data_143dbb200
    *arg2 = data_143dbb208
    arg2[1].d = data_143dbb210
    result = 0
    *arg6 = 0
    *arg5 = 0
    *arg4 = 0
    *arg3 = 0
    *arg8 = 0
    *arg9 = 0
    *arg7 = 0
else
    int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
    
    if (rcx_1 == 0)
        goto label_1417f11ef
    
    if ((*(*rcx_1 + 0x120))(rcx_1) == 0)
        goto label_1417f11ef
    
    int64_t* rcx_2 = *(data_143f5b298 + 0xb08)
    char rax_9
    int64_t r8
    rax_9, r8 = (*(*rcx_2 + 0x10))(rcx_2)
    
    if (rax_9 == 0)
        goto label_1417f11ef
    
    int64_t var_a8 = 0
    r8.b = 2
    int64_t var_a0_1 = 0
    int64_t* rcx_3 = *(data_143f5b298 + 0xb08)
    (*(*rcx_3 + 0x28))(rcx_3, &var_a8, r8)
    int64_t* rcx_4 = *(data_143f5b298 + 0xb08)
    void var_88
    int32_t var_78
    *var_98 =
        (*(*rcx_4 + 0x60))(rcx_4, zx.q(*(var_a8 + (sx.q(arg11) << 2))), &var_88, arg1, &var_78)
    int32_t* rax_15 = sub_140adf5d0(&var_88, &var_98)
    *arg2 = *rax_15
    result = rax_15[2]
    arg2[1].d = result
    *arg3 = var_78.d
    int32_t var_74
    *arg4 = var_74
    int32_t var_70
    *arg5 = var_70.d
    int32_t var_6c
    *arg6 = var_6c
    int32_t var_60
    *arg7 = var_60.d
    int32_t var_68
    *arg8 = var_68
    int32_t var_64
    *arg9 = var_64.d
    int64_t rcx_8 = var_a8
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
