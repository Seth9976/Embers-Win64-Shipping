// 函数: sub_142c044e0
// 地址: 0x142c044e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bfaab0(arg1, arg2)

if (rax == 0)
    return rax

int32_t rbp = 0
uint32_t r14_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint32_t rax_5 = zx.d(arg1[3])

if (r14_3 == neg.d(rax_5))
label_142c04617:
    rax_5.b = 1
else
    void* rbx_1 = &arg1[6]
    
    while (true)
        if (sub_142bfadd0(rbx_1 - 2, arg2, arg3).b != 0)
            uint64_t rdx_1 = zx.q(*(rbx_1 - 1))
            uint32_t r9_1 = zx.d(*(rbx_1 - 2))
            uint64_t r8_1 = zx.q(*rbx_1)
            uint64_t r10_1 = zx.q(*(rbx_1 + 1))
            
            if ((r9_1 << 0x18) + (rdx_1.d << 0x10) + (r8_1.d << 8) == neg.d(r10_1.d))
                goto label_142c04608
            
            int64_t r15_8 = (((((zx.q(r9_1) << 8) + rdx_1) << 8) + r8_1) << 8) + arg3 + r10_1
            
            if (sub_142bf7510(arg2, r15_8, 8) != 0)
                uint64_t r8_3 = zx.q(arg2[0xc] + 1)
                
                if (r8_3.d u>= 0x3fffffff)
                    goto label_142c045f8
                
                if (sub_142bf7510(arg2, r15_8 + 4, (r8_3 << 2).d).b != 0)
                    goto label_142c04608
                
                goto label_142c045f8
            
        label_142c045f8:
            
            if (sub_142bf99e0(arg2, rbx_1 - 2, 4).b != 0)
                *(rbx_1 - 2) = 0
            label_142c04608:
                rbp += 1
                rbx_1 += 4
                
                if (rbp u>= r14_3 + rax_5)
                    goto label_142c04617
                
                continue
        
        rax_5.b = 0
        break

return rax_5
