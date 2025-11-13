// 函数: sub_1403f6e90
// 地址: 0x1403f6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r9
int64_t arg_20 = r9

if (arg2 s> 0x2717)
    if (arg2 == 0x2718)
        int32_t rcx_17 = arg3.d
        
        if (rcx_17 - 1 u<= 1)
            arg1[2].d = rcx_17
            return 0
    else if (arg2 == 0x271a)
        int32_t rcx_16 = arg3.d
        
        if (rcx_16 s>= 0 && rcx_16 s< *(*arg1 + 8))
            arg1[3].d = rcx_16
            return 0
    else if (arg2 == 0x271c)
        int32_t rcx_15 = arg3.d
        
        if (rcx_15 s>= 1 && rcx_15 s<= *(*arg1 + 8))
            *(arg1 + 0x1c) = rcx_15
            return 0
    else
        if (arg2 != 0x271f)
            if (arg2 != 0x2720)
                return 0xfffffffb
            
            arg1[4].d = arg3.d
            return 0
        
        if (arg3 != 0)
            *arg3 = *arg1
            return 0
else if (arg2 == 0x2717)
    if (arg3 != 0)
        *arg3 = *(arg1 + 0x2c)
        *(arg1 + 0x2c) = 0
        return 0
else if (arg2 != 0xfbb)
    if (arg2 == 0xfbc)
        void* r10_1 = *arg1
        uint64_t r9_1 = zx.q(*(arg1 + 0xc))
        int64_t r8 = sx.q(*(r10_1 + 8) * 2)
        void* rdi_4 =
            arg1 + ((sx.q((r9_1 * 3).d << 3) + 0x16 + r8 + sx.q((arg1[1].d + 0x800) * r9_1.d)) << 2)
        memset(&arg1[5], 0, 
            sx.q(((zx.q((*(r10_1 + 4) + 0x818) * r9_1.d + (*(r10_1 + 8) << 3)) << 2) + 0x5c).d)
                - 0x28)
        int32_t i = 0
        
        if (*(*arg1 + 8) * 2 s<= 0)
            return 0
        
        do
            *((r8 << 2) + rdi_4) = 0xc1e00000
            *rdi_4 = 0xc1e00000
            i += 1
            rdi_4 += 4
        while (i s< *(*arg1 + 8) * 2)
        
        return 0
    
    if (arg2 != 0xfbf)
        if (arg2 != 0xfc1)
            return 0xfffffffb
        
        if (arg3 != 0)
            *arg3 = arg1[7].d
            return 0
    else if (arg3 != 0)
        *arg3 = arg1[5].d
        return 0
else if (arg3 != 0)
    *(arg1 + 0x14)
    *arg3 = divs.dp.d(sx.q(arg1[1].d), *(arg1 + 0x14))
    return 0

return 0xffffffff
