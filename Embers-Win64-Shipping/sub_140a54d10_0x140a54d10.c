// 函数: sub_140a54d10
// 地址: 0x140a54d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x1a])
int64_t r8
r8.b = 1
int64_t* result = (*(*arg1 + 0xb8))(arg1, arg2, r8)

if (result != 0)
    int64_t rdx_1 = *result
    int64_t* rax_1 = (*(rdx_1 + 0x28))(result, rdx_1)
    
    if (rax_1 == 0 || arg3 == 0)
        int64_t rsi_1 = 0
        int64_t var_28 = 0
        int32_t rdx_2 = 0
        int32_t var_20_1 = 0
        int32_t rcx_4 = 0
        int32_t var_1c_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (arg2[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_28, rdi_1.d + 1)
                rcx_4 = var_1c_1
                rdx_2 = var_20_1
                rsi_1 = var_28
            
            int32_t rax_2 = rdi_1.d + 1 + rdx_2
            int32_t var_20_2 = rax_2
            
            if (rax_2 s> rcx_4)
                sub_140594770(&var_28)
                rsi_1 = var_28
            
            memcpy(rsi_1, arg2, (rdi_1.d + 1) * 2)
        
        sub_140a4f3a0(&arg1[1], &var_28)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        result = (*(*result + 0x78))(result)
    else
        int64_t r8_1 = *rax_1
        result = (*(r8_1 + 0x20))(rax_1, 8, r8_1)

if (arg1 == -0xd0)
    return result

return LeaveCriticalSection(&arg1[0x1a]) __tailcall
