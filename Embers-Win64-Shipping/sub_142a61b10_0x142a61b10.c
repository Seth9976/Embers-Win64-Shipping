// 函数: sub_142a61b10
// 地址: 0x142a61b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char** result_1 = arg1
char** result

if (*arg5 s> 0)
    result = nullptr
else if (arg4 == 2)
    result = sub_142a5ff70(arg2, arg3, arg5)
label_142a61b9e:
    
    if (*arg5 s> 0)
        result = nullptr
    else if (result != 0)
        int32_t* rdi
        
        if (result_1 != 0)
            if (*(result_1 + 0xb4) != 0x12c9b17 || result_1[0x17].d != 0x12bb38b)
                rdi.b = 1
            else
                rdi.b = 0
            
            sub_142a61820(result_1, 0)
            goto label_142a61c1c
        
        char** result_2 = sub_142a7dd00(0xc8)
        result_1 = result_2
        
        if (result_2 != 0)
            rdi.b = 0
        label_142a61c1c:
            memset(result_1, 0, 0xc8)
            
            if (rdi.b == 0)
                *(result_1 + 0xb4) = 0x12c9b17
                result_1[0x17].d = 0x12bb38b
            else
                *(result_1 + 0xb4) = 0
            
            result_1[1] = result
            result_1[3] = result
            *(result_1 + 0x28) = *(result + 0x28)
            *(result_1 + 0x38) = *(result + 0x38)
            *(result_1 + 0x48) = *(result + 0x48)
            *(result_1 + 0x58) = *(result + 0x58)
            char rax_4
            
            if (arg4 == 2 || result_1[0xc].b != 0)
                rax_4 = 0
            else
                rax_4 = 1
            
            int32_t rdx_3 = result_1[9].d
            *(result_1 + 0xac) = rdx_3
            result_1[0x16].b = rax_4
            *(result_1 + 0xb1) = 1
            result_1[0x18].d = sub_142ac3690(&result_1[5], rdx_3)
            result = result_1
            *(result_1 + 0xbc) = 0xffffffff
        else
            sub_142a5f960(result)
            result = nullptr
            *arg5 = 7
    else
        *arg5 = 2
else
    void var_d8
    sub_142a4cc50(arg3, &var_d8, 0x9d, arg5)
    int32_t rax_3 = *arg5
    
    if (rax_3 s<= 0 && rax_3 != 0xffffff84)
        result = sub_142a5f9e0(arg2, &var_d8, arg4, arg5)
        goto label_142a61b9e
    
    *arg5 = 1
    result = nullptr

__security_check_cookie(rax_1 ^ &var_f8)
return result
