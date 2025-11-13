// 函数: sub_142be1a70
// 地址: 0x142be1a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg3
int64_t rcx = *(arg1 + 0x478)

if (rcx != 0)
    if (arg2.d u>= *(arg1 + 0x28))
        return 6
    
    arg2 = zx.q(*(rcx + (zx.q(arg2.d) << 2)))
else if (arg2.d u>= *(arg1 + 0x470))
    return 6

int32_t rax_3 = *(arg1 + 0x46c)

if (rax_3 != 0)
    if (rax_3 u<= 2)
        void* rdx_10 = *(arg1 + 0x460) + zx.q((arg2 * 3).d << 4)
        *arg3 = zx.w(*(rdx_10 + 0x34))
        arg3[1] = zx.w(*(rdx_10 + 0x35))
        *(arg3 + 0xc) = sx.d(*(rdx_10 + 0x18)) << 6
        int32_t rax_23 = sx.d(*(rdx_10 + 0x19)) << 6
        *(arg3 + 0x10) = rax_23
        char r8_6 = *(rdx_10 + 0x20)
        char rcx_23 = *(rdx_10 + 0x21)
        
        if (rax_23 s<= 0)
            if (rax_23 == 0 && *(rsi + 0xc) == 0)
                if (r8_6 != 0 || rcx_23 != 0)
                    *(rsi + 0xc) = sx.d(r8_6) << 6
                    *(rsi + 0x10) = sx.d(rcx_23) << 6
                else
                    *(rsi + 0xc) = zx.d(rsi[1]) << 6
                    *(rsi + 0x10) = 0
        else if (rcx_23 s< 0)
            *(rsi + 0x10) = neg.d(rax_23)
        
        int32_t rcx_24 = *(rsi + 0xc)
        bool cond:1 = rcx_24 != *(rsi + 0x10)
        *(rsi + 0x14) = rcx_24 - *(rsi + 0x10)
        
        if (not(cond:1))
            uint32_t rax_33 = zx.d(rsi[1]) << 6
            *(rsi + 0x14) = rax_33
            *(rsi + 0x10) = rcx_24 - rax_33
        
        *(rsi + 0x18) =
            (sx.d(*(rdx_10 + 0x1f)) + sx.d(*(rdx_10 + 0x1e)) + zx.d(*(rdx_10 + 0x1a))) << 6
        uint32_t rax_36 = sub_142b93dd0(zx.d(*rsi), 0x400000, zx.d(*(arg1 + 0x112)))
        uint32_t rcx_31 = zx.d(rsi[1])
        *(rsi + 4) = rax_36
        *(rsi + 8) = sub_142b93dd0(rcx_31, 0x400000, zx.d(*(arg1 + 0x112)))
        return 0
    
    if (rax_3 == 3)
        void* rdx_1 = zx.q((arg2 << 2).d) + *(arg1 + 0x460)
        int64_t* rdi = *(arg1 + 0xa0)
        uint32_t rcx_7 =
            ((zx.d(*(rdx_1 + 8)) << 8 | zx.d(*(rdx_1 + 9))) << 8 | zx.d(*(rdx_1 + 0xa))) << 8
            | zx.d(*(rdx_1 + 0xb))
        
        if (rcx_7 + 4 u> *(arg1 + 0x4cc))
            return 3
        
        int32_t result = sub_142b97060(rdi, *(arg1 + 0x4c8) + rcx_7, arg4)
        
        if (result == 0)
            result = sub_142b96500(rdi, result + 4)
            
            if (result == 0)
                uint32_t rbx = zx.d(sub_142b967c0(rdi))
                sub_142b967c0(rdi)
                sub_142b96620(rdi)
                uint32_t rdi_1 = zx.d(*(arg1 + 0x112))
                *rsi = rbx.w
                rsi[1] = rbx.w
                uint32_t rbx_1 = rbx << 6
                *(rsi + 0xc) = sub_142b93dd0(sx.d(*(arg1 + 0x13c)), rbx_1, rdi_1)
                *(rsi + 0x10) = sub_142b93dd0(sx.d(*(arg1 + 0x13e)), rbx_1, rdi_1)
                *(rsi + 0x14) = sub_142b93dd0(
                    sx.d(*(arg1 + 0x140)) - sx.d(*(arg1 + 0x13e)) + sx.d(*(arg1 + 0x13c)), rbx_1, 
                    rdi_1)
                uint32_t rax_14 = sub_142b93dd0(zx.d(*(arg1 + 0x142)), rbx_1, rdi_1)
                uint32_t rcx_19 = zx.d(*rsi)
                *(rsi + 0x18) = rax_14
                uint32_t rax_15 = sub_142b93dd0(rcx_19, 0x400000, zx.d(*(arg1 + 0x112)))
                uint32_t rcx_20 = zx.d(rsi[1])
                *(rsi + 4) = rax_15
                *(rsi + 8) = sub_142b93dd0(rcx_20, 0x400000, zx.d(*(arg1 + 0x112)))
                return 0
        
        return result

return 2
