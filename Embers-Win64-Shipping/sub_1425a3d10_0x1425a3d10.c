// 函数: sub_1425a3d10
// 地址: 0x1425a3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* result = arg2

if (arg4 != 0)
    int64_t* r12_1 = arg3 + 0x10
    int64_t* arg_18 = r12_1
    int32_t i
    
    do
        *result = r12_1[-2].d
        *(result + 4) = *(r12_1 - 0xc)
        
        if (r12_1 != &result[4])
            int32_t j_1 = result[6]
            int32_t r14_1 = r12_1[1].d
            int64_t* rsi_1 = *(result + 0x10)
            
            if (j_1 != 0)
                int32_t j
                
                do
                    void* rbx_1 = *rsi_1
                    
                    if (rbx_1 != 0)
                        sub_140bc0410(rbx_1 + 8)
                        j_sub_140a74f90(rbx_1)
                    
                    rsi_1 = &rsi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result[6] = 0
            
            if (result[7] != r14_1)
                sub_140638c50(&result[4], r14_1)
            
            int64_t r15_1 = 0
            int64_t* rbx_2 = *r12_1
            uint64_t r13_2 = sx.q(r12_1[1].d) << 3 u>> 3
            
            if (rbx_2 u> &rbx_2[r12_1[1]])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int32_t* r14_2 = *rbx_2
                    int32_t* rax_5 = j_sub_140a82f30(0x28)
                    int32_t* rsi_2 = rax_5
                    
                    if (rax_5 == 0)
                        rsi_2 = nullptr
                    else
                        *rax_5 = *r14_2
                        rax_5[1] = r14_2[1]
                        *(rax_5 + 0x18) = 0
                        rax_5[8] = 0
                        rax_5[9].b = 0
                        sub_140bc0570(&rax_5[2], &r14_2[2])
                    
                    int64_t rbp_1 = sx.q(result[6])
                    int32_t rax_6 = (rbp_1 + 1).d
                    result[6] = rax_6
                    
                    if (rax_6 s> result[7])
                        sub_140638870(&result[4])
                    
                    rbx_2 = &rbx_2[1]
                    r15_1 += 1
                    *(*(result + 0x10) + (rbp_1 << 3)) = rsi_2
                while (r15_1 != r13_2)
                
                r12_1 = arg_18
        
        result = &result[8]
        r12_1 = &r12_1[4]
        i = i_1
        i_1 -= 1
        arg_18 = r12_1
    while (i != 1)

result.b = 1
return result
