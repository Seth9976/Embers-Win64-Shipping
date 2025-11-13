// 函数: sub_141f84b90
// 地址: 0x141f84b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int32_t i = 0

if (*(arg1 + 0x168) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rdi_1 = *(r14_1 + *(arg1 + 0x160))
        
        if (rdi_1 != 0)
            sub_141f8eb10(arg1, rdi_1)
            void* rcx_1 = *(arg1 + 0x28)
            
            if (rcx_1 != 0)
                void* rcx_2 = *(rcx_1 + 0x58)
                
                if (rcx_2 != 0)
                    sub_141f96210(rcx_2 + 0x3c8, rdi_1)
            
            int64_t* rcx_4 = *(arg1 + 0x70)
            (*(*rcx_4 + 0x2b8))(rcx_4, rdi_1)
            (*(*rdi_1 + 0x1f0))(rdi_1)
            int32_t rax_4 = *(rdi_1 + 0xc)
            void* const rax_8
            
            if (rax_4 s>= data_143e1d9b4)
                rax_8 = nullptr
            else
                uint32_t rdx_4 = zx.d(rax_4.w)
                
                if (rax_4 s< 0)
                    rax_4 += 0xffff
                    rdx_4 -= 0x10000
                
                rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rdx_4) * 0x18
            
            *(rax_8 + 8) |= 0x20000000
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x168))

*(arg1 + 0x168) = 0

if (*(arg1 + 0x16c) != 0)
    sub_1405c5570(arg1 + 0x160, 0)

int64_t* rax_33 = *(arg1 + 0x70)

if (rax_33 != 0)
    int32_t r11_1 = rax_33[0x39].d
    int32_t rcx_9 = 0
    int32_t var_98_1 = 0
    int32_t r8_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = &rax_33[0x36]
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_9 = rax_33[0x38]
        void* r9_1 = &rax_33[0x36]
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *r9_1
        
        if (rdx_8 != 0)
        label_141f84d48:
            int32_t rax_16 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_94_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            var_84_1.d = r8_1 - rax_17 + 0x1f
            
            if (r8_1 - rax_17 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_9)
                r8_1 += 0x20
                rcx_9 += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx_9
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141f84d48
            
            var_84_1.d = r11_1
    
    int32_t rdx_10 = rax_33[0x39].d
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_10.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_10 s>> 5
    int32_t r9_3 = rdx_10 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_10
    int128_t var_78 = (&rax_33[0x34]).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_10 != r11_1)
        void* rax_19 = rax_33[0x38]
        void* r10_1 = &rax_33[0x36]
        
        if (rax_19 != 0)
            r10_1 = rax_19
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_14 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_14 != 0)
        label_141f84e12:
            int32_t rax_26 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t rdi_2
            
            if (rax_26 == 0)
                rdi_2 = 0x20
            else
                rdi_2 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - rdi_2 + 0x1f
            
            if (r9_3 - rdi_2 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_14 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_14 = *(r10_1 + (rcx_14 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_141f84e12
            
            var_84_1.d = r11_1
    
    while (true)
        int32_t var_5c
        int64_t rax_28 = sx.q(var_5c)
        int64_t* rdx_15 = var_78.q
        
        if (rax_28.d == (var_88_3.q u>> 0x20).d && var_68_1.q == &rax_33[0x36]
                && rdx_15 == &rax_33[0x34])
            break
        
        sub_141f8eb10(arg1, *(*rdx_15 + rax_28 * 0x10))
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    sub_141f8eb10(arg1, *(arg1 + 0x70))
    int64_t* rcx_19 = *(arg1 + 0x70)
    (*(*rcx_19 + 0x1f0))(rcx_19)
    rax_33 = sub_141dbe590(*(arg1 + 0x70), 1, 1)

int64_t rdi_5 = data_143f4d0a8

if (data_143de5480 != 0)
    rax_33 = GetCurrentThreadId()
    r15.b = rax_33.d != data_143de5470

if (*(rdi_5 + (r15 << 2)) s> 0)
    int64_t r10_2 = sx.q(*(arg1 + 0x78))
    
    if (r10_2.d != 0)
        rax_33 = *(arg1 + 0x28)
        
        if (rax_33 != 0)
            void* rcx_21 = rax_33[0xb]
            
            if (rcx_21 != 0)
                void* r9_5 = *(rcx_21 + 0x150)
                
                if (r9_5 != 0)
                    rax_33 = zx.q(*(r9_5 + 0xb0))
                    
                    if (rax_33.d != *(r9_5 + 0xdc))
                        void* rax_34 = *(r9_5 + 0xe8)
                        void* r11_2 = r9_5 + 0xe0
                        int64_t rbx_2 = sx.q(*(r9_5 + 0xf0)) - 1
                        
                        if (rax_34 != 0)
                            r11_2 = rax_34
                        
                        rax_33 = r10_2 & rbx_2
                        int32_t rdx_19 = *(r11_2 + (rax_33 << 2))
                        
                        if (rdx_19 != 0xffffffff)
                            int64_t r8_6 = *(r9_5 + 0xa8)
                            int64_t rcx_22
                            
                            while (true)
                                rcx_22 = sx.q(rdx_19)
                                int64_t rax_36 = rcx_22 * 3
                                
                                if (*(r8_6 + (rax_36 << 2)) == r10_2.d)
                                    break
                                
                                rdx_19 = *(r8_6 + (rax_36 << 2) + 4)
                                
                                if (rdx_19 == 0xffffffff)
                                    return rax_36
                            
                            int64_t rax_37 = rcx_22 * 3
                            int64_t rax_39 = sx.q(*(r8_6 + (rax_37 << 2) + 8)) & rbx_2
                            void* rcx_23 = r11_2 + (rax_39 << 2)
                            int32_t i_1 = *(r11_2 + (rax_39 << 2))
                            
                            while (i_1 != 0xffffffff)
                                if (i_1 == rdx_19)
                                    *rcx_23 = *(r8_6 + (rax_37 << 2) + 4)
                                    break
                                
                                int64_t i_2 = sx.q(i_1)
                                i_1 = *(r8_6 + ((i_2 * 3 + 1) << 2))
                                rcx_23 = r8_6 + ((i_2 * 3 + 1) << 2)
                            
                            return sub_14090a460(r9_5 + 0xa8, rdx_19, 1)

return rax_33
