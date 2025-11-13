// 函数: sub_140611470
// 地址: 0x140611470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rcx = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)
uint64_t result

if (rcx == temp0)
    int32_t rcx_1 = **(arg1 + 0x10)
    int32_t temp1_1 = **(arg2 + 0x10)
    int32_t result_1
    
    if (rcx_1 == temp1_1)
        int32_t rax_4 = *(arg2 + 8)
        
        if (rax_4 == 0xf0 || rax_4 == 0xf7)
            int64_t* buffer1_2
            sub_140592d30(&buffer1_2, *(arg1 + 0x20))
            int64_t* buffer2_2
            sub_140592d30(&buffer2_2, *(arg2 + 0x20))
            int64_t* buffer2 = &buffer2_2
            int64_t* buffer1 = &buffer1_2
            uint64_t count_1
            uint64_t count = count_1
            int64_t* buffer2_1 = buffer2_2
            int64_t* buffer1_1 = buffer1_2
            int64_t var_40
            
            if (var_40 u>= 0x10)
                buffer2 = buffer2_1
            
            int64_t var_60
            
            if (var_60 u>= 0x10)
                buffer1 = buffer1_1
            
            uint64_t count_2
            
            if (count_2 u< count_1)
                count = count_2
            
            int32_t result_2 = memcmp(buffer1, buffer2, count)
            result_1 = result_2
            
            if (result_2 == 0)
                if (count_1 u>= count_2)
                    result_1.b = count_1 u> count_2
                else
                    result_1 = result_2 - 1
            
            if (var_40 u>= 0x10)
                int64_t* buffer2_3 = buffer2_1
                
                if (var_40 + 1 u>= 0x1000)
                    buffer2_1 = buffer2_1[-1]
                
                if (var_40 + 1 u>= 0x1000 && buffer2_3 - buffer2_1 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(buffer2_1)
            
            if (var_60 u>= 0x10)
                int64_t* buffer1_3 = buffer1_1
                
                if (var_60 + 1 u>= 0x1000)
                    buffer1_1 = buffer1_1[-1]
                
                if (var_60 + 1 u>= 0x1000 && buffer1_3 - buffer1_1 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(buffer1_1)
            
            result = zx.q(result_1)
        else
            result = 1
    else
        result_1 = -1
        
        if (rcx_1 s< temp1_1)
            result_1 = 1
        
        result = zx.q(result_1)
else
    result = 1
    
    if (rcx s< temp0)
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_98)
return result
