// 函数: sub_142a60bf0
// 地址: 0x142a60bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
char** result_3 = arg8
void* string_2 = arg5
char** result = arg6
char* result_1 = result
int32_t var_338 = arg2
void* var_358 = arg1

if (arg9 == 0 || *arg9 s> 0)
    result = result_3
else if (result == 0)
    *arg9 = 1
else if ((arg2 & 0xf0000000) != 0x30000000)
    if (result_3 != 0)
        void* rcx_32 = result_3[1]
        
        if (rcx_32 != 0)
            sub_142a5f960(rcx_32)
        
        int64_t rcx_33 = result_3[2]
        
        if (rcx_33 != 0)
            sub_142a7dcd0(rcx_33)
        
        if (result_1 != result_3)
            sub_142a61a20(result_3)
        
        goto label_142a61295
    
    char** result_7 = sub_142a7dd00(0xc8)
    result_3 = result_7
    
    if (result_7 == 0)
        *arg9 = 7
        result = nullptr
    else
        *(result_7 + 0xb4) = 0x12c9b17
        result_7[0x17].d = 0x12bb38b
        result_3[4] = 0
        result_3[0x15].d = 0
    label_142a61295:
        void* string_10 = string_2
        result_3[1] = string_10
        sub_142a5f9a0(string_10)
        char* result_8 = result_1
        uint64_t r8_10 = -1
        result_3[0x16].w = 0
        *(result_3 + 0xbc) = 0xffffffff
        *result_3 = arg3
        result_3[3] = *(result_8 + 0x18)
        char* rdx_16 = *(result_8 + 0x20)
        
        if (rdx_16 != 0 && result_8 != result_3)
            sub_142a616f0(result_3, rdx_16, *(result_8 + 0xa8), arg9)
            r8_10 = -1
        
        char* rdx_17
        
        if (arg3 != 0)
            do
                r8_10 += 1
            while (arg3[r8_10] != 0)
            
            rdx_17 = arg3
            goto label_142a6132d
        
        if (arg4 s>= 0)
            void var_138
            r8_10 = zx.q(sub_142a86100(&var_138, arg4, 0xa))
            rdx_17 = &var_138
        label_142a6132d:
            sub_142a616f0(result_3, rdx_17, r8_10.d, arg9)
            
            if (result_3[4][sx.q(result_3[0x15].d - 1)] != 0x2f)
                sub_142a616f0(result_3, &data_14363dfe8, 1, arg9)
        
        int32_t rax_43
        
        if (&result_3[0xd] != result_3[4])
            rax_43 = 0
        else
            rax_43 = result_3[0x15].d
        
        int64_t rax_44 = sx.q(rax_43)
        memset(rax_44 + 0x68 + result_3, 0, 0x40 - rax_44)
        void* rdx_19 = var_358
        *(result_3 + 0xac) = var_338
        result_3[2] = 0
        memmove(&result_3[5], rdx_19, 0x40)
        result_3[0x18].d = sub_142ac3690(&result_3[5], *(result_3 + 0xac))
        result = result_3
else if (arg7 s>= 0x100)
    *arg9 = 0x18
    result = result_3
else
    uint32_t count_4 = 0
    uint32_t count_1 = 0
    void* rax_5 = sub_142ac38f0(arg1, arg2, &count_1)
    uint32_t count_2 = count_1
    var_358 = rax_5
    
    if (count_2 s<= 0)
        *arg9 = 1
        result = result_3
    else
        char* result_4 = result_1
        uint32_t count_3 = count_2 + 1
        count_1 = count_3
        char* rax_6 = *(result_4 + 0x20)
        
        if (rax_6 != 0)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (rax_6[rsi_1] != 0)
            
            count_4 = rsi_1.d + 1
        
        if (count_4 s< count_3)
            count_4 = count_3
        
        void* string
        void* string_4
        
        if (count_4 s> 0xc8)
            string_4 = sub_142a7dd00(sx.q(count_4))
            string = string_4
            
            if (string_4 != 0)
                count_3 = count_1
                goto label_142a60d2b
            
            *arg9 = 7
            result = nullptr
        else
            void var_308
            string_4 = &var_308
            count_4 = 0xc8
            string = &var_308
        label_142a60d2b:
            sub_142a8d6e0(var_358, string_4, count_3)
            void* string_3
            char** rcx_7
            void* string_7
            
            if (*string != 0x2f)
                char* string_9 = strchr(string, 0x2f)
                string_3 = string_9
                
                if (string_9 != 0)
                    *string_9 = 0
                    string_3 = &string_9[1]
                
                string_7 = string
            label_142a60e4e:
                rcx_7 = *(string_2 + 8)
            else
                var_358 = string + 1
                char* rax_8 = strchr(string + 1, 0x2f)
                void* string_1
                
                if (rax_8 != 0)
                    *rax_8 = 0
                    string_1 = &rax_8[1]
                else
                    string_1 = strchr(string, 0)
                
                void* rdx_1 = var_358
                int64_t rcx_4 = 0
                
                while (true)
                    char rax_10 = *(rdx_1 + rcx_4)
                    rcx_4 += 1
                    
                    if (rax_10 != *(rcx_4 + 0x14363dfd3))
                        int64_t rax_13 = 0
                        bool cond:0_1
                        
                        while (true)
                            char rcx_5 = *(rdx_1 + rax_13)
                            rax_13 += 1
                            char temp0_1 = *(rax_13 + 0x14363dfdf)
                            cond:0_1 = rcx_5 == temp0_1
                            
                            if (rcx_5 != temp0_1)
                                break
                            
                            if (rax_13 == 8)
                                cond:0_1 = rcx_5 == *(rax_13 + 0x14363dfdf)
                                break
                        
                        if (cond:0_1)
                            rdx_1 = nullptr
                        
                        var_358 = rdx_1
                        char* string_8 = strchr(string_1, 0x2f)
                        rcx_7 = var_358
                        string_7 = string_1
                        string_3 = string_8
                        
                        if (string_8 != 0)
                            *string_8 = 0
                            string_3 = &string_8[1]
                        
                        break
                    
                    if (rcx_4 == 7)
                        string_3 = string_1
                        string_7 = **(result_1 + 0x18)
                        goto label_142a60e4e
            
            var_358 = nullptr
            var_338 = 0
            char** string_14
            uint64_t rdx_3
            string_14, rdx_3 = sub_142a61b10(nullptr, rcx_7, string_7, 2, &var_338)
            char** string_13 = string_14
            int32_t rax_16 = var_338
            char** result_2
            char** string_17
            
            if (rax_16 s> 0)
                *arg9 = rax_16
                string_17 = string_13
                result_2 = result_3
            label_142a611ec:
                
                if (string != &var_308)
                    sub_142a7dcd0(string)
                
                if (string_17 != result_2)
                    rdx_3.b = 1
                    sub_142a61820(string_17, rdx_3.b)
                
                result = result_2
            else
                void* string_12 = string_3
                
                if (string_12 != 0)
                    void* rsi_2 = string_13[1]
                    void var_238
                    void* result_9 = &var_238
                    result_1 = &var_238
                    int64_t rcx_22 = -1
                    void* result_10 = &var_238
                    int64_t rax_27 = -1
                    
                    do
                        rax_27 += 1
                    while (*(string_12 + rax_27) != 0)
                    
                    if (rax_27 u< 0x100)
                        goto label_142a610b6
                    
                    do
                        rcx_22 += 1
                    while (*(string_12 + rcx_22) != 0)
                    
                    void* result_11 = sub_142a7dd00(rcx_22 + 1)
                    result_10 = result_11
                    result_9 = result_11
                    
                    if (result_11 != 0)
                        string_12 = string_3
                        string_13 = string_14
                    label_142a610b6:
                        void* string_15 = string_12
                        rdx_3 = result_9 - string_12
                        int32_t var_318
                        var_318.q = rdx_3
                        char i
                        
                        do
                            i = *string_15
                            *(rdx_3 + string_15) = i
                            string_15 += 1
                        while (i != 0)
                        void* result_6 = result_1
                        string_2 = string_13
                        
                        while (true)
                            int32_t rbx_1 = *(rsi_2 + 0x48)
                            
                            if (*result_6 != 0)
                                while (*arg9 s<= 0)
                                    int32_t rax_29 =
                                        sub_142ac3730(rsi_2 + 0x28, rbx_1, &result_1, &var_358)
                                    rbx_1 = rax_29
                                    
                                    if (rax_29 == 0xffffffff)
                                        break
                                    
                                    char** rax_33 = sub_142a60bf0(rsi_2 + 0x28, zx.q(rbx_1), 
                                        var_358, 0xffffffff, rsi_2, string_2, arg7 + 1, result_3, 
                                        arg9)
                                    string_2 = rax_33
                                    result_3 = rax_33
                                    
                                    if (rax_33 != 0)
                                        rbx_1 = *(rax_33 + 0xac)
                                        rsi_2 = rax_33[1]
                                    
                                    if (*result_1 == 0)
                                        break
                                
                                rdx_3 = var_318.q
                                string_12 = string_3
                                result_9 = result_10
                            
                            rsi_2 = *(rsi_2 + 0x10)
                            void* string_16 = string_12
                            char i_1
                            
                            do
                                i_1 = *string_16
                                *(rdx_3 + string_16) = i_1
                                string_16 += 1
                            while (i_1 != 0)
                            result_6 = result_9
                            result_1 = result_6
                            
                            if (rbx_1 != 0xffffffff)
                                result_2 = string_2
                                break
                            
                            if (rsi_2 == 0)
                                result_2 = result_3
                                *arg9 = 2
                                break
                        
                        if (result_9 != &var_238)
                            sub_142a7dcd0(result_9)
                        
                        string_17 = string_14
                        goto label_142a611ec
                    
                    *arg9 = 7
                    sub_142a61820(string_14, 1)
                    result = nullptr
                else
                    void* string_11 = *(result_1 + 0x20)
                    string_2 = string_11
                    int32_t rdx_7
                    
                    if (string_11 == 0)
                        rdx_7 = *(string_13 + 0xac)
                    else
                        char* rdx_5 = string - string_11
                        char i_2
                        
                        do
                            i_2 = *string_11
                            *(rdx_5 + string_11) = i_2
                            string_11 += 1
                        while (i_2 != 0)
                        int32_t rdx_6 = *(string_13 + 0xac)
                        string_2 = string
                        string_13 = string_14
                        rdx_7 = sub_142ac3730(&string_13[5], rdx_6, &string_2, &var_358)
                    
                    char* rcx_14 = arg3
                    string_3.d = rdx_7
                    
                    if (rcx_14 == 0)
                        if (arg4 == 0xffffffff)
                            rdx_3 = zx.q(string_3.d)
                        else
                            uint32_t rcx_18 = rdx_7 u>> 0x1c
                            
                            if (((rcx_18 - 2) & 0xfffffffc) != 0 || rcx_18 == 3)
                                rdx_3 = zx.q(sub_142ac3940(&string_13[5], rdx_7, arg4))
                            else
                                rdx_3 = zx.q(sub_142ac3b90(&string_13[5], rdx_7, arg4, &string_2))
                        
                        string_17 = string_14
                        goto label_142a60ff0
                    
                    int64_t rax_19 = -1
                    
                    do
                        rax_19 += 1
                    while (rcx_14[rax_19] != 0)
                    
                    uint32_t count = rax_19.d + 1
                    count_1 = count
                    void* string_6
                    
                    if (count s<= count_4)
                        string_6 = string
                    label_142a60f80:
                        memcpy(string_6, rcx_14, count)
                        string_2 = string_6
                        string_17 = string_14
                        rdx_3 = zx.q(sub_142ac3730(&string_17[5], string_3.d, &string_2, &var_358))
                    label_142a60ff0:
                        
                        if (rdx_3.d == 0xffffffff)
                            *arg9 = 2
                            result_2 = result_3
                            goto label_142a611ec
                        
                        char** result_5
                        result_5, rdx_3 = sub_142a60bf0(&string_17[5], rdx_3, var_358, 0xffffffff, 
                            string_17[1], string_17, arg7 + 1, result_3, arg9)
                        result_2 = result_5
                        goto label_142a611ec
                    
                    void* string_5
                    
                    if (string != &var_308)
                        string_5 = sub_142a7dd30(string, sx.q(count))
                    else
                        string_5 = sub_142a7dd00(sx.q(count))
                    
                    string = string_5
                    string_6 = string_5
                    
                    if (string_5 != 0)
                        count = count_1
                        rcx_14 = arg3
                        goto label_142a60f80
                    
                    sub_142a61820(string_14, 1)
                    *arg9 = 7
                    result = nullptr

__security_check_cookie(rax_1 ^ &var_3b8)
return result
