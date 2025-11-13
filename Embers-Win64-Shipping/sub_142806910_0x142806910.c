// 函数: sub_142806910
// 地址: 0x142806910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 4
*arg3 = 0
*arg5 = 0
char* var_48
char result = (*(*arg1 + 0x10))(arg1, arg2, &var_48)

if (result == 0)
    return result

char* rsi_1 = var_48
uint32_t count = 0
int64_t r14_1 = 0
int32_t r15_1 = 0
uint32_t count_1 = 0
int64_t arg_20 = 0

if (rsi_1 != 0)
    data_143f894c4 += 1
    char* _Destination_1
    char* _Destination
    
    if (*rsi_1 == 0)
        _Destination = &data_1434cce10
        _Destination_1 = &data_1434cce10
    else
        char* rax_2 = rsi_1
        uint64_t rdi_1 = 0
        
        do
            rdi_1 = zx.q(rdi_1.d + 1)
            rax_2 = &rax_2[1]
        while (*rax_2 != 0)
        
        char* _Destination_2 = (*(*arg6 + 8))(arg6, zx.q((rdi_1 + 1).d))
        _Destination_1 = _Destination_2
        _Destination = _Destination_2
        memcpy(_Destination_2, rsi_1, rdi_1.d)
        _Destination[rdi_1] = 0
    
    char* i_1 = strtok(_Destination, " \n")
    char* i = i_1
    
    if (i_1 != 0)
        int32_t r12_1 = arg3.d
        
        do
            if (arg7 != 0)
                r12_1 = 0
                
                if (i != 0 && *i != 0)
                    char* rax_4 = sub_1427d9810(arg6, i)
                    char* r14_2 = rax_4
                    char* rsi_2 = rax_4
                    
                    if (rax_4 != 0)
                        while (*rsi_2 != 0)
                            rsi_2 = &rsi_2[1]
                            
                            if (*rsi_2 == 0x7c)
                                *rsi_2 = 0
                                int32_t rdi_2 = 0
                                rsi_2 = &rsi_2[1]
                                int32_t rcx_5
                                
                                if (*arg7 == 0)
                                label_142806aa5:
                                    rcx_5 = 0
                                else
                                    void* rax_5 = arg7
                                    
                                    while (true)
                                        if (physx::shdfnd::stricmp(*rax_5, r14_2) == 0)
                                            rcx_5 = arg7[zx.q(rdi_2) * 2 + 1].d
                                            break
                                        
                                        rdi_2 += 1
                                        rax_5 = &arg7[zx.q(rdi_2) * 2]
                                        
                                        if (*rax_5 == 0)
                                            goto label_142806aa5
                                
                                r12_1 |= rcx_5
                                r14_2 = rsi_2
                            
                            if (rsi_2 == 0)
                                break
                        
                        if (r14_2 != 0 && *r14_2 != 0)
                            r12_1 |= sub_1427e4c80(r14_2, arg7)
                    
                    (*(*arg6 + 0x10))(arg6, rax_4)
                    count = count_1
                    r14_1 = arg_20
            
            uint32_t count_3 = count + 4
            i = strtok(nullptr, " \n")
            
            if (r15_1 u< count_3)
                r15_1 = 0x20
                
                if (count_3 u> 0x20)
                    do
                        r15_1 *= 2
                    while (r15_1 u< count_3)
                
                int64_t rax_13 = (*(*arg6 + 8))(arg6, zx.q(r15_1))
                r14_1 = rax_13
                
                if (count != 0)
                    memcpy(rax_13, arg_20, count)
                
                int64_t r8_3 = *arg6
                (*(r8_3 + 0x10))(arg6, arg_20, r8_3)
                arg_20 = r14_1
            
            uint64_t count_2 = zx.q(count)
            count = count_3
            count_1 = count_3
            *(count_2 + r14_1) = r12_1
        while (i != 0)
        
        _Destination = _Destination_1
    
    *arg3 = r14_1
    *arg5 = count u>> 2
    (*(*arg6 + 0x10))(arg6, _Destination)

return (*(*arg6 + 0x10))(arg6, 0)
