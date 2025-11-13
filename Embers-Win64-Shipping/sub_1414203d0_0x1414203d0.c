// 函数: sub_1414203d0
// 地址: 0x1414203d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* result = sub_14141f3a0(arg1)

if (result != 0)
    int64_t* rcx = *(result + 0x490)
    
    if (rcx == 0)
    label_141420490:
        int32_t rdx = 0x25
        int16_t var_40_1 = 0
        
        if (data_1439c88d0 != 0)
            rdx = 0x12
        
        int32_t var_60_1 = arg3
        int128_t var_78 = data_1439c7b20
        
        if (arg6 != 0)
            rdx = 0xa
        
        int32_t var_5c_1 = 0
        int32_t var_68_1 = data_1439c7b30
        int32_t var_58_1 = 1
        int16_t var_50_1 = 1
        int16_t var_30_1 = 1
        int32_t rax_13 = 9
        int32_t var_64_1 = arg3 * arg3
        
        if (arg5 != 0)
            rax_13 = 0x10008
        
        int32_t var_54_1 = 0x10000
        int32_t var_44_1 = rax_13
        int32_t var_4c_1 = rdx
        char var_2e_1 = 0
        
        if (arg4 != 0)
            int32_t var_64_2 = arg3
            int32_t var_5c_2 = arg3
        
        int32_t var_48_1 = data_143ed3394
        wchar16 const* const var_38_1 = u"CombineLUTs"
        sub_1419a0ce0(&data_1439c9260, arg2, &var_78, result + 0x490, u"CombineLUTs", 1, 1, 0)
    else
        if (*((*(*rcx + 0x10))(rcx) + 0x18) != arg3)
            goto label_141420490
        
        int64_t* rcx_1 = *(result + 0x490)
        int32_t rcx_2
        rcx_2.b = *((*(*rcx_1 + 0x10))(rcx_1) + 0x1c) != 0
        
        if (rcx_2 != zx.d(arg4))
            goto label_141420490
        
        int64_t* rcx_3 = *(result + 0x490)
        
        if ((*((*(*rcx_3 + 0x10))(rcx_3) + 0x36) & 1) != arg5)
            goto label_141420490
        
        int64_t* rcx_5 = *(result + 0x490)
        int32_t rcx_6
        rcx_6.b = *((*(*rcx_5 + 0x10))(rcx_5) + 0x2c) == 0xa
        
        if (rcx_6 != zx.d(arg6))
            goto label_141420490
    
    result = *(result + 0x490)

__security_check_cookie(rax_1 ^ &var_b8)
return result
