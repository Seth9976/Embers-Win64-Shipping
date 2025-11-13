// 函数: sub_142a2f890
// 地址: 0x142a2f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r13 = &data_143609c10
int64_t i_1 = 2
void* const arg_8 = &data_143609c10
void* result = arg2 - &data_143609c10
void* result_1 = result
int64_t i

do
    void* const r12_1 = r13
    char* j = result + r13
    
    do
        int32_t rsi_1 = 0
        int32_t rbx_5 = (((*(arg1 + 0x1c) - 1) * zx.d(*r12_1)) u>> 8) + 1
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t r8_1 = arg1[2]
        uint64_t rcx_2 = zx.q(rbx_5) << 0x38
        
        if (r8_1 u>= rcx_2)
            rsi_1 = 1
            rbx_5 = *(arg1 + 0x1c) - rbx_5
            r8_1 -= rcx_2
        
        r12_1 += 1
        uint32_t rdx = zx.d(*(zx.q(rbx_5) + &data_143609200))
        arg1[3].d -= rdx
        arg1[2] = r8_1 << rdx.b
        *(arg1 + 0x1c) = rbx_5 << rdx.b
        
        if (rsi_1 != 0)
            int32_t rbp_1 = 0
            int32_t r14_1 = 6
            int32_t temp1_1
            
            do
                int32_t rsi_2 = 0
                int32_t rbx_11 = (((*(arg1 + 0x1c) << 7) - 0x80) u>> 8) + 1
                
                if (arg1[3].d s< 0)
                    sub_142a2e350(arg1)
                
                int64_t r8_3 = arg1[2]
                uint64_t rcx_7 = zx.q(rbx_11) << 0x38
                
                if (r8_3 u>= rcx_7)
                    rsi_2 = 1
                    rbx_11 = *(arg1 + 0x1c) - rbx_11
                    r8_3 -= rcx_7
                
                uint32_t rdx_1 = zx.d(*(zx.q(rbx_11) + &data_143609200))
                arg1[3].d -= rdx_1
                rbp_1 |= rsi_2 << r14_1.b
                arg1[2] = r8_3 << rdx_1.b
                temp1_1 = r14_1
                r14_1 -= 1
                *(arg1 + 0x1c) = rbx_11 << rdx_1.b
            while (temp1_1 - 1 s>= 0)
            char rax_9
            
            if (rbp_1.b == 0)
                rax_9 = 1
            else
                rax_9 = rbp_1.b * 2
            
            *j = rax_9
        
        j = &j[1]
    while (j u< r13 + 0x13 + result)
    
    result = result_1
    r13 = arg_8 + 0x13
    i = i_1
    i_1 -= 1
    arg_8 = r13
while (i != 1)
return result
