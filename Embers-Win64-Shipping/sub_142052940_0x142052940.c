// 函数: sub_142052940
// 地址: 0x142052940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x18))

if (result.d != *(arg1 + 0x44))
    int32_t i_1 = 0
    int32_t rdi_1 = 0
    int64_t* r14_1 = nullptr
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int32_t r11_1 = *(arg1 + 0x38)
    int64_t* var_118 = nullptr
    int32_t rcx = 0
    int32_t var_10c_1 = 0
    int32_t var_108_1 = 0
    int32_t var_104_1 = 1
    void* var_100_1 = arg1 + 0x20
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r11_1 != 0)
        void* rax = *(arg1 + 0x30)
        void* r8_1 = arg1 + 0x20
        
        if (rax != 0)
            r8_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r8_1
        
        if (rdx_2 != 0)
        label_142052a16:
            int32_t rax_6 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_6)
            int32_t var_104_2 = rax_6
            int32_t arg_8 = temp0_2
            int32_t rax_7
            
            if (rax_6 == 0)
                rax_7 = 0x20
            else
                rax_7 = 0x1f - temp0_2
            
            var_f4_1.d = rdi_1 - rax_7 + 0x1f
            
            if (rdi_1 - rax_7 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rax_3 = sx.q(rcx)
                rdi_1 += 0x20
                rcx += 1
                var_f4_1:4.d = rdi_1
                var_108_1 = rcx
                
                if (rax_3.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rdx_2 = *(r8_1 + (rax_3 << 2) + 4)
                int32_t var_f8_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_142052a16
            
            var_f4_1.d = r11_1
    
    int32_t rdx_3 = *(arg1 + 0x38)
    int32_t rdi_4 = rdx_3 s>> 5
    void* var_d8 = arg1 + 0x10
    int32_t rsi_1 = 0xffffffff << (rdx_3.b & 0x1f)
    int128_t var_d0_1 = var_108_1.o
    int32_t rcx_5 = rdx_3 & 0xffffffe0
    int32_t var_b0_1 = rdi_4
    int32_t var_a0_1 = rsi_1
    int32_t var_9c_1 = rdx_3
    int32_t var_98_1 = rcx_5
    int128_t zmm0 = var_d8.o
    int128_t var_c0_1 = 0xffffffff
    int64_t var_60_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_80 = zmm0
    int128_t var_70_1 = var_d0_1
    
    if (rdx_3 != r11_1)
        void* rax_9 = *(arg1 + 0x30)
        void* r8_2 = arg1 + 0x20
        
        if (rax_9 != 0)
            r8_2 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *(r8_2 + (sx.q(rdi_4) << 2)) & rsi_1
        int32_t var_9c_3
        
        if (rdx_7 != 0)
        label_142052af3:
            int32_t rax_16 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_16)
            int32_t arg_18 = temp0_4
            int32_t r10_1
            
            if (rax_16 == 0)
                r10_1 = 0x20
            else
                r10_1 = 0x1f - temp0_4
            
            int32_t var_9c_2 = rcx_5 - r10_1 + 0x1f
            
            if (rcx_5 - r10_1 + 0x1f s> r11_1)
                var_9c_3 = r11_1
        else
            while (true)
                int64_t rax_13 = sx.q(rdi_4)
                rcx_5 += 0x20
                rdi_4 += 1
                int32_t var_98_2 = rcx_5
                int32_t var_b0_2 = rdi_4
                
                if (rax_13.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_7 = *(r8_2 + (rax_13 << 2) + 4)
                var_a0_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_142052af3
            
            var_9c_3 = r11_1
    
    while (true)
        int64_t rcx_7 = sx.q(var_70_1:0xc.d)
        int64_t* rax_18 = var_80.q
        
        if (rcx_7.d == (var_a0_1.q u>> 0x20).d && var_70_1.q == arg1 + 0x20
                && rax_18 == arg1 + 0x10)
            break
        
        var_d0_1.d = 1
        void* rdi_5 = *(*rax_18 + rcx_7 * 0x10)
        var_d8 = nullptr
        var_d0_1:8.q = 0
        var_c0_1.d = 0
        sub_1405d16e0(&var_d8, *(rdi_5 + 0x30))
        void* rax_20 = *(rdi_5 + 0x50)
        
        if ((rax_20.b & 1) != 0)
            rax_20 = (rax_20 s>> 1) + 0x50 + rdi_5
        
        int64_t i_3 = sx.q(i_1)
        int32_t var_88_1 = *(rdi_5 + 0x58)
        int128_t zmm6_1 = rax_20.o
        i_1 = (i_3 + 1).d
        int32_t i_2 = i_1
        
        if (i_1 s> var_10c_1)
            sub_1405c4e40(&var_118)
            i_1 = i_2
            r14_1 = var_118
        
        void* rax_24 = var_d8
        void** rcx_13 = &r14_1[i_3 * 4]
        *rcx_13 = rax_24
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
            i_1 = i_2
            r14_1 = var_118
        
        rcx_13[1].d = zmm6_1.d
        *(rcx_13 + 0x10) = zmm6_1
        sub_14081c9d0(&var_d8)
        var_70_1:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)
    
    void*** rsi_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm6 = r14_1.o
    void* rax_28 = &rsi_6[4]
    
    if (rax_28 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x28)
        rsi_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_28 = &rsi_6[4]
    
    *(arg2 + 0x30) = rax_28
    int64_t* rax_29 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    int64_t* var_e8_1
    var_e8_1.o = zmm6
    uint128_t temp0_5 = _mm_bsrli_si128(zmm6, 8)
    *rax_29 = rsi_6
    *(arg2 + 8) = &rsi_6[1]
    int64_t r12_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t rdx_12 = temp0_5.d << 5
    int64_t r13_2 = sx.q(rdx_12)
    int64_t rax_31 = r12_3 + r13_2
    
    if (rax_31 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_12 + 8)
        r12_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_31 = r12_3 + r13_2
    
    *(arg2 + 0x30) = rax_31
    int64_t i_4 = sx.q(i_1)
    memcpy(r12_3, var_e8_1, (i_4 << 5).d)
    rsi_6[1] = 0
    *rsi_6 = &data_142dd5b60
    int32_t var_50_1 = i_4.d
    *(rsi_6 + 0x10) = r12_3.o
    result = zx.q(*(arg1 + 0x18))
    
    if (result.d != *(arg1 + 0x44))
        int32_t rax_32 = *(arg1 + 0x1c)
        *(arg1 + 0x18) = 0
        
        if (rax_32 s< 0 && rax_32 != 0)
            sub_1405a5410(arg1 + 0x10, 0)
        
        void* result_1 = arg1 + 0x20
        *(arg1 + 0x40) = 0xffffffff
        void* rsi_9 = result_1 + 0x18
        *(arg1 + 0x44) = 0
        result = *(result_1 + 0x10)
        uint32_t rdx_17 = (*rsi_9 + 0x1f) u>> 5
        
        if (result != 0)
            result_1 = result
        
        if (rdx_17 u> 8)
            result = memset(result_1, 0, zx.q(rdx_17) << 2)
        else if (rdx_17 != 0)
            result = 0
            __builtin_memset(result_1, 0, zx.q(rdx_17) << 2)
        
        *rsi_9 = 0
        void* rdi_7 = arg1 + 0x48
        int64_t rcx_22 = sx.q(*(arg1 + 0x58))
        void* rdx_18 = *(rdi_7 + 8)
        
        if (rcx_22 s> 0)
            result = 0xffffffff
            
            if (rdx_18 != 0)
                rdi_7 = rdx_18
            
            __builtin_memset(rdi_7, 0xffffffff, rcx_22 << 2)
    
    int64_t* rdi_8 = r14_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            result = sub_14081c9d0(rdi_8)
            rdi_8 = &rdi_8[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
