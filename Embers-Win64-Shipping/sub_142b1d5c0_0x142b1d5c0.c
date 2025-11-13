// 函数: sub_142b1d5c0
// 地址: 0x142b1d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = arg2

if (arg2 != arg3)
    do
        uint32_t rbx_3 = zx.d(*rdi)
        int16_t* r14_1 = rdi
        rdi = &rdi[1]
        int32_t r8_1
        
        if ((rbx_3 & 0xfffff800) == 0xd800)
            uint32_t rcx_1
            
            if (not(test_bit(rbx_3, 0xa)) && rdi != arg3)
                rcx_1 = zx.d(*rdi)
            
            if (test_bit(rbx_3, 0xa) || rdi == arg3 || (rcx_1 & 0xfffffc00) != 0xdc00)
                r8_1 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                rdi = &rdi[1]
                rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rcx_1
                int64_t* rcx_2 = *(arg1 + 0x20)
                
                if (rbx_3 s< rcx_2[3].d)
                    r8_1 = sub_142b6a760(rcx_2, rbx_3)
                else
                    r8_1 = *(rcx_2 + 0x14) - 2
        else
            r8_1 = zx.d(*(**(arg1 + 0x20) + (zx.q(rbx_3) u>> 6 << 1))) + (rbx_3 & 0x3f)
        
        int16_t rax_11 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_1) << 1))
        
        if (rbx_3 s< zx.d(*(arg1 + 0xa)) || rax_11 u< *(arg1 + 0x16))
            return r14_1
        
        int16_t rcx_5 = *(arg1 + 0x1a)
        
        if (rcx_5 u<= rax_11 && rax_11 u< *(arg1 + 0x1e))
            return r14_1
        
        if ((rax_11.b & 1) != 0)
            if (arg4 == 0)
                break
            
            if (rax_11 == 1)
                break
            
            bool cond:0_1
            
            if (rax_11 u< rcx_5)
                cond:0_1 = *(*(arg1 + 0x30) + (zx.q(rax_11) u>> 1 << 1)) u<= 0x1ff
            else
                rax_11.b &= 6
                cond:0_1 = rax_11.b u<= 2
            
            int32_t rdx_4
            rdx_4.b = cond:0_1
            
            if (rdx_4 != 0)
                break
    while (rdi != arg3)

return rdi
