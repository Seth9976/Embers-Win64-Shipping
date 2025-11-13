// 函数: sub_142c8a5d0
// 地址: 0x142c8a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void** r12 = arg3
int32_t result = 0
int64_t* r15 = arg2
int64_t** i_4 = nullptr
void* rsi = arg1
int64_t var_328 = 0
int64_t r14 = 0
*arg2 = 0

if (arg3 != 0)
    int64_t var_290
    __builtin_strncpy(&var_290, "------------------------", 0x18)
    void var_278
    int512_t zmm2_1 = sub_142c91160(arg1, &var_278, 0x11)
    char const* const r9 = "Content-Type: multipart/form-data"
    int64_t* var_338_1 = &var_290
    
    if (arg4 != 0)
        r9 = arg4
    
    int64_t r9_1
    int512_t zmm2_2
    result, r9_1, zmm2_2 = sub_142c8a340(&i_4, nullptr, "%s; boundary=%s\r\n", r9, zmm2_1)
    
    if (result == 0)
        int64_t** i_3 = i_4
        int32_t result_1
        
        while (true)
            if (r14 != 0)
                int32_t result_2
                result_2, zmm2_2 = sub_142c8a340(&i_4, &var_328, "\r\n", r9_1, zmm2_2)
                result_1 = result_2
                
                if (result_2 != 0)
                    break
            
            int32_t result_3
            int64_t r9_3
            int512_t zmm2_3
            result_3, r9_3, zmm2_3 = sub_142c8a340(&i_4, &var_328, "--%s\r\n", &var_290, zmm2_2)
            result_1 = result_3
            
            if (result_3 != 0)
                break
            
            int32_t result_4
            int512_t zmm2_4
            result_4, zmm2_4 = sub_142c8a340(&i_4, &var_328, 
                "Content-Disposition: form-data; name="", r9_3, zmm2_3)
            result_1 = result_4
            
            if (result_4 != 0)
                break
            
            int32_t result_5
            int64_t r9_5
            result_5, r9_5 = sub_142c8a1a0(&i_4, result_1 + 1, r12[1], sx.q(r12[2].d), &var_328)
            result_1 = result_5
            
            if (result_5 != 0)
                break
            
            int32_t result_6
            result_6, zmm2_2 = sub_142c8a340(&i_4, &var_328, U""", r9_5, zmm2_4)
            result_1 = result_6
            
            if (result_6 != 0)
                break
            
            int64_t var_2c0
            
            if (r12[9] != 0)
                __builtin_strncpy(&var_2c0, "------------------------", 0x18)
                void var_2a8
                int32_t result_7
                result_7, zmm2_2 = sub_142c8a340(&i_4, &var_328, 
                    "\r\nContent-Type: multipart/mixed; boundary=%s\r\n", &var_2c0, 
                    sub_142c91160(rsi, &var_2a8, zx.q(result_6 + 0x11)))
                result_1 = result_7
                
                if (result_7 != 0)
                    break
            
            void** r13_1 = r12
            
            while (true)
                bool cond:2_1
                
                if (r12[9] != 0)
                    int32_t result_8
                    int512_t zmm2_6
                    result_8, zmm2_6 = sub_142c8a340(&i_4, &var_328, 
                        "\r\n--%s\r\nContent-Disposition: attachment", &var_2c0, zmm2_2)
                    result_1 = result_8
                    
                    if (result_8 != 0)
                        goto label_142c8abca
                    
                    int32_t result_9
                    result_9, zmm2_2 = sub_142c8ad20(r13_1, &i_4, &var_328, zmm2_6)
                    result_1 = result_9
                    cond:2_1 = result_9 != 0
                    goto label_142c8a814
                
                char rax_3 = (r12[0xa].d).b
                
                if ((rax_3 & 0x51) != 0)
                    if (r12[0xb] != 0 || (rax_3 & 1) != 0)
                        int32_t result_10
                        result_10, zmm2_2 = sub_142c8ad20(r12, &i_4, &var_328, zmm2_2)
                        result_1 = result_10
                    
                    cond:2_1 = result_1 != 0
                label_142c8a814:
                    
                    if (cond:2_1)
                        goto label_142c8abca
                
                int64_t r9_8 = r13_1[7]
                
                if (r9_8 != 0)
                    int32_t result_11
                    result_11, r9_8, zmm2_2 =
                        sub_142c8a340(&i_4, &var_328, "\r\nContent-Type: %s", r9_8, zmm2_2)
                    result_1 = result_11
                    
                    if (result_11 != 0)
                        goto label_142c8abca
                
                int64_t* i = r13_1[8]
                
                if (i != 0)
                    do
                        int32_t result_12
                        result_12, r9_8, zmm2_2 =
                            sub_142c8a340(&i_4, &var_328, "\r\n%s", *i, zmm2_2)
                        result_1 = result_12
                        
                        if (result_12 != 0)
                            goto label_142c8abca
                        
                        i = i[1]
                    while (i != 0)
                else if (result_1 != 0)
                    goto label_142c8abca
                
                int32_t result_13
                result_13, r9_1, zmm2_2 = sub_142c8a340(&i_4, &var_328, "\r\n\r\n", r9_8, zmm2_2)
                result_1 = result_13
                
                if (result_13 != 0)
                    goto label_142c8abca
                
                char rax_4 = (r12[0xa].d).b
                
                if ((rax_4 & 3) != 0)
                    char* _FileName = r13_1[3]
                    FILE* _Stream
                    
                    if (0x2d != *_FileName || 0 != _FileName[1])
                        _Stream, r9_1 = fopen(_FileName, "rb")
                    else
                        _Stream, r9_1 = __acrt_iob_func(0)
                    
                    if (_Stream == 0)
                        if (rsi != 0)
                            r9_1, zmm2_2 =
                                sub_142c64760(rsi, "couldn't open file "%s"", r13_1[3], zmm2_2)
                        
                        r15 = arg2
                        result_1 = 0x1a
                        r14 = var_328
                        *r15 = 0
                    else
                        if (_Stream == __acrt_iob_func(0))
                            char _Buffer[0x200]
                            uint64_t rax_8
                            rax_8, r9_1 = fread(&_Buffer, 1, 0x200, _Stream)
                            r14 = var_328
                            uint64_t rbx_3 = rax_8
                            
                            if (rax_8 != 0)
                                void** i_10 = i_4
                                
                                while (true)
                                    if (rbx_3 s< 0 || r14 s< 0)
                                        result_1 = 0x2b
                                        break
                                    
                                    void** i_8
                                    i_8, r9_1 = data_143ccb898(0x20)
                                    
                                    if (i_8 != 0)
                                        *i_8 = nullptr
                                        
                                        if (rbx_3 == 0)
                                            rbx_3 = -1
                                            
                                            do
                                                rbx_3 += 1
                                            while (_Buffer[rbx_3] != 0)
                                        
                                        int64_t rax_9 = data_143ccb898(rbx_3 + 1)
                                        i_8[2] = rax_9
                                        
                                        if (rax_9 == 0)
                                            r9_1 = data_143ccb8a0(i_8)
                                        else
                                            memcpy(rax_9, &_Buffer, rbx_3.d)
                                            int64_t rax_10 = i_8[2]
                                            r14 += rbx_3
                                            var_328 = r14
                                            i_4 = i_8
                                            *(rbx_3 + rax_10) = 0
                                            i_8[3] = rbx_3
                                            i_8[1].d = 2
                                            
                                            if (i_10 != 0)
                                                *i_10 = i_8
                                            
                                            i_10 = i_8
                                            result_1 = 0
                                            int32_t rax_11
                                            rax_11, r9_1 = feof(_Stream)
                                            
                                            if (rax_11 != 0)
                                                break
                                            
                                            int32_t rax_12
                                            rax_12, r9_1 = ferror(_Stream)
                                            
                                            if (rax_12 != 0)
                                                break
                                            
                                            uint64_t rax_13
                                            rax_13, r9_1 = fread(&_Buffer, 1, 0x200, _Stream)
                                            rbx_3 = rax_13
                                            
                                            if (rax_13 == 0)
                                                break
                                            
                                            continue
                                    
                                    result_1 = 0x1b
                                    break
                                
                                rsi = arg1
                        else
                            r9_1 = fclose(_Stream)
                            r14 = var_328
                            char* _FileName_1 = r13_1[3]
                            
                            if (r14 s< 0)
                                result_1 = 0x2b
                            else
                                int64_t* i_6
                                i_6, r9_1 = data_143ccb898(0x20)
                                
                                if (i_6 != 0)
                                    *i_6 = 0
                                    i_6[2] = _FileName_1
                                    i_6[1].d = 4
                                    
                                    if (0x2d == *_FileName_1 && 0 == _FileName_1[1])
                                        goto label_142c8aa7c
                                    
                                    struct _stat64 _Stat
                                    int32_t rax_6
                                    rax_6, r9_1 = _stat64(_FileName_1, &_Stat)
                                    
                                    if (rax_6 != 0 || (_Stat.st_mode & 0xf000) == 0x4000)
                                        r9_1 = data_143ccb8a0(i_6)
                                        result_1 = 0x2b
                                    else
                                        r14 += _Stat.st_size
                                        var_328 = r14
                                    label_142c8aa7c:
                                        int64_t** i_7 = i_4
                                        i_4 = i_6
                                        
                                        if (i_7 != 0)
                                            *i_7 = i_6
                                        
                                        result_1 = 0
                                else
                                    result_1 = (i_6 + 0x1b).d
                        
                        r15 = arg2
                else if ((rax_4 & 0x10) != 0)
                    int32_t result_14
                    result_14, r9_1 =
                        sub_142c8a1a0(&i_4, result_1 + 2, r12[5], sx.q(r12[6].d), &var_328)
                    r14 = var_328
                    result_1 = result_14
                else if ((rax_4 & 0x40) == 0)
                    int64_t r9_11
                    
                    if (rax_4 s>= 0)
                        r9_11 = sx.q(r12[4].d)
                    else
                        r9_11 = r12[0xd]
                    
                    int32_t result_15
                    result_15, r9_1 = sub_142c8a1a0(&i_4, 2, r12[3], r9_11, &var_328)
                    r14 = var_328
                    result_1 = result_15
                else
                    int64_t rbx_1
                    
                    if (rax_4 s>= 0)
                        rbx_1 = sx.q(r12[4].d)
                    else
                        rbx_1 = r12[0xd]
                    
                    int64_t rdi_1 = r12[0xc]
                    r14 = var_328
                    
                    if (rbx_1 s< 0 || r14 s< 0)
                        result_1 = 0x2b
                    else
                        int64_t* i_5
                        i_5, r9_1 = data_143ccb898(0x20)
                        
                        if (i_5 != 0)
                            int64_t** i_9 = i_4
                            r14 += rbx_1
                            *i_5 = 0
                            i_5[2] = rdi_1
                            i_5[1].d = 3
                            var_328 = r14
                            i_4 = i_5
                            
                            if (i_9 != 0)
                                *i_9 = i_5
                            
                            result_1 = 0
                        else
                            result_1 = (i_5 + 0x1b).d
                
                r13_1 = r13_1[9]
                
                if (r13_1 == 0)
                    if (result_1 != 0)
                        goto label_142c8abca
                    
                    if (r12[9] != 0)
                        int32_t result_16
                        result_16, r9_1, zmm2_2 =
                            sub_142c8a340(&i_4, &var_328, "\r\n--%s--", &var_2c0, zmm2_2)
                        result_1 = result_16
                        
                        if (result_16 != 0)
                            goto label_142c8abca
                        
                        r14 = var_328
                    
                    r12 = *r12
                    
                    if (r12 != 0)
                        break
                    
                    if (result_1 != 0)
                        goto label_142c8abca
                    
                    int32_t result_17 =
                        sub_142c8a340(&i_4, &var_328, "\r\n--%s--\r\n", &var_290, zmm2_2)
                    result_1 = result_17
                    
                    if (result_17 != 0)
                        goto label_142c8abca
                    
                    *arg5 = var_328
                    *r15 = i_3
                    result = 0
                    goto label_142c8ac15
                
                if (result_1 != 0)
                    goto label_142c8abca
        
    label_142c8abca:
        int64_t** i_2 = i_3
        
        if (i_2 != 0)
            int64_t* i_1
            
            do
                i_1 = *i_2
                
                if (i_2[1].d s<= 2)
                    data_143ccb8a0(i_2[2])
                
                data_143ccb8a0(i_2)
                i_2 = i_1
            while (i_1 != 0)
        
        result = result_1

label_142c8ac15:
__security_check_cookie(rax_1 ^ &var_358)
return result
