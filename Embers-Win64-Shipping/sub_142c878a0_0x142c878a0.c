// 函数: sub_142c878a0
// 地址: 0x142c878a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char* rax_2 = *arg2
char* _FileName = arg4
int32_t result_1 = 1
int64_t r13

if (rax_2 == 0 || *rax_2 == 0)
    r13 = 0
else
    r13 = 1

int64_t rdi
rdi.b = 0
int32_t rsi = 0
int64_t r14
r14.b = 0
int64_t rbp
rbp.b = 0
int32_t r12 = 0

if (_FileName != 0)
    goto label_142c87962

int64_t rax_3 = j_sub_142c87750("HOME")
uint64_t result

if (rax_3 == 0)
    result = zx.q(result_1)
else
    _FileName = sub_142c563e0("%s%s%s", rax_3, arg5)
    data_143ccb8a0(rax_3)
    
    if (_FileName != 0)
        rdi = 1
    label_142c87962:
        FILE* _Stream_1 = fopen(_FileName, "rt")
        FILE* _Stream = _Stream_1
        
        if (rdi.b != 0)
            data_143ccb8a0(_FileName)
            _Stream_1 = _Stream
        
        if (_Stream_1 != 0)
            while (true)
            label_142c8799d:
                void _Buffer
                
                if (fgets(&_Buffer, 0x100, _Stream_1) == 0)
                    break
                
                void var_168
                char* rax_6 = sub_142c70cb0(&_Buffer, " \t\n", &var_168)
                char* rbx = rax_6
                
                if (rax_6 != 0)
                    _Stream_1 = _Stream
                    
                    if (*rax_6 == 0x23)
                        continue
                
                while (true)
                    if (rbx == 0)
                        _Stream_1 = _Stream
                        goto label_142c8799d
                    
                    char* rcx_5 = *arg2
                    
                    if (rcx_5 != 0 && *rcx_5 != 0)
                        char* rax_8 = *arg3
                        
                        if (rax_8 != 0 && *rax_8 != 0)
                            break
                    
                    if (rsi == 0)
                        if (sub_142c70460("machine", rbx) == 0)
                            if (sub_142c70460("default", rbx) != 0)
                                result_1 = 0
                                rsi = 2
                        else
                            rsi = 1
                    else if (rsi == 1)
                        if (sub_142c70460(arg1, rbx) != 0)
                            result_1 = 0
                            rsi = 2
                        else
                            rsi = 0
                    else if (rsi == 2)
                        if (r14.b == 0)
                            if (rbp.b == 0)
                                if (sub_142c70460("login", rbx) == 0)
                                    if (sub_142c70460("password", rbx) == 0)
                                        if (sub_142c70460("machine", rbx) != 0)
                                            rsi = 1
                                            r12 = 0
                                    else
                                        rbp.b = 1
                                else
                                    r14.b = 1
                            else
                                int64_t rax_13
                                
                                if (r12 != 0 || r13 == 0)
                                    data_143ccb8a0(*arg3)
                                    rax_13 = data_143ccb8b0(rbx)
                                    *arg3 = rax_13
                                
                                if ((r12 != 0 || r13 == 0) && rax_13 == 0)
                                    result_1 = -1
                                    break
                                
                                rbp.b = 0
                        else if (r13 == 0)
                            data_143ccb8a0()
                            int64_t rax_12 = data_143ccb8b0(rbx)
                            *arg2 = rax_12
                            
                            if (rax_12 == 0)
                                result_1 = -1
                                break
                            
                            r14.b = 0
                        else
                            r12 = sub_142c70460(rcx_5, rbx)
                            r14.b = 0
                    
                    rbx = sub_142c70cb0(nullptr, " \t\n", &var_168)
                
                break
            
            fclose(_Stream)
        
        result = zx.q(result_1)
    else
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_1a8)
return result
