// 函数: sub_142806320
// 地址: 0x142806320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = 0
*arg4 = 4
*arg3 = 0
*arg5 = 0
char* arg_20
char result = (*(*arg1 + 0x10))(arg1, arg2, &arg_20)

if (result == 0)
    return result

int32_t i = 0
char* rdi_1 = arg_20
int64_t r15_1 = 0

if (rdi_1 != 0)
    data_143f894d0 += 1
    char* _EndPtr_2
    
    if (*rdi_1 == 0)
        _EndPtr_2 = &data_1434cce10
    else
        char* rax_1 = rdi_1
        uint64_t rbx_1 = 0
        
        do
            rbx_1 = zx.q(rbx_1.d + 1)
            rax_1 = &rax_1[1]
        while (*rax_1 != 0)
        
        char* _EndPtr_3 = (*(*arg6 + 8))(arg6, zx.q((rbx_1 + 1).d))
        _EndPtr_2 = _EndPtr_3
        memcpy(_EndPtr_3, rdi_1, rbx_1.d)
        _EndPtr_2[rbx_1] = 0
    
    uint32_t rbx_2 = arg5.d
    char* _EndPtr_1 = _EndPtr_2
    char* _EndPtr = _EndPtr_2
    
    while (*_EndPtr_1 != 0)
        while (true)
            if (isspace(sx.d(*_EndPtr_1)) == 0)
                char* _String = _EndPtr
                
                if (_String != 0 && *_String != 0)
                    rbx_2 = strtoul(_String, &_EndPtr, 0xa)
                
                if (i u< count + 4)
                    i = 0x20
                    
                    if (count + 4 u> 0x20)
                        do
                            i *= 2
                        while (i u< count + 4)
                    
                    int64_t rax_9 = (*(*arg6 + 8))(arg6, zx.q(i))
                    
                    if (count != 0)
                        memcpy(rax_9, r15_1, count)
                    
                    int64_t r8_3 = *arg6
                    (*(r8_3 + 0x10))(arg6, r15_1, r8_3)
                    r15_1 = rax_9
                
                uint32_t* count_1 = zx.q(count)
                count += 4
                *(count_1 + r15_1) = rbx_2
                _EndPtr_1 = _EndPtr
                break
            
            _EndPtr_1 = &_EndPtr_1[1]
            
            if (*_EndPtr_1 == 0)
                goto label_14280640b
    
label_14280640b:
    *arg3 = r15_1
    *arg5 = count u>> 2
    (*(*arg6 + 0x10))(arg6, _EndPtr_2)

return (*(*arg6 + 0x10))(arg6, 0)
