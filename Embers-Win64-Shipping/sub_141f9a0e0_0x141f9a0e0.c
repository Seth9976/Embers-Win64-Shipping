// 函数: sub_141f9a0e0
// 地址: 0x141f9a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140ce8e10(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    int64_t* rcx = *(arg1 + 0x58)
    
    if (rcx != 0)
        result = (*(*rcx + 0x210))(rcx, arg2)
    
    int64_t* rcx_1 = *(arg1 + 0x60)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x210))(rcx_1, arg2)
    
    int64_t* rcx_2 = *(arg1 + 0x68)
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x210))(rcx_2, arg2)
    
    if (*(arg2 + 0x2a) s< 0)
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xb0)) << 5, sx.q(*(arg1 + 0xb4)) << 5)
        int64_t r9_1 = *arg2
        (*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0xd0) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0xd4) + 0x1f) u>> 5 << 2, r9_1)
        int64_t rdx_10 = sx.q(*(arg1 + 0xf0)) << 2
        (*(*arg2 + 8))(arg2, rdx_10, rdx_10)
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x100)) << 3, sx.q(*(arg1 + 0x104)) << 3)
        int32_t rdi_1 = 0
        int64_t* rsi_1 = *(arg1 + 0xf8)
        int64_t r14_1 = 0
        uint64_t r12_2 = sx.q(*(arg1 + 0x100)) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x100))])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                int64_t* rcx_7 = *rsi_1
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x210))(rcx_7, arg2)
                
                rsi_1 = &rsi_1[1]
                r14_1 += 1
            while (r14_1 != r12_2)
        
        int64_t r9_2 = *arg2
        (*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x118)) * 0xc, sx.q(*(arg1 + 0x11c)) * 0xc, r9_2)
        int64_t r9_3 = *arg2
        (*(r9_3 + 8))(arg2, zx.q(*(arg1 + 0x138) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x13c) + 0x1f) u>> 5 << 2, r9_3)
        int64_t rdx_21 = sx.q(*(arg1 + 0x158)) << 2
        (*(*arg2 + 8))(arg2, rdx_21, rdx_21)
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x178)) << 2, sx.q(*(arg1 + 0x17c)) << 2)
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x188)) << 3, sx.q(*(arg1 + 0x18c)) << 3)
        int64_t r14_2 = 0
        int64_t* rsi_2 = *(arg1 + 0x180)
        uint64_t r12_4 = sx.q(*(arg1 + 0x188)) << 3 u>> 3
        
        if (rsi_2 u> &rsi_2[sx.q(*(arg1 + 0x188))])
            r12_4 = 0
        
        if (r12_4 != 0)
            do
                int64_t* rcx_13 = *rsi_2
                
                if (rcx_13 != 0)
                    (*(*rcx_13 + 0x210))(rcx_13, arg2)
                
                rsi_2 = &rsi_2[1]
                r14_2 += 1
            while (r14_2 != r12_4)
        
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1a0)) << 4, sx.q(*(arg1 + 0x1a4)) << 4)
        int64_t r9_4 = *arg2
        (*(r9_4 + 8))(arg2, zx.q(*(arg1 + 0x1c0) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x1c4) + 0x1f) u>> 5 << 2, r9_4)
        int64_t rdx_34 = sx.q(*(arg1 + 0x1e0)) << 2
        (*(*arg2 + 8))(arg2, rdx_34, rdx_34)
        int64_t r9_5 = *arg2
        (*(r9_5 + 8))(arg2, sx.q(*(arg1 + 0x1f0)) * 0x28, sx.q(*(arg1 + 0x1f4)) * 0x28, r9_5)
        int64_t r9_6 = *arg2
        (*(r9_6 + 8))(arg2, zx.q(*(arg1 + 0x210) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x214) + 0x1f) u>> 5 << 2, r9_6)
        int64_t rdx_42 = sx.q(*(arg1 + 0x230)) << 2
        (*(*arg2 + 8))(arg2, rdx_42, rdx_42)
        int32_t var_98_1 = 0
        int32_t r10_1 = *(arg1 + 0x210)
        int32_t var_94_1 = 1
        int32_t rcx_20 = 0
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0
        
        if (r10_1 != 0)
            void* rax_22 = *(arg1 + 0x208)
            void* r8_35 = arg1 + 0x1f8
            
            if (rax_22 != 0)
                r8_35 = rax_22
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_45 = *r8_35
            int32_t var_84_3
            
            if (rdx_45 != 0)
            label_141f9a4a6:
                int32_t rax_29 = neg.d(rdx_45) & rdx_45
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_29)
                int32_t var_94_2 = rax_29
                int32_t rax_30
                
                if (rax_29 == 0)
                    rax_30 = 0x20
                else
                    rax_30 = 0x1f - temp0_2
                
                int32_t var_84_2 = rcx_20 - rax_30 + 0x1f
                
                if (rcx_20 - rax_30 + 0x1f s> r10_1)
                    var_84_3 = r10_1
            else
                while (true)
                    int64_t rdx_46 = sx.q(rdi_1)
                    rcx_20 += 0x20
                    rdi_1 += 1
                    var_80_1 = rcx_20
                    var_98_1 = rdi_1
                    
                    if (rdx_46.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_45 = *(r8_35 + (rdx_46 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_45 != 0)
                        goto label_141f9a4a6
                
                var_84_3 = r10_1
        
        int32_t rdx_48 = *(arg1 + 0x210)
        int128_t var_38_1 = 0xffffffff
        int32_t r13_1 = 0xffffffff << (rdx_48.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_37 = rdx_48 s>> 5
        int32_t r9_8 = rdx_48 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_3 = r13_1
        int32_t var_84_4 = rdx_48
        int128_t var_78 = (arg1 + 0x1e8).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_48 != r10_1)
            void* rax_32 = *(arg1 + 0x208)
            void* r10_2 = arg1 + 0x1f8
            
            if (rax_32 != 0)
                r10_2 = rax_32
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_52 = *(r10_2 + (sx.q(r8_37) << 2)) & r13_1
            int32_t var_84_6
            
            if (rdx_52 != 0)
            label_141f9a572:
                int32_t rax_39 = neg.d(rdx_52) & rdx_52
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_39)
                int32_t r12_5
                
                if (rax_39 == 0)
                    r12_5 = 0x20
                else
                    r12_5 = 0x1f - temp0_4
                
                int32_t var_84_5 = r9_8 - r12_5 + 0x1f
                
                if (r9_8 - r12_5 + 0x1f s> r10_1)
                    var_84_6 = r10_1
            else
                while (true)
                    int64_t rcx_25 = sx.q(r8_37)
                    r9_8 += 0x20
                    r8_37 += 1
                    
                    if (rcx_25.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_52 = *(r10_2 + (rcx_25 << 2) + 4)
                    var_88_3 = 0xffffffff
                    
                    if (rdx_52 != 0)
                        goto label_141f9a572
                
                var_84_6 = r10_1
        
        while (true)
            int32_t var_5c
            int64_t rax_41 = sx.q(var_5c)
            int64_t* rdx_53 = var_78.q
            
            if (rax_41.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x1f8
                    && rdx_53 == arg1 + 0x1e8)
                return (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x240)) << 2, sx.q(*(arg1 + 0x244)) << 2)
            
            int64_t r9_10 = *arg2
            int64_t rcx_27 = rax_41 * 5
            int64_t rax_42 = *rdx_53
            (*(r9_10 + 8))(arg2, sx.q(*(rax_42 + (rcx_27 << 3) + 0x18)) << 2, 
                sx.q(*(rax_42 + (rcx_27 << 3) + 0x1c)) << 2, r9_10, var_98_1, arg1 + 0x1f8, 
                var_88_3, var_80_1)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)

return result
