// 函数: sub_141ec34a0
// 地址: 0x141ec34a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx
rcx.b = sub_140b5b8a0(arg3.d, 0).b == 0
int32_t i
i.b = arg3:4.d != 0
rcx.b |= i.b

if (rcx.b != 0)
    for (i = 0; i s>= 0; i += 1)
        if (i s>= arg2[1].d)
            break
        
        int64_t r8 = *arg2
        int64_t i_1 = sx.q(i)
        int64_t r9 = *(r8 + i_1 * 0x48)
        
        if (r9 == arg3)
            *arg4 = r9
            int64_t rax = i_1 * 9
            void* rcx_2 = r8 + (rax << 3)
            arg4[1].b = *(r8 + (rax << 3) + 8)
            *(arg4 + 9) = *(rcx_2 + 9)
            *(arg4 + 0xa) = *(rcx_2 + 0xa)
            *(arg4 + 0xb) = *(rcx_2 + 0xb)
            *(arg4 + 0x1b) = *(rcx_2 + 0x1b)
            *(arg4 + 0x2c) = *(rcx_2 + 0x2c)
            int64_t rax_4
            
            if (&arg4[7] != rcx_2 + 0x38)
                int64_t rdi_1 = sx.q(*(rcx_2 + 0x40))
                int64_t rsi_1 = *(rcx_2 + 0x38)
                int32_t r8_1 = *(arg4 + 0x44)
                arg4[8].d = rdi_1.d
                
                if (rdi_1.d == 0 && r8_1 == 0)
                    *(arg4 + 0x44) = rdi_1.d
                    rax_4.b = 1
                    return rax_4
                
                sub_1407c3650(&arg4[7], rdi_1.d, r8_1)
                memcpy(arg4[7], rsi_1, (rdi_1 * 0xc).d)
            
            rax_4.b = 1
            return rax_4

i.b = 0
return i
