// 函数: sub_142c2fc10
// 地址: 0x142c2fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int64_t r13
r13.b = 0
uint64_t rsi
rsi.b = 0
char arg_8 = 0
arg2[0xc].d = 0
void* rbx = arg1 + 8
uint32_t r14_3 =
    (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t rax_4 = zx.d(*(arg1 + 7))
uint32_t r14_4 = r14_3 + rax_4
uint32_t arg_10 = r14_4
int32_t r15 = 0

if (r14_3 != neg.d(rax_4))
    do
        void* r10_1 = arg2[3]
        int32_t r8_1 = *(r10_1 + 0x38)
        uint32_t rdx_5
        rdx_5.b = not.b((((zx.d(*(rbx + 5)) << 0x10) + (zx.d(*(rbx + 6)) << 8)
            + (zx.d(*(rbx + 4)) << 0x18) + zx.d(*(rbx + 7))) u>> 0x1f).b)
        int32_t rcx
        rcx.b = (r8_1 & 0xfffffffe) == 4
        
        if (rcx == (rdx_5 & 1))
            int32_t rbp_7 = ((zx.d(*(rbx + 5)) << 0x10) + (zx.d(*(rbx + 6)) << 8)
                + (zx.d(*(rbx + 4)) << 0x18) + zx.d(*(rbx + 7))) u>> 0x1c & 1
            int32_t r12_1
            r12_1.b = (r8_1 & 0xfffffffd) == 5
            int32_t var_50_1 = arg2[0xc].d
            int32_t var_58_1 = 0x78
            int32_t var_60_1 = 0x72
            int32_t var_68_1 = 0x65
            
            if (sub_142c22650(r10_1, arg2[1], "start %c%c%c%c subtable %d", 0x6b) != 0)
                if (rsi.b == 0 && test_bit(
                        (zx.d(*(rbx + 5)) << 0x10) + (zx.d(*(rbx + 6)) << 8)
                            + (zx.d(*(rbx + 4)) << 0x18) + zx.d(*(rbx + 7)), 
                        0x1e))
                    arg_8 = 1
                    void* rax_24 = arg2[3]
                    int32_t i_2 = *(rax_24 + 0x60)
                    
                    if (i_2 != 0)
                        void* rdx_9 = *(rax_24 + 0x80) + 0x10
                        uint64_t i_1 = zx.q(i_2)
                        uint64_t i
                        
                        do
                            *(rdx_9 + 2) = 2
                            int16_t rax_26 = 1
                            
                            if ((*(arg2[3] + 0x38) & 0xfffffffd) == 4)
                                rax_26 = 0xffff
                            
                            *rdx_9 = rax_26
                            rdx_9 += 0x14
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        r14_4 = arg_10
                
                if (rbp_7 != r12_1)
                    sub_142bf5780(arg2[3])
                
                char* rdx_10 = nullptr
                
                if (r15 u< r14_4 - 1)
                    rdx_10 = rbx
                
                void* arg_18 = &arg2[4]
                void* rax_28 = arg2[9]
                int64_t rcx_10 = *(rax_28 + 0x10)
                arg2[5] = rcx_10
                int64_t r8_4 = zx.q(*(rax_28 + 0x18)) + rcx_10
                arg2[6] = r8_4
                
                if (rdx_10 != 0)
                    if (rdx_10 u< rcx_10 || r8_4 u<= rdx_10)
                        arg2[6] = 0
                        arg2[5] = 0
                    else
                        arg2[5] = rdx_10
                        uint64_t rcx_17 = (((((zx.q(*rdx_10) << 8) + zx.q(rdx_10[1])) << 8)
                            + zx.q(rdx_10[2])) << 8) + zx.q(rdx_10[3])
                        uint64_t rax_33 = r8_4 - rdx_10
                        
                        if (rax_33 u>= rcx_17)
                            rax_33 = rcx_17
                        
                        arg2[6] = &rdx_10[rax_33]
                
                char rcx_22 = (zx.d(*(rbx + 5)) << 0x10).b + (zx.d(*(rbx + 6)) << 8).b
                    + (zx.d(*(rbx + 4)) << 0x18).b + *(rbx + 7)
                uint32_t rax_40 = zx.d(rcx_22)
                char rax_44
                
                if (rcx_22 == 0)
                    rax_44 = sub_142c2f800(rbx, arg2)
                else if (rax_40 == 1)
                    rax_44 = sub_142c2f8b0(rbx, arg2)
                else if (rax_40 == 2)
                    rax_44 = sub_142c2f9f0(rbx, arg2)
                else if (rax_40 == 4)
                    rax_44 = sub_142c2faa0(rbx, arg2)
                else if (rax_40 == 6)
                    rax_44 = sub_142c2fb60(rbx, arg2)
                else
                    rax_44 = 0
                
                r13.b |= rax_44
                void* rax_45 = arg2[9]
                int64_t rcx_28 = *(rax_45 + 0x10)
                arg2[5] = rcx_28
                arg2[6] = zx.q(*(rax_45 + 0x18)) + rcx_28
                
                if (rbp_7 != r12_1)
                    sub_142bf5780(arg2[3])
                
                int32_t var_50_2 = arg2[0xc].d
                int32_t var_58_2 = 0x78
                int32_t var_60_2 = 0x72
                int32_t var_68_2 = 0x65
                sub_142c22650(arg2[3], arg2[1], "end %c%c%c%c subtable %d", 0x6b)
                rsi = zx.q(arg_8)
        
        rbx = rbx + zx.q(*(rbx + 3))
            + (((((zx.q(*rbx) << 8) + zx.q(*(rbx + 1))) << 8) + zx.q(*(rbx + 2))) << 8)
        arg2[0xc].d += 1
        r15 += 1
    while (r15 u< r14_4)

return zx.q(r13.b)
