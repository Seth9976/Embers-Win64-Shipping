// 函数: sub_142b63800
// 地址: 0x142b63800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* result

if (*arg2 s<= 0)
    char rax_3
    
    if (data_144016e60 != 2)
        rax_3 = sub_142a85f00(&data_144016e60)
    
    if (data_144016e60 == 2 || rax_3 == 0)
        int32_t rax_5 = data_144016e64
        
        if (rax_5 s> 0)
            *arg2 = rax_5
    else
        sub_142b63b20(arg2)
        data_144016e64 = *arg2
        sub_142a85e80(&data_144016e60)
    
    if (*arg2 s<= 0)
        char* rcx_2 = sub_141a50850(arg1)
        int64_t rax_7 = -1
        
        do
            rax_7 += 1
        while (rcx_2[rax_7] != 0)
        
        if (rax_7 u>= 0x9d)
            *arg2 = 0xf
        else
            char var_158[0x4]
            char* rdx = &var_158 - rcx_2
            char i
            
            do
                i = *rcx_2
                *(rdx + rcx_2) = i
                rcx_2 = &rcx_2[1]
            while (i != 0)
            
            if (var_158[0] != i)
            label_142b638ff:
                
                while (true)
                    int32_t rax_8 = sub_142a86c70(*data_144016e58, &var_158)
                    
                    if (rax_8 != 0)
                        if (rax_8 s<= 0)
                            break
                        
                        result = *(data_144016e58 + 8) + sx.q(rax_8) * 0x64
                        
                        if (*(result + 4) != 0xffffffff)
                            goto label_142b6397d
                        
                        break
                    
                    char var_b8[0xa0]
                    sub_142a4d5b0(&var_158, &var_b8, 0x9d, arg2)
                    
                    if (var_b8[0] == 0)
                        goto label_142b63970
                    
                    int64_t rax_9 = 0
                    char i_1
                    
                    do
                        i_1 = var_b8[rax_9]
                        var_158[rax_9] = i_1
                        rax_9 += 1
                    while (i_1 != 0)
                    
                    if (var_158[0] == i_1)
                        goto label_142b63970
            else
                __builtin_strncpy(&var_158, "root", 4)
                char var_154_1 = 0
                
                if (var_158[0] != 0)
                    goto label_142b638ff

label_142b63970:
result = nullptr
label_142b6397d:
__security_check_cookie(rax_1 ^ &var_178)
return result
