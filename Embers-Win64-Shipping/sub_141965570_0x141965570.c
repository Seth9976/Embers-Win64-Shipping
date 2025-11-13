// 函数: sub_141965570
// 地址: 0x141965570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

uint64_t rax_1 = zx.q(*arg2)
int32_t rcx = *arg1
arg2.b = rcx == rax_1.d

if (rcx == rax_1.d)
    if (rcx == 0)
        int64_t rcx_5 = *(arg1 + 4)
        uint64_t rcx_6 = rcx_5 - *(rbx + 4)
        
        if (rcx_5 == *(rbx + 4))
            int64_t rcx_7 = *(arg1 + 0xc)
            rcx_6 = rcx_7 - *(rbx + 0xc)
            
            if (rcx_7 == *(rbx + 0xc))
                rcx_6 = zx.q(arg1[5]) - zx.q(rbx[5])
        
        rax_1.b = rcx_6 == 0
        return rax_1
    
    if (rcx == 1)
        int32_t rax_2 = arg1[0x3f]
        int32_t r8 = rbx[0x3f]
        int64_t rsi
        rsi.b = rax_2 == r8
        int32_t rdx = 0
        
        if (rax_2 s<= r8)
            r8 = rax_2
        
        if (r8 != 0)
            do
                int64_t rax_3 = sx.q(rdx)
                int64_t rax_4
                rax_4.b = *(arg1 + (rax_3 << 3) + 0x7c) == *(rbx + (rax_3 << 3) + 0x7c)
                rdx += 1
                rsi.b &= rax_4.b
            while (rdx u< r8)
        
        uint64_t rax_5
        
        if (arg1[0x6c] == rbx[0x6c] && *(arg1 + 0x18) == *(rbx + 0x18)
                && *(arg1 + 0x20) == *(rbx + 0x20) && arg1[0xa] == rbx[0xa]
                && *(arg1 + 0x2c) == *(rbx + 0x2c) && *(arg1 + 0x34) == *(rbx + 0x34)
                && arg1[0xf] == rbx[0xf] && *(arg1 + 0x40) == *(rbx + 0x40)
                && *(arg1 + 0x48) == *(rbx + 0x48) && arg1[0x14] == rbx[0x14]
                && *(arg1 + 0x54) == *(rbx + 0x54) && *(arg1 + 0x5c) == *(rbx + 0x5c)
                && arg1[0x19] == rbx[0x19] && *(arg1 + 0x68) == *(rbx + 0x68)
                && *(arg1 + 0x70) == *(rbx + 0x70) && arg1[0x1e] == rbx[0x1e]
                && arg1[0x67] == rbx[0x67] && arg1[0x68] == rbx[0x68] && arg1[0x69] == rbx[0x69]
                && arg1[0x6a] == rbx[0x6a] && arg1[0x6b].b == rbx[0x6b].b
                && *(arg1 + 0x1ae) == *(rbx + 0x1ae) && *(arg1 + 0x1ad) == *(rbx + 0x1ad)
                && *(arg1 + 0x1af) == *(rbx + 0x1af) && arg1[0x6d].b == rbx[0x6d].b
                && *(arg1 + 0x1b5) == *(rbx + 0x1b5)
                && memcmp(&arg1[0x41], &rbx[0x41], 0x39).d == 0
                && *(arg1 + 0x140) == *(rbx + 0x140) && arg1[0x52] == rbx[0x52]
                && *(arg1 + 0x14c) == *(rbx + 0x14c) && arg1[0x55] == rbx[0x55]
                && arg1[0x56].w == rbx[0x56].w)
            rax_5 = memcmp(&arg1[0x57], &rbx[0x57], 0x20)
            
            if (rax_5.d == 0 && memcmp(&arg1[0x5f], &rbx[0x5f], zx.q((rax_5 + 0x20).d)).d == 0)
                rax_5.b = 1
                rax_5.b = 1 & rsi.b
                return rax_5
        
        rax_5.b = 0
        rax_5.b = 0
        return rax_5

return zx.q(arg2.b)
