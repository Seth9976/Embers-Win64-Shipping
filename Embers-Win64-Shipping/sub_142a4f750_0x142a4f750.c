// 函数: sub_142a4f750
// 地址: 0x142a4f750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result = *arg11
int64_t r9 = arg3
int64_t var_118 = arg3
uint32_t count_2 = arg2

if (result s> 0 || count_2 s>= 0xc || arg4 s>= 6 || arg6 s>= 4)
label_142a4f9bd:
    
    if (result == 0xf || result s<= 0)
        *arg11 = 1
else
    uint32_t count_3 = 0
    int64_t r13
    r13.b = 0
    char var_f8[0xa0]
    void* rdx
    
    if (arg2 s> 0)
        rdx = arg1
    label_142a4f837:
        memmove(&var_f8, rdx, count_2)
        count_3 = count_2
    label_142a4f83f:
        r9 = var_118
    else if (arg9 != 0)
        void var_110
        count_2 = sub_142a4d500(arg9, &var_110, 0xc, arg11)
        result = *arg11
        
        if (result s> 0 || count_2 s>= 0xc)
            goto label_142a4f9bd
        
        if (count_2 == 0)
            goto label_142a4f83f
        
        rdx = &var_110
        goto label_142a4f837
    
    if (arg4 s<= 0)
        if (arg9 == 0)
            goto label_142a4f8ca
        
        uint32_t count = sub_142a4d690(arg9, &var_118, 6, arg11)
        result = *arg11
        
        if (result s> 0 || count s>= 6)
            goto label_142a4f9bd
        
        if (count s> 0)
            var_f8[sx.q(count_3)] = 0x5f
            memmove(&var_f8[sx.q(count_3 + 1)], &var_118, count)
            count_3 = count_3 + 1 + count
    else
        var_f8[sx.q(count_3)] = 0x5f
        memmove(&var_f8[sx.q(count_3 + 1)], r9, arg4)
        count_3 = count_3 + 1 + arg4
    
label_142a4f8ca:
    
    if (arg6 s<= 0)
        if (arg9 == 0)
            goto label_142a4f963
        
        uint32_t count_1 = sub_142a4cc70(arg9, &var_118, 4, arg11)
        result = *arg11
        
        if (result s> 0 || count_1 s>= 4)
            goto label_142a4f9bd
        
        if (count_1 s<= 0)
            goto label_142a4f963
        
        var_f8[sx.q(count_3)] = 0x5f
        memmove(&var_f8[sx.q(count_3 + 1)], &var_118, count_1)
        count_3 = count_3 + 1 + count_1
        goto label_142a4f952
    
    var_f8[sx.q(count_3)] = 0x5f
    memmove(&var_f8[sx.q(count_3 + 1)], arg5, arg6)
    count_3 = count_3 + 1 + arg6
label_142a4f952:
    r13.b = 1
label_142a4f963:
    result = (*(*arg10 + 8))(arg10, &var_f8, zx.q(count_3))
    
    if (arg8 s> 0)
        if (*arg7 != 0x40)
            (*(*arg10 + 8))(arg10, &data_143613f98, 1)
            
            if (r13.b == 0)
                (*(*arg10 + 8))(arg10, &data_143613f98, 1)
        
        result = (*(*arg10 + 8))(arg10, arg7, zx.q(arg8))

__security_check_cookie(rax_1 ^ &var_148)
return result
