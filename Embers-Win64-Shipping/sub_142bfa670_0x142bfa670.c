// 函数: sub_142bfa670
// 地址: 0x142bfa670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 4)

if (rax == 0)
    return rax

uint32_t rcx_5 =
    (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
bool cond:1_1

if (rcx_5 u> 0x74727565)
    if (rcx_5 != 0x74746366)
        cond:1_1 = rcx_5 == 0x74797031
        goto label_142bfa703
    
    char rax_8 = sub_142bf7510(arg2, &arg1[4], 4)
    
    if (rax_8 == 0)
        return rax_8
    
    if (zx.d(arg1[5]) - 1 + (zx.d(arg1[4]) << 8) u<= 1)
        return sub_142bf9a90(&arg1[8], arg2, arg1) __tailcall
    
    int32_t rax_11
    rax_11.b = 1
    return rax_11

if (rcx_5 != 0x74727565)
    if (rcx_5 == 0x100)
        return sub_142bfa7a0(arg1, arg2) __tailcall
    
    if (rcx_5 != 0x10000)
        cond:1_1 = rcx_5 == 0x4f54544f
    label_142bfa703:
        
        if (not(cond:1_1))
            uint32_t rax_5
            rax_5.b = 1
            return rax_5

return sub_142bfa5f0(arg1, arg2) __tailcall
