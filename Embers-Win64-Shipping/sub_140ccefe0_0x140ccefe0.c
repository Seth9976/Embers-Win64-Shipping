// 函数: sub_140ccefe0
// 地址: 0x140ccefe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*(*arg2 + 8) + 0x28) & 2) != 0)
    char arg_8
    char* arg_10 = &arg_8
    char** arg_18 = &arg_10
    
    if (*(arg1 + 0x48) - *(arg1 + 0x74) s> 0)
        sub_140cb1730(arg1 + 0x40)
        char*** arg_20 = &arg_18
        sub_140cab050(*(arg1 + 0x40), *(arg1 + 0x48) - *(arg1 + 0x74), arg_8)
    
    sub_1408076e0(arg1 + 0x40)
    int32_t rbx_1 = *(arg1 + 0x68)
    int32_t rcx_3 = 0
    int32_t var_b4_1 = 1
    int32_t r8_2 = 0
    int32_t var_b8_1 = 0
    void* var_b0_1 = arg1 + 0x50
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (rbx_1 != 0)
        void* rax_3 = *(arg1 + 0x60)
        void* r9_1 = arg1 + 0x50
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_140ccf0e8:
            int32_t rax_10 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_b4_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_a4_1.d = r8_2 - rax_11 + 0x1f
            
            if (r8_2 - rax_11 + 0x1f s> rbx_1)
                var_a4_1.d = rbx_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_a4_1:4.d = r8_2
                var_b8_1 = rcx_3
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_140ccf0e8
            
            var_a4_1.d = rbx_1
    
    int32_t rdx_7 = *(arg1 + 0x68)
    int128_t var_58_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int128_t var_68_1 = var_b8_1.o
    int32_t r8_5 = rdx_7 s>> 5
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_3 = r12_1
    var_a4_1.d = rdx_7
    arg3.o = var_68_1
    int128_t var_98 = (arg1 + 0x40).o
    int128_t var_88_1 = arg3.o
    
    if (rdx_7 != rbx_1)
        void* rax_13 = *(arg1 + 0x60)
        void* r10_1 = arg1 + 0x50
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & r12_1
        
        if (rdx_11 != 0)
        label_140ccf1b3:
            int32_t rax_20 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t r11_1
            
            if (rax_20 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_a4_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_a4_1.d = rbx_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
                var_a8_3 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140ccf1b3
            
            var_a4_1.d = rbx_1
    
    char rbx_3 = arg_8
    
    while (true)
        int64_t rcx_10 = sx.q(var_88_1:0xc.d)
        int64_t* rax_22 = var_98.q
        
        if (rcx_10.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == arg1 + 0x50
                && rax_22 == arg1 + 0x40)
            break
        
        int64_t rax_23 = *rax_22
        int64_t rdx_13 = rcx_10 << 5
        arg3 = sub_14098daa0(*(rdx_13 + rax_23 + 8), *(rdx_13 + rax_23 + 0x10), rbx_3)
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)

sub_140caed80(arg2, arg1 + 0x40, arg3)
void* result = *arg2

if ((*(*(result + 8) + 0x28) & 1) == 0)
    return result

int64_t rcx_15 = *(arg1 + 0x80)

if (rcx_15 != 0)
    *(arg1 + 0x80) = sub_140a84c80(rcx_15, 0, 0)

*(arg1 + 0x88) = 0
return sub_140cb1a20(arg1 + 0x40, *(arg1 + 0x48) - *(arg1 + 0x74), 0)
