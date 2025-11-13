// 函数: sub_142b97900
// 地址: 0x142b97900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint64_t result

if (arg2 != 0)
    int64_t rax_2 = arg2[4]
    int32_t result_1 = 0
    int32_t rax_3
    
    if (rax_2 != 0)
        rax_3 = rax_2(arg2, 0, 0, 0)
    
    if (rax_2 == 0 || rax_3 == 0)
        *(arg2 + 0xc) = 0
    else
        result_1 = 0x55
    
    if (result_1 != 0)
        result = zx.q(result_1)
    else
        uint64_t rsi_1 = zx.q(*(arg2 + 0xc))
        int32_t rdi_1 = arg2[1].d
        
        if (rsi_1.d u< rdi_1)
            int64_t rax_4 = arg2[4]
            char var_c8
            uint32_t count
            
            if (rax_4 == 0)
                count = rdi_1 - rsi_1.d
                
                if (count u> 0x80)
                    count = 0x80
                
                memcpy(&var_c8, rsi_1 + *arg2, count)
            else
                count = rax_4(arg2, zx.q(rsi_1.d), &var_c8, 0x80)
            
            *(arg2 + 0xc) = count + rsi_1.d
            result_1 = sbb.d(count, count, count u< 0x80) & 0x55
            char var_c7
            char var_c6[0x3d]
            char var_89
            char var_7e
            char var_76
            char var_75
            
            if (result_1 != 0)
                result = zx.q(result_1)
            else
                char var_74
                char var_73
                char var_72
                
                if (var_c8 != result_1.b || var_7e != result_1.b || var_76 != result_1.b
                        || var_c7 - 1 u> 0x20 || var_89 != result_1.b
                        || var_c6[zx.q(var_c7)] != result_1.b || var_75 u> 0x7f)
                    result = 2
                else
                    result = sub_142b97ac0(arg1, arg2, 
                        (((((zx.d(var_75) << 8 | zx.d(var_74)) << 8 | zx.d(var_73)) << 8
                            | zx.d(var_72)) + 0x7f) & 0xffffff80) + 0x80, 
                        arg3, arg5, arg4)
        else
            result = 0x55
else
    result = zx.q((arg2 + 0x55).d)

__security_check_cookie(rax_1 ^ &var_f8)
return result
