// 函数: sub_142ab2200
// 地址: 0x142ab2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142ab22b0(arg1, arg2, arg3, arg5)

if (result != 0)
label_142ab2275:
    int64_t* rcx_3 = *arg3
    
    if (rcx_3 == arg1[6] && rcx_3 != 0)
        result = sub_142aa6d70(rcx_3)
        *arg3 = 0
else if (*arg5 s<= 0)
    int64_t rax_1 = (*(*arg2 + 0x28))(arg2, arg4, arg5)
    *arg3 = rax_1
    
    if (rax_1 == 0)
        void* rcx_1 = arg1[6]
        
        if (rcx_1 != 0)
            *arg3 = rcx_1
            sub_142aa6d40(rcx_1)
    
    result = sub_142ab2560(arg1, arg2, arg3, arg5)
    goto label_142ab2275

return result
