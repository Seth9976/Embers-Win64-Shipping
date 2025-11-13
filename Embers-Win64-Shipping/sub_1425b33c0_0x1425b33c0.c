// 函数: sub_1425b33c0
// 地址: 0x1425b33c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* result = arg2

if (arg4 != 0)
    int32_t* r12_1 = arg3 + 4
    int32_t* arg_18 = r12_1
    int32_t i
    
    do
        *result = r12_1[-1]
        result[1] = *r12_1
        result[2] = r12_1[1]
        result[3] = r12_1[2]
        *(result + 0x10) = *(r12_1 + 0xc)
        
        if (&r12_1[5] != &result[6])
            int32_t j_1 = result[8]
            int32_t r14_1 = r12_1[7]
            int64_t* rsi_1 = *(result + 0x18)
            
            if (j_1 != 0)
                int32_t j
                
                do
                    void* rbx_1 = *rsi_1
                    
                    if (rbx_1 != 0)
                        sub_140bc0410(rbx_1 + 0x10)
                        j_sub_140a74f90(rbx_1)
                    
                    rsi_1 = &rsi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result[8] = 0
            
            if (result[9] != r14_1)
                sub_140638c50(&result[6], r14_1)
            
            int64_t* rbx_2 = *(r12_1 + 0x14)
            int64_t r15_2 = 0
            uint64_t r13_2 = sx.q(r12_1[7]) << 3 u>> 3
            
            if (rbx_2 u> &rbx_2[sx.q(r12_1[7])])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int32_t* r14_2 = *rbx_2
                    int32_t* rax_8 = j_sub_140a82f30(0x30)
                    int32_t* rsi_2 = rax_8
                    
                    if (rax_8 == 0)
                        rsi_2 = nullptr
                    else
                        *rax_8 = *r14_2
                        rax_8[1] = r14_2[1]
                        rax_8[2] = r14_2[2]
                        *(rax_8 + 0x20) = 0
                        rax_8[0xa] = 0
                        rax_8[0xb].b = 0
                        sub_140bc0570(&rax_8[4], &r14_2[4])
                    
                    int64_t rbp_1 = sx.q(result[8])
                    int32_t rax_9 = (rbp_1 + 1).d
                    result[8] = rax_9
                    
                    if (rax_9 s> result[9])
                        sub_140638870(&result[6])
                    
                    rbx_2 = &rbx_2[1]
                    r15_2 += 1
                    *(*(result + 0x18) + (rbp_1 << 3)) = rsi_2
                while (r15_2 != r13_2)
                
                r12_1 = arg_18
        
        int64_t rax_11 = *(r12_1 + 0x24)
        r12_1 = &r12_1[0xc]
        i = i_1
        i_1 -= 1
        arg_18 = r12_1
        *(result + 0x28) = rax_11
        result = &result[0xc]
    while (i != 1)

result.b = 1
return result
