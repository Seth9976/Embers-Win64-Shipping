// 函数: sub_142aaee20
// 地址: 0x142aaee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0)
    int16_t rax_1 = *(arg3 + 8)
    int32_t r8 = 0
    int32_t r9_1
    
    if (rax_1 s< 0)
        r9_1 = *(arg3 + 0xc)
    else
        r9_1 = sx.d(rax_1) s>> 5
    
    if (r9_1 s< 0)
        if (rax_1 s< 0)
            r8 = *(arg3 + 0xc)
        else
            r8 = sx.d(rax_1) s>> 5
    
    int32_t rcx_1
    
    if (rax_1 s< 0)
        rcx_1 = *(arg3 + 0xc)
    else
        rcx_1 = sx.d(rax_1) s>> 5
    
    if (sub_142a4a330(arg3, &data_143652178, 0, 2, r8, rcx_1 - r8) != 0)
        void* rax_3 = sub_142aae540(arg1, arg3, arg5)
        
        if (rax_3 != 0)
            int32_t var_18_1
            var_18_1.q = arg5
            sub_142aae600(arg1, arg2, rax_3, arg4, var_18_1)
    else
        *arg5 = 1

return arg4
