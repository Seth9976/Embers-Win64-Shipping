// 函数: sub_14292ba90
// 地址: 0x14292ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result

if (arg2 == 0)
label_14292bb38:
    result = 0
else
    char* rdi_1 = *(arg2 + 8)
    int32_t r8_1 = 0
    int32_t i = 0
    
    if (*arg2 s<= 0)
        result = 1
    else
        int64_t rdx = 0
        char var_68[0x50]
        
        do
            char rcx = *rdi_1
            
            if (rcx - 0x20 u> 0x5e && rcx != 0xa && rcx != 0xd)
                rcx = 0x2e
            
            var_68[rdx] = rcx
            r8_1 += 1
            rdx += 1
            
            if (r8_1 s>= 0x50)
                if (sub_14289aa40(arg1, &var_68, r8_1) s<= 0)
                    goto label_14292bb38_1
                
                r8_1 = 0
                rdx = 0
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *arg2)
        
        if (r8_1 s<= 0)
            result = 1
        else if (sub_14289aa40(arg1, &var_68, r8_1) s<= 0)
        label_14292bb38_1:
            result = 0
        else
            result = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
