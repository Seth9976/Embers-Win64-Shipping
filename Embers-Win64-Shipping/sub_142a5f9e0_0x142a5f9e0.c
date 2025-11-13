// 函数: sub_142a5f9e0
// 地址: 0x142a5f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char** result_2 = arg1
int32_t* var_160 = arg4
int32_t var_168 = 0
int64_t r15
r15.b = 0
int64_t rdi
rdi.b = 0
sub_142a60890(arg4)
char** result

if (*arg4 s<= 0)
    int32_t var_148
    strncpy(&var_148, arg2, 0x9c)
    char var_ac_1 = 0
    sub_142a615c0()
    sub_142a860a0(&data_144015690)
    char** result_1 = nullptr
    int64_t r14
    r14.b = 0
    char* _Str2 = j_sub_142a46ef0()
    int32_t* rsi
    rsi.b = 1
    int32_t rax_3
    
    while (true)
        if (r14.b == 0)
            result_1 = sub_142a60920(&var_148, result_2, &var_168)
            rax_3 = var_168
            
            if (rax_3 s> 0)
                result_1 = nullptr
                break
            
            uint64_t _MaxCount = -1
            
            do
                _MaxCount += 1
            while (*(&var_148 + _MaxCount) != 0)
            
            bool cond:0_1 = strncmp(&var_148, _Str2, _MaxCount) == 0
            int32_t rax_5 = result_1[0xe].d
            r15.b = cond:0_1
            r14.b = rax_5 == 0
            
            if (rax_5 == 0)
                char* rcx_4 = *result_1
                char* rdx_3 = &var_148
                char i
                
                do
                    i = *rcx_4
                    rcx_4 = &rcx_4[1]
                    *rdx_3 = i
                    rdx_3 = &rdx_3[1]
                while (i != 0)
            else
                *(result_1 + 0x6c) -= 1
                result_1 = nullptr
                var_168 = 0xffffff80
            
            int64_t rax_6 = 0
            bool cond:2_1
            
            while (true)
                char rcx_5 = *(&var_148 + rax_6)
                rax_6 += 1
                char temp0_1 = *(rax_6 + 0x143613e9b)
                cond:2_1 = rcx_5 == temp0_1
                
                if (rcx_5 != temp0_1)
                    break
                
                if (rax_6 == 5)
                    cond:2_1 = rcx_5 == *(rax_6 + 0x143613e9b)
                    break
            
            rdi.b = cond:2_1
            char* rax_7 = strrchr(&var_148, 0x5f)
            
            if (rax_7 == 0)
                rsi.b = 0
            else
                *rax_7 = 0
                rsi.b = 1
                
                if (var_148.b != 0)
                    continue
                else
                    var_148 = 0x646e75
                    continue
        
        rax_3 = var_168
        break
    
    int32_t* r14_1
    
    if (rax_3 == 7)
        r14_1 = var_160
        *r14_1 = rax_3
    else
        char** result_5
        
        if (result_1 != 0)
        label_142a5fcfe:
            r14_1 = var_160
            result_5 = result_1
            result_2 = result_1
            
            if (rsi.b == 0)
                goto label_142a5fd4c
            
            void var_a8
            
            if (rdi.b == 0 && sub_142a613f0(&result_2, &var_148, 0x9d, 0, &var_a8, r14_1) != 0)
                result_5 = result_2
            label_142a5fd4c:
                
                if (rdi.b == 0)
                    for (int64_t i_1 = 0; i_1 != 5; )
                        char rax_13 = (*result_5)[i_1]
                        i_1 += 1
                        
                        if (rax_13 != *(i_1 + 0x143613e9b))
                            if (result_5[2] != 0)
                                goto label_142a5ff07
                            
                            if (result_1[0xc].b != 0)
                                goto label_142a5ff07
                            
                            if (*r14_1 s> 0)
                                goto label_142a5ff22
                            
                            var_160.d = 0
                            result_5 = sub_142a60920("root", result_5[1], &var_160)
                            int32_t rax_15 = var_160.d
                            
                            if (rax_15 s<= 0)
                                result_5[2] = result_5
                                goto label_142a5ff07
                            
                            *r14_1 = rax_15
                            goto label_142a5ff22
                    
                    goto label_142a5ff07
        else if (arg3 != 0 || r15.b != 0 || rdi.b != 0)
        label_142a5fdd8:
            result_1 = nullptr
            __builtin_strncpy(&var_148, "root", 5)
            rsi.b = 0
            char* _Str2_2 = j_sub_142a46ef0()
            int32_t rcx_15
            
            while (true)
                if (rsi.b == 0)
                    char** result_4 = sub_142a60920(&var_148, result_2, &var_168)
                    rcx_15 = var_168
                    result_1 = result_4
                    
                    if (rcx_15 s> 0)
                        result_1 = nullptr
                        break
                    
                    uint64_t _MaxCount_2 = -1
                    
                    do
                        _MaxCount_2 += 1
                    while (*(&var_148 + _MaxCount_2) != 0)
                    
                    strncmp(&var_148, _Str2_2, _MaxCount_2)
                    int32_t rax_16 = result_1[0xe].d
                    rsi.b = rax_16 == 0
                    
                    if (rax_16 == 0)
                        char* rcx_17 = *result_1
                        char* rdx_12 = &var_148
                        char i_2
                        
                        do
                            i_2 = *rcx_17
                            rcx_17 = &rcx_17[1]
                            *rdx_12 = i_2
                            rdx_12 = &rdx_12[1]
                        while (i_2 != 0)
                    else
                        *(result_1 + 0x6c) -= 1
                        result_1 = nullptr
                        var_168 = 0xffffff80
                    
                    int64_t rax_17 = 0
                    bool cond:3_1
                    
                    while (true)
                        char rcx_18 = *(&var_148 + rax_17)
                        rax_17 += 1
                        char temp1_1 = *(rax_17 + 0x143613e9b)
                        cond:3_1 = rcx_18 == temp1_1
                        
                        if (rcx_18 != temp1_1)
                            break
                        
                        if (rax_17 == 5)
                            cond:3_1 = rcx_18 == *(rax_17 + 0x143613e9b)
                            break
                    
                    rdi.b = cond:3_1
                    char* rax_18 = strrchr(&var_148, 0x5f)
                    
                    if (rax_18 != 0)
                        *rax_18 = 0
                        
                        if (var_148.b != 0)
                            continue
                        else
                            var_148 = 0x646e75
                            continue
                
                rcx_15 = var_168
                break
            
            r14_1 = var_160
            
            if (rcx_15 == 7)
                *r14_1 = rcx_15
            else if (result_1 == 0)
                *r14_1 = 2
            else
                result_5 = result_1
                var_168 = 0xffffff81
            label_142a5ff07:
                
                while (rdi.b == 0)
                    void* rax_19 = result_5[2]
                    
                    if (rax_19 == 0)
                        break
                    
                    *(rax_19 + 0x6c) += 1
                    result_5 = result_5[2]
        else
            char* rax_8 = j_sub_142a46ef0()
            void* rdx_4 = &var_148 - rax_8
            char i_3
            
            do
                i_3 = *rax_8
                *(rdx_4 + rax_8) = i_3
                rax_8 = &rax_8[1]
            while (i_3 != 0)
            result_1 = nullptr
            r14.b = 0
            char* _Str2_1 = j_sub_142a46ef0()
            rsi.b = 1
            int32_t rcx_8
            
            while (true)
                if (r14.b == 0)
                    char** result_3 = sub_142a60920(&var_148, result_2, &var_168)
                    rcx_8 = var_168
                    result_1 = result_3
                    
                    if (rcx_8 s> 0)
                        result_1 = nullptr
                        break
                    
                    uint64_t _MaxCount_1 = -1
                    
                    do
                        _MaxCount_1 += 1
                    while (*(&var_148 + _MaxCount_1) != 0)
                    
                    strncmp(&var_148, _Str2_1, _MaxCount_1)
                    int32_t rax_9 = result_1[0xe].d
                    r14.b = rax_9 == 0
                    
                    if (rax_9 == 0)
                        char* rcx_10 = *result_1
                        char* rdx_7 = &var_148
                        char i_4
                        
                        do
                            i_4 = *rcx_10
                            rcx_10 = &rcx_10[1]
                            *rdx_7 = i_4
                            rdx_7 = &rdx_7[1]
                        while (i_4 != 0)
                    else
                        *(result_1 + 0x6c) -= 1
                        result_1 = nullptr
                        var_168 = 0xffffff80
                    
                    int64_t rax_10 = 0
                    bool cond:4_1
                    
                    while (true)
                        char rcx_11 = *(&var_148 + rax_10)
                        rax_10 += 1
                        char temp2_1 = *(rax_10 + 0x143613e9b)
                        cond:4_1 = rcx_11 == temp2_1
                        
                        if (rcx_11 != temp2_1)
                            break
                        
                        if (rax_10 == 5)
                            cond:4_1 = rcx_11 == *(rax_10 + 0x143613e9b)
                            break
                    
                    rdi.b = cond:4_1
                    char* rax_11 = strrchr(&var_148, 0x5f)
                    
                    if (rax_11 == 0)
                        rsi.b = 0
                    else
                        *rax_11 = 0
                        rsi.b = 1
                        
                        if (var_148.b != 0)
                            continue
                        else
                            var_148 = 0x646e75
                            continue
                
                rcx_8 = var_168
                break
            
            if (rcx_8 != 7)
                var_168 = 0xffffff81
                
                if (result_1 == 0)
                    goto label_142a5fdd8
                
                goto label_142a5fcfe
            
            r14_1 = var_160
            *r14_1 = rcx_8
    
label_142a5ff22:
    sub_142a615c0()
    sub_142a860d0(&data_144015690)
    
    if (*r14_1 s> 0)
        result = nullptr
    else
        int32_t rax_20 = var_168
        
        if (rax_20 != 0)
            *r14_1 = rax_20
        
        result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_198)
return result
