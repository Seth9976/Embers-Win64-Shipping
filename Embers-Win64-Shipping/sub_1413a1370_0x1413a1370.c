// 函数: sub_1413a1370
// 地址: 0x1413a1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = 1
uint64_t result = sub_141421550()
*(arg1 + 0x69) = result.b
int64_t rcx = sx.q(arg2[1].d)

if (rcx.d != 0)
    int64_t* rbx_1 = *arg2
    int32_t rbp_1 = *(data_143ec4688 + 4)
    int64_t rdi_1 = 0
    uint64_t r14_2 = rcx << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[rcx])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_1413a2a90(*rbx_1)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != r14_2)
    
    int64_t rdi_2 = 0
    uint64_t result_1
    
    if (rbp_1 == 0)
        uint64_t* rbx_3 = *arg2
        result = &rbx_3[arg2[1]]
        uint64_t rbp_3 = sx.q(arg2[1].d) << 3 u>> 3
        
        if (rbx_3 u> result)
            rbp_3 = 0
        
        if (rbp_3 != 0)
            do
                result_1 = *rbx_3
                int32_t var_20_2 = 0
                result = sub_1413a2b10(arg1 + 0x30, &result_1, arg1)
                rdi_2 += 1
                rbx_3 = &rbx_3[1]
            while (rdi_2 != rbp_3)
    else
        uint64_t* rbx_2 = *(arg1 + 0x30)
        result = &rbx_2[sx.q(*(arg1 + 0x38))]
        uint64_t r14_4 = sx.q(*(arg1 + 0x38)) << 3 u>> 3
        
        if (rbx_2 u> result)
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                result = *rbx_2
                
                if (*(result + 8) != 0)
                    result_1 = result
                    int32_t var_20_1 = 0
                    result = sub_1413a2b10(arg1 + 0x30, &result_1, arg1)
                
                rbx_2 = &rbx_2[1]
                rdi_2 += 1
            while (rdi_2 != r14_4)

return result
