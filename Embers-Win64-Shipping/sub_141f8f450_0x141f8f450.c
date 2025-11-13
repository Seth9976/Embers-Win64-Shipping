// 函数: sub_141f8f450
// 地址: 0x141f8f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xc0))
int32_t rbp = arg2.d

if ((result.b & 2) == 0)
    result.b |= 2
    *(arg1 + 0xc0) = result.b
    int64_t rdi_1 = 0
    int64_t* rbx_1 = *(arg1 + 0xb0)
    uint64_t r14_2 = sx.q(*(arg1 + 0xb8)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0xb8))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            arg2 = *rbx_1
            
            if (arg2 != 0)
                int64_t* r9_1 = *(arg1 + 0xa0)
                int64_t* rax_2 = r9_1
                void* r8_1 = &r9_1[sx.q(*(arg1 + 0xa8))]
                
                if (r9_1 != r8_1)
                    while (*rax_2 != arg2)
                        rax_2 = &rax_2[1]
                        
                        if (rax_2 == r8_1)
                            goto label_141f8f509
                
                if (r9_1 == r8_1 || ((rax_2 - r9_1) s>> 3).d == 0xffffffff)
                label_141f8f509:
                    sub_1405a46b0(arg2 + 0x80, arg1)
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
    
    arg2.b = ((rbp - 0x10) & 0xffffffef) == 0
    sub_141f9ed30(arg1, arg2.b)
    void* rcx_3 = arg1 + 0xa0
    int64_t r15_1 = 0
    int64_t* r14_3 = *rcx_3
    result = &r14_3[sx.q(*(rcx_3 + 8))]
    uint64_t r13_2 = sx.q(*(rcx_3 + 8)) << 3 u>> 3
    
    if (r14_3 u> result)
        r13_2 = 0
    
    if (r13_2 != 0)
        do
            void* i = *r14_3
            
            if (i != 0 && i != arg1)
                int64_t* r9_2 = *(arg1 + 0xb0)
                result = sx.q(*(arg1 + 0xb8))
                int64_t* rcx_4 = r9_2
                void* r8_2 = &r9_2[result]
                
                if (r9_2 != r8_2)
                    while (*rcx_4 != i)
                        rcx_4 = &rcx_4[1]
                        
                        if (rcx_4 == r8_2)
                            goto label_141f8f5cf
                
                if (r9_2 == r8_2 || ((rcx_4 - r9_2) s>> 3).d == 0xffffffff)
                label_141f8f5cf:
                    int32_t var_30_1 = 0
                    result = sub_140a84c80(0, 0x30, 0)
                    uint64_t result_1 = result
                    
                    if (result != 0)
                        *result = &data_143287d70
                        sub_140d3a3a0(result + 8, arg1)
                        *(result_1 + 0x10) = sub_141f8f450.o
                        *(result_1 + 0x20) = 1
                        *(result_1 + 0x28) = sub_140a387b0()
                        result = &data_143287dc8
                        *result_1 = &data_143287dc8
                    
                    if (result_1 != 0)
                        sub_140599630(i + 0x80, 1)
                        void arg_8
                        (*(*result_1 + 0x30))(result_1, &arg_8)
                        int64_t rbp_1 = sx.q(*(i + 0x88))
                        int32_t rax_9 = (rbp_1 + 1).d
                        *(i + 0x88) = rax_9
                        
                        if (rax_9 s> *(i + 0x8c))
                            sub_1405a4f90(i + 0x80)
                        
                        result = (rbp_1 << 4) + *(i + 0x80)
                        *result = result_1
                        *(result + 8) = 3
            
            r14_3 = &r14_3[1]
            r15_1 += 1
        while (r15_1 != r13_2)
        
        rcx_3 = arg1 + 0xa0
    
    if (arg1 + 0xb0 != rcx_3)
        int64_t rbx_2 = sx.q(*(rcx_3 + 8))
        int64_t rdi_3 = *rcx_3
        int32_t r8_3 = *(arg1 + 0xbc)
        *(arg1 + 0xb8) = rbx_2.d
        
        if (rbx_2.d != 0 || r8_3 != 0)
            sub_1405c4a00(arg1 + 0xb0, rbx_2.d, r8_3)
            result = memcpy(*(arg1 + 0xb0), rdi_3, (rbx_2 << 3).d)
        else
            *(arg1 + 0xbc) = 0
    
    *(arg1 + 0xc0) &= 0xfd

return result
