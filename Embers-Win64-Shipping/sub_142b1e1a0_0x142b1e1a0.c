// 函数: sub_142b1e1a0
// 地址: 0x142b1e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= zx.d(*(arg1 + 8)))
    int16_t rax_1 = sub_142af42a0(arg1, arg2)
    int16_t rcx = *(arg1 + 0xe)
    
    if (rax_1 u>= rcx && *(arg1 + 0x1e) u> rax_1)
        int16_t* rax_3
        
        if (rax_1 == rcx || rax_1 == (*(arg1 + 0x10) | 1))
            sub_142b1e120(arg2, arg3)
            rax_3 = arg3
            *arg4 = 2
        else
            if (rax_1 u< *(arg1 + 0x1a))
                int64_t rax_7 = *(arg1 + 0x30)
                uint64_t rcx_6 = zx.q(rax_1) u>> 1
                void* r9 = rax_7 + (rcx_6 << 1)
                uint32_t rax_8 = zx.d(*(rax_7 + (rcx_6 << 1)))
                int32_t rdi_3 = rax_8 & 0x1f
                
                if ((rax_8.b & 0x40) == 0)
                    *arg4 = rdi_3
                    return r9 + 2
                
                void* rax_10 = r9 - (((zx.q(zx.d(rax_8.w) u>> 7) & 1) << 1) + 2)
                int16_t rdx = *rax_10
                
                if (rdx u<= 0x1f)
                    *arg4 = zx.d(rdx)
                    return rax_10 - zx.q(rdx) * 2
                
                *arg3 = rdx
                sub_142a8bca0(&arg3[1], r9 + 6, rdi_3 - 2)
                *arg4 = rdi_3 - 1
                return arg3
            
            uint32_t rcx_4 = (zx.d(rax_1) u>> 3) - zx.d(*(arg1 + 0x1c))
            *arg4 = 0
            int32_t rdi_1 = arg2 + rcx_4
            
            if (rdi_1 u> 0xffff)
                *arg3 = (rdi_1 s>> 0xa).w - 0x2840
                *arg4 += 1
                rdi_1.w &= 0x3ff
                rdi_1.w |= 0xdc00
                arg3[sx.q(*arg4)] = rdi_1.w
                rax_3 = arg3
                *arg4 += 1
            else
                *arg3 = rdi_1.w
                rax_3 = arg3
                *arg4 += 1
        
        return rax_3

return nullptr
