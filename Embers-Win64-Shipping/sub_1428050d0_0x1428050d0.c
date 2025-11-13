// 函数: sub_1428050d0
// 地址: 0x1428050d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0xc
*arg3 = 0
*arg5 = 0
char* arg_20
char result = (*(*arg1 + 0x10))(arg1, arg2, &arg_20)

if (result == 0)
    return result

uint32_t rbp_1 = 0
char* rsi_1 = arg_20
int32_t i = 0
uint32_t count = 0
int64_t r15_1 = 0

if (rsi_1 != 0)
    data_143f894d4 += 1
    char* _EndPtr_2
    
    if (*rsi_1 == 0)
        _EndPtr_2 = &data_1434cce10
    else
        char* rax_1 = rsi_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_1 = &rax_1[1]
        while (*rax_1 != 0)
        
        char* _EndPtr_3 = (*(*arg6 + 8))(arg6, zx.q((rbx_1 + 1).d))
        _EndPtr_2 = _EndPtr_3
        memcpy(_EndPtr_3, rsi_1, rbx_1.d)
        _EndPtr_2[rbx_1] = 0
    
    char* _EndPtr_1 = _EndPtr_2
    char* _EndPtr = _EndPtr_1
    
    while (*_EndPtr_1 != 0)
        while (true)
            if (isspace(sx.d(*_EndPtr_1)) == 0)
                char* _String = _EndPtr
                int64_t var_48_1 = 0
                
                if (_String != 0)
                    if (*_String != 0)
                        uint32_t rax_8 = strtoul(_String, &_EndPtr, 0xa)
                        _String = _EndPtr
                        var_48_1.d = rax_8
                    
                    if (_String != 0)
                        if (*_String != 0)
                            uint32_t rax_9 = strtoul(_String, &_EndPtr, 0xa)
                            _String = _EndPtr
                            var_48_1:4.d = rax_9
                        
                        if (_String != 0 && *_String != 0)
                            rbp_1 = strtoul(_String, &_EndPtr, 0xa)
                
                if (i u< count + 0xc)
                    i = 0x20
                    
                    if (count + 0xc u> 0x20)
                        do
                            i *= 2
                        while (i u< count + 0xc)
                    
                    int64_t rax_12 = (*(*arg6 + 8))(arg6, zx.q(i))
                    
                    if (count != 0)
                        memcpy(rax_12, r15_1, count)
                    
                    int64_t r8_3 = *arg6
                    (*(r8_3 + 0x10))(arg6, r15_1, r8_3)
                    r15_1 = rax_12
                
                uint64_t count_1 = zx.q(count)
                count += 0xc
                *(count_1 + r15_1) = var_48_1
                *(count_1 + r15_1 + 8) = rbp_1
                rbp_1 = 0
                _EndPtr_1 = _EndPtr
                break
            
            _EndPtr_1 = &_EndPtr_1[1]
            
            if (*_EndPtr_1 == 0)
                goto label_1428051ba
    
label_1428051ba:
    *arg3 = r15_1
    *arg5 = count u/ 0xc
    (*(*arg6 + 0x10))(arg6, _EndPtr_2)

return (*(*arg6 + 0x10))(arg6, 0)
