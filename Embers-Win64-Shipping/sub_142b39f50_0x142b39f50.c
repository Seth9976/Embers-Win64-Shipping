// 函数: sub_142b39f50
// 地址: 0x142b39f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t rdx = arg2[2]
int32_t* r14 = arg3
int32_t rcx = arg1[1]
int32_t rax_4 = rdx - *arg1 + 1
uint32_t result

if (rcx s> rax_4)
label_142b39ff6:
    int32_t r8_2 = *r14
    
    if (r8_2 != 0)
        sub_142b38f60(arg1, arg2, r8_2, arg4)
    
    int32_t rdx_6 = arg2[1]
    int32_t rcx_5 = *arg2
    int32_t r8_3 = arg1[1]
    result = rdx_6 - rcx_5 + 1
    
    if (r8_3 s> result)
        uint32_t r9_3 = *arg1
        result = rdx_6 - r9_3 + 1
        
        if (r8_3 s> result)
            result = sub_142b3ac00(arg1, arg2, arg4)
        else if (arg2[6].b != 0)
            int32_t rsi_2 = r8_3 - 1 + rcx_5 - rdx_6
            
            if (*(arg1 + 9) != 0 || r9_3 != 1 || (arg1[2].b & 0x70) != 0)
                result = sub_142b3b000(arg1 + 9, r9_3, rsi_2)
                *arg1 = result
            
            arg1[1] -= rsi_2
            *arg4 |= 0x400
else if (rcx s>= rax_4)
    int32_t var_44_1 = rdx
    arg3.b = 1
    int16_t var_40_1 = 0x100
    int32_t var_48 = 1
    result = sub_142b39220(arg1, &var_48, arg3.b)
    
    if (result != 0x80000000)
        int32_t r8 = *r14
        
        if (r8 s>= 0 || result != 0)
            goto label_142b39ff6
        
        sub_142b38f60(arg1, arg2, r8, arg4)
        result = sub_142b3ad00(arg1, arg2, r14, arg4)
    else
        *arg4 |= 0x10
else
    result = sub_142b3ad00(arg1, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_68)
return result
