// 函数: sub_1403beff0
// 地址: 0x1403beff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0)
    if (arg3 s> 0)
        result = 1
    
    if (arg3 s<= 0 || (arg4 | arg2 | arg5 | arg6 | arg7 | arg8 | arg9) s< 0)
        png_warning(arg1, "Ignoring attempt to set negative chromaticity value")
        result = 0
    
    if (0x186a0 - arg3 s< arg2)
        png_warning(arg1, "Invalid cHRM white point")
        result = 0
    
    if (0x186a0 - arg5 s< arg4)
        png_warning(arg1, "Invalid cHRM red point")
        result = 0
    
    if (0x186a0 - arg7 s< arg6)
        png_warning(arg1, "Invalid cHRM green point")
        result = 0
    
    if (0x186a0 - arg9 s< arg8)
        png_warning(arg1, "Invalid cHRM blue point")
        result = 0
    
    int32_t r14_2 = arg9 - arg5
    int32_t r12_2 = arg6 - arg4
    uint32_t rbp_3 = r12_2 u>> 0x10
    uint32_t rbx_2 = zx.d(r12_2.w)
    uint32_t r10_2 = r14_2 u>> 0x10
    uint32_t rdx_1 = zx.d(r14_2.w)
    int32_t r8_1 = rdx_1 * rbx_2
    int32_t rsi_5 = (r8_1 u>> 0x10) + rbx_2 * r10_2 + rdx_1 * rbp_3
    int32_t r13_2 = arg8 - arg4
    int32_t r15_2 = arg7 - arg5
    uint32_t rdx_6 = r15_2 u>> 0x10
    uint32_t rdi_3 = zx.d(r15_2.w)
    uint32_t rbx_6 = r13_2 u>> 0x10
    uint32_t rbp_4 = zx.d(r13_2.w)
    int32_t r9_2 = rbp_4 * rdi_3
    int32_t rbp_8 = (r9_2 u>> 0x10) + rdi_3 * rbx_6 + rbp_4 * rdx_6
    
    if (r10_2 * rbp_3 + (rsi_5 u>> 0x10) == rbx_6 * rdx_6 + (rbp_8 u>> 0x10)
            && (rsi_5 << 0x10 | zx.d(r8_1.w)) == (rbp_8 << 0x10 | zx.d(r9_2.w)))
        png_warning(arg1, "Ignoring attempt to set cHRM RGB triangle with zero area")
        return 0

return result
