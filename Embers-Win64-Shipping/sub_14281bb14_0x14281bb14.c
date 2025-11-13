// 函数: sub_14281bb14
// 地址: 0x14281bb14
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if (sub_14281c208(arg1) != 0)
    void* rax_3 = *arg1
    char var_48
    int64_t var_30_1
    
    if (*(rax_3 + 0xd0) != 0 || *(rax_3 + 0xd2) != 0)
        int64_t var_38_2 = 0
        var_30_1 = 0xf
        var_48 = 0
        SimpleString::operator=(&var_48, "invalid alias")
        char* rax_6 = *arg1
        *rax_6 = 0
        
        if (&rax_6[8] != &var_48)
            char* r9_2 = &var_48
            
            if (var_30_1 u>= 0x10)
                r9_2 = var_48.q
            
            if (var_38_2 u> *(rax_6 + 0x20))
                sub_14058b8a0(&rax_6[8], var_38_2, 0, r9_2)
            else
                void* rsi_2 = &rax_6[8]
                
                if (*(rax_6 + 0x20) u>= 0x10)
                    rsi_2 = *(rax_6 + 8)
                
                *(rax_6 + 0x18) = var_38_2
                memmove(rsi_2, r9_2, var_38_2.d)
                *(rsi_2 + var_38_2) = 0
        
    label_14281bc9b:
        
        if (var_30_1 u>= 0x10)
            sub_14058ba50(var_48.q, var_30_1 + 1)
    else
        sub_14281b79c(arg1, 2)
        char rax_4 = sub_142821fe8(&arg1[1], arg2)
        
        if (rax_4 == 0)
            int64_t var_38_1 = 0
            var_30_1 = 0xf
            var_48 = rax_4
            SimpleString::operator=(&var_48, "invalid alias")
            char* rax_5 = *arg1
            *rax_5 = 0
            
            if (&rax_5[8] != &var_48)
                char* r9_1 = &var_48
                
                if (var_30_1 u>= 0x10)
                    r9_1 = var_48.q
                
                if (var_38_1 u> *(rax_5 + 0x20))
                    sub_14058b8a0(&rax_5[8], var_38_1, 0, r9_1)
                else
                    void* rsi_1 = &rax_5[8]
                    
                    if (*(rax_5 + 0x20) u>= 0x10)
                        rsi_1 = *(rax_5 + 8)
                    
                    *(rax_5 + 0x18) = var_38_1
                    memmove(rsi_1, r9_1, var_38_1.d)
                    *(rsi_1 + var_38_1) = 0
            
            goto label_14281bc9b
        
        sub_14281bb0c(arg1)
        sub_142799410(*arg1)

__security_check_cookie(rax_1 ^ &var_68)
return arg1
