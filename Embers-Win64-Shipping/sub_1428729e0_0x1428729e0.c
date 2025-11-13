// 函数: sub_1428729e0
// 地址: 0x1428729e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg4 u>= 4)
    int32_t rcx = *(arg1 + 0x5c8)
    int32_t rcx_2 = rcx u>> 5 & 1
    
    if (arg2 != 0)
        rcx_2 = rcx u>> 6 & 1
    
    void* rcx_9
    uint64_t rdx
    
    if (rcx_2 == 0)
        rcx_9 = arg3
        rdx = zx.q(arg4.d)
    else
        int32_t rax_4 = _time64(nullptr)
        rdx = zx.q((arg4 - 4).d)
        *arg3 = (rax_4 u>> 0x18).b
        arg3[1] = (rax_4 u>> 0x10).b
        arg3[2] = (rax_4 u>> 8).b
        rcx_9 = &arg3[4]
        arg3[3] = rax_4.b
    
    int32_t result = sub_142897af0(rcx_9, rdx)
    
    if (result s<= 0)
        return zx.q(result)
    
    if (arg4 u> 8)
        if (arg5 == 1)
            *(arg3 + arg4 - 8) = 0x14452474e574f44
            return result
        
        if (arg5 == 2)
            __builtin_strcpy(&arg3[arg4 - 8], "DOWNGRD")
        
        return zx.q(result)

return 0
