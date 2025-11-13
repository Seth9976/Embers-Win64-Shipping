// 函数: sub_1403e86d0
// 地址: 0x1403e86d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = 0
int16_t* r10 = arg4
int32_t result = arg5 s>> 1
int64_t result_1 = sx.q(result)

if (result s> 0)
    int32_t r12_1 = sx.d(data_143ccb9ac)
    int32_t r13_1 = sx.d(data_143ccb9a8)
    int16_t* rbx_1 = arg1 + 2
    
    do
        int32_t r8 = *arg2
        int32_t r9_1 = sx.d(*(arg1 + (r11 << 2))) << 0xa
        int32_t rdx_1 = r9_1 - r8
        int32_t rdx_2 = arg2[1]
        int32_t rcx_3 = (rdx_1 s>> 0x10) * r12_1 + ((zx.d(rdx_1.w) * r12_1) s>> 0x10) + rdx_1
        int32_t rbp_1 = r8 + rcx_3
        *arg2 = rcx_3 + r9_1
        int32_t r8_2 = sx.d(*rbx_1) << 0xa
        int32_t rax_7 = r8_2 - rdx_2
        int32_t rcx_7 = ((zx.d(rax_7.w) * r13_1) s>> 0x10) + (rax_7 s>> 0x10) * r13_1
        int32_t rax_10 = rdx_2 + rcx_7
        arg2[1] = rcx_7 + r8_2
        int32_t rcx_12 = (((rax_10 + rbp_1) s>> 0xa) + 1) s>> 1
        
        if (rcx_12 s> 0x7fff)
            rcx_12 = 0x7fff
        else if (rcx_12 s< 0xffff8000)
            rcx_12 = -0x8000
        
        *(arg3 - arg4 + r10) = rcx_12.w
        result = (((rax_10 - rbp_1) s>> 0xa) + 1) s>> 1
        
        if (result s> 0x7fff)
            result = 0x7fff
        else if (result s< 0xffff8000)
            result = -0x8000
        
        r11 += 1
        *r10 = result.w
        rbx_1 = &rbx_1[2]
        r10 = &r10[1]
    while (r11 s< result_1)

return result
