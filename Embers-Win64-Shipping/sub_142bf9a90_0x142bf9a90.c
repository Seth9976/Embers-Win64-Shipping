// 函数: sub_142bf9a90
// 地址: 0x142bf9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bfaab0(arg1, arg2)

if (rax == 0)
    return rax

int32_t rsi = 0
uint32_t rbp_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint32_t rax_5 = zx.d(arg1[3])

if (rbp_3 == neg.d(rax_5))
label_142bf9b93:
    rax_5.b = 1
else
    void* rbx_1 = &arg1[6]
    
    while (true)
        if (sub_142bfadd0(rbx_1 - 2, arg2, arg3).b != 0)
            uint64_t r8_1 = zx.q(*(rbx_1 - 1))
            uint64_t rdx_1 = zx.q(*(rbx_1 - 2))
            uint64_t r9_1 = zx.q(*rbx_1)
            uint64_t r10_1 = zx.q(*(rbx_1 + 1))
            
            if ((rdx_1.d << 0x18) + (r8_1.d << 0x10) + (r9_1.d << 8) == neg.d(r10_1.d))
                goto label_142bf9b85
            
            if (sub_142bfa5f0(((((r8_1 + (rdx_1 << 8)) << 8) + r9_1) << 8) + arg3 + r10_1, arg2).b
                    != 0)
                goto label_142bf9b85
            
            if (sub_142bf99e0(arg2, rbx_1 - 2, 4).b != 0)
                *(rbx_1 - 2) = 0
            label_142bf9b85:
                rsi += 1
                rbx_1 += 4
                
                if (rsi u>= rbp_3 + rax_5)
                    goto label_142bf9b93
                
                continue
        
        rax_5.b = 0
        break

return rax_5
