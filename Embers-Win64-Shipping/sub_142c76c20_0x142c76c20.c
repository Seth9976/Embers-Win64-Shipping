// 函数: sub_142c76c20
// 地址: 0x142c76c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t arg_8 = 0

if (j_sub_142c704d0("CSeq:", arg2, 5) == 0)
    int32_t rax_5
    int64_t r8_2
    rax_5, r8_2 = j_sub_142c704d0("Session:", arg2, 8)
    
    if (rax_5 != 0)
        char rax_6 = arg2[8]
        void* _Str1 = &arg2[8]
        
        if (rax_6 == 0)
        label_142c76cf2:
            sub_142c64760(rsi, "Got a blank Session ID", r8_2, arg3)
        else
            while (true)
                int32_t rax_7
                rax_7, r8_2 = isspace(zx.d(rax_6))
                
                if (rax_7 == 0)
                    break
                
                rax_6 = *(_Str1 + 1)
                _Str1 += 1
                
                if (rax_6 == 0)
                    goto label_142c76cf2_1
            
            if (*_Str1 == 0)
            label_142c76cf2_1:
                sub_142c64760(rsi, "Got a blank Session ID", r8_2, arg3)
            else
                char* _Str2 = *(rsi + 0x798)
                
                if (_Str2 == 0)
                    void* _Str1_1 = _Str1
                    int32_t rax_10
                    
                    do
                        char rax_9 = *_Str1_1
                        
                        if (rax_9 == 0x3b)
                            break
                        
                        rax_10 = isspace(zx.d(rax_9))
                        
                        if (rax_10 != 0)
                            break
                        
                        _Str1_1 += 1
                    while (*_Str1_1 != rax_10.b)
                    void* rbp_2 = _Str1_1 - _Str1
                    int64_t rax_11 = data_143ccb898(rbp_2 + 1)
                    *(rsi + 0x798) = rax_11
                    
                    if (rax_11 == 0)
                        return 0x1b
                    
                    memcpy(rax_11, _Str1, rbp_2.d)
                    *(*(rsi + 0x798) - _Str1 + _Str1_1) = 0
                else
                    uint64_t _MaxCount = -1
                    
                    do
                        _MaxCount += 1
                    while (_Str2[_MaxCount] != 0)
                    
                    if (strncmp(_Str1, _Str2, _MaxCount) != 0)
                        *(rsi + 0x798)
                        sub_142c64760(rsi, "Got RTSP Session ID Line [%s], but wanted ID [%s]", 
                            _Str1, arg3)
                        return 0x56
else
    if (sub_1425f29b0(&arg2[4], ": %ld", &arg_8) != 1)
        sub_142c64760(rsi, "Unable to read the CSeq header: [%s]", arg2, arg3)
        return 0x55
    
    *(*(rsi + 0x250) + 0x8c) = arg_8
    *(rsi + 0x4e60) = arg_8

return 0
