// 函数: sub_141e96960
// 地址: 0x141e96960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg2
uint64_t i

if (sub_140d3e110(arg1 + 0x40) == 0)
    i = zx.q(*(arg1 + 0xcc))
    *(arg1 + 0xc8) = 0
    
    if (i.d s< 0 && i.d != 0)
        return sub_1405947f0(arg1 + 0xc0, 0) __tailcall
else
    i = sub_141e433d0(sub_140d3c6e0(arg1 + 0x40), &data_143f398c8)
    uint64_t i_1 = i
    int64_t* i_2 = i
    
    if (i != 0)
        *(arg1 + 0xc8) = 0
        
        if (*(arg1 + 0xcc) s<= 0xffffffff)
            sub_1405947f0(arg1 + 0xc0, 0)
        
        i.w = i_2[1].w - 1
        
        if (i.w != 0xffff)
            int32_t rcx_5 = *(arg1 + 0xc8) + 1 + zx.d(i.w)
            *(arg1 + 0xc8) = rcx_5
            
            if (rcx_5 s> *(arg1 + 0xcc))
                sub_140594770(arg1 + 0xc0)
                rcx_5 = *(arg1 + 0xc8)
            
            int64_t rdi_2 = *(arg1 + 0xc0)
            int64_t rcx_7 = sx.q(rcx_5) * 2
            uint64_t rcx_8 = rcx_7 u>> 1
            
            if (rdi_2 u> rcx_7 + rdi_2)
                rcx_8 = 0
            
            if (rcx_8 != 0)
                __builtin_memset(rdi_2, 0xffff, rcx_8 << 1)
            
            uint64_t* r14_1 = arg1 + 0xd0
            operator new[]<8>(i_2, r14_1)
            sub_141e5cdd0(i_2, arg1 + 0xe0)
            i = zx.q(*(arg1 + 0xd8))
            
            if (i.d s> 0)
                int32_t temp0_1 = i.d
                i = zx.q(i.d - 1)
                int32_t r12_1 = 0
                int64_t r15_1 = sx.q(i.d)
                
                if (temp0_1 - 1 s>= 0)
                    int64_t temp1_1
                    
                    do
                        if (*rsi != 0)
                            uint64_t rax_5 = *r14_1
                            int64_t rbx_1 = rax_5 + (r15_1 << 3)
                            int32_t rdi_3 = *(rbx_1 + 4)
                            i = sub_140b5b8a0(*(rax_5 + (r15_1 << 3)), 0)
                            int32_t rcx_11
                            rcx_11.b = rdi_3 == 0
                            
                            if ((rcx_11.b & i.b) == 0)
                                uint64_t* rcx_12 = *(rsi + 8)
                                
                                if (rcx_12 != 0)
                                    i = *rcx_12
                                    
                                    for (int64_t rdx_3 = i + (sx.q(rcx_12[1].d) << 3); i != rdx_3; 
                                            i += 8)
                                        if (*i == *rbx_1)
                                            goto label_141e96b91
                                
                                int32_t arg_8
                                sub_14093f560(i_1 + 0x20, &arg_8, *(*r14_1 + (r15_1 << 3)))
                                int64_t rax_6 = sx.q(arg_8)
                                void* const rax_9
                                
                                if (rax_6.d == 0xffffffff)
                                    rax_9 = nullptr
                                else
                                    rax_9 = rax_6 * 0x30 + *(i_1 + 0x20)
                                
                                void* rdi_5 = rax_9 + 8
                                
                                if (rax_9 == 0)
                                    rdi_5 = nullptr
                                
                                if (rdi_5 == 0)
                                label_141e96b82:
                                    i = *(arg1 + 0xc0)
                                    *(i + (r15_1 << 1)) = r12_1.w
                                    r12_1 += 1
                                else
                                    i = zx.q(*(rdi_5 + 0x18))
                                    
                                    if (i.d s>= *(rsi + 0x10))
                                        if (*(rdi_5 + 0x10) s> 0)
                                            int32_t rsi_1 = 0
                                            int64_t r14_2 = 0
                                            
                                            while (true)
                                                int32_t* rbx_3 = *(rdi_5 + 8) + r14_2
                                                i = zx.q(rbx_3[2]) & 0x7fffffff
                                                
                                                if (i.d != 0x7fffffff)
                                                    int32_t rcx_16
                                                    rcx_16.b = sub_140b5b8a0(*rbx_3, 0).b == 0
                                                    i.b = rbx_3[1] != 0
                                                    i.b |= rcx_16.b
                                                    
                                                    if (i.b != 0)
                                                        i = *(arg1 + 0x80)
                                                        
                                                        if (*(i + (sx.q(rbx_3[2] * 2) s>> 1 << 2))
                                                                != 0xffffffff)
                                                            break
                                                
                                                rsi_1 += 1
                                                r14_2 += 0x10
                                                
                                                if (rsi_1 s>= *(rdi_5 + 0x10))
                                                    goto label_141e96b91
                                        
                                        goto label_141e96b82
                        
                    label_141e96b91:
                        temp1_1 = r15_1
                        r15_1 -= 1
                        rsi = arg2
                        r14_1 = arg1 + 0xd0
                    while (temp1_1 - 1 s>= 0)

return i
