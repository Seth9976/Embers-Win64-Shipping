// 函数: sub_1403c84a0
// 地址: 0x1403c84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
rax.b = arg2[4].b
uint64_t rcx
rcx.b = rax.d.b & 3
int32_t r8 = 0

if (rcx.b == 2)
    uint64_t r9_1 = zx.q(*arg2)
    uint64_t r15_1 = zx.q(*(arg1 + 0x412))
    uint64_t r14_1 = zx.q(*(arg1 + 0x414))
    uint64_t r13_1 = zx.q(*(arg1 + 0x416))
    r8 = 0
    uint64_t var_58_1 = r13_1
    uint64_t var_60_1 = r14_1
    char* rdx
    
    if (rax.b != 2)
        rdx = arg3
    else if (*(arg2 + 0x11) == 8)
        if (*(arg1 + 0x2b0) != 0)
            rax = *(arg1 + 0x2b8)
        
        if (*(arg1 + 0x2b0) == 0 || rax == 0)
            rdx = arg3
            
            if (r9_1.d != 0)
                rax = 0
                r8 = 0
                rcx = rdx
                
                do
                    uint8_t rsi_15 = *rcx
                    char rbx_6 = *(rcx + 2)
                    uint32_t rdi_20 = zx.d(*(rcx + 1))
                    
                    if (rsi_15 != rdi_20.b || rsi_15 != rbx_6)
                        r8 |= 1
                        rsi_15 = ((zx.d(rbx_6) * r13_1.d + rdi_20 * r14_1.d
                            + zx.d(rsi_15) * r15_1.d) u>> 0xf).b
                    
                    rdx[rax] = rsi_15
                    rax += 1
                    rcx += 3
                while (r9_1.d != rax.d)
        else
            rdx = arg3
            
            if (r9_1.d != 0)
                int64_t r13_2 = 0
                r8 = 0
                char* rsi_1 = rdx
                
                while (true)
                    char rbx_1 = *(rax + zx.q(*rsi_1))
                    uint64_t rdi_1 = zx.q(*(rax + zx.q(rsi_1[1])))
                    rcx = zx.q(rsi_1[2])
                    rax = zx.q(*(rax + rcx))
                    
                    if (rbx_1 != rdi_1.b || rbx_1 != rax.b)
                        r8 |= 1
                        rcx = zx.q(*(*(arg1 + 0x2b0) + ((rdi_1 * var_60_1 + zx.q(rbx_1) * r15_1
                            + zx.q(rax.b) * var_58_1) u>> 0xf)))
                    
                    rdx[r13_2] = rcx.b
                    
                    if ((r9_1 - 1).d == r13_2.d)
                        break
                    
                    rax = *(arg1 + 0x2b8)
                    r13_2 += 1
                    rsi_1 = &rsi_1[3]
                
                r13_1 = var_58_1
                r14_1 = var_60_1
    else if (*(arg1 + 0x2d0) == 0 || *(arg1 + 0x2c8) == 0)
        rdx = arg3
        
        if (r9_1.d != 0)
            int64_t r10_4 = 0
            r8 = 0
            char* rsi_17 = rdx
            
            do
                uint32_t rax_33 = zx.d(rsi_17[1]) | zx.d(*rsi_17) << 8
                uint32_t rbp_28 = zx.d(rsi_17[3]) | zx.d(rsi_17[2]) << 8
                uint32_t rbx_10 = zx.d(rsi_17[5]) | zx.d(rsi_17[4]) << 8
                rdx = arg3
                rcx.b = ((rax_33 ^ rbx_10) | (rax_33 ^ rbp_28)) != 0
                r8 |= rcx.d
                int32_t rbx_12 = rbx_10 * r13_1.d + rbp_28 * r14_1.d + rax_33 * r15_1.d
                rdx[r10_4 << 1] = (rbx_12 u>> 0x17).b
                rdx[(r10_4 << 1) + 1] = (rbx_12 u>> 0xf).b
                r10_4 += 1
                rsi_17 = &rsi_17[6]
            while (r9_1.d != r10_4.d)
    else
        rdx = arg3
        
        if (r9_1.d != 0)
            int64_t rbx_4 = 0
            r8 = 0
            char* rsi_6 = rdx
            
            do
                rax = zx.q(rsi_6[1]) | zx.q(*rsi_6) << 8
                uint64_t r14_4 = zx.q(rsi_6[2])
                uint32_t r13_4 = zx.d(rsi_6[3])
                uint64_t rdi_12 = zx.q(rsi_6[5]) | zx.q(rsi_6[4]) << 8
                
                if ((r14_4.d << 8 | r13_4) != rax.d || rax.w != rdi_12.w)
                    char rcx_10 = *(arg1 + 0x298)
                    int64_t r10_3 = *(arg1 + 0x2d0)
                    r14_1 = var_60_1
                    int32_t rbp_14 =
                        zx.d(*(*(r10_3 + (sx.q(r13_4 u>> rcx_10) << 3)) + (r14_4 << 1))) * r14_1.d
                        + zx.d(*(*(r10_3 + (sx.q(zx.d(rax.b) u>> rcx_10) << 3))
                        + (zx.q((rax u>> 8).d) << 1))) * r15_1.d
                    r13_1 = var_58_1
                    int32_t rdx_8 = zx.d(*(*(r10_3 + (sx.q(zx.d(rdi_12.b) u>> rcx_10) << 3))
                        + (zx.q((rdi_12 u>> 8).d) << 1))) * r13_1.d + rbp_14
                    rdx = arg3
                    rax = zx.q(*(
                        *(*(arg1 + 0x2c8) + (sx.q(zx.d((rdx_8 u>> 0xf).b) u>> rcx_10) << 3))
                        + (zx.q((rdx_8 u>> 0x17).b) << 1)))
                    r8 |= 1
                else
                    r13_1 = var_58_1
                    r14_1 = var_60_1
                
                rdx[rbx_4 << 1] = rax:1.b
                rdx[(rbx_4 << 1) + 1] = rax.b
                rbx_4 += 1
                rsi_6 = &rsi_6[6]
            while (r9_1.d != rbx_4.d)
    
    int32_t* r10_2 = arg2
    
    if (r10_2[4].b == 6)
        if (*(r10_2 + 0x11) == 8)
            int64_t r13_3 = *(arg1 + 0x2b0)
            int64_t rdi_6
            
            if (r13_3 != 0)
                rdi_6 = *(arg1 + 0x2b8)
            
            if (r13_3 == 0 || rdi_6 == 0)
                if (r9_1.d != 0)
                    rax = 0
                    
                    do
                        uint32_t rdi_23 = zx.d(rdx[rax << 2])
                        uint32_t rdx_21 = zx.d(arg3[(rax << 2) + 1])
                        uint32_t rbp_23 = zx.d(arg3[(rax << 2) + 2])
                        int32_t rsi_16
                        rsi_16.b = ((rdi_23.b ^ rdx_21.b) | (rdi_23.b ^ rbp_23.b)) != 0
                        r8 |= rsi_16
                        rdx = arg3
                        arg3[rax << 1] =
                            ((rbp_23 * var_58_1.d + rdx_21 * r14_1.d + rdi_23 * r15_1.d) u>> 0xf).b
                        arg3[(rax << 1) + 1] = arg3[(rax << 2) + 3]
                        rax += 1
                    while (r9_1.d != rax.d)
            else if (r9_1.d != 0)
                int64_t rbx_3 = 0
                
                while (true)
                    uint64_t rbp_2 = zx.q(*(rdi_6 + zx.q(arg3[rbx_3 << 2])))
                    uint64_t rsi_3 = zx.q(*(rdi_6 + zx.q(arg3[(rbx_3 << 2) + 1])))
                    uint64_t rdi_7 = zx.q(*(rdi_6 + zx.q(arg3[(rbx_3 << 2) + 2])))
                    int32_t r8_1
                    r8_1.b = ((rbp_2.b ^ rsi_3.b) | (rdi_7.d ^ rbp_2.d).b) != 0
                    r8 |= r8_1
                    arg3[rbx_3 << 1] = *(r13_3 + ((rdi_7 * zx.q(var_58_1.d) + rsi_3 * zx.q(r14_1.d)
                        + rbp_2 * zx.q(r15_1.d)) u>> 0xf))
                    arg3[(rbx_3 << 1) + 1] = arg3[(rbx_3 << 2) + 3]
                    
                    if ((r9_1 - 1).d == rbx_3.d)
                        break
                    
                    r13_3 = *(arg1 + 0x2b0)
                    rdi_6 = *(arg1 + 0x2b8)
                    rbx_3 += 1
                
                r10_2 = arg2
        else if (*(arg1 + 0x2d0) == 0 || *(arg1 + 0x2c8) == 0)
            if (r9_1.d != 0)
                rax = 0
                
                do
                    uint32_t rcx_21 = zx.d(arg3[(rax << 3) + 1]) | zx.d(arg3[rax << 3]) << 8
                    uint32_t rbp_32 = zx.d(arg3[(rax << 3) + 3]) | zx.d(arg3[(rax << 3) + 2]) << 8
                    uint32_t rbx_15 = zx.d(arg3[(rax << 3) + 5]) | zx.d(arg3[(rax << 3) + 4]) << 8
                    int32_t rsi_18
                    rsi_18.b = ((rcx_21 ^ rbx_15) | (rcx_21 ^ rbp_32)) != 0
                    r8 |= rsi_18
                    int32_t rbx_17 = rbx_15 * r13_1.d + rbp_32 * r14_1.d + rcx_21 * r15_1.d
                    arg3[rax << 2] = (rbx_17 u>> 0x17).b
                    arg3[(rax << 2) + 1] = (rbx_17 u>> 0xf).b
                    arg3[(rax << 2) + 2] = arg3[(rax << 3) + 6]
                    arg3[(rax << 2) + 3] = arg3[(rax << 3) + 7]
                    rax += 1
                while (r9_1.d != rax.d)
        else if (r9_1.d != 0)
            int64_t rbx_5 = 0
            
            do
                uint64_t rax_20 = zx.q(rdx[(rbx_5 << 3) + 1]) | zx.q(rdx[rbx_5 << 3]) << 8
                uint64_t r14_5 = zx.q(rdx[(rbx_5 << 3) + 2])
                uint32_t rsi_7 = zx.d(rdx[(rbx_5 << 3) + 3])
                uint64_t rdi_17 = zx.q(rdx[(rbx_5 << 3) + 5]) | zx.q(rdx[(rbx_5 << 3) + 4]) << 8
                
                if ((r14_5.d << 8 | rsi_7) != rax_20.d || rax_20.w != rdi_17.w)
                    char rcx_16 = *(arg1 + 0x298)
                    int64_t rbp_15 = *(arg1 + 0x2d0)
                    int32_t rdx_20 =
                        zx.d(*(*(rbp_15 + (sx.q(rsi_7 u>> rcx_16) << 3)) + (r14_5 << 1)))
                        * var_60_1.d + zx.d(*(*(rbp_15 + (sx.q(zx.d(rax_20.b) u>> rcx_16) << 3))
                        + (zx.q((rax_20 u>> 8).d) << 1))) * r15_1.d
                    int32_t rbp_19 = zx.d(*(*(rbp_15 + (sx.q(zx.d(rdi_17.b) u>> rcx_16) << 3))
                        + (zx.q((rdi_17 u>> 8).d) << 1))) * r13_1.d + rdx_20
                    rax_20 = zx.q(*(
                        *(*(arg1 + 0x2c8) + (sx.q(zx.d((rbp_19 u>> 0xf).b) u>> rcx_16) << 3))
                        + (zx.q((rbp_19 u>> 0x17).b) << 1)))
                    r8 |= 1
                
                rdx = arg3
                rdx[rbx_5 << 2] = rax_20:1.b
                arg3[(rbx_5 << 2) + 1] = rax_20.b
                arg3[(rbx_5 << 2) + 2] = arg3[(rbx_5 << 3) + 6]
                arg3[(rbx_5 << 2) + 3] = arg3[(rbx_5 << 3) + 7]
                rbx_5 += 1
            while (r9_1.d != rbx_5.d)
    
    rax.b = *(r10_2 + 0x11)
    rcx.b = *(r10_2 + 0x12)
    rcx.b -= 2
    *(r10_2 + 0x12) = rcx.b
    r10_2[4].b &= 0xfd
    rax.w = mulu.dp.b(rax.b, rcx.b)
    *(r10_2 + 0x13) = rax.b
    uint64_t rcx_26 = zx.q(rax.b)
    uint64_t rcx_28
    
    if (rax.b u< 8)
        rcx_28 = (rcx_26 * r9_1 + 7) u>> 3
    else
        rcx_28 = (rcx_26 u>> 3) * r9_1
    
    *(r10_2 + 8) = rcx_28

return zx.q(r8)
