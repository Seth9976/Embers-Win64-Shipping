// 函数: sub_140a45c50
// 地址: 0x140a45c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = GetCurrentThreadId()

if (*(arg1 + 0x30) != rax.d)
    return sub_140b732c0() __tailcall

if (arg2 u>= *(arg1 + 0x48))
    rax = sub_140a48c00()
    
    if (arg2 u< zx.q(rax.d) + *(arg1 + 0x48))
        int32_t rcx_4 = 0
        int32_t rdx_1
        void* rbx_2
        
        while (true)
            rax = sx.q(rcx_4)
            rbx_2 = rax * 0x4020 + &data_143d79710
            rdx_1 = *(rbx_2 + 0x4018)
            
            if (*rbx_2 u< rdx_1)
                rax = zx.q(*(rbx_2 + 0x10) - 0x10)
                
                if (*(arg2 - 0x10) u<= rax.d)
                    break
            
            rcx_4 += 1
            
            if (rcx_4 u>= 0xe)
                return rax
        
        uint64_t rcx_5 = 0
        
        if (rdx_1 != 0)
            while (true)
                int64_t* rdi_1 = *(rbx_2 + (rcx_5 << 3) + 0x18)
                int64_t rax_3 = rdi_1[1]
                
                if (rax_3 == arg2)
                    rax = memset(rax_3, 0xcd, *rdi_1)
                    *rdi_1 = 0
                    *rbx_2 -= 1
                    break
                
                rcx_5 = zx.q(rcx_5.d + 1)
                
                if (rcx_5.d u>= rdx_1)
                    return rax_3

return rax
