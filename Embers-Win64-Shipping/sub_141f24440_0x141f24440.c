// 函数: sub_141f24440
// 地址: 0x141f24440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result

if (*(arg1 + 0x430) != 0)
    result = sub_140d3e110(arg1 + 0x678)
    
    if (result.b != 0 && *(arg1 + 0x690) != 0 && *(arg1 + 0x650) s> 0)
        result = sub_141f5e0e0(arg1, arg2)
        int64_t rbx_1 = sx.q(result.d)
        
        if (result.d s>= 0 && rbx_1.d s< *(arg1 + 0x640))
            int64_t rcx_2 = *(arg1 + 0x638)
            int64_t rsi_2 = rbx_1 * 0x30
            *(rsi_2 + rcx_2) = *arg3
            *(rsi_2 + rcx_2 + 0x10) = arg3[1]
            *(rsi_2 + rcx_2 + 0x20) = arg3[2]
            
            if (arg4 == 0)
                sub_140ae0920(*(arg1 + 0x638) + rsi_2, arg1 + 0x1c0)
            
            result = sub_141ea4040(arg1 + 0x648, rbx_1.d)
            
            if (result.d s>= 0)
                int64_t var_98
                __builtin_memset(&var_98, 0, 0x28)
                sub_141de1640(&var_98, arg1 + 0x648, arg1 + 0x638)
                int64_t rbx_2 = *(arg1 + 0x638)
                void var_68
                result = sub_141dea8e0(&var_98, &var_68, result.d)
                sub_140ae0920(rsi_2 + rbx_2, result)
                int128_t var_88
                int64_t rcx_9 = var_88:8.q
                
                if (rcx_9 != 0)
                    result = sub_140a74f90(rcx_9)
                
                int64_t rcx_10 = var_98
                
                if (rcx_10 != 0)
                    result = sub_140a74f90(rcx_10)
            
            *(arg1 + 0x790) = 1

__security_check_cookie(result_1 ^ &var_b8)
return result
