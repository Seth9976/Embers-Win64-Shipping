// 函数: png_set_filter_heuristics_fixed
// 地址: 0x1403c2dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1403c2ae0(arg1, arg2, arg3)

if (arg2 == 2 && result.d != 0)
    if (arg3 s> 0)
        int64_t i = 0
        
        do
            int32_t rax = *(arg4 + (i << 2))
            void* rdx_4
            
            if (rax s<= 0)
                *(*(arg1 + 0x3c0) + (i << 1)) = 0x100
                result.w = 0x100
                rdx_4 = arg1 + 0x3c8
            else
                int64_t rax_4 = sx.q((rax << 8) + 0xc350) * 0x14f8b589
                *(*(arg1 + 0x3c8) + (i << 1)) = (rax_4 u>> 0x2d).w + (rax_4 u>> 0x3f).w
                int32_t rbp_1 = *(arg4 + (i << 2))
                result =
                    zx.q(divs.dp.d(sx.q((((rbp_1 u>> 0x1f) + rbp_1) s>> 1) + 0x186a000), rbp_1))
                rdx_4 = arg1 + 0x3c0
            
            *(*rdx_4 + (i << 1)) = result.w
            i += 1
        while (zx.q(arg3) != i)
    
    int32_t rcx_1 = *arg5
    
    if (rcx_1 s> 0x1869f)
        **(arg1 + 0x3d8) = (divu.dp.d(0:((rcx_1 u>> 1) + 0xc3500), rcx_1)).w
        result = zx.q(((zx.q(*arg5) << 3) + 0xc350).d u/ 0x186a0)
        **(arg1 + 0x3d0) = result.w
    
    int32_t rcx_4 = arg5[1]
    
    if (rcx_4 s> 0x1869f)
        *(*(arg1 + 0x3d8) + 2) = (divu.dp.d(0:((rcx_4 u>> 1) + 0xc3500), rcx_4)).w
        result = zx.q(((zx.q(arg5[1]) << 3) + 0xc350).d u/ 0x186a0)
        *(*(arg1 + 0x3d0) + 2) = result.w
    
    int32_t rcx_7 = arg5[2]
    
    if (rcx_7 s>= 0x186a0)
        *(*(arg1 + 0x3d8) + 4) = (divu.dp.d(0:((rcx_7 u>> 1) + 0xc3500), rcx_7)).w
        result = zx.q(((zx.q(arg5[2]) << 3) + 0xc350).d u/ 0x186a0)
        *(*(arg1 + 0x3d0) + 4) = result.w
    
    int32_t rcx_10 = arg5[3]
    
    if (rcx_10 s>= 0x186a0)
        *(*(arg1 + 0x3d8) + 6) = (divu.dp.d(0:((rcx_10 u>> 1) + 0xc3500), rcx_10)).w
        result = zx.q(((zx.q(arg5[3]) << 3) + 0xc350).d u/ 0x186a0)
        *(*(arg1 + 0x3d0) + 6) = result.w
    
    int32_t rcx_13 = arg5[4]
    
    if (rcx_13 s>= 0x186a0)
        *(*(arg1 + 0x3d8) + 8) = (divu.dp.d(0:((rcx_13 u>> 1) + 0xc3500), rcx_13)).w
        result = zx.q(((zx.q(arg5[4]) << 3) + 0xc350).d u/ 0x186a0)
        *(*(arg1 + 0x3d0) + 8) = result.w

return result
