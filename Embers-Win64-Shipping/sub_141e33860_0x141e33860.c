// 函数: sub_141e33860
// 地址: 0x141e33860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
int64_t* result = sub_141e11890(arg2, &var_18, arg1)
int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x10))(rcx_1, arg2)

*(arg1 + 0x30) = *(arg2 + 0x18) f+ *(arg1 + 0x30)
void* rbx_1 = var_18

if (rbx_1 != 0)
    int64_t* result_1
    result = result_1
    
    if (result.d != 0xffffffff || result_1:4.d != 0)
        int64_t* result_3 = result
        int32_t result_2
        sub_141ab41e0(rbx_1, &result_2, &result_3)
        result = sx.q(result_2)
        void* rbx_2
        
        if (result.d == 0xffffffff)
            rbx_2 = nullptr
        else
            void* rcx_3 = *(rbx_1 + 0x100)
            
            if (rcx_3 != 0)
                rbx_1 = rcx_3
            
            rbx_2 = rbx_1 + (result << 6)
        
        void* rcx_6 = rbx_2 + 8
        
        if (rbx_2 == 0)
            rcx_6 = nullptr
        
        if (rcx_6 != 0)
            *(rcx_6 + 0x28) -= 1
            return sub_141bdc8d0(rcx_6)

return result
