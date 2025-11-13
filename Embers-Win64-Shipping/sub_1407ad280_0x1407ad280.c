// 函数: sub_1407ad280
// 地址: 0x1407ad280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg4

if (*arg2 == data_143ce0438 && arg2[3].d == 1 && arg2[4].d == 4)
    return sub_14077a320(arg1, arg2, arg3, arg4) __tailcall

void var_18
void* result = &var_18

if (&var_18 != rbx && arg4[1].d != 0)
    int64_t* rcx_1 = *arg4
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x38))(rcx_1, 0)
        void* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            result = sub_140a84c80(rcx_2, 0, 0)
            *rbx = result
        
        rbx[1].d = 0

return result
