// 函数: sub_142c6a480
// 地址: 0x142c6a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg3 == 0)
    return arg2

int128_t zmm0

if (arg2 == 0)
    arg3[1] = arg2
    *arg3 = arg2
else
    int128_t var_18 = *arg1
    int64_t* rax_2 = sub_142c6a240(&var_18, arg2)
    int64_t r8 = *rdi
    int64_t r9_1 = rax_2[4]
    
    if (r8 s< r9_1)
    label_142c6a549:
        *arg3 = *rax_2
        arg3[1] = rax_2
        *rax_2 = 0
    else
        if (r8 s<= r9_1)
            int32_t r10_1 = rdi[1].d
            int32_t r11_1 = rax_2[5].d
            
            if (r10_1 u>= r11_1)
                int32_t rax_3
                rax_3.b = r10_1 u> r11_1
                
                if (rax_3 == 0)
                    zmm0 = data_1436b4470
                    arg3[2] = rax_2
                    *(arg3 + 0x20) = zmm0
                    arg3[3] = rax_2[3]
                    *(rax_2[3] + 0x10) = arg3
                    rax_2[3] = arg3
                    return rax_2
            
            if (r8 s< r9_1)
                goto label_142c6a549
            
            if (r8 s<= r9_1)
                int32_t r8_1 = rdi[1].d
                int32_t r9_2 = rax_2[5].d
                
                if (r8_1 u< r9_2)
                    goto label_142c6a549
                
                int32_t rax_7
                rax_7.b = r8_1 u> r9_2
                
                if (rax_7 s< 0)
                    goto label_142c6a549
        
        arg3[1] = rax_2[1]
        *arg3 = rax_2
        rax_2[1] = 0

zmm0 = *rdi
arg3[2] = arg3
arg3[3] = arg3
*(arg3 + 0x20) = zmm0
return arg3
