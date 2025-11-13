// 函数: sub_142833b5c
// 地址: 0x142833b5c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg2

if (arg1 == 0 || arg2 == 0 || *arg2 == 0)
    sub_142833a04(1, "Null pointer", r8)
else
    char* result_1 = *arg1
    
    if (result_1 != 0)
        while (*result_1 != 0)
            arg2.b = *r8
            char* r9_1 = r8
            
            while (true)
                if (*result_1 == arg2.b)
                    result_1 = &result_1[1]
                    
                    if (arg2.b != 0)
                        break
                else
                    r9_1 = &r9_1[1]
                    arg2.b = *r9_1
                    
                    if (arg2.b != 0)
                        continue
                
                char* result = result_1
            label_142833bba:
                result_1 = &result_1[1]
                arg2.b = *result_1
                
                if (arg2.b != 0)
                    char i = *r8
                    char* r11_1 = r8
                    
                    while (arg2.b != i)
                        r11_1 = &r11_1[1]
                        i = *r11_1
                        
                        if (i == 0)
                            goto label_142833bba
                    
                    *result_1 = 0
                    *arg1 = &result_1[1]
                else
                    *arg1 = 0
                
                return result
        
        *arg1 = 0

return nullptr
