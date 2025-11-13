// 函数: sub_141c87e90
// 地址: 0x141c87e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_144 = 1
void* var_158
__builtin_memset(&var_158, 0, 0x14)
int32_t r11 = *(arg1 + 0x88)
int32_t r8 = 0
int32_t rcx = 0
void* var_140 = arg1 + 0x70
int32_t var_138 = 0xffffffff
int64_t var_134 = 0
int32_t var_148_1

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x80)
    void* r9_1 = arg1 + 0x70
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141c87f3e:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_144_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_134.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_134.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_134:4.d = rcx
            var_148_1 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_138_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141c87f3e
        
        var_134.d = r11

int32_t rdx_6 = *(arg1 + 0x88)
int128_t var_100 = var_148_1.o
int32_t r8_2 = rdx_6 s>> 5
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r9_3 = rdx_6 & 0xffffffe0
int32_t var_e0 = r8_2
int32_t var_d0 = rsi
int32_t var_cc = rdx_6
int32_t var_c8 = r9_3
int64_t var_f0 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_100
int128_t var_98 = (arg1 + 0x60).o
int128_t var_88 = zmm1

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x80)
    void* r10_1 = arg1 + 0x70
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    int32_t var_cc_2
    
    if (rdx_10 != 0)
    label_141c8802a:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_18 = temp0_3
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_3
        
        int32_t var_cc_1 = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_cc_2 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            int32_t var_c8_1 = r9_3
            int32_t var_e0_1 = r8_2
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_5 << 2) + 4)
            var_d0 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141c8802a
        
        var_cc_2 = r11

while (true)
    int64_t rax_21 = sx.q(var_88:0xc.d)
    int64_t* rdx_11 = var_98.q
    int64_t var_150_1
    
    if (rax_21.d == (var_d0.q u>> 0x20).d && var_88.q == arg1 + 0x70 && rdx_11 == arg1 + 0x60)
        int32_t rcx_14 = 0
        void* r11_2 = arg1 + 0xb0
        int32_t var_128 = 0
        int32_t r10_2 = *(r11_2 + 0x28)
        void* r13_1 = r11_2 + 0x10
        void* arg_8 = r11_2
        int32_t var_124 = 1
        void* var_120 = r13_1
        int32_t var_118 = 0xffffffff
        int64_t var_114 = 0
        
        if (r10_2 != 0)
            void* rax_29 = *(r13_1 + 0x10)
            void* r8_3 = r13_1
            
            if (rax_29 != 0)
                r8_3 = rax_29
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r10_2 - 1)
            int32_t rdx_16 = *r8_3
            
            if (rdx_16 != 0)
            label_141c88189:
                int32_t rax_36 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_36)
                int32_t var_124_1 = rax_36
                int32_t arg_20 = temp0_4
                int32_t rax_37
                
                if (rax_36 == 0)
                    rax_37 = 0x20
                else
                    rax_37 = 0x1f - temp0_4
                
                var_114.d = rcx_14 - rax_37 + 0x1f
                
                if (rcx_14 - rax_37 + 0x1f s> r10_2)
                    var_114.d = r10_2
            else
                while (true)
                    int64_t rdx_17 = sx.q(rbx)
                    rcx_14 += 0x20
                    rbx += 1
                    var_114:4.d = rcx_14
                    var_128 = rbx
                    
                    if (rdx_17.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_16 = *(r8_3 + (rdx_17 << 2) + 4)
                    int32_t var_118_1 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141c88189
                
                var_114.d = r10_2
        
        int32_t rdx_19 = *(r11_2 + 0x28)
        int128_t var_68 = var_128.o
        int32_t r8_5 = rdx_19 s>> 5
        int32_t rdi_2 = 0xffffffff << (rdx_19.b & 0x1f)
        int32_t r9_6 = rdx_19 & 0xffffffe0
        int32_t var_c0 = r8_5
        int32_t var_b0 = rdi_2
        int32_t var_ac = rdx_19
        int32_t var_a8 = r9_6
        int128_t var_58 = 0xffffffff
        var_f0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int64_t* result_1
        result_1.o = r11_2.o
        var_100 = var_68
        
        if (rdx_19 != r10_2)
            void* rax_39 = *(r13_1 + 0x10)
            void* r10_3 = r13_1
            
            if (rax_39 != 0)
                r10_3 = rax_39
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r10_2 - 1)
            int32_t rdx_23 = *(r10_3 + (sx.q(r8_5) << 2)) & rdi_2
            int32_t var_ac_2
            
            if (rdx_23 != 0)
            label_141c8826c:
                int32_t rax_46 = neg.d(rdx_23) & rdx_23
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_46)
                int32_t var_a0_1 = temp0_6
                int32_t r12_1
                
                if (rax_46 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_6
                
                int32_t var_ac_1 = r9_6 - r12_1 + 0x1f
                
                if (r9_6 - r12_1 + 0x1f s> r10_2)
                    var_ac_2 = r10_2
            else
                while (true)
                    int64_t rcx_19 = sx.q(r8_5)
                    r9_6 += 0x20
                    r8_5 += 1
                    int32_t var_a8_1 = r9_6
                    int32_t var_c0_1 = r8_5
                    
                    if (rcx_19.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_23 = *(r10_3 + (rcx_19 << 2) + 4)
                    var_b0 = 0xffffffff
                    
                    if (rdx_23 != 0)
                        goto label_141c8826c
                
                var_ac_2 = r10_2
        
        while (true)
            int64_t rcx_21 = sx.q(var_f0:4.d)
            int64_t* result = result_1
            
            if (rcx_21.d == (var_b0.q u>> 0x20).d && var_100:8.q == r13_1 && result == r11_2)
                int32_t i_2 = var_150_1.d
                
                if (i_2 != 0)
                    int64_t** rbx_3 = var_158 + 8
                    int32_t i
                    
                    do
                        int64_t* rcx_31 = *rbx_3
                        
                        if (rcx_31 != 0)
                            result = zx.q(*(rcx_31 + 0xc))
                            *(rcx_31 + 0xc) -= 1
                            
                            if (result.d == 1 && rcx_31 != 0)
                                result = (*(*rcx_31 + 8))(rcx_31, 1)
                        
                        rbx_3 = &rbx_3[2]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                void* rcx_32 = var_158
                
                if (rcx_32 == 0)
                    return result
                
                return sub_140a74f90(rcx_32)
            
            int64_t rax_48 = *result
            int64_t rcx_22 = rcx_21 << 5
            int64_t* i_1 = *(rcx_22 + rax_48 + 8)
            
            for (void* r14_4 = &i_1[sx.q(*(rcx_22 + rax_48 + 0x10)) * 2]; i_1 != r14_4; 
                    i_1 = &i_1[2])
                int64_t* rcx_23 = *i_1
                int64_t* rax_50 = (*(*rcx_23 + 0x20))(rcx_23)
                
                if (sub_140901d20(&var_158, rax_50) == 0xffffffff)
                    int64_t rdi_3 = sx.q(var_150_1.d)
                    int32_t rcx_25 = (rdi_3 + 1).d
                    var_150_1.d = rcx_25
                    
                    if (rcx_25 s> var_150_1:4.d)
                        sub_1405a4f90(&var_158)
                    
                    void* rcx_29 = (rdi_3 << 4) + var_158
                    *rcx_29 = *rax_50
                    void* rax_53 = rax_50[1]
                    *(rcx_29 + 8) = rax_53
                    
                    if (rax_53 != 0)
                        *(rax_53 + 0xc) += 1
            
            var_f0.d &= not.d(var_100:4.d)
            sub_14059bdd0(&var_100)
            r11_2 = arg_8
    
    void* rsi_1 = *rdx_11 + rax_21 * 0x28
    
    if (sub_140901d20(&var_158, rsi_1 + 0x10) == 0xffffffff)
        int64_t rdi_1 = sx.q(var_150_1.d)
        int32_t rax_24 = (rdi_1 + 1).d
        var_150_1.d = rax_24
        
        if (rax_24 s> var_150_1:4.d)
            sub_1405a4f90(&var_158)
        
        void* rcx_12 = (rdi_1 << 4) + var_158
        *rcx_12 = *(rsi_1 + 0x10)
        void* rax_26 = *(rsi_1 + 0x18)
        *(rcx_12 + 8) = rax_26
        
        if (rax_26 != 0)
            *(rax_26 + 0xc) += 1
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
