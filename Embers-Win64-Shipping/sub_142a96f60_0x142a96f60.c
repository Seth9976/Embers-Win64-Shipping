// 函数: sub_142a96f60
// 地址: 0x142a96f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2)
int64_t rcx_1 = rdx - *(arg1 + 0x168)
void* rdi = *(*(arg1 + 0x1d8) + 0x10)

if (rdx - *(arg1 + 0x168) s< 0 || rcx_1 s>= sx.q(*(arg1 + 0x164))
        || *(*(arg1 + 0x178) + (rcx_1 << 1)) u>= 0xdc00)
    sub_142aeacd0(arg1 + 0x148, rdx)
else
    *(arg1 + 0x170) = rcx_1.d

if (*(arg1 + 0x1d8) != 0)
    int64_t rax_3 = sx.q(*(arg1 + 0x170))
    int64_t rax_4
    
    if (rax_3.d s> *(arg1 + 0x164))
        rax_4 = (*(*(arg1 + 0x180) + 0x40))(arg1 + 0x148)
    else
        rax_4 = rax_3 + *(arg1 + 0x168)
    
    if (rax_4 != 0)
        int32_t rcx_4 = *(arg1 + 0x170)
        int64_t rdx_1
        
        if (rcx_4 s> 0)
            rdx_1 = *(arg1 + 0x178)
        
        uint32_t i
        
        if (rcx_4 s<= 0 || *(rdx_1 + (sx.q(rcx_4 - 1) << 1)) u>= 0xd800)
            i = sub_142aeabf0(arg1 + 0x148)
        else
            *(arg1 + 0x170) = rcx_4 - 1
            i = zx.d(*(rdx_1 + (sx.q(rcx_4 - 1) << 1)))
        
        void* rsi_1 = rdi + 0x10 + zx.q(*(rdi + 4))
        
        while (i != 0xffffffff)
            int64_t* r9_1 = *(*(arg1 + 0x1d8) + 0x30)
            int32_t rax_11
            
            if (i u< 0xd800)
                rax_11 = (i & 0x1f) + (zx.d(*(*r9_1 + (sx.q(i) s>> 5 << 1))) << 2)
            else if (i u<= 0xffff)
                int32_t rcx_10 = 0
                
                if (i s<= 0xdbff)
                    rcx_10 = 0x140
                
                rax_11 = (i & 0x1f) + (zx.d(*(*r9_1 + (sx.q(rcx_10 + (i s>> 5)) << 1))) << 2)
            else if (i u> 0x10ffff)
                rax_11 = r9_1[3].d + 0x80
            else if (i s< *(r9_1 + 0x2c))
                int64_t rdx_4 = *r9_1
                rax_11 = (i & 0x1f) + (zx.d(*(rdx_4 + (
                    zx.q(zx.d(*(rdx_4 + (sx.q((i s>> 0xb) + 0x820) << 1))) + (i s>> 5 & 0x3f))
                    << 1))) << 2)
            else
                rax_11 = r9_1[6].d
            
            uint32_t rcx_17 =
                zx.d(*(rsi_1 + ((zx.q(*(*r9_1 + (sx.q(rax_11) << 1))) & 0xbfff) << 1) + 8))
            rsi_1 = rdi + 0x10 + zx.q(rcx_17 * *(rdi + 4))
            
            if (rcx_17 == 0)
                break
            
            int32_t rcx_18 = *(arg1 + 0x170)
            int64_t rdx_7
            
            if (rcx_18 s> 0)
                rdx_7 = *(arg1 + 0x178)
            
            if (rcx_18 s<= 0 || *(rdx_7 + (sx.q(rcx_18 - 1) << 1)) u>= 0xd800)
                i = sub_142aeabf0(arg1 + 0x148)
            else
                *(arg1 + 0x170) = rcx_18 - 1
                i = zx.d(*(rdx_7 + (sx.q(rcx_18 - 1) << 1)))
        
        int32_t rcx_21 = *(arg1 + 0x170)
        
        if (rcx_21 s> *(arg1 + 0x164))
            jump(*(*(arg1 + 0x180) + 0x40))
        
        return zx.q(*(arg1 + 0x168) + rcx_21)

return 0xffffffff
