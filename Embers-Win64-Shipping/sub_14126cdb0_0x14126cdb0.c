// 函数: sub_14126cdb0
// 地址: 0x14126cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg5
void arg_10

if ((not.b(*(*(*arg3 + 0x1e8))(arg3, &arg_10)) & 1) != 0)
    int32_t rcx_1 = data_143f552b0
    
    if (rcx_1 != 0)
        bool cond:0_1
        
        if (rdi == 0)
            cond:0_1 = rcx_1 == 1
        else
            cond:0_1 = rcx_1 == 2
        
        if (not(cond:0_1))
            rdi ^= 1

if (arg2 == 1)
    return sub_141252740(arg1, arg3, arg4, rdi, arg6, arg7)

if (arg2 == 2)
    return sub_1412530c0(arg1, arg3, arg4, rdi, arg6, arg7)

if (arg2 == 3)
    return sub_141253a40(arg1, arg3, arg4, rdi, arg6, arg7)

if (arg2 == 4)
    return sub_1412543c0(arg1, arg3, arg4, rdi, arg6, arg7)

if (arg2 == 0x7fffffff)
    return sub_1412556c0(arg1, arg3, arg4, rdi, arg6, arg7)

return sub_141254d40(arg1, arg3, arg4, rdi, arg6, arg7)
