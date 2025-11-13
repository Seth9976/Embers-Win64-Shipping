// 函数: sub_142bcde90
// 地址: 0x142bcde90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x14)
sub_142bcdc30(arg1)
char* result = *arg1
int64_t rbp = arg1[2]
char* result_1 = result

if (result u< rbp)
    char rcx = *result
    *arg2 = result
    bool cond:0_1
    
    if (rcx == 0x28)
        arg2[2].d = 2
        cond:0_1 = sub_142bd83f0(&result_1, rbp) != 0
        result = result_1
    label_142bcdf07:
        
        if (not(cond:0_1))
        label_142bcdf09:
            arg2[1] = result
    else
        if (rcx != 0x5b)
            if (rcx == 0x7b)
                arg2[2].d = 3
                cond:0_1 = sub_142bd8510(&result_1, rbp) != 0
                result = result_1
            else
                int32_t rbx_1 = 1
                
                if (*result == 0x2f)
                    rbx_1 = 4
                
                arg2[2].d = rbx_1
                sub_142bcdca0(arg1)
                result = *arg1
                cond:0_1 = arg1[3].d != 0
            
            goto label_142bcdf07
        
        arg2[2].d = 3
        *arg1 = &result[1]
        int32_t rbx_2 = 1
        sub_142bcdc30(arg1)
        result = *arg1
        
        if (result u< rbp)
            while (arg1[3].d == 0)
                char rcx_4 = *result
                
                if (rcx_4 == 0x5b)
                    rbx_2 += 1
                else if (rcx_4 == 0x5d)
                    rbx_2 -= 1
                    
                    if (rbx_2 s<= 0)
                        result = &result[1]
                        goto label_142bcdf09
                
                sub_142bcdca0(arg1)
                sub_142bcdc30(arg1)
                result = *arg1
                
                if (result u>= rbp)
                    break
    
    if (arg2[1] == 0)
        *arg2 = nullptr
        arg2[2].d = 0
    
    *arg1 = result

return result
