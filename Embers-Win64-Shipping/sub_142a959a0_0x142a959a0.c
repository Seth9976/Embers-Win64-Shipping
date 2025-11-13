// 函数: sub_142a959a0
// 地址: 0x142a959a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if (arg1[1] != 0)
    if (r10.d u>= 0xd800)
        if (r10.d u<= 0xffff)
            int32_t rcx_1 = 0
            
            if (r10.d s<= 0xdbff)
                rcx_1 = 0x140
            
            return zx.q(*(*arg1 + (
                sx.q((r10.d & 0x1f) + (zx.d(*(*arg1 + (sx.q(rcx_1 + (r10.d s>> 5)) << 1))) << 2))
                << 1)))
        
        if (r10.d u> 0x10ffff)
            return zx.q(*(*arg1 + (sx.q(arg1[3].d + 0x80) << 1)))
        
        if (r10.d s>= *(arg1 + 0x2c))
            return zx.q(*(*arg1 + (sx.q(arg1[6].d) << 1)))
        
        int64_t rdx_1 = *arg1
        int32_t rax_24 = (r10.d & 0x1f) + (zx.d(*(rdx_1 + (
            zx.q(zx.d(*(rdx_1 + (sx.q((r10.d s>> 0xb) + 0x820) << 1))) + (r10.d s>> 5 & 0x3f))
            << 1))) << 2)
        return zx.q(*(*arg1 + (sx.q(rax_24) << 1)))
    
    return zx.q(*(*arg1 + (sx.q((r10.d & 0x1f) + (zx.d(*(*arg1 + (r10 s>> 5 << 1))) << 2)) << 1)))

void* r9_1 = arg1[2]

if (r9_1 == 0)
    if (r10.d u> 0x10ffff)
        return zx.q(arg1[5].d)
    
    void* rdx_7 = arg1[9]
    
    if (r10.d s>= *(rdx_7 + 0x23328))
        return zx.q(*(*(rdx_7 + 0x23300) + (sx.q(*(rdx_7 + 0x23318) - 4) << 2)))
    
    int32_t rcx_26 = r10.d s>> 5
    int32_t rcx_27
    
    if ((r10.d & 0xfffffc00) != 0xd800)
        rcx_27 = (rcx_26 & 0x3f) + *(rdx_7 + (r10 s>> 0xb << 2))
    else
        rcx_27 = rcx_26 + 0x140
    
    return zx.q(*
        (*(rdx_7 + 0x23300) + (sx.q(*(rdx_7 + (sx.q(rcx_27) << 2) + 0x880) + (r10.d & 0x1f)) << 2)))

if (r10.d u< 0xd800)
    return zx.q(*(r9_1 + (sx.q((r10.d & 0x1f) + (zx.d(*(*arg1 + (r10 s>> 5 << 1))) << 2)) << 2)))

if (r10.d u<= 0xffff)
    int32_t rcx_14 = 0
    
    if (r10.d s<= 0xdbff)
        rcx_14 = 0x140
    
    return zx.q(*(r9_1 +
        (sx.q((r10.d & 0x1f) + (zx.d(*(*arg1 + (sx.q(rcx_14 + (r10.d s>> 5)) << 1))) << 2)) << 2)))

if (r10.d u> 0x10ffff)
    return zx.q(*(r9_1 + 0x200))

if (r10.d s>= *(arg1 + 0x2c))
    return zx.q(*(r9_1 + (sx.q(arg1[6].d) << 2)))

int64_t r8_2 = *arg1
int32_t rcx_23 = (r10.d & 0x1f) + (zx.d(*(r8_2
    + (zx.q(zx.d(*(r8_2 + (sx.q((r10.d s>> 0xb) + 0x820) << 1))) + (r10.d s>> 5 & 0x3f)) << 1))) << 2)
return zx.q(*(r9_1 + (sx.q(rcx_23) << 2)))
