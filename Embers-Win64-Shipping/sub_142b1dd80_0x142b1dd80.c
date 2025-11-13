// 函数: sub_142b1dd80
// 地址: 0x142b1dd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (arg2 s>= zx.d(*(arg1 + 8)))
    int16_t rax_1 = sub_142af42a0(arg1, arg2)
    int16_t rcx = rax_1
    
    if (rax_1 u< *(arg1 + 0x1e))
        int16_t* rbp_1 = nullptr
        
        if (rax_1 u>= *(arg1 + 0x1a))
            rbp_1 = arg3
            uint32_t rcx_3 = (zx.d(rax_1) u>> 3) - zx.d(*(arg1 + 0x1c))
            *arg4 = 0
            rdi += rcx_3
            
            if (rdi u> 0xffff)
                *arg3 = (rdi s>> 0xa).w - 0x2840
                *arg4 += 1
                arg3[sx.q(*arg4)] = (rdi.w & 0x3ff) | 0xdc00
            else
                *arg3 = rdi.w
            
            *arg4 += 1
            rcx = sub_142b1e310(arg1, rdi)
        
        int16_t rdx_2 = *(arg1 + 0xe)
        
        if (rcx u< rdx_2)
            return rbp_1
        
        if (rcx == rdx_2 || rcx == (*(arg1 + 0x10) | 1))
            *arg4 = sub_142b1c2c0(rdi, arg3)
            return arg3
        
        int64_t rax_8 = *(arg1 + 0x30)
        uint64_t rcx_7 = zx.q(rcx) u>> 1
        *arg4 = zx.d(*(rax_8 + (rcx_7 << 1))) & 0x1f
        return rax_8 + (rcx_7 << 1) + 2

return nullptr
