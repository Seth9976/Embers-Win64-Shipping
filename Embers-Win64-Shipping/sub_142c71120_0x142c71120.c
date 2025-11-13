// 函数: sub_142c71120
// 地址: 0x142c71120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int32_t* i_2 = nullptr
int32_t* i_4 = nullptr
struct ADDRINFOA* ppResult
int32_t result = getaddrinfo(arg1, arg2, arg3, &ppResult)
int32_t result_1 = result

if (result == 0)
    int32_t* i = ppResult
    
    if (i == 0)
        result_1 = 0x2af9
        WSASetLastError(0x2af9)
    else
        do
            int32_t rax = i[1]
            uint64_t rbp_1
            
            if (rax == 2)
                rbp_1 = zx.q(rax + 0xe)
            label_142c71189:
                
                if (*(i + 0x20) != 0)
                    int64_t rax_1 = *(i + 0x10)
                    
                    if (rax_1 != 0 && rax_1 u>= rbp_1)
                        int32_t* i_3 = data_143ccb898(0x30)
                        
                        if (i_3 == 0)
                            result_1 = 8
                            break
                        
                        *i_3 = *i
                        i_3[1] = i[1]
                        i_3[2] = i[2]
                        i_3[3] = i[3]
                        i_3[4] = rbp_1.d
                        __builtin_memset(&i_3[6], 0, 0x18)
                        int64_t rax_2 = data_143ccb898(rbp_1)
                        *(i_3 + 0x20) = rax_2
                        
                        if (rax_2 == 0)
                            result_1 = 8
                            data_143ccb8a0(i_3)
                            break
                        
                        memcpy(rax_2, *(i + 0x20), rbp_1.d)
                        int64_t rcx_6 = *(i + 0x18)
                        
                        if (rcx_6 != 0)
                            int64_t rax_3 = data_143ccb8b0(rcx_6)
                            *(i_3 + 0x18) = rax_3
                            
                            if (rax_3 == 0)
                                result_1 = 8
                                data_143ccb8a0(*(i_3 + 0x20))
                                data_143ccb8a0(i_3)
                                break
                        
                        if (i_2 == 0)
                            i_2 = i_3
                        
                        if (i_4 != 0)
                            *(i_4 + 0x28) = i_3
                        
                        i_4 = i_3
            else if (rax == 0x17)
                rbp_1 = zx.q(rax + 5)
                goto label_142c71189
            i = *(i + 0x28)
        while (i != 0)
        
        struct ADDRINFOA* pAddrInfo = ppResult
        
        if (pAddrInfo != 0)
            freeaddrinfo(pAddrInfo)
        
        if (result_1 != 0)
            if (i_2 != 0)
                int32_t* i_1
                
                do
                    data_143ccb8a0(*(i_2 + 0x20))
                    data_143ccb8a0(*(i_2 + 0x18))
                    i_1 = *(i_2 + 0x28)
                    data_143ccb8a0(i_2)
                    i_2 = i_1
                while (i_1 != 0)
            
            i_2 = nullptr
        else if (i_2 == 0)
            result_1 = 0x2af9
            WSASetLastError(0x2af9)
    
    result = result_1
    *arg4 = i_2

return result
