// 函数: sub_140b303e0
// 地址: 0x140b303e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de542c != 0)
    EnterCriticalSection(&data_143de71a8)
    int32_t i = 0
    int32_t rbp_1 = 1
    
    while (i s>= 0)
        if (i s>= data_143de71d8)
            break
        
        int64_t rax_1 = data_143de71d0
        int64_t rsi_2 = sx.q(i) * 2
        
        if (*(rax_1 + (rsi_2 << 3)) == 0)
        label_140b30469:
            int64_t* rcx_1 = *(data_143de71d0 + (rsi_2 << 3) + 8)
            
            if (rcx_1 != 0)
                int32_t rax_4 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_4 == 1 && rcx_1 != 0)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            int32_t rax_7 = data_143de71d8
            int32_t rcx_3 = rax_7 - i
            
            if (rcx_3 != 1)
                int64_t rax_6 = data_143de71d0
                memmove(rax_6 + (rsi_2 << 3), (sx.q(rbp_1) << 4) + rax_6, (rcx_3 - 1) << 4)
                rax_7 = data_143de71d8
            
            data_143de71d8 = rax_7 - 1
            sub_1405a5010(&data_143de71d0)
            i -= 1
            rbp_1 -= 1
        else
            void* rcx = *(rax_1 + (rsi_2 << 3) + 8)
            
            if (rcx == 0)
                goto label_140b30469
            
            int32_t rax_2 = 0
            
            if (0 == *(rcx + 8))
                *(rcx + 8) = 0
            else
                rax_2 = *(rcx + 8)
            
            if (rax_2 s<= 0)
                goto label_140b30469
        
        i += 1
        rbp_1 += 1
    
    LeaveCriticalSection(&data_143de71a8)

int64_t rcx_6 = arg1[0x13]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x10]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t result = sub_140b2fc30(&arg1[0xa])

while (arg1[5] != 0)
    void* rcx_9 = arg1[5]
    arg1[5] = *(rcx_9 + 0x2000)
    result = j_sub_140a74f90(rcx_9)

arg1[5] = 0
arg1[6] = 0

while (*arg1 != 0)
    void* rcx_10 = *arg1
    *arg1 = *(rcx_10 + 0x1800)
    result = j_sub_140a74f90(rcx_10)

arg1[1] = 0
*arg1 = 0
return result
