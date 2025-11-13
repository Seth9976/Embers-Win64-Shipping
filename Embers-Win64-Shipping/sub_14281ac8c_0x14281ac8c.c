// 函数: sub_14281ac8c
// 地址: 0x14281ac8c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char result = sub_14281c208(arg1)

if (result != 0)
    char var_38
    int64_t var_20_1
    
    if (sub_14281e798(*arg1) != 0)
        int64_t var_28_1 = 0
        var_20_1 = 0xf
        var_38 = 0
        SimpleString::operator=(&var_38, "Unexpected begin document")
        char* rax_3 = *arg1
        *rax_3 = 0
        result = &var_38
        
        if (&rax_3[8] != &var_38)
            char* r9_1 = &var_38
            
            if (var_20_1 u>= 0x10)
                r9_1 = var_38.q
            
            if (var_28_1 u> *(rax_3 + 0x20))
                result = sub_14058b8a0(&rax_3[8], var_28_1, 0, r9_1)
            else
                void* rdi_1 = &rax_3[8]
                
                if (*(rax_3 + 0x20) u>= 0x10)
                    rdi_1 = *(rax_3 + 8)
                
                *(rax_3 + 0x18) = var_28_1
                result = memmove(rdi_1, r9_1, var_28_1.d)
                *(rdi_1 + var_28_1) = 0
        
        goto label_14281ae1e
    
    void* rax_4 = *arg1
    
    if (*(rax_4 + 0xd0) != 0 || *(rax_4 + 0xd2) != 0)
        int64_t var_28_2 = 0
        var_20_1 = 0xf
        var_38 = 0
        SimpleString::operator=(&var_38, "Unexpected begin document")
        char* rax_5 = *arg1
        *rax_5 = 0
        result = &var_38
        
        if (&rax_5[8] != &var_38)
            char* r9_2 = &var_38
            
            if (var_20_1 u>= 0x10)
                r9_2 = var_38.q
            
            if (var_28_2 u> *(rax_5 + 0x20))
                result = sub_14058b8a0(&rax_5[8], var_28_2, 0, r9_2)
            else
                void* rdi_2 = &rax_5[8]
                
                if (*(rax_5 + 0x20) u>= 0x10)
                    rdi_2 = *(rax_5 + 8)
                
                *(rax_5 + 0x18) = var_28_2
                result = memmove(rdi_2, r9_2, var_28_2.d)
                *(rdi_2 + var_28_2) = 0
        
    label_14281ae1e:
        
        if (var_20_1 u>= 0x10)
            result = sub_14058ba50(var_38.q, var_20_1 + 1)
    else
        if (arg1[7] u> 0)
            sub_14281f460(&arg1[1], &data_14370209c, 1)
        
        result = sub_14281f460(&arg1[1], "...\n", 4)

__security_check_cookie(rax_1 ^ &var_58)
return result
