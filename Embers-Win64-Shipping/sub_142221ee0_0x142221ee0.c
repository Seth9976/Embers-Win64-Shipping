// 函数: sub_142221ee0
// 地址: 0x142221ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t arg_8

if (zx.d(*(rbp + &data_143f3a640)) != arg3)
    sub_141eca510(sub_141ec4150(), &arg_8, rbp.d)
    int64_t rax_12 = arg_8
    int32_t rcx_4 = 0
    
    while (true)
        if (rcx_4 s>= 0 && rcx_4 s< *(arg1 + 0x28))
            int64_t r9_3 = *(arg1 + 0x20)
            int64_t r8_5 = sx.q(rcx_4)
            
            if (rax_12 == *(r9_3 + r8_5 * 0xc))
                *(r9_3 + r8_5 * 0xc + 8) = arg3.b
                break
            
            rcx_4 += 1
            continue
        
        int64_t rdi_1 = sx.q(*(arg1 + 0x28))
        int32_t rax_14 = (rdi_1 + 1).d
        *(arg1 + 0x28) = rax_14
        
        if (rax_14 s> *(arg1 + 0x2c))
            sub_14083a7e0(arg1 + 0x20)
        
        int64_t rax_15 = *(arg1 + 0x20)
        int64_t rcx_6 = rdi_1 * 3
        *(rax_15 + (rcx_6 << 2)) = rax_12
        *(rax_15 + (rcx_6 << 2) + 8) = arg3.b.d
        break
else
    sub_141eca510(sub_141ec4150(), &arg_8, rbp.d)
    
    for (int32_t i = 0; i s>= 0; i += 1)
        int32_t r9_1 = *(arg1 + 0x28)
        
        if (i s>= r9_1)
            break
        
        int64_t r10_1 = *(arg1 + 0x20)
        
        if (arg_8 == *(r10_1 + sx.q(i) * 0xc))
            int32_t rax_4 = r9_1 - i
            
            if (rax_4 != 1)
                memmove(r10_1 + sx.q(i) * 0xc, r10_1 + sx.q(i + 1) * 0xc, (rax_4 - 1) * 0xc)
                r9_1 = *(arg1 + 0x28)
            
            *(arg1 + 0x28) = r9_1 - 1
            sub_140775970(arg1 + 0x20)
            break
return sub_14227a280(arg1, rbp.d, arg3) __tailcall
