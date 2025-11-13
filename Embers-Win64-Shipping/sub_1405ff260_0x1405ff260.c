// 函数: sub_1405ff260
// 地址: 0x1405ff260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg2 != 0)
    return 0xc00d36b3

if ((arg4 & 0xfffffffe) != 0)
    return 0x80070057

int32_t rdi_1 = 0
void* var_20_1 = &arg1[2]
EnterCriticalSection(&arg1[2])

if ((*(*arg1 + 0x100))(arg1) != 0)
    rdi_1 = -0x3ff2928c
else if (arg3 == 0)
label_1405ff384:
    
    if ((not.d(arg4) & 1) != 0)
        rdi_1 = (*(*arg1 + 0xd8))(arg1, arg3)
else
    int64_t* rcx_2 = arg1[8]
    
    if (rcx_2 != 0)
        int32_t var_38 = 0
        
        if ((*(*rcx_2 + 0x118))(rcx_2, arg3, &var_38) == 0)
            goto label_1405ff384
        
        rdi_1 = -0x3ff2c943
    else if (arg1[7] != 0)
        int32_t arg_10 = 0
        int64_t* var_30 = nullptr
        int32_t rax_6 = (*(*arg1 + 0x70))(arg1, 0, 0, &var_30)
        int32_t rsi_1 = rax_6
        
        if (rax_6 s>= 0)
            int64_t* rcx_4 = var_30
            int32_t rax_8 = (*(*rcx_4 + 0x30))(rcx_4, arg3, 0, &arg_10)
            rsi_1 = rax_8
            
            if (rax_8 s>= 0 && arg_10 == 0)
                rsi_1 = -0x3ff2c943
        
        int64_t* rcx_5 = var_30
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x10))(rcx_5)
        
        rdi_1 = rsi_1
        
        if (rsi_1 s>= 0)
            goto label_1405ff384
    else
        rdi_1 = -0x3ff292a0

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(rdi_1)
