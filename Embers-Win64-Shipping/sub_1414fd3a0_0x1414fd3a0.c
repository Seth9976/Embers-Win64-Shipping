// 函数: sub_1414fd3a0
// 地址: 0x1414fd3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_2 = nullptr
void*** result

if ((*(arg2 + 0xb) & 1) != 0)
label_1414fd42d:
    int32_t rbx_1 = 0
    uint64_t rbp_2
    
    while (true)
        rbp_2 = zx.q(rbx_1)
        
        if (*(arg1 + (rbp_2 << 3) + 8) == 0)
            break
        
        rbx_1 += 1
        
        if (rbx_1 u>= 0x10)
            return nullptr
    
    void*** rax_8 = j_sub_140a82f30(0x6a0)
    
    if (rax_8 != 0)
        int32_t rdx_2 = *(arg3 + 0x4c) * *(arg3 + 0x44)
        int32_t rcx_2 = *(arg3 + 0x48) * *(arg3 + 0x40)
        
        if (rcx_2 u>= rdx_2)
            rdx_2 = rcx_2
        
        result_2 = sub_1414fadf0(rax_8, arg1, rbx_1.b, arg2, rdx_2)
    
    void*** rdx_4 = *(arg1 + 8 + (rbp_2 << 3))
    void**** rcx_5 = arg1 + 8 + (rbp_2 << 3)
    
    if (rdx_4 != result_2)
        *rcx_5 = result_2
        sub_1414fcbe0(rcx_5, rdx_4)
    
    sub_141997e80(result_2)
    int32_t i_2 = sub_1414fe860(&result_2[4], arg3)
    int32_t i_1 = i_2
    
    if (i_2 == 0xffffffff)
        int32_t i
        
        do
            int32_t rax_10 = result_2[0xd2].d
            
            if (rax_10 u>= 0x1000)
                break
            
            if ((*(result_2 + 0x1b) & 1) != 0)
                break
            
            *(result_2 + 0x694) += 1
            *(result_2 + 0x69d) = 1
            result_2[0xd2].d = rax_10 * 2
            sub_141509fd0(&result_2[4])
            i = sub_1414fe860(&result_2[4], arg3)
            i_1 = i
        while (i == 0xffffffff)
    
    *(arg3 + 0x60) = i_1
    result = result_2
    result_2[0xd3].d += 1
else
    int32_t rbp_1 = 0
    int64_t* r14_1 = arg1 + 8
    
    while (true)
        void*** result_1 = *r14_1
        
        if (result_1 != 0 && result_1[3].b == arg2[2].b && result_1[2].d == *arg2
                && *(result_1 + 0x14) == arg2[1] && *(result_1 + 0x1a) == *(arg2 + 0xa)
                && *(result_1 + 0x19) == *(arg2 + 9)
                && ((*(result_1 + 0x1b) ^ *(arg2 + 0xb)) & 1) == 0)
            int32_t rax_7 = sub_1414ff280(result_1, arg3)
            
            if (rax_7 != 0xffffffff)
                *(arg3 + 0x60) = rax_7
                result = result_1
                result_1[0xd3].d += 1
                break
        
        rbp_1 += 1
        r14_1 = &r14_1[1]
        
        if (rbp_1 u>= 0x10)
            goto label_1414fd42d

return result
