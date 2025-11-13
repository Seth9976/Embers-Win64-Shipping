// 函数: sub_142c8ad20
// 地址: 0x142c8ad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* string = *(arg1 + 0x58)
char* string_2 = nullptr
char* string_1 = nullptr

if (string != 0)
label_142c8ad8c:
    char* rax_4 = strchr(string, 0x5c)
    char* rax_5
    
    if (rax_4 == 0)
        rax_5 = strchr(string, (&rax_4[0x22]).d)
    
    if (rax_4 == 0 && rax_5 == 0)
    label_142c8ae27:
        int32_t rax_8 = sub_142c8a340(arg2, arg3, "; filename="%s"", string, arg4)
        data_143ccb8a0(string_1)
        data_143ccb8a0(string_2)
        return zx.q(rax_8)
    
    int64_t rcx_6 = -1
    bool cond:0_1
    
    do
        cond:0_1 = string[rcx_6 + 1] != 0
        rcx_6 += 1
    while (cond:0_1)
    char* string_3 = data_143ccb898((rcx_6 << 1) + 1)
    string_1 = string_3
    
    if (string_3 != 0)
        char* string_4 = string_1
        
        while (*string != 0)
            char rax_6 = *string
            
            if (rax_6 == 0x5c || rax_6 == 0x22)
                *string_4 = 0x5c
                string_4 = &string_4[1]
            
            char rax_7 = *string
            string = &string[1]
            *string_4 = rax_7
            string_4 = &string_4[1]
        
        *string_4 = 0
        string = string_1
        goto label_142c8ae27
    
    data_143ccb8a0(string_2)
else
    char* rax_1 = data_143ccb8b0(*(arg1 + 0x18))
    
    if (rax_1 != 0)
        string = data_143ccb8b0(sub_142c8a4c0(rax_1))
        data_143ccb8a0(rax_1)
        string_2 = string
        
        if (string != 0)
            goto label_142c8ad8c

return 0x1b
