// 函数: sub_14270a830
// 地址: 0x14270a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0xb0))

if ((rax.b & 2) == 0)
    if (*(arg1 + 0xc0) == 0)
        int32_t rax_1 = rax.d | 2
        *(arg1 + 0xb0) = rax_1
        return rax_1
    
    int64_t* rsi_1 = *(arg1 + 0xa0)
    
    if (rsi_1 != 0)
        rax = (*(*rsi_1 + 0x150))(rsi_1)
        
        if (rax != 0)
            rax = sub_1426fbdd0(rax)
            uint64_t r14_1 = rax
            
            if (rax != 0)
                int64_t** i = *(arg1 + 0xb8)
                
                for (void* rbp_1 = &i[sx.q(*(arg1 + 0xc0))]; i != rbp_1; i = &i[1])
                    if (*i != 0)
                        rax = sub_14272a610()
                        
                        if (rax != 0)
                            int64_t* rdx_1 = *i
                            int64_t r8_1 = rax + 0x30
                            rax = sx.q(*(rax + 0x38))
                            
                            if (rax.d s<= rdx_1[7].d)
                                uint64_t rcx_3 = rax
                                rax = rdx_1[6]
                                
                                if (*(rax + (rcx_3 << 3)) == r8_1 && rdx_1 != 0)
                                    rax = sub_14270a5d0(r14_1, rdx_1, rsi_1)
                                    *(arg1 + 0xb0) |= 2

return rax
