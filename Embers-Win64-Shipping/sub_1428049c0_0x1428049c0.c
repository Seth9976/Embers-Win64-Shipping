// 函数: sub_1428049c0
// 地址: 0x1428049c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = 0
*arg4 = 1
*arg3 = 0
*arg5 = 0
char* arg_20
char result = (*(*arg1 + 0x10))(arg1, arg2, &arg_20)

if (result == 0)
    return result

char* rsi_1 = arg_20
int32_t i = 0
int64_t r14_1 = 0

if (rsi_1 != 0)
    data_143f894cc += 1
    char* _EndPtr_2
    
    if (*rsi_1 == 0)
        _EndPtr_2 = &data_1434cce10
    else
        char* rax_2 = rsi_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_2 = &rax_2[1]
        while (*rax_2 != 0)
        
        char* _EndPtr_3 = (*(*arg6 + 8))(arg6, zx.q((rbx_1 + 1).d))
        _EndPtr_2 = _EndPtr_3
        memcpy(_EndPtr_3, rsi_1, rbx_1.d)
        _EndPtr_2[rbx_1] = 0
    
    char r15_1 = arg5.b
    char* _EndPtr_1 = _EndPtr_2
    char* _EndPtr = _EndPtr_1
    
    while (*_EndPtr_1 != 0)
        while (true)
            if (isspace(sx.d(*_EndPtr_1)) == 0)
                char* _String = _EndPtr
                
                if (_String != 0 && *_String != 0)
                    r15_1 = strtoul(_String, &_EndPtr, 0xa)
                
                if (i u< count + 1)
                    i = 0x20
                    
                    if (count + 1 u> 0x20)
                        do
                            i *= 2
                        while (i u< count + 1)
                    
                    int64_t rax_10 = (*(*arg6 + 8))(arg6, zx.q(i))
                    
                    if (count != 0)
                        memcpy(rax_10, r14_1, count)
                    
                    int64_t r8_3 = *arg6
                    (*(r8_3 + 0x10))(arg6, r14_1, r8_3)
                    r14_1 = rax_10
                
                uint64_t count_1 = zx.q(count)
                count += 1
                *(count_1 + r14_1) = r15_1
                _EndPtr_1 = _EndPtr
                break
            
            _EndPtr_1 = &_EndPtr_1[1]
            
            if (*_EndPtr_1 == 0)
                goto label_142804ab5
    
label_142804ab5:
    *arg3 = r14_1
    *arg5 = count
    (*(*arg6 + 0x10))(arg6, _EndPtr_2)

return (*(*arg6 + 0x10))(arg6, 0)
