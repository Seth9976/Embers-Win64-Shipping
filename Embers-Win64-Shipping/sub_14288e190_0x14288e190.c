// 函数: sub_14288e190
// 地址: 0x14288e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)

if (arg2 != 0 && arg3 != 0 && arg1 - 1 u<= 1 && arg3 u<= 0x7fffffffffffffff)
    while (true)
        uint32_t rcx_6 = 0
        
        if (arg1 == 2)
            if (arg3 u< 4)
                break
            
            uint32_t rax_4 = zx.d(*(arg2 + 3))
            uint32_t rcx_5 = ((zx.d(*arg2) << 8 | zx.d(*(arg2 + 1))) << 8 | zx.d(*(arg2 + 2))) << 8
            arg2 += 4
            rcx_6 = rcx_5 | rax_4
            arg3 -= 4
        
        if (arg3 u< 2)
            break
        
        uint32_t r10_3 = zx.d(*arg2) << 8 | zx.d(*(arg2 + 1))
        void* var_28_1
        var_28_1.o = (arg2 + 2).o
        
        if (arg3 - 2 u< 2)
            break
        
        uint64_t rdx_2 = zx.q(*(arg2 + 2)) << 8 | zx.q(*(arg2 + 3))
        void* var_28_2 = arg2 + 4
        void* var_20_2 = arg3 - 4
        
        if (arg3 - 4 u< rdx_2)
            break
        
        void* rbx_3 = arg3 - 4 - rdx_2
        void* var_28_3
        var_28_3.o = (rdx_2 + arg2 + 4).o
        
        if (arg4 != 0)
            int32_t rax_10
            
            if (arg1 == 1 || rcx_6 == 0x1d0)
                rax_10 = sub_1428558b0(arg4, r10_3, sub_14288e360, 0, 0, sub_14288e3b0, 0)
            else
                rax_10 = sub_142855850(arg4, r10_3, rcx_6, sub_14288e3d0, 0, 0, sub_14288e570, 0)
            
            if (rax_10 == 0)
                break
        
        if (rbx_3 == 0)
            return 1
        
        arg3 = rbx_3
        arg2 = var_28_3

return 0
