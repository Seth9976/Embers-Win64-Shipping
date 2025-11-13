// 函数: sub_142bcb3e0
// 地址: 0x142bcb3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi
int64_t* arg_18 = rsi
int32_t result
int512_t zmm1
result, zmm1 = sub_142bccb20(arg1, arg2, arg3, arg4)

if (result != 0)
    char r8
    char r9_1
    int512_t zmm0_1
    r8, r9_1, zmm0_1 = sub_142bcb250(arg2)
    int32_t rax
    char r8_1
    int512_t zmm0_2
    int512_t zmm1_1
    rax, r8_1, zmm0_2, zmm1_1 = sub_142bf0e60(&arg2[0x1b], arg1, r8, r9_1, zmm0_1, zmm1)
    
    if (rax.b == 7)
        sub_142bcb250(arg2)
        return 2
    
    int32_t rax_1
    
    if (rax != 0)
        rax_1 = sub_142bf1800(&arg2[0x1b], arg1, zmm0_2, zmm1_1, r8_1)
    
    if (rax != 0 && (rax_1.b == 7 || rax_1 != 0))
        sub_142bcb250(arg2)
        return 2
    
    arg2[0x24] = arg1
    arg2[0x14] = &arg2[0x1b]
    result = sub_142bccb20(&arg2[0x1b], arg2, arg3, zmm1_1)
    
    if (result != 0)
        sub_142bcb250(arg2)
        return 2

if (arg3 s< 0)
    return result

if (arg3 s> 0 && arg3.w != 0)
    sub_142bcb250(arg2)
    return 6

char* rcx_6 = arg2[0x26]
rsi.b = 0

if (rcx_6 != 0)
    char* rdi_1 = arg2[0x25]
    
    if (rdi_1 != 0 && ((*rcx_6 - 0x49) & 0xdf) == 0 && ((rcx_6[1] - 0x53) & 0xdf) == 0
            && ((rcx_6[2] - 0x4f) & 0xdf) == 0)
        int64_t rcx_7 = 0
        
        while (true)
            char rax_5 = rcx_6[3 + rcx_7]
            rcx_7 += 1
            
            if (rax_5 != *(rcx_7 + &data_143688150:7))
                for (int64_t i = 0; i != 5; )
                    char rax_6 = rcx_6[3 + i]
                    i += 1
                    
                    if (rax_6 != *(i + 0x14368815f))
                        goto label_142bcb545
                
                if (*rdi_1 != 0x31 || rdi_1[1] != 0)
                label_142bcb545:
                    
                    if (strcmp(&rcx_6[3], "646.1991") != 0)
                        break
                    
                    for (int64_t i_1 = 0; i_1 != 4; )
                        char rax_10 = rdi_1[i_1]
                        i_1 += 1
                        
                        if (rax_10 != *(i_1 + 0x14368817b))
                            goto label_142bcb576
            else if (rcx_7 != 6)
                continue
            
            rsi.b = 1
            break

label_142bcb576:
int64_t* var_18 = arg2
int64_t var_10_1 = 0

if (rsi.b != 0)
    __builtin_strncpy(&var_10_1, "cinu", 4)
    var_10_1:4.d = 0x10003

return sub_142b91640(&data_143687ed0, 0, &var_18, nullptr)
