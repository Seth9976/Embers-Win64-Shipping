// 函数: sub_14085dd20
// 地址: 0x14085dd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x28)

if (result != 0 && *(result + 0x408) != 0 && *(arg1 + 0x6e8) != 4)
    int32_t rdi_1 = *(arg1 + 0x128)
    int32_t rcx = 0
    int64_t r14
    r14.b = 0
    int32_t var_a4_1 = 1
    int32_t var_98_1 = 0xffffffff
    int32_t var_a8_1 = 0
    int32_t r8 = 0
    int64_t var_94_1 = 0
    int128_t var_88
    int512_t zmm3
    
    if (arg3 == 0)
        if (rdi_1 != 0)
            void* rax_24 = *(arg1 + 0x120)
            void* r9_6 = arg1 + 0x110
            
            if (rax_24 != 0)
                r9_6 = rax_24
            
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(rdi_1 - 1)
            int32_t rdx_15 = *r9_6
            
            if (rdx_15 != 0)
            label_14085dfb8:
                int32_t rax_31 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_31)
                int32_t var_a4_3 = rax_31
                int32_t rax_32
                
                if (rax_31 == 0)
                    rax_32 = 0x20
                else
                    rax_32 = 0x1f - temp0_5
                
                var_94_1.d = r8 - rax_32 + 0x1f
                
                if (r8 - rax_32 + 0x1f s> rdi_1)
                    var_94_1.d = rdi_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx)
                    r8 += 0x20
                    rcx += 1
                    var_94_1:4.d = r8
                    var_a8_1 = rcx
                    
                    if (rdx_16.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r9_6 + (rdx_16 << 2) + 4)
                    int32_t var_98_4 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_14085dfb8
                
                var_94_1.d = rdi_1
        
        int32_t rdx_17 = *(arg1 + 0x128)
        int128_t var_48_2 = 0xffffffff
        int32_t r12_2 = 0xffffffff << (rdx_17.b & 0x1f)
        int128_t var_58_2 = var_a8_1.o
        int32_t r8_7 = rdx_17 s>> 5
        int32_t r9_8 = rdx_17 & 0xffffffe0
        int64_t var_68_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_5 = r12_2
        var_94_1.d = rdx_17
        var_88 = (arg1 + 0x100).o
        int128_t var_78_2 = var_58_2
        
        if (rdx_17 != rdi_1)
            void* rax_34 = *(arg1 + 0x120)
            void* r11_2 = arg1 + 0x110
            
            if (rax_34 != 0)
                r11_2 = rax_34
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rdi_1 - 1)
            int32_t rdx_21 = *(r11_2 + (sx.q(r8_7) << 2)) & r12_2
            
            if (rdx_21 != 0)
            label_14085e082:
                int32_t rax_41 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_41)
                int32_t r10_2
                
                if (rax_41 == 0)
                    r10_2 = 0x20
                else
                    r10_2 = 0x1f - temp0_7
                
                var_94_1.d = r9_8 - r10_2 + 0x1f
                
                if (r9_8 - r10_2 + 0x1f s> rdi_1)
                    var_94_1.d = rdi_1
            else
                while (true)
                    int64_t rcx_15 = sx.q(r8_7)
                    r9_8 += 0x20
                    r8_7 += 1
                    
                    if (rcx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r11_2 + (rcx_15 << 2) + 4)
                    var_98_5 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_14085e082
                
                var_94_1.d = rdi_1
        
        while (true)
            result = sx.q(var_78_2:0xc.d)
            int64_t* rdx_22 = var_88.q
            
            if (result.d == (var_98_5.q u>> 0x20).d && var_78_2.q == arg1 + 0x110
                    && rdx_22 == arg1 + 0x100)
                break
            
            int32_t* rdi_3 = *rdx_22 + result * 0x14
            int64_t* rax_44 = sub_140d3c6e0(rdi_3)
            
            if (rax_44 != 0)
                zmm3.o = arg2
                int64_t r9_10 = *rax_44
                r14.b |= (*(r9_10 + 0x298))(rax_44, sx.q(rdi_3[2]) + *(arg1 + 0xf0), arg1, r9_10, 
                    var_a8_1, arg1 + 0x110, var_98_5)
            
            var_78_2:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
    else
        if (rdi_1 != 0)
            void* rax = *(arg1 + 0x120)
            void* r9_1 = arg1 + 0x110
            
            if (rax != 0)
                r9_1 = rax
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rdi_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_14085de08:
                int32_t rax_7 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_a4_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_1
                
                var_94_1.d = r8 - rax_8 + 0x1f
                
                if (r8 - rax_8 + 0x1f s> rdi_1)
                    var_94_1.d = rdi_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx)
                    r8 += 0x20
                    rcx += 1
                    var_94_1:4.d = r8
                    var_a8_1 = rcx
                    
                    if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_14085de08
                
                var_94_1.d = rdi_1
        
        int32_t rdx_5 = *(arg1 + 0x128)
        int128_t var_48_1 = 0xffffffff
        int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
        int128_t var_58_1 = var_a8_1.o
        int32_t r8_3 = rdx_5 s>> 5
        int32_t r9_3 = rdx_5 & 0xffffffe0
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_3 = r12_1
        var_94_1.d = rdx_5
        var_88 = (arg1 + 0x100).o
        int128_t var_78_1 = var_58_1
        
        if (rdx_5 != rdi_1)
            void* rax_10 = *(arg1 + 0x120)
            void* r11_1 = arg1 + 0x110
            
            if (rax_10 != 0)
                r11_1 = rax_10
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rdi_1 - 1)
            int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r12_1
            
            if (rdx_9 != 0)
            label_14085ded2:
                int32_t rax_17 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_17)
                int32_t r10_1
                
                if (rax_17 == 0)
                    r10_1 = 0x20
                else
                    r10_1 = 0x1f - temp0_3
                
                var_94_1.d = r9_3 - r10_1 + 0x1f
                
                if (r9_3 - r10_1 + 0x1f s> rdi_1)
                    var_94_1.d = rdi_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_5.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_1 + (rcx_5 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_14085ded2
                
                var_94_1.d = rdi_1
        
        while (true)
            result = sx.q(var_78_1:0xc.d)
            int64_t* rdx_10 = var_88.q
            
            if (result.d == (var_98_3.q u>> 0x20).d && var_78_1.q == arg1 + 0x110
                    && rdx_10 == arg1 + 0x100)
                break
            
            int32_t* rdi_2 = *rdx_10 + result * 0x14
            int64_t* rax_20 = sub_140d3c6e0(rdi_2)
            
            if (rax_20 != 0)
                zmm3.o = arg2
                int64_t r9_5 = *rax_20
                r14.b |= (*(r9_5 + 0x2a0))(rax_20, sx.q(rdi_2[2]) + *(arg1 + 0xf0), arg1, r9_5, 
                    var_a8_1, arg1 + 0x110, var_98_3)
            
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
    
    if (r14.b != 0)
        return sub_140855510(arg1)

return result
