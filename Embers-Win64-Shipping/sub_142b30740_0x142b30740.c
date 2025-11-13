// 函数: sub_142b30740
// 地址: 0x142b30740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg4)
uint64_t rbx = zx.q(arg3)
int64_t i_2 = sx.q(arg2)

if (*arg5 s> 0)
    return 0

if (rbx.d == 0x500)
    return sub_142b303c0(arg1, i_2.d, r10.d) __tailcall

int64_t rdi

if (arg2 s< 0 || i_2.d s>= *(arg1 + 0x250))
    rdi = 0
else
    rdi = *(*(arg1 + 0x260) + (i_2 << 3))

if ((rbx - 1).d u<= 0x4fe)
    int64_t rdx_2 = 0x20
    
    if (r10.d == 1)
        rdx_2 = 0x40
    
    if ((rdi & rdx_2) == 0)
        int64_t rbp_2 = r10 | 0x500000000000000
        
        if (r10.d == 1)
            rbp_2 |= zx.q(rdi.d) & 0x20
            rdi &= 0xffffffffffffffdf
        
        sub_142aeb3c0(arg1 + 0x248, rdx_2 | rdi, i_2.d)
        int32_t rdi_2 = rdi.d s>> 8 & 0xfffff
        int32_t rax_7 = sub_142b31100(arg1, i_2.d, rdi_2, rbx << 0x30 | r10, arg5)
        sub_142b31100(arg1, rax_7, rdi_2, rbp_2, arg5)
        return zx.q(rax_7)

int32_t i_1 = rdi.d s>> 8 & 0xfffff

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rax_10
        
        if (i_1 s>= *(arg1 + 0x250))
            rax_10 = 0
        else
            rax_10 = *(*(arg1 + 0x260) + (zx.q(i_1) << 3))
        
        int32_t rcx_6 = rax_10.d & 3
        
        if (rcx_6 s<= r10.d)
            if (rcx_6 s< r10.d)
                break
            
            if ((rax_10.b u>> 3 & 1) == 0)
                uint32_t rdx_6 = zx.d((rax_10 s>> 0x30).w)
                
                if (rdx_6 == rbx.d)
                    return zx.q(i_1)
                
                if (rdx_6 u> rbx.d)
                    break
        
        i_2 = zx.q(i_1)
        i = rax_10.d s>> 8 & 0xfffff
        i_1 = i
    while (i != 0)

return sub_142b31100(arg1, i_2.d, i_1, rbx << 0x30 | r10, arg5)
