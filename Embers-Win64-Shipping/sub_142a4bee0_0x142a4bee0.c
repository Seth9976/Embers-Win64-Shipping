// 函数: sub_142a4bee0
// 地址: 0x142a4bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
char* string_4 = arg1
int32_t i = 0
int32_t var_1b4 = 0
int32_t var_1b0 = 0
char* var_1a0 = nullptr
char* var_198 = nullptr
uint64_t result

if (*arg5 s<= 0)
    int32_t rsi_1 = 0x9d
    int32_t j_2 = 0x9d
    char* string_3
    
    if (string_4 == 0)
        string_4 = sub_142a46ef0()
        string_3 = string_4
    else if (strstr(string_4, &data_143613e98) != 0)
        string_3 = string_4
    else if (sub_142a4ca80(string_4) != 1)
        string_3 = string_4
    else
        void var_e8
        int32_t rax_4 = sub_142a8b1a0(string_4, &var_e8, 0x9d, nullptr, arg5)
        int32_t rax_5
        
        if (rax_4 s> 0)
            rax_5 = *arg5
        
        if (rax_4 s<= 0 || rax_5 s> 0 || rax_5 == 0xffffff84)
            bool cond:0_1 = *arg5 != 0xffffff84
            string_3 = string_4
            
            if (not(cond:0_1))
                *arg5 = 0xf
        else
            string_4 = &var_e8
            string_3 = string_4
    
    char _Source[0xa0]
    char* _Str1
    
    if (arg2 == 0 || arg3 s< 0x9d)
        _Str1 = &_Source
    else
        _Str1 = arg2
        j_2 = arg3
        rsi_1 = arg3
    
    int64_t rbx_1 = sx.q(sub_142a4e610(string_4, _Str1, rsi_1, &string_3))
    int64_t r13_1 = -1
    int32_t rax_8
    
    if (rbx_1.d == 9)
        rax_8 = strncmp(string_4, "i-default", zx.q(rbx_1.d))
    
    int32_t* var_1f8
    void* string_1
    
    if (rbx_1.d != 9 || rax_8 != 0)
        string_1 = string_3
        char rax_10 = *string_1
        
        if (rax_10 == 0x5f || rax_10 == 0x2d)
            i = 1
            
            if (rbx_1.d s< rsi_1)
                _Str1[rbx_1] = 0x5f
            
            rbx_1 = zx.q(rbx_1.d + 1)
            char* rdx_4
            
            if (rbx_1.d s>= rsi_1)
                rdx_4 = nullptr
            else
                rdx_4 = &_Str1[sx.q(rbx_1.d)]
            
            int32_t rax_11 = sub_142a4e860(string_1 + 1, rdx_4, rsi_1 - rbx_1.d, &string_3)
            var_1b4 = rax_11
            
            if (rax_11 s> 0)
                string_1 = string_3
                rbx_1 = zx.q(rbx_1.d + rax_11)
                i = 2
                char rcx_7 = *string_1
                
                if (rcx_7 == 0x5f || rcx_7 == 0x2d)
                    if (rbx_1.d s< rsi_1)
                        _Str1[sx.q(rbx_1.d)] = 0x5f
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
            
            char rax_13 = *string_1
            
            if (rax_13 == 0x5f || rax_13 == 0x2d)
                char* rdx_6
                
                if (rbx_1.d s>= rsi_1)
                    rdx_6 = nullptr
                else
                    rdx_6 = &_Str1[sx.q(rbx_1.d)]
                
                int32_t rax_14 = sub_142a4e420(string_1 + 1, rdx_6, rsi_1 - rbx_1.d, &string_3)
                
                if (rax_14 s> 0)
                    string_1 = string_3
                    rbx_1 = zx.q(rbx_1.d + rax_14)
                
                char rcx_9 = *string_1
                
                if (rcx_9 == 0x5f || rcx_9 == 0x2d)
                    if (rax_14 s>= 0)
                        char rax_15 = *(string_1 + 1)
                        
                        if (rax_15 != 0x5f && rax_15 != 0x2d)
                            i += 1
                            
                            if (rbx_1.d s< rsi_1)
                                _Str1[sx.q(rbx_1.d)] = 0x5f
                            
                            rbx_1 = zx.q(rbx_1.d + 1)
                    
                    void* r8_8
                    
                    if (rbx_1.d s>= rsi_1)
                        r8_8 = nullptr
                    else
                        r8_8 = &_Str1[sx.q(rbx_1.d)]
                    
                    var_1f8.b = 0
                    int32_t rax_17 =
                        sub_142a4c930(string_1 + 1, *string_1, r8_8, rsi_1 - rbx_1.d, var_1f8.b)
                    var_1b0 = rax_17
                    
                    if (rax_17 s> 0)
                        rbx_1 = zx.q(rbx_1.d + rax_17)
                        string_1 += sx.q(rax_17 + 1)
    else
        char* rax_9 = sub_142a46ef0()
        rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rax_9[rbx_1] != 0)
        
        if (_Str1 != 0)
            memcpy(_Str1, rax_9, rbx_1.d)
        
        string_1 = string_3
    
    int64_t rsi_2 = sx.q(rsi_1)
    int32_t r12_2 = arg4 & 1
    
    if (r12_2 == 0 && *string_1 == 0x2e)
        int64_t rax_18 = sx.q(rbx_1.d)
        
        while (true)
            char rcx_12 = *string_1
            
            if ((rcx_12 & 0xbf) == 0)
                break
            
            if (rax_18 s< rsi_2)
                _Str1[rax_18] = rcx_12
            
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_18 += 1
            string_1 += 1
    
    char* string
    char* _Str2
    string, _Str2 = strchr(string_1, 0x40)
    void* string_2 = string
    char* rdi
    
    if (string == 0)
        rdi = var_1a0
    else
        char* rax_19 = strchr(string, 0x3d)
        rdi = rax_19
        var_1a0 = rax_19
        char* rax_20
        rax_20, _Str2 = strchr(string_2, 0x3b)
        var_198 = rax_20
    
    int32_t j_1
    
    if (r12_2 != 0)
        if (string_2 == 0 || rdi != 0)
            j_1 = j_2
        else
            if (i u< 2)
            label_142a4c2be:
                int64_t rax_24 = sx.q(rbx_1.d)
                
                do
                    if (rax_24 s< rsi_2)
                        _Str1[rax_24] = 0x5f
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                    i += 1
                    rax_24 += 1
                while (i s< 2)
            else if (i u< 3 && var_1b4 s> rdi.d)
                goto label_142a4c2be
            
            j_1 = j_2
            _Str2.b = var_1b0 s> 0
            var_1f8.b = _Str2.b
            _Str2.b = 0x40
            int32_t rax_25 = sub_142a4c930(string_2 + 1, _Str2.b, &_Str1[sx.q(rbx_1.d)], 
                j_1 - rbx_1.d, var_1f8.b)
            
            if (rax_25 s> 0)
                rbx_1 = zx.q(rbx_1.d + rax_25)
        
        int32_t rbp = 0
        
        for (char const (** const i_1)[0xb] = &data_1436116d0; i_1 s< &data_143611770; 
                i_1 = &i_1[2])
            _Str2 = *i_1
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (_Str2[rdi_1] != 0)
            
            if (rbx_1.d == rdi_1.d)
                int32_t rax_26
                rax_26, _Str2 = strncmp(_Str1, _Str2, sx.q(rdi_1.d))
                
                if (rax_26 == 0)
                    if (rdi_1.d != 0 || string_2 == 0)
                        char* _Str1_1 = _Str1
                        char* rbx_3 = (&data_1436116d8)[sx.q(rbp) * 2]
                        int32_t j = j_1
                        int32_t r8_14 = rbx_3.d
                        _Str2 = zx.q(*rbx_3)
                        
                        if (_Str2.b == 0)
                        label_142a4c3a5:
                            rbx_1 = zx.q(rbx_3.d - r8_14)
                        else
                            while (j s> 0)
                                rbx_3 = &rbx_3[1]
                                *_Str1_1 = _Str2.b
                                _Str1_1 = &_Str1_1[1]
                                j -= 1
                                _Str2 = zx.q(*rbx_3)
                                
                                if (_Str2.b == 0)
                                    goto label_142a4c3a5
                            
                            do
                                r13_1 += 1
                            while (rbx_3[r13_1] != 0)
                            
                            rbx_1 = zx.q(rbx_3.d - r8_14 + r13_1.d)
                    
                    break
            
            rbp += 1
    else
        if (string_2 != 0 && rdi == 0)
            char i_2 = *string_2
            
            if (i_2 != 0)
                int64_t rax_21 = sx.q(rbx_1.d)
                
                do
                    if (rax_21 s< rsi_2)
                        _Str1[rax_21] = i_2
                    
                    i_2 = *(string_2 + 1)
                    string_2 += 1
                    rbx_1 = zx.q(rbx_1.d + 1)
                    rax_21 += 1
                while (i_2 != 0)
        
        j_1 = j_2
    
    int32_t* rdi_2
    
    if ((arg4.b & 2) != 0 || string_2 == 0 || var_1a0 == 0 || (var_198 != 0 && var_198 u<= var_1a0))
        rdi_2 = arg5
    else
        if (rbx_1.d s< j_1)
            _Str1[sx.q(rbx_1.d)] = 0x40
        
        void* r8_10
        
        if (rbx_1.d + 1 s>= j_1)
            r8_10 = nullptr
        else
            r8_10 = &_Str1[sx.q(rbx_1.d + 1)]
        
        rdi_2 = arg5
        _Str2.b = 0x40
        rbx_1 = zx.q(rbx_1.d + 1 + sub_142a4c490(string_2 + 1, _Str2.b, r8_10, j_1 - (rbx_1.d + 1), 
            0, 0, nullptr, 1, rdi_2))
    
    int32_t rbp_1
    
    if (*rdi_2 s> 0 || arg2 == 0)
        rbp_1 = arg3
    else
        rbp_1 = arg3
        
        if (_Str1 == &_Source)
            int32_t rax_30 = rbx_1.d
            
            if (rbx_1.d s> rbp_1)
                rax_30 = rbp_1
            
            strncpy(arg2, &_Source, sx.q(rax_30))
    
    result = sub_142a8c3f0(arg2, rbp_1, rbx_1.d, rdi_2)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
