// 函数: sub_142b2ac90
// 地址: 0x142b2ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x190))

if (rax.d == *(arg1 + 0x194))
    *arg2 = 0xffffffff
    return 0xc0

*arg2 = zx.d(*(rax + *(arg1 + 0x188)))
*(arg1 + 0x190) += 1
int64_t r10 = sx.q(*arg2)
int64_t rdx = sx.q(*(arg1 + 0x190))

if (r10.b s>= 0)
    return zx.q(*(*(*(arg1 + 8) + 0x10) + (r10 << 2)))

if (r10.d s>= 0xe0 && r10.d s< 0xf0)
    int32_t rcx_3 = *(arg1 + 0x194)
    
    if ((rdx + 1).d s< rcx_3 || rcx_3 s< 0)
        int64_t r8_1 = *(arg1 + 0x188)
        uint32_t r9_1 = zx.d(*(rdx + r8_1))
        
        if (test_bit(sx.d(*((zx.q(r10.d) & 0xf) + " 000000000000")), zx.d((r9_1 u>> 5).b)))
            char rax_12 = *(sx.q((rdx + 1).d) + r8_1) - 0x80
            
            if (rax_12 u<= 0x3f)
                *arg2 = ((r10.d & 0xf) << 6 | (r9_1 & 0x3f)) << 6 | zx.d(rax_12)
                *(arg1 + 0x190) += 2
                int64_t* r9_3 = *(arg1 + 8)
                int64_t r8_2 = sx.q(*arg2)
                return zx.q(*(r9_3[2]
                    + (zx.q((r8_2.d & 0x1f) + (zx.d(*(*r9_3 + (r8_2 s>> 5 << 1))) << 2)) << 2)))

if ((r10.d s< 0xe0 || r10.d s< 0xe0) && r10.d s>= 0xc2)
    int64_t rax_17 = sx.q(*(arg1 + 0x190))
    
    if (rax_17.d != *(arg1 + 0x194))
        char rdx_2 = *(rax_17 + *(arg1 + 0x188)) - 0x80
        
        if (rdx_2 u<= 0x3f)
            int64_t* r8_4 = *(arg1 + 8)
            uint32_t r9_4 = zx.d(rdx_2)
            uint64_t result =
                zx.q(*(r8_4[2] + (zx.q(zx.d(*(*r8_4 + (sx.q((r10 + 0x760).d) << 1))) + r9_4) << 2)))
            *arg2 = (r10.d & 0x1f) << 6 | r9_4
            *(arg1 + 0x190) += 1
            return result

int32_t rax_22 = sub_142a9bc10(*(arg1 + 0x188), arg1 + 0x190, *(arg1 + 0x194), r10.d, 0xfd)
*arg2 = rax_22
return sub_142aa3ce0(*(arg1 + 0x10), rax_22) __tailcall
