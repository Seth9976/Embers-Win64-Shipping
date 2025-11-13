// 函数: sub_14294ef20
// 地址: 0x14294ef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
int64_t var_58 = 0
void var_30
void* var_50 = &var_30
*var_50 = sub_1428a9570(arg3)
void* rcx_1 = *var_50

if (rcx_1 != 0)
    int64_t rax_2 = sub_1428a9370(rcx_1)
    
    if (rax_2 == 0)
        sub_1428a5670((rax_2 + 4).d, 0x92, (rax_2 + 0x74).d, "crypto\rsa\rsa_sign.c", 0x31)
        return 0
    
    void* rax_4 = var_50
    int32_t var_40 = 5
    int64_t var_38_1 = 0
    *(rax_4 + 8) = &var_40
    int32_t var_20
    int32_t* var_48_1 = &var_20
    var_20 = arg4
    int64_t r9
    int64_t var_18_1 = r9
    int32_t rax_6 = sub_1428f0be0(&var_50, &var_58)
    
    if (rax_6 s>= 0)
        *arg1 = var_58
        *arg2 = rax_6
        return 1
else
    sub_1428a5670(4, 0x92, 0x75, "crypto\rsa\rsa_sign.c", 0x2c)

return 0
