// 函数: sub_140bb1f10
// 地址: 0x140bb1f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ba6830(arg1, arg2, arg1 + 0x1b8, arg4)
uint64_t result_2 = result

if (result == 0)
    EnterCriticalSection(arg1 + 0xe8)
    result = sub_140ba6830(arg1, arg2, arg1 + 0x98, arg4)
    result_2 = result
    
    if (arg1 != -0xe8)
        result = LeaveCriticalSection(arg1 + 0xe8)
else
    bool cond:0_1 = data_143de5452 == 0
    int32_t rbx = arg2[0xd]
    uint64_t result_1 = result
    
    if (not(cond:0_1))
        *(result + 0x44) = rbx
    else if (rbx s> *(result + 0x44))
        sub_1409d7d20(arg1 + 0x1a8, &result_1)
        uint64_t result_4 = result_1
        *(result_4 + 0x44) = rbx
        result = sub_140bac040(arg1, result_4, 0, 0)
        *(arg1 + 0x2bc) -= 1

if (result_2 == 0)
    EnterCriticalSection(arg1 + 0x180)
    result = sub_140ba6830(arg1, arg2, arg1 + 0x130, arg4)
    uint64_t result_3 = result
    
    if (arg1 != -0x180)
        result = LeaveCriticalSection(arg1 + 0x180)
    
    if (result_3 == 0)
        void arg_8
        sub_140cad130(&arg_8)
        void*** rax = j_sub_140a82f30(0x568)
        void*** rbx_3
        
        if (rax == 0)
            rbx_3 = nullptr
        else
            rbx_3 = sub_140b94650(rax, arg1, arg2, *(arg1 + 0x10))
        
        sub_140cad790()
        
        if (*(arg2 + 0x28) != 0)
            int64_t r15_1 = sx.q(rbx_3[0xd].d)
            int32_t rax_2 = (r15_1 + 1).d
            rbx_3[0xd].d = rax_2
            
            if (rax_2 s> *(rbx_3 + 0x6c))
                sub_1405a4f90(&rbx_3[0xc])
            
            int16_t* rcx_13 = &rbx_3[0xc][r15_1 * 2]
            *rcx_13 = 0
            *(rcx_13 + 8) = *(arg2 + 0x28)
            *(arg2 + 0x28) = 0
        
        rbx_3[0x12] = arg3
        
        if (arg4 != 0)
            sub_140bafaf0(rbx_3, arg4)
        
        result = sub_140bac040(arg1, rbx_3, 0, 1)
        *(arg1 + 0x2b8) -= 1

return result
