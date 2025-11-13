// 函数: sub_1428059d0
// 地址: 0x1428059d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
*arg4 = 8
*arg3 = 0
*arg5 = 0
char* var_240
char result = (*(*arg1 + 0x10))(arg1, arg2, &var_240)

if (result == 0)
    return result

char* rsi_1 = var_240
int32_t i_1 = 0
uint32_t count = 0
int64_t r15_1 = 0

if (rsi_1 != 0)
    data_143f89498 += 1
    char* _EndPtr_5
    
    if (*rsi_1 == 0)
        _EndPtr_5 = &data_1434cce10
    else
        char* rax_2 = rsi_1
        
        do
            rbx = zx.q(rbx.d + 1)
            rax_2 = &rax_2[1]
        while (*rax_2 != 0)
        
        char* _EndPtr_6 = (*(*arg6 + 8))(arg6, zx.q((rbx + 1).d))
        _EndPtr_5 = _EndPtr_6
        memcpy(_EndPtr_6, rsi_1, rbx.d)
        _EndPtr_5[rbx] = 0
    
    char* _EndPtr_4 = _EndPtr_5
    char* _EndPtr = _EndPtr_4
    
    while (*_EndPtr_4 != 0)
        while (true)
            if (isspace(sx.d(*_EndPtr_4)) == 0)
                char* _EndPtr_1 = _EndPtr
                int64_t arg_18 = 0
                
                if (_EndPtr_1 != 0)
                    char rcx_5 = *_EndPtr_1
                    
                    if (rcx_5 != 0)
                        if (isspace(zx.d(rcx_5)) != 0)
                            int32_t i
                            
                            do
                                void* _EndPtr_2 = &_EndPtr[1]
                                _EndPtr = _EndPtr_2
                                i = isspace(zx.d(*_EndPtr_2))
                            while (i != 0)
                        
                        char* _String = _EndPtr
                        char var_238[0xd0]
                        
                        if (_String != 0)
                            char rax_10 = *_String
                            char (* rbx_1)[0xd0] = &var_238
                            
                            if (rax_10 != 0)
                                while (true)
                                    void var_39
                                    
                                    if (isspace(zx.d(rax_10)) != 0 || rbx_1 u>= &var_39)
                                        _String = _EndPtr
                                        break
                                    
                                    char* _EndPtr_3 = _EndPtr
                                    _String = &_EndPtr_3[1]
                                    *rbx_1 = *_EndPtr_3
                                    rbx_1 = &(*rbx_1)[1]
                                    _EndPtr = _String
                                    rax_10 = *_String
                                    
                                    if (rax_10 == 0)
                                        break
                                    
                                    continue
                            
                            *rbx_1 = 0
                        
                        char const (** rbx_2)[0xa] = &data_143b7c9b0
                        
                        if (data_143b7c9b0 != 0)
                            do
                                if (physx::shdfnd::stricmp(&var_238, *rbx_2) == 0)
                                    int32_t var_244_1 = 0
                                    arg_18 = rbx_2[1].d.q
                                
                                rbx_2 = &rbx_2[2]
                            while (*rbx_2 != 0)
                            
                            _String = _EndPtr
                        
                        arg_18:4.d = strtoul(_String, &_EndPtr, 0xa)
                
                if (i_1 u< count + 8)
                    i_1 = 0x20
                    
                    if (count + 8 u> 0x20)
                        do
                            i_1 *= 2
                        while (i_1 u< count + 8)
                    
                    int64_t rax_18 = (*(*arg6 + 8))(arg6, zx.q(i_1))
                    
                    if (count != 0)
                        memcpy(rax_18, r15_1, count)
                    
                    int64_t r8_3 = *arg6
                    (*(r8_3 + 0x10))(arg6, r15_1, r8_3)
                    r15_1 = rax_18
                
                uint64_t count_1 = zx.q(count)
                count += 8
                *(count_1 + r15_1) = arg_18
                _EndPtr_4 = _EndPtr
                break
            
            _EndPtr_4 = &_EndPtr_4[1]
            
            if (*_EndPtr_4 == 0)
                goto label_142805adb
    
label_142805adb:
    *arg3 = r15_1
    *arg5 = count u>> 3
    (*(*arg6 + 0x10))(arg6, _EndPtr_5)

return (*(*arg6 + 0x10))(arg6, 0)
