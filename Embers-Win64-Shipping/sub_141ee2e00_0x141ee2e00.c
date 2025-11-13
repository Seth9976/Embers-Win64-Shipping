// 函数: sub_141ee2e00
// 地址: 0x141ee2e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0

if ((*(*arg1 + 0x540))() != 0 && arg1[0xf0].d - *(arg1 + 0x7ac) s> 0 && arg2[1].d s> 0)
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) s<= 0xffffffff)
        sub_14083ad30(arg3, 0)
    
    int64_t rsi = 0
    int64_t* rdi_1 = *arg2
    int128_t zmm6 = zx.o(0)
    int64_t r14 = sx.q(arg2[1].d) << 2
    uint64_t r14_1 = r14 u>> 2
    
    if (rdi_1 u> rdi_1 + r14)
        r14_1 = 0
    
    if (r14_1 != 0)
        int64_t var_a4_1 = 0
        
        do
            int64_t rbx_1 = sx.q(arg3[1].d)
            int32_t var_a8_1 = (*rdi_1).d
            int32_t rax_6 = (rbx_1 + 1).d
            arg3[1].d = rax_6
            
            if (rax_6 s> *(arg3 + 0xc))
                sub_14083a7e0(arg3)
            
            int64_t rdx_1 = *arg3
            int64_t rcx_2 = rbx_1 * 3
            rdi_1 += 4
            rsi += 1
            *(rdx_1 + (rcx_2 << 2)) = var_a8_1.q
            *(rdx_1 + (rcx_2 << 2) + 8) = 0
        while (rsi != r14_1)
    
    sub_141ed1330(*arg3, arg3[1].d, arg1.b)
    int32_t rcx_4 = 0
    void* r10_1 = &arg1[0xef]
    int32_t var_c8 = 0
    int32_t rbx_2 = *(r10_1 + 0x28)
    void* rdx_3 = r10_1 + 0x10
    void* arg_20 = r10_1
    int32_t var_c4 = 1
    int32_t r14_2 = 0
    void* var_c0 = rdx_3
    int32_t r8_1 = 0
    int32_t var_b8 = 0xffffffff
    int64_t var_b4 = 0
    
    if (rbx_2 != 0)
        void* rax_7 = *(rdx_3 + 0x10)
        void* r9_1 = rdx_3
        
        if (rax_7 != 0)
            r9_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_2 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_141ee2fb6:
            int32_t rax_14 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_c4_1 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            var_b4.d = r8_1 - rax_15 + 0x1f
            
            if (r8_1 - rax_15 + 0x1f s> rbx_2)
                var_b4.d = rbx_2
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_4)
                r8_1 += 0x20
                rcx_4 += 1
                var_b4:4.d = r8_1
                var_c8 = rcx_4
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                int32_t var_b8_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_141ee2fb6
            
            var_b4.d = rbx_2
        
        rdx_3 = var_c0
    
    int32_t r12 = *(r10_1 + 0x28)
    int32_t rsi_1 = *(rdx_3 + 0x18)
    double var_68[0x2] = var_c8.o
    int32_t r8_4 = r12 s>> 5
    double zmm0_1[0x2] = r10_1.o
    int32_t r9_3 = r12 & 0xffffffe0
    int128_t var_58 = 0xffffffff
    int64_t var_78 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_98[0x2] = zmm0_1
    
    if (r12 != rsi_1)
        void* rax_17 = *(rdx_3 + 0x10)
        void* r10_2 = rdx_3
        
        if (rax_17 != 0)
            r10_2 = rax_17
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_1 - 1)
        int32_t rdx_11 = *(r10_2 + (sx.q(r8_4) << 2)) & 0xffffffff << (r12.b & 0x1f)
        
        if (rdx_11 != 0)
        label_141ee307c:
            int32_t rax_24 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
            int32_t rdi_2
            
            if (rax_24 == 0)
                rdi_2 = 0x20
            else
                rdi_2 = 0x1f - temp0_4
            
            r12 = r9_3 - rdi_2 + 0x1f
            
            if (r12 s> rsi_1)
                r12 = rsi_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_2 + (rcx_9 << 2) + 4)
                
                if (rdx_11 != 0)
                    goto label_141ee307c
            
            r12 = rsi_1
        
        r10_1 = arg_20
        rdx_3 = var_c0
    
    uint64_t rsi_2 = zx.q(data_14401b1a0)
    
    while (true)
        int64_t rax_25 = sx.q(var_68[1]:4.d)
        int64_t* rbx_3 = var_98[0]
        double zmm2[0x2]
        
        if (rax_25.d == r12 && var_68[0] == rdx_3 && rbx_3 == r10_1)
            if (r14_2 s> 1)
                void* rdx_14 = *arg3
                void* r8_9 = rdx_14 + sx.q(arg3[1].d) * 0xc
                
                if (rdx_14 != r8_9)
                    zmm2 = 0x3f800000
                    zmm2[0].d = 1f f/ _mm_cvtepi32_ps(zx.o(r14_2))[0].d
                    
                    do
                        zmm2[0].d = zmm2[0].d f* *(rdx_14 + 4)
                        zmm2[0].d = zmm2[0].d f* *(rdx_14 + 8)
                        *(rdx_14 + 4) = zmm2[0].d
                        *(rdx_14 + 8) = zmm2[0].d
                        rdx_14 += 0xc
                    while (rdx_14 != r8_9)
            
            return zx.q(r15.b)
        
        int64_t rbx_4 = *rbx_3
        int64_t rdi_3 = rax_25 * 5
        
        if (not(zmm6.d f>= *(rbx_4 + (rdi_3 << 3) + 0x10))
                && *(*(rbx_4 + (rdi_3 << 3) + 8) + 0x188) s> 0)
            TEB* gsbase
            
            if (data_143f3ac98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rsi_2 << 3))))
                zmm0_1 = _Init_thread_header(&data_143f3ac98)
                
                if (data_143f3ac98 == 0xffffffff)
                    atexit(sub_142cfbc50)
                    zmm0_1 = _Init_thread_footer(&data_143f3ac98)
            
            int32_t rax_29 = data_143f3ac94
            data_143f3ac90 = 0
            
            if (rax_29 s< 0 && rax_29 != 0)
                zmm0_1 = sub_14083ad30(&data_143f3ac88, 0)
            
            char rax_31 = sub_14236bbe0(arg1[0x3e], zmm0_1[0].d)
            zmm0_1, zmm6 = sub_1423652d0(*(rbx_4 + (rdi_3 << 3) + 8), 
                *(rbx_4 + (rdi_3 << 3) + 0x10), rbx_4 + 0x18 + (rdi_3 << 3), &data_143f3ac88, 
                rax_31)
            
            if (data_143f3ac90 s> 0)
                void* r8_8 = *arg3
                void* r10_3 = r8_8 + sx.q(arg3[1].d) * 0xc
                
                if (r8_8 != r10_3)
                    int32_t* r9_5 = data_143f3ac88
                    
                    do
                        zmm2 = *r8_8
                        
                        if (zmm2[0].d f>= *r9_5)
                            int32_t rax_35 = data_143f3ac90 - 1
                            int64_t rdx_12 = sx.q(rax_35)
                            int64_t rcx_14 = rdx_12 * 3
                            
                            if (zmm2[0].d f< r9_5[rcx_14])
                                int64_t rcx_16 = 0
                                
                                if (rax_35 s> 0)
                                    int32_t* rax_39 = r9_5
                                    
                                    while (true)
                                        double zmm1[0x2] = *rax_39
                                        
                                        if (not(zmm2[0].d f< zmm1[0].d))
                                            zmm0_1 = rax_39[3]
                                            
                                            if (zmm2[0].d f< zmm0_1[0].d)
                                                zmm2[0].d = zmm2[0].d f- zmm1[0].d
                                                zmm0_1[0].d = zmm0_1[0].d f- zmm1[0].d
                                                zmm1 = rax_39[4]
                                                zmm1[0].d = zmm1[0].d f- rax_39[1]
                                                zmm2[0].d = zmm2[0].d f/ zmm0_1[0].d
                                                zmm1[0].d = zmm1[0].d f* zmm2[0].d
                                                zmm1[0].d = zmm1[0].d f+ rax_39[1]
                                                zmm1[0].d = zmm1[0].d f+ *(r8_8 + 4)
                                                *(r8_8 + 4) = zmm1[0].d
                                                zmm1 = rax_39[5]
                                                zmm1[0].d = zmm1[0].d f- rax_39[2]
                                                zmm1[0].d = zmm1[0].d f* zmm2[0].d
                                                zmm1[0].d = zmm1[0].d f+ rax_39[2]
                                                zmm1[0].d = zmm1[0].d f+ *(r8_8 + 8)
                                                *(r8_8 + 8) = zmm1[0].d
                                                break
                                        
                                        rcx_16 += 1
                                        rax_39 = &rax_39[3]
                                        
                                        if (rcx_16 s>= rdx_12)
                                            goto label_141ee3298
                                    
                                    r9_5 = data_143f3ac88
                            else
                                zmm0_1 = r9_5[rcx_14 + 1]
                                zmm0_1[0].d = zmm0_1[0].d f+ *(r8_8 + 4)
                                *(r8_8 + 4) = zmm0_1[0].d
                                zmm0_1 = *(data_143f3ac88 + sx.q(data_143f3ac90 - 1) * 0xc + 8)
                                zmm0_1[0].d = zmm0_1[0].d f+ *(r8_8 + 8)
                                *(r8_8 + 8) = zmm0_1[0].d
                                r9_5 = data_143f3ac88
                        else
                            zmm0_1 = r9_5[1]
                            zmm0_1[0].d = zmm0_1[0].d f+ *(r8_8 + 4)
                            *(r8_8 + 4) = zmm0_1[0].d
                            zmm0_1 = *(data_143f3ac88 + 8)
                            zmm0_1[0].d = zmm0_1[0].d f+ *(r8_8 + 8)
                            *(r8_8 + 8) = zmm0_1[0].d
                            r9_5 = data_143f3ac88
                        
                    label_141ee3298:
                        r8_8 += 0xc
                    while (r8_8 != r10_3)
                
                r14_2 += 1
                r15.b = 1
        
        var_68[1].d &= not.d(var_98[1]:4.d)
        sub_14059bdd0(&var_98[1])
        rdx_3 = var_c0
        r10_1 = arg_20

return 0
