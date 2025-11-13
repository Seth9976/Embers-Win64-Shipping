// 函数: sub_142b05d00
// 地址: 0x142b05d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t result = sub_142a7dd00(0xa8)
*(arg1 + 0x10) = result
uint64_t result_1 = result

if (result == 0)
    *arg3 = 7
else
    char var_14f
    __builtin_memset(&var_14f, 0, 0x1f)
    int64_t var_158 = 0x28
    memset(result, 0, 0xa8)
    result = zx.q(*(arg2 + 8))
    char var_150_1 = result.b
    int64_t rbx
    rbx.b = 0
    
    while (true)
        if (*arg3 s<= 0)
            result = zx.q(rbx.b)
            uint64_t* rsi_1 = result << 3
            char* rcx_1 = *(rsi_1 + &data_143666880)
            
            if (rcx_1 != 0)
                void var_128
                result = sub_142a92100(rcx_1, &var_128, &var_158, arg3)
                *(rsi_1 + result_1) = result
            
            rbx.b += 1
            
            if (rbx.b u<= 0x13)
                continue
            else if (*arg3 s<= 0 && *(arg2 + 8) == 0)
                *(result_1 + 0xa0) = arg4
                result = sub_142b05c70(*(arg2 + 0x20))
                *(result_1 + 0xa1) = result.b
                break
        
        void** rbx_1 = *(arg1 + 0x10)
        
        if (rbx_1 != 0)
            int64_t i_1 = 0x14
            int64_t i
            
            do
                void* rcx_5 = *rbx_1
                
                if (rcx_5 != 0)
                    result = sub_142a92480(rcx_5)
                
                rbx_1 = &rbx_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (*(arg1 + 0x3e) == i_1.b)
                result = sub_142a7dcd0(*(arg1 + 0x10))
                *(arg1 + 0x10) = i_1
        
        break

__security_check_cookie(rax_1 ^ &var_178)
return result
