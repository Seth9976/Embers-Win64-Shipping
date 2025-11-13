// 函数: sub_1409647c0
// 地址: 0x1409647c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
void* result = QueryPerformanceCounter(&performanceCount)
int128_t zmm0
zmm0.q = float.d(performanceCount)
zmm0.q = zmm0.q f* data_143d796f8
zmm0.q = zmm0.q f+ 16777216.0
zmm0.q = zmm0.q f- arg1[0x5e]

if (not(zmm0.q f< arg1[0x5f]))
    if (*(arg1 + 0xd9) != 0)
        (*(*arg1 + 0x18))(arg1, zx.q(arg1[0x19].d))
        (*(*arg1 + 0x10))(arg1, zx.q(arg1[0x19].d))
    
    int32_t var_a4_1 = 1
    int32_t var_98_1 = 0xffffffff
    int32_t r10_1 = arg1[0x23].d
    void* r9_1 = &arg1[0x20]
    void* var_a0_1 = r9_1
    int32_t rcx_3 = 0
    int32_t var_a8_1 = 0
    int32_t r8_1 = 0
    int64_t var_94_1 = 0
    
    if (r10_1 != 0)
        void* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_1409648c8:
            int32_t rax_9 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_a4_2 = rax_9
            int32_t arg_8 = temp0_1
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_94_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_1 += 0x20
                rcx_3 += 1
                var_94_1:4.d = r8_1
                var_a8_1 = rcx_3
                
                if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_1409648c8
            
            var_94_1.d = r10_1
    
    void* var_20_1 = &arg1[0x1e]
    int128_t var_30_1 = 0xffffffff
    int16_t var_50_1 = 0
    int128_t zmm3 = var_a8_1.o
    result = zmm3.q
    int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_88 = (&arg1[0x1e]).o
    zmm0.q = temp0_2
    int128_t var_78_1 = zmm3
    int128_t var_68_1 = zmm0
    
    if (0 s< *(result + 0x18))
        int32_t i = var_78_1:0xc.d
        
        do
            sub_1409767c0(*var_88.q + 0x18 + sx.q(i) * 0x118)
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
            result = var_78_1.q
            i = var_78_1:0xc.d
        while (i s< *(result + 0x18))
        
        if (var_50_1.b != 0 && var_50_1:1.b != 0)
            result = sub_1409562a0(&arg1[0x1e], arg1[0x1f].d - *(arg1 + 0x124), 1)
    
    arg1[0x5d].d = 0

return result
