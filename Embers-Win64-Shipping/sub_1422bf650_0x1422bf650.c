// 函数: sub_1422bf650
// 地址: 0x1422bf650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x18)) * 0xc, sx.q(*(arg1 + 0x1c)) * 0xc, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0x38) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x3c) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_7 = sx.q(*(arg1 + 0x58)) << 2
(*(*arg2 + 8))(arg2, rdx_7, rdx_7)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x68)) * 0xc, sx.q(*(arg1 + 0x6c)) * 0xc, r9_2)
int64_t r9_3 = *arg2
(*(r9_3 + 8))(arg2, zx.q(*(arg1 + 0x88) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x8c) + 0x1f) u>> 5 << 2, 
    r9_3)
int64_t rdx_15 = sx.q(*(arg1 + 0xa8)) << 2
(*(*arg2 + 8))(arg2, rdx_15, rdx_15)
int64_t result = (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xb8)), sx.q(*(arg1 + 0xbc)))
void* rbx = *(arg1 + 0xc0)

if (rbx != 0)
    int64_t r9_4 = *arg2
    (*(r9_4 + 8))(arg2, sx.q(*(rbx + 8)) * 0xd8, sx.q(*(rbx + 0xc)) * 0xd8, r9_4)
    int64_t r9_5 = *arg2
    (*(r9_5 + 8))(arg2, zx.q(*(rbx + 0x28) + 0x1f) u>> 5 << 2, 
        zx.q(*(rbx + 0x2c) + 0x1f) u>> 5 << 2, r9_5)
    int64_t rdx_23 = sx.q(*(rbx + 0x48)) << 2
    (*(*arg2 + 8))(arg2, rdx_23, rdx_23)
    void* r14_1 = *(arg1 + 0xc0)
    int32_t rcx_10 = 0
    int32_t rdi_1 = *(r14_1 + 0x28)
    int32_t var_88_1 = 0
    int32_t r8_21 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = r14_1 + 0x10
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rdi_1 != 0)
        void* rax_10 = *(r14_1 + 0x20)
        void* r9_6 = r14_1 + 0x10
        
        if (rax_10 != 0)
            r9_6 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_26 = *r9_6
        
        if (rdx_26 != 0)
        label_1422bf858:
            int32_t rax_17 = neg.d(rdx_26) & rdx_26
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            int32_t var_84_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            var_74_1.d = r8_21 - rax_18 + 0x1f
            
            if (r8_21 - rax_18 + 0x1f s> rdi_1)
                var_74_1.d = rdi_1
        else
            while (true)
                int64_t rdx_27 = sx.q(rcx_10)
                r8_21 += 0x20
                rcx_10 += 1
                var_74_1:4.d = r8_21
                var_88_1 = rcx_10
                
                if (rdx_27.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_26 = *(r9_6 + (rdx_27 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_26 != 0)
                    goto label_1422bf858
            
            var_74_1.d = rdi_1
    
    int32_t rdx_28 = *(r14_1 + 0x28)
    int128_t var_28_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_28.b & 0x1f)
    int128_t var_38_1 = var_88_1.o
    int32_t r8_24 = rdx_28 s>> 5
    int32_t r9_8 = rdx_28 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_78_3 = r12_1
    var_74_1.d = rdx_28
    int128_t var_68 = r14_1.o
    int128_t var_58_1 = var_38_1
    
    if (rdx_28 != rdi_1)
        void* rax_20 = *(r14_1 + 0x20)
        void* r10_1 = r14_1 + 0x10
        
        if (rax_20 != 0)
            r10_1 = rax_20
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_32 = *(r10_1 + (sx.q(r8_24) << 2)) & r12_1
        
        if (rdx_32 != 0)
        label_1422bf922:
            int32_t rax_27 = neg.d(rdx_32) & rdx_32
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
            int32_t r11_1
            
            if (rax_27 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_74_1.d = r9_8 - r11_1 + 0x1f
            
            if (r9_8 - r11_1 + 0x1f s> rdi_1)
                var_74_1.d = rdi_1
        else
            while (true)
                int64_t rcx_15 = sx.q(r8_24)
                r9_8 += 0x20
                r8_24 += 1
                
                if (rcx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_32 = *(r10_1 + (rcx_15 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_32 != 0)
                    goto label_1422bf922
            
            var_74_1.d = rdi_1
    
    while (true)
        result = sx.q(var_58_1:0xc.d)
        int64_t* rdx_33 = var_68.q
        
        if (result.d == (var_78_3.q u>> 0x20).d && var_58_1.q == r14_1 + 0x10 && rdx_33 == r14_1)
            break
        
        sub_1422bf650(result * 0xd8 + *rdx_33 + 8, arg2)
        int32_t var_5c
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)

return result
