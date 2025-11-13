// 函数: sub_140a6ab40
// 地址: 0x140a6ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r14 = arg2
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143db7b18 s> *(rbx + 0x14))
    _Init_thread_header(&data_143db7b18)
    
    if (data_143db7b18 == 0xffffffff)
        sub_140af2b60()
        data_143db7b14 = sub_140b21a10(&data_143dbb3f0, u"debughangdetection")
        _Init_thread_footer(&data_143db7b18)

if (data_143db7b20 s> *(rbx + 0x14))
    _Init_thread_header(&data_143db7b20)
    
    if (data_143db7b20 == 0xffffffff)
        char rax_29
        
        if (data_143db7b14 == 0)
            sub_140af2b60()
            rax_29 = sub_140b21a10(&data_143dbb3f0, u"nothreadtimeout")
        
        if (data_143db7b14 != 0 || rax_29 == 0)
            rax_29 = 0
        else
            rax_29 = 1
        
        data_143db7b1c = rax_29
        _Init_thread_footer(&data_143db7b20)

int128_t zmm6
int128_t var_38 = zmm6

if (0.0 f< *(arg1 + 0xb8) || not(0.0 f>= *(arg1 + 0xc8)))
    int32_t rdi_1 = 0
    bool z_1
    
    if (0 == *(arg1 + 0xb0))
        *(arg1 + 0xb0) = 0
        z_1 = true
    else
        *(arg1 + 0xb0)
        z_1 = false
    
    if (not(z_1) && data_143de5432 == 0 && data_143db7b1c == 0)
        bool z_2
        
        if (0 == *(arg1 + 0xec))
            *(arg1 + 0xec) = 0
            z_2 = true
        else
            *(arg1 + 0xec)
            z_2 = false
        
        if (z_2)
            zmm6 = sub_140a8a910(arg1 + 0xf0)
            EnterCriticalSection(arg1 + 0x18)
            int32_t rdi_5
            int128_t zmm0_1
            uint128_t zmm1_1
            
            if (not(0.0 f>= *(arg1 + 0xb8)))
                int32_t r10_1 = *(arg1 + 0x68)
                int32_t rcx_2 = 0
                int32_t var_d8_1 = 0
                int32_t var_d4_1 = 1
                void* var_d0_1 = arg1 + 0x50
                int32_t var_c8_1 = 0xffffffff
                int32_t var_c4_1 = 0
                int32_t var_c0_1 = 0
                
                if (r10_1 != 0)
                    void* rax_5 = *(arg1 + 0x60)
                    void* r8_1 = arg1 + 0x50
                    
                    if (rax_5 != 0)
                        r8_1 = rax_5
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_2 = *r8_1
                    int32_t var_c4_3
                    
                    if (rdx_2 != 0)
                    label_140a6acb7:
                        int32_t rax_12 = neg.d(rdx_2) & rdx_2
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                        int32_t var_d4_2 = rax_12
                        int32_t rax_13
                        
                        if (rax_12 == 0)
                            rax_13 = 0x20
                        else
                            rax_13 = 0x1f - temp0_2
                        
                        int32_t var_c4_2 = rcx_2 - rax_13 + 0x1f
                        
                        if (rcx_2 - rax_13 + 0x1f s> r10_1)
                            var_c4_3 = r10_1
                    else
                        while (true)
                            int64_t rdx_3 = sx.q(rdi_1)
                            rcx_2 += 0x20
                            rdi_1 += 1
                            int32_t var_c0_2 = rcx_2
                            var_d8_1 = rdi_1
                            
                            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
                            int32_t var_c8_2 = 0xffffffff
                            
                            if (rdx_2 != 0)
                                goto label_140a6acb7
                        
                        var_c4_3 = r10_1
                
                int32_t rdx_5 = *(arg1 + 0x68)
                int128_t var_68_1 = var_d8_1.o
                int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
                int32_t r8_3 = rdx_5 s>> 5
                int32_t r9_2 = rdx_5 & 0xffffffe0
                int32_t var_80_1 = r12_1
                int32_t var_7c_1 = rdx_5
                int128_t var_58_1 = 0xffffffff
                uint64_t var_98_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int128_t var_b8 = (arg1 + 0x40).o
                uint128_t var_a8_1 = var_68_1
                
                if (rdx_5 != r10_1)
                    void* rax_15 = *(arg1 + 0x60)
                    void* r10_2 = arg1 + 0x50
                    
                    if (rax_15 != 0)
                        r10_2 = rax_15
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_9 = *(r10_2 + (sx.q(r8_3) << 2)) & r12_1
                    int32_t var_7c_3
                    
                    if (rdx_9 != 0)
                    label_140a6ad82:
                        int32_t rax_22 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
                        int32_t r15_1
                        
                        if (rax_22 == 0)
                            r15_1 = 0x20
                        else
                            r15_1 = 0x1f - temp0_4
                        
                        int32_t var_7c_2 = r9_2 - r15_1 + 0x1f
                        
                        if (r9_2 - r15_1 + 0x1f s> r10_1)
                            var_7c_3 = r10_1
                    else
                        while (true)
                            int64_t rcx_7 = sx.q(r8_3)
                            r9_2 += 0x20
                            r8_3 += 1
                            
                            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r10_2 + (rcx_7 << 2) + 4)
                            var_80_1 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_140a6ad82
                        
                        var_7c_3 = r10_1
                
                while (true)
                    int64_t rax_24 = sx.q(var_a8_1:0xc.d)
                    int64_t rdx_10 = var_b8.q
                    
                    if (rax_24.d == (var_80_1.q u>> 0x20).d && var_a8_1.q == arg1 + 0x50
                            && rdx_10 == arg1 + 0x40)
                        r14 = arg2
                        goto label_140a6ae2e
                    
                    int32_t* rcx_11 = rax_24 * 0x30 + *rdx_10
                    
                    if (rcx_11[6] == 0)
                        zmm1_1 = zx.o(*(rcx_11 + 8))
                        uint64_t zmm2 = *(rcx_11 + 0x20)
                        zmm0_1.q = zmm6.q f- zmm1_1.q
                        
                        if (not(zmm0_1.q f<= zmm2) && zmm1_1.q f>= *(rcx_11 + 0x10))
                            *(rcx_11 + 0x10) = zmm6.q
                            *arg2 = zmm2
                            rdi_5 = *rcx_11
                            break
                    
                    var_a8_1:8.d &= not.d(var_b8:0xc.d)
                    sub_14059bdd0(&var_b8:8)
                
                goto label_140a6ae6f
            
        label_140a6ae2e:
            
            if (not(0.0 f>= *(arg1 + 0xc8)) && *(arg1 + 0xa0) == 0)
                zmm1_1 = zx.o(*(arg1 + 0xa8))
                zmm0_1.q = zmm6.q f- *(arg1 + 0x90)
            
            if (not(0.0 f>= *(arg1 + 0xc8)) && *(arg1 + 0xa0) == 0 && not(zmm0_1.q f<= zmm1_1.q))
                *(arg1 + 0x90) = zmm6.q
                rdi_5 = -2
                *r14 = zmm1_1.q
            label_140a6ae6f:
                
                if (arg1 != -0x18)
                    LeaveCriticalSection(arg1 + 0x18)
                
                return zx.q(rdi_5)
            
            if (arg1 != -0x18)
                LeaveCriticalSection(arg1 + 0x18)

return 0xffffffff
