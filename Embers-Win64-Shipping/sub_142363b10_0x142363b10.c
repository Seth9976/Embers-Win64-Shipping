// 函数: sub_142363b10
// 地址: 0x142363b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg2, 0)

uint64_t result

if ((*(arg1 + 0x30) & 2) == 0)
    int32_t rcx_4 = 0
    int32_t r10_1 = *(arg1 + 0xb0)
    int32_t var_88_1 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = arg1 + 0x98
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (r10_1 != 0)
        void* rax_3 = *(arg1 + 0xa8)
        void* r8_1 = arg1 + 0x98
        
        if (rax_3 != 0)
            r8_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r8_1
        int32_t var_74_3
        
        if (rdx_3 != 0)
        label_142363c26:
            int32_t rax_10 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_84_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            int32_t var_74_2 = rcx_4 - rax_11 + 0x1f
            
            if (rcx_4 - rax_11 + 0x1f s> r10_1)
                var_74_3 = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rdi)
                rcx_4 += 0x20
                rdi += 1
                int32_t var_70_2 = rcx_4
                var_88_1 = rdi
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_142363c26
            
            var_74_3 = r10_1
    
    int32_t rdx_6 = *(arg1 + 0xb0)
    int128_t var_28_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_2 = rdx_6 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r14_1
    int32_t var_74_4 = rdx_6
    int128_t var_68 = (arg1 + 0x88).o
    int128_t var_58_1 = var_38_1
    
    if (rdx_6 != r10_1)
        void* rax_13 = *(arg1 + 0xa8)
        void* r10_2 = arg1 + 0x98
        
        if (rax_13 != 0)
            r10_2 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(r10_2 + (sx.q(r8_3) << 2)) & r14_1
        int32_t var_74_6
        
        if (rdx_10 != 0)
        label_142363cf2:
            int32_t rax_20 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t r11_1
            
            if (rax_20 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            int32_t var_74_5 = r9_2 - r11_1 + 0x1f
            
            if (r9_2 - r11_1 + 0x1f s> r10_1)
                var_74_6 = r10_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_2 + (rcx_9 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_142363cf2
            
            var_74_6 = r10_1
    
    while (true)
        int64_t rcx_11 = sx.q(var_58_1:0xc.d)
        result = var_68.q
        
        if (rcx_11.d == (var_78_3.q u>> 0x20).d && var_58_1.q == arg1 + 0x98
                && result == arg1 + 0x88)
            break
        
        void* rsi_2 = *(*result + rcx_11 * 0x10)
        
        if (rsi_2 != 0)
            int64_t rdi_2 = sx.q(arg2[1].d)
            int32_t rax_23 = (rdi_2 + 1).d
            arg2[1].d = rax_23
            
            if (rax_23 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t rcx_16 = (rdi_2 << 4) + *arg2
            *rcx_16 = rsi_2 + 0x28
            *(rcx_16 + 8) = *(rsi_2 + 0xc)
            *(rcx_16 + 0xc) = 0
        
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)
else
    int64_t var_80
    var_80.d = 0
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t var_88
    var_88.q = arg1 + 0xd8
    var_80:4.b = 1
    int32_t rax_2 = (rdi_1 + 1).d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    result = *arg2
    *(result + rdi_1 * 0x10) = var_88.o

return result
