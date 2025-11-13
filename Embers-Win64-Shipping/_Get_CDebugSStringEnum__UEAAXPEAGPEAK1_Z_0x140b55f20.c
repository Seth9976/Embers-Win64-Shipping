// 函数: ?Get@CDebugSStringEnum@@UEAAXPEAGPEAK1@Z
// 地址: 0x140b55f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 s>= 0)
    if (arg2 == 0)
        result.b = arg4 == 0
    else
        result = zx.q((arg4 u>> 0x3f).d) ^ 1

if (arg3 s< 0 || result.d == 0)
    result.b = 0
else
    result = arg1[1]
    uint64_t result_1 = arg3 + arg4
    
    if (result s>= result_1)
        result_1 = result
    
    arg1[1] = result_1
    
    if (result_1 s> arg1[2])
        int64_t rax_3
        int32_t rdx
        rdx:rax_3 = sx.o(result_1 * 3)
        int64_t rax_6 = sub_140a846a0(result_1 + 0x10 + ((rax_3 + (zx.q(rdx) & 7)) s>> 3), 0)
        
        if (rax_6 s<= 0x10000)
            rax_6 = 0x10000
        
        uint64_t rcx_2 = *arg1
        arg1[2] = rax_6
        
        if (rcx_2 == 0)
            result = sub_140a82f30(rax_6, 0)
        else
            result = sub_140a84c80(rcx_2, rax_6, 0)
        
        *arg1 = result
    
    if (arg4 != 0)
        memcpy(arg3 + *arg1, arg2, arg4.d)
    
    result.b = 1

return result
