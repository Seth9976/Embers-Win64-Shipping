// 函数: sub_141d03aa0
// 地址: 0x141d03aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
void** r14_1 = *arg1 + 0x20
int32_t var_e8 = 0
int32_t r11 = r14_1[3].d
void* rsi = &r14_1[2]
int32_t rcx = 0
void** var_a0 = r14_1
int32_t var_e4 = 1
void* var_e0 = rsi
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r11 != 0)
    void* r9_1 = *rsi
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + rsi
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141d03b48:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_e4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_d4.d = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_d4:4.d = rcx
            var_e8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d03b48
        
        var_d4.d = r11

int32_t rdx_5 = r14_1[3].d
int128_t var_c0 = var_e8.o
int32_t rdi = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_4 = rdx_5 & 0xffffffe0
int32_t var_f8 = rdi
int32_t var_f4 = rdx_5
int64_t var_b0 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_c0
int128_t var_98 = r14_1.o
int128_t var_88 = zmm1

if (rdx_5 != r11)
    void* r10_1 = *rsi
    
    if ((r10_1.b & 1) != 0)
        r10_1 = (r10_1 s>> 1) + rsi
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & rdi
    
    if (rdx_9 != 0)
    label_141d03c23:
        int32_t rax_16 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_16)
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_4
        
        var_f4 = r9_4 - rax_17 + 0x1f
        
        if (r9_4 - rax_17 + 0x1f s> r11)
            var_f4 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_4 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_f8 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141d03c23
        
        var_f4 = r11

uint64_t rcx_8 = var_f8.q u>> 0x20
uint64_t arg_20 = rcx_8

while (true)
    int64_t rdx_10 = sx.q(var_88:0xc.d)
    int64_t* result = var_98.q
    
    if (rdx_10.d == rcx_8.d && var_88.q == rsi && result == r14_1)
        return result
    
    void* rcx_9 = *result
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + result
    
    int32_t var_104_1 = 1
    int32_t r8_3 = 0
    void* r13_3 = rdx_10 * 0x50 + rcx_9
    int32_t var_f8_1 = 0xffffffff
    int32_t rcx_11 = 0
    int32_t var_108_1 = 0
    var_f4.q = 0
    void* r14_2 = r13_3 + 0x10
    int32_t r11_1 = *(r14_2 + 0x18)
    void* rsi_1 = r14_2 + 0x10
    void* var_100_1 = rsi_1
    
    if (r11_1 != 0)
        void* r9_6 = *rsi_1
        
        if ((r9_6.b & 1) != 0)
            r9_6 = (r9_6 s>> 1) + rsi_1
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_13 = *r9_6
        
        if (rdx_13 != 0)
        label_141d03d1b:
            int32_t rax_25 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_25)
            int32_t var_104_2 = rax_25
            int32_t rax_26
            
            if (rax_25 == 0)
                rax_26 = 0x20
            else
                rax_26 = 0x1f - temp0_5
            
            var_f4 = r8_3 - rax_26 + 0x1f
            
            if (r8_3 - rax_26 + 0x1f s> r11_1)
                var_f4 = r11_1
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_11)
                r8_3 += 0x20
                rcx_11 += 1
                int32_t var_f0_1 = r8_3
                var_108_1 = rcx_11
                
                if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r9_6 + (rdx_14 << 2) + 4)
                int32_t var_f8_2 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141d03d1b
            
            var_f4 = r11_1
    
    int32_t r10_3 = *(r14_2 + 0x18)
    int128_t var_68_1 = var_108_1.o
    int32_t r8_6 = r10_3 s>> 5
    int32_t r9_9 = r10_3 & 0xffffffe0
    int32_t arg_18 = r10_3
    int128_t var_58_1 = 0xffffffff
    var_b0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    void** var_c8
    var_c8.o = r14_2.o
    var_c0 = var_68_1
    
    if (r10_3 != r11_1)
        void* r10_4 = *rsi_1
        
        if ((r10_4.b & 1) != 0)
            r10_4 = (r10_4 s>> 1) + rsi_1
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_18 = *(r10_4 + (sx.q(r8_6) << 2)) & 0xffffffff << (r10_3.b & 0x1f)
        
        if (rdx_18 != 0)
        label_141d03deb:
            int32_t rax_34 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_34)
            int32_t rax_35
            
            if (rax_34 == 0)
                rax_35 = 0x20
            else
                rax_35 = 0x1f - temp0_7
            
            r10_3 = r9_9 - rax_35 + 0x1f
            arg_18 = r10_3
            
            if (r10_3 s> r11_1)
                r10_3 = r11_1
                arg_18 = r11_1
        else
            while (true)
                int64_t rcx_16 = sx.q(r8_6)
                r9_9 += 0x20
                r8_6 += 1
                
                if (rcx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_18 = *(r10_4 + (rcx_16 << 2) + 4)
                
                if (rdx_18 != 0)
                    goto label_141d03deb
            
            r10_3 = r11_1
            arg_18 = r11_1
    
    while (true)
        int64_t rdx_19 = sx.q(var_b0:4.d)
        
        if (rdx_19.d == r10_3 && var_c0:8.q == rsi_1 && var_c8 == r14_2)
            break
        
        void* rax_36 = *var_c8
        
        if ((rax_36.b & 1) != 0)
            rax_36 = (rax_36 s>> 1) + var_c8
        
        void* rcx_21 = (rdx_19 << 5) + rax_36
        void* rbx_2 = *rcx_21
        
        if ((rbx_2.b & 1) != 0)
            rbx_2 = (rbx_2 s>> 1) + rcx_21
        
        int32_t rax_38 = *(rcx_21 + 8)
        int16_t* var_128 = nullptr
        int16_t* r12_1 = nullptr
        int32_t var_120_1 = 0
        int32_t rsi_2 = 0
        int32_t rdi_2 = rax_38 - 1
        int32_t rax_39 = 0
        
        if (rax_38 == 0)
            rdi_2 = 0
        
        int32_t var_11c_1 = 0
        
        if (rbx_2 != 0 && *rbx_2 != 0 && rdi_2 s> 0)
            if (rdi_2 + 1 s> 0)
                sub_1405947f0(&var_128, rdi_2 + 1)
                rax_39 = var_11c_1
                rsi_2 = var_120_1
                r12_1 = var_128
            
            rsi_2 = rsi_2 + 1 + rdi_2
            
            if (rsi_2 s> rax_39)
                sub_140594770(&var_128)
                r12_1 = var_128
            
            UnDecorator::getReferenceType(r12_1, rbx_2, rdi_2 * 2)
            r12_1[sx.q(rsi_2) - 1] = 0
        
        void* rdi_3 = *r13_3
        
        if ((rdi_3.b & 1) != 0)
            rdi_3 = (rdi_3 s>> 1) + r13_3
        
        int32_t rax_41 = *(r13_3 + 8)
        int32_t rbx_4 = 0
        int16_t* var_118 = nullptr
        int16_t* r15_1 = nullptr
        int32_t var_110_1 = 0
        int32_t r14_3 = rax_41 - 1
        int32_t rax_42 = 0
        
        if (rax_41 == 0)
            r14_3 = 0
        
        int32_t var_10c_1 = 0
        
        if (rdi_3 != 0 && *rdi_3 != 0 && r14_3 s> 0)
            if (r14_3 + 1 s> 0)
                sub_1405947f0(&var_118, r14_3 + 1)
                rax_42 = var_10c_1
                rbx_4 = var_110_1
                r15_1 = var_118
            
            rbx_4 = rbx_4 + 1 + r14_3
            
            if (rbx_4 s> rax_42)
                sub_140594770(&var_118)
                r15_1 = var_118
            
            UnDecorator::getReferenceType(r15_1, rdi_3, r14_3 * 2)
            r15_1[sx.q(rbx_4) - 1] = 0
        
        int32_t rdi_5 = rbx_4 - 1
        
        if (rbx_4 == 0)
            rdi_5 = 0
        
        int32_t rbx_6 = arg1[0x1f].d
        int32_t rax_45
        
        if (rbx_6 == 0)
            rax_45 = rbx_6 + 2
        
        if (rbx_6 != 0 || rdi_5 == 0xffffffff)
            rax_45 = 1
        
        int64_t r14_4 = arg1[0x1e]
        int32_t rcx_28 = rdi_5 + rax_45
        int64_t var_148 = 0
        int32_t var_13c
        
        if (rbx_6 != 0 || rcx_28 != 0)
            sub_1405a4c70(&var_148, rbx_6 + rcx_28, 0)
            memcpy(var_148, r14_4, rbx_6 * 2)
        else
            var_13c = 0
        
        sub_140a2cf70(&var_148, r15_1, rdi_5)
        int32_t rsi_4
        
        if (rsi_2 == 0)
            rsi_4 = 0
        else
            rsi_4 = rsi_2 - 1
        
        int32_t r8_14
        
        if (rbx_6 == 0)
            r8_14 = rbx_6 + 1
        
        if (rbx_6 != 0 || rsi_4 == 0xffffffff)
            r8_14 = 0
        
        int64_t var_138 = var_148
        int32_t rdx_32 = rsi_4 + 1 + rbx_6 + r8_14
        var_148 = 0
        int32_t var_140_1
        var_140_1.q = 0
        
        if (rdx_32 s> var_13c)
            sub_1405947f0(&var_138, rdx_32)
        
        sub_140a2cf70(&var_138, r12_1, rsi_4)
        int64_t rbx_7 = sx.q(arg2[1].d)
        int32_t rax_48 = (rbx_7 + 1).d
        arg2[1].d = rax_48
        
        if (rax_48 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_38 = (rbx_7 << 4) + *arg2
        *rcx_38 = 0
        *rcx_38 = var_138
        var_138 = 0
        rcx_38[1].d = rbx_6
        *(rcx_38 + 0xc) = var_13c
        int64_t rcx_39 = var_138
        int32_t var_130_1
        var_130_1.q = 0
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        int64_t rcx_40 = var_148
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        var_b0.d &= not.d(var_c0:4.d)
        sub_141d02a20(&var_c0)
        r10_3 = arg_18
        r14_2 = r13_3 + 0x10
        rsi_1 = var_100_1
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_141d02a20(&var_98:8)
    rcx_8 = arg_20
    rsi = var_e0
    r14_1 = var_a0
