// 函数: sub_1405f8fe0
// 地址: 0x1405f8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)

if (*(arg1 + 0xc8) != 0)
    *arg2 = 0
else
    int64_t* rcx_1 = *(arg1 + 0x78)
    int32_t arg_8
    
    if (rcx_1 == 0)
        *arg2 = 0
    else if ((*(*rcx_1 + 0x30))(rcx_1, 0, &arg_8) s< 0)
        *arg2 = 0
    else
        int32_t rax_3 = arg_8
        
        if (rax_3 == 0)
            *arg2 = 0
        else if (rax_3 != 2)
            int64_t* rcx_2 = *(arg1 + 0x78)
            void var_20
            int64_t arg_18
            
            if ((*(*rcx_2 + 0x20))(rcx_2, 0, &arg_18, &var_20, -2) s< 0)
                *arg2 = 0
            else
                *arg2 = arg_18
        else
            *arg2 = *(arg1 + 0x68)

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return arg2
