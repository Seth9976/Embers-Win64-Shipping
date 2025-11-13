// 函数: sub_142aaecf0
// 地址: 0x142aaecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0)
    int16_t rax_1 = *(arg3 + 8)
    int32_t rdx_1 = 0
    int32_t r8_1
    
    if (rax_1 s< 0)
        r8_1 = *(arg3 + 0xc)
    else
        r8_1 = sx.d(rax_1) s>> 5
    
    if (r8_1 s< 0)
        if (rax_1 s< 0)
            rdx_1 = *(arg3 + 0xc)
        else
            rdx_1 = sx.d(rax_1) s>> 5
    
    int32_t rcx_1
    
    if (rax_1 s< 0)
        rcx_1 = *(arg3 + 0xc)
    else
        rcx_1 = sx.d(rax_1) s>> 5
    
    if (sub_142a4a330(arg3, &data_143652178, 0, 2, rdx_1, rcx_1 - rdx_1) != 0)
        void* rax_3 = sub_142aae540(arg1, arg3, arg5)
        
        if (rax_3 != 0)
            int32_t var_28_1
            var_28_1.q = arg5
            sub_142aae7a0(arg1, arg2, rax_3, arg4, var_28_1)
    else
        *arg5 = 1

return arg4
