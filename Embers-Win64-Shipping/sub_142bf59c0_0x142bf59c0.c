// 函数: sub_142bf59c0
// 地址: 0x142bf59c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
uint64_t rbp = zx.q(arg2 + 1)

if (rbp.d u< arg3)
    uint64_t r12_3 = rbp * 0x14
    i = arg3
    uint64_t var_48_1 = r12_3
    
    do
        int32_t rbx_1 = rbp.d
        
        if (rbp.d u> arg2)
            uint64_t rdi_1
            
            do
                int64_t r8 = *(arg1 + 0x70)
                rdi_1 = zx.q(rbx_1 - 1)
                
                if (arg4(r8 + rdi_1 * 0x14, r8 + rbp * 0x14) s<= 0)
                    break
                
                rbx_1 = rdi_1.d
            while (rdi_1.d u> arg2)
            r12_3 = var_48_1
            
            if (rbp.d != rbx_1)
                uint64_t r15_2 = zx.q(rbp.d - rbx_1)
                
                if ((r15_2 + 1).d u>= 2)
                    sub_142bf5140(arg1, rbx_1, (rbp + 1).d)
                
                int64_t r9 = *(arg1 + 0x70)
                int32_t rsi_2 = *(r12_3 + r9 + 0x10)
                uint64_t rdi_2 = zx.q(rbx_1) * 0x14
                var_48_1.o = *(r12_3 + r9)
                memmove(r9 + zx.q(rbx_1 + 1) * 0x14, rdi_2 + r9, (r15_2 * 0x14).d)
                int64_t rax_3 = *(arg1 + 0x70)
                *(rdi_2 + rax_3) = var_48_1.o
                *(rdi_2 + rax_3 + 0x10) = rsi_2
            
            i = arg3
        
        r12_3 += 0x14
        rbp = zx.q(rbp.d + 1)
        var_48_1 = r12_3
    while (rbp.d u< i)

return i
