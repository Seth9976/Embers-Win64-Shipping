// 函数: sub_14296e560
// 地址: 0x14296e560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result

if (arg3 != 0)
    int64_t i_1 = arg3 u/ 0x38 * 0x38
    int64_t i = i_1 - 0x38
    
    if (i_1 != arg3)
        i = i_1
    
    int128_t var_88
    sub_14296f160(&var_88, i + arg2, arg3 - i)
    int128_t* rcx_3
    
    if (arg3 != 0x38)
        int32_t var_50[0xe]
        
        while (i != 0)
            i -= 0x38
            sub_14296e9e0(&var_88, &var_88, &data_14354b220)
            sub_14296f160(&var_50, i + arg2, 0x38)
            sub_14296e9e0(&var_50, &var_50, &data_14354b170)
            sub_14296e9e0(&var_50, &var_50, &data_14354b220)
            sub_14296e1e0(&var_88, &var_88, &var_50)
        
        *arg1 = var_88
        uint128_t var_78
        arg1[1] = var_78
        int128_t var_68
        arg1[2] = var_68
        int64_t var_58
        arg1[3].q = var_58
        sub_1428b8960(&var_88, 0x38)
        rcx_3 = &var_50
    else
        sub_14296e9e0(arg1, &var_88, &data_14354b170)
        sub_14296e9e0(arg1, arg1, &data_14354b220)
        rcx_3 = &var_88
    
    result = sub_1428b8960(rcx_3, 0x38)
else
    __builtin_memset(arg1, 0, 0x30)
    arg1[3].q = 0

__security_check_cookie(result_1 ^ &var_a8)
return result
