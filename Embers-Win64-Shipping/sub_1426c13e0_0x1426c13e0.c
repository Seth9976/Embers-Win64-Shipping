// 函数: sub_1426c13e0
// 地址: 0x1426c13e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

void* const r13

if (rax == 0)
    r13 = nullptr
else
    void* rbx_1 = *(rax + 0x138)
    
    if (rbx_1 == 0)
        r13 = nullptr
    else
        void* rax_1 = sub_14272b250()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            r13 = nullptr
        else
            r13 = *(rbx_1 + 0xa0)

if (r13 != 0)
    int64_t rcx_1 = sx.q(*(r13 + 0x48))
    
    if (rcx_1.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t r14
        r14.b = **(r13 + 0x40) != arg1
        int64_t rbx_2 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_2 += 1
            rdi_1 += 1
            
            if (rbx_2 s< rcx_1)
                int64_t* rcx_2 = *(r13 + 0x40) + (rbx_2 << 3)
                
                do
                    int32_t rax_6
                    rax_6.b = *rcx_2 != arg1
                    
                    if (zx.d(r14.b) != rax_6)
                        break
                    
                    rdi_1 += 1
                    rbx_2 += 1
                    rcx_2 = &rcx_2[1]
                while (rbx_2 s< rcx_1)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r14.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_3 = *(r13 + 0x40)
                    memmove(rcx_3 + (sx.q(r12_1) << 3), rcx_3 + (r9_1 << 3), rbp_2 << 3)
                
                r12_1 += rbp_2
            
            r14.b ^= 1
        while (rbx_2 s< rcx_1)
        
        *(r13 + 0x48) = r12_1

sub_1426bc650(arg1)
return sub_141efdea0(arg1) __tailcall
