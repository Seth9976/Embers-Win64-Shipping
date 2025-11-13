// 函数: sub_1418c8c60
// 地址: 0x1418c8c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb1e0)
int32_t rcx = *(arg1 + 0x40)
int32_t r9 = 0
void*** result

if (rcx s<= 0)
label_1418c8cd5:
    result = nullptr
else
    int32_t* r10_1 = *(arg1 + 0x38)
    int32_t* rax_1 = r10_1
    
    while (true)
        int32_t r14_1 = *rax_1
        int32_t rbp_3 = (arg3 - 1 + r14_1) & neg.d(arg3)
        int32_t rbx_3 = rbp_3 - r14_1 + arg2
        
        if (rbx_3 u<= rax_1[1])
            int64_t rax_3 = sx.q(r9)
            void* rcx_1 = &r10_1[rax_3 * 2]
            int32_t rax_4 = r10_1[rax_3 * 2 + 1]
            
            if (rbx_3 u>= rax_4)
                int32_t rdx = *(arg1 + 0x40)
                int32_t rax_7 = rdx - r9
                
                if (rax_7 != 1)
                    memmove(rcx_1, &r10_1[sx.q(r9 + 1) * 2], (rax_7 - 1) << 3)
                    rdx = *(arg1 + 0x40)
                
                *(arg1 + 0x40) = rdx - 1
            else
                *rcx_1 += rbx_3
                *(rcx_1 + 4) = rax_4 - rbx_3
            
            *(arg1 + 0x24) += rbx_3
            void*** result_1 = j_sub_140a82f30(0x30)
            result = result_1
            
            if (result_1 == 0)
                result = nullptr
            else
                int64_t rax_11 = *(arg1 + 8)
                *result = &data_142d5a028
                result[1].d = 0
                *result = &data_142febd80
                result[2] = arg1
                result[3].d = rbx_3
                *(result + 0x1c) = r14_1
                result[4].d = arg2
                *(result + 0x24) = rbp_3
                result[5] = rax_11
            
            int64_t rbp_4 = sx.q(*(arg1 + 0x18))
            int32_t rax_12 = (rbp_4 + 1).d
            *(arg1 + 0x18) = rax_12
            
            if (rax_12 s> *(arg1 + 0x1c))
                sub_1405a4d70(arg1 + 0x10)
            
            *(*(arg1 + 0x10) + (rbp_4 << 3)) = result
            int32_t rcx_3 = *(arg1 + 0x18)
            
            if (*(arg1 + 0x28) s>= rcx_3)
                rcx_3 = *(arg1 + 0x28)
            
            *(arg1 + 0x28) = rcx_3
            break
        
        r9 += 1
        rax_1 = &rax_1[2]
        
        if (r9 s>= rcx)
            goto label_1418c8cd5

LeaveCriticalSection(&data_143efb1e0)
return result
