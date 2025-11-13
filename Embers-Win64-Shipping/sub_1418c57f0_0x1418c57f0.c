// 函数: sub_1418c57f0
// 地址: 0x1418c57f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[1])
uint64_t result = *arg1
int32_t rsi = arg1[7].d
int32_t rsi_1 = rsi - 1
int64_t rbp = *(result + 8)

if (rsi - 1 s>= 0)
    int64_t r14_1 = sx.q(rsi_1) * 0x38
    int32_t temp2_1
    
    do
        void* rdi_2 = arg1[6] + r14_1
        
        if (arg2 != 0)
        label_1418c5889:
            int64_t rax_3 = sx.q(*rdi_2)
            
            if (rax_3.d u<= 0xe)
                switch (rax_3)
                    case 0
                        data_143efb908(rbp, *(rdi_2 + 0x18), 0)
                    case 1
                        data_143efb808(rbp, *(rdi_2 + 0x18), 0)
                    case 2
                        data_143efb818(rbp, *(rdi_2 + 0x18), 0)
                    case 3
                        data_143efb828(rbp, *(rdi_2 + 0x18), 0)
                    case 4
                        data_143efb840(rbp, *(rdi_2 + 0x18), 0)
                    case 5
                        data_143efb888(rbp, *(rdi_2 + 0x18), 0)
                    case 6
                        data_143efb898(rbp, *(rdi_2 + 0x18), 0)
                    case 7
                        data_143efb8f8(rbp, *(rdi_2 + 0x18), 0)
                    case 8
                        data_143efb8b8(rbp, *(rdi_2 + 0x18), 0)
                    case 9
                        data_143efb8a8(rbp, *(rdi_2 + 0x18), 0)
                    case 0xa
                        data_143efb7b8(rbp, *(rdi_2 + 0x18), 0)
                    case 0xb
                        data_143efb850(rbp, *(rdi_2 + 0x18), 0)
                    case 0xc
                        data_143efb7c8(rbp, *(rdi_2 + 0x18), 0)
                    case 0xd, 0xe
                        int64_t* rcx_16 = *(rdi_2 + 0x20)
                        *(rdi_2 + 0x20) = 0
                        
                        if (rcx_16 != 0)
                            rcx_16[1].d -= 1
                            
                            if (rcx_16[1].d == 1)
                                (**rcx_16)(rcx_16, 1)
                        
                        int64_t* rcx_17 = *(rdi_2 + 0x28)
                        *(rdi_2 + 0x28) = 0
                        
                        if (rcx_17 != 0)
                            rcx_17[1].d -= 1
                            
                            if (rcx_17[1].d == 1)
                                (**rcx_17)(rcx_17, 1)
                        
                        int64_t* rcx_18 = *(rdi_2 + 0x30)
                        
                        if (rcx_18 != 0)
                            (**rcx_18)(rcx_18, 1)
                            *(rdi_2 + 0x30) = 0
            
            result = sub_1418c5ac0(&arg1[6], rsi_1, 1, 0)
        else
            result = zx.q(*(rdi_2 + 4) + 2)
            
            if (data_143efb2fc u> result.d)
                void* rax_2 = *(rdi_2 + 0x10)
                
                if (rax_2 == 0)
                    goto label_1418c5889
                
                result = *(rax_2 + 0x98)
                
                if (*(rdi_2 + 8) u< result)
                    goto label_1418c5889
        
        r14_1 -= 0x38
        temp2_1 = rsi_1
        rsi_1 -= 1
    while (temp2_1 - 1 s>= 0)

if (arg1 == -8)
    return result

return LeaveCriticalSection(&arg1[1]) __tailcall
