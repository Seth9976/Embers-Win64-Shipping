// 函数: sub_141e66f60
// 地址: 0x141e66f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409d9c00(arg1 + 0x28)
uint64_t* r13 = arg1 + 0x2c0
r13[1].d = 0
uint64_t* arg_20 = r13

if (*(r13 + 0xc) s<= 0xffffffff)
    sub_1405c5570(r13, 0)

void* rsi = arg1 + 0x3d8
int32_t var_114 = 1
int32_t r10 = *(rsi + 0x28)
void* rbx = rsi + 0x10
void* var_c8 = rsi
int32_t rcx_2 = 0
int32_t var_118 = 0
int32_t r8 = 0
void* var_110 = rbx
int32_t var_108 = 0xffffffff
int64_t var_104 = 0

if (r10 != 0)
    void* rax_1 = *(rbx + 0x10)
    void* r9_1 = rbx
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141e6704c:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_114_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_104.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_104.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_104:4.d = r8
            var_118 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_108_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e6704c
        
        var_104.d = r10

int32_t rdx_5 = *(rsi + 0x28)
int128_t var_f0 = var_118.o
int32_t rdi = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_128 = rdi
int32_t var_124 = rdx_5
int64_t var_e0 = 0xffffffff
int64_t var_a0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_f0
int128_t var_c0 = rsi.o
int128_t var_b0 = zmm1

if (rdx_5 != r10)
    void* rax_11 = *(rbx + 0x10)
    void* r11_1 = rbx
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & rdi
    
    if (rdx_9 != 0)
    label_141e67124:
        int32_t rax_18 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_124 = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r10)
            var_124 = r10
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_7 << 2) + 4)
            var_128 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141e67124
        
        var_124 = r10
    
    rbx = var_110

uint64_t rax_22 = var_128.q u>> 0x20
uint64_t var_d0 = rax_22

while (true)
    int64_t rdx_10 = sx.q(var_b0:0xc.d)
    
    if (rdx_10.d != rax_22.d || var_b0.q != rbx)
        rax_22.b = 0
    else
        rax_22.b = 1
    
    int64_t rcx_9 = var_c0.q
    
    if (rax_22.b == 0 || rcx_9 != rsi)
        rax_22.b = 1
    else
        rax_22.b = 0
    
    if (rax_22.b == 0)
        break
    
    int64_t* r12_3 = (rdx_10 << 5) + *rcx_9
    void* rdi_1 = r12_3[1]
    
    if (*(rdi_1 + 0x80) == 0)
        uint64_t rdx_11 = *r13
        int64_t r8_4 = sx.q(r13[1].d)
        uint64_t rax_23 = rdx_11
        int64_t i = *(rdi_1 + 0x30)
        int64_t rcx_10 = rdx_11 + (r8_4 << 3)
        
        if (rdx_11 != rcx_10)
            while (*rax_23 != i)
                rax_23 += 8
                
                if (rax_23 == rcx_10)
                    goto label_141e671de
        
        if (rdx_11 == rcx_10 || ((rax_23 - rdx_11) s>> 3).d == 0xffffffff)
        label_141e671de:
            int32_t rax_26 = (r8_4 + 1).d
            r13[1].d = rax_26
            
            if (rax_26 s> *(r13 + 0xc))
                sub_1405a4d70(r13)
            
            *(*r13 + (r8_4 << 3)) = i
    
    int32_t rcx_12 = 0
    *(rdi_1 + 0x84) = *(rdi_1 + 0x90) - *(rdi_1 + 0xbc)
    int32_t r11_2 = *(rdi_1 + 0xb0)
    int32_t r8_5 = 0
    int32_t var_138_1 = 0
    int32_t var_134_1 = 1
    void* var_130_1 = rdi_1 + 0x98
    int32_t var_128_1 = 0xffffffff
    var_124.q = 0
    
    if (r11_2 != 0)
        void* rax_30 = *(rdi_1 + 0xa8)
        void* r9_5 = rdi_1 + 0x98
        
        if (rax_30 != 0)
            r9_5 = rax_30
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_2 - 1)
        int32_t rdx_15 = *r9_5
        int32_t var_124_2
        
        if (rdx_15 != 0)
        label_141e6729d:
            int32_t rax_37 = ((rdx_15 - 1) & rdx_15) ^ rdx_15
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
            int32_t var_134_2 = rax_37
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_5
            
            int32_t var_124_1 = r8_5 - rax_38 + 0x1f
            
            if (r8_5 - rax_38 + 0x1f s> r11_2)
                var_124_2 = r11_2
        else
            while (true)
                int64_t rdx_16 = sx.q(rcx_12)
                r8_5 += 0x20
                rcx_12 += 1
                int32_t var_120_1 = r8_5
                var_138_1 = rcx_12
                
                if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r9_5 + (rdx_16 << 2) + 4)
                int32_t var_128_2 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_141e6729d
            
            var_124_2 = r11_2
    
    int32_t rdx_17 = *(rdi_1 + 0xb0)
    int32_t r8_8 = rdx_17 s>> 5
    int128_t var_60_1 = 0xffffffff
    int128_t var_70_1 = var_138_1.o
    int32_t rdi_2 = 0xffffffff << (rdx_17 & 0x1f).b
    int32_t r9_7 = rdx_17 & 0xffffffe0
    int32_t var_128_3 = rdi_2
    var_e0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_124 = rdx_17
    void* var_f8
    var_f8.o = (rdi_1 + 0x88).o
    int128_t var_68
    var_f0 = var_68
    
    if (rdx_17 != r11_2)
        void* rax_42 = *(rdi_1 + 0xa8)
        void* r10_1 = rdi_1 + 0x98
        
        if (rax_42 != 0)
            r10_1 = rax_42
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_2 - 1)
        int32_t rdx_21 = *(r10_1 + (sx.q(r8_8) << 2)) & rdi_2
        
        if (rdx_21 != 0)
        label_141e67387:
            int32_t rax_48 = ((rdx_21 - 1) & rdx_21) ^ rdx_21
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_48)
            int32_t rax_49
            
            if (rax_48 == 0)
                rax_49 = 0x20
            else
                rax_49 = 0x1f - temp0_7
            
            var_124 = r9_7 - rax_49 + 0x1f
            
            if (r9_7 - rax_49 + 0x1f s> r11_2)
                var_124 = r11_2
        else
            while (true)
                int64_t rcx_16 = sx.q(r8_8)
                r9_7 += 0x20
                r8_8 += 1
                
                if (rcx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r10_1 + (rcx_16 << 2) + 4)
                var_128_3 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_141e67387
            
            var_124 = r11_2
    
    while (true)
        int64_t rcx_18 = sx.q(var_e0:4.d)
        int32_t rax_41
        
        if (rcx_18.d != (var_128_3.q u>> 0x20).d || var_f0:8.q != rdi_1 + 0x98)
            rax_41.b = 0
        else
            rax_41.b = 1
        
        if (rax_41.b == 0 || var_f8 != rdi_1 + 0x88)
            rax_41.b = 1
        else
            rax_41.b = 0
        
        if (rax_41.b == 0)
            break
        
        int64_t* rcx_21 = rcx_18 * 0x90 + *var_f8
        int64_t rbx_2 = rcx_21[4]
        
        if (rbx_2 != 0)
            int64_t rax_50 = *r12_3
            int64_t var_90_1 = *rcx_21
            int32_t var_88
            sub_140a696e0(arg1 + 0x28, &var_88)
            int64_t* var_80
            *var_80 = rbx_2
            *(var_80 + 8) = rax_50.o
            var_80[3].d = 0xffffffff
            void arg_10
            sub_140e0e970(arg1 + 0x28, &arg_10, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), 
                var_80, var_88, nullptr)
        
        var_e0.d &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
    
    var_b0:8.d &= not.d(var_c0:0xc.d)
    sub_14059bdd0(&var_c0:8)
    rax_22 = var_d0
    r13 = arg_20
    rbx = var_110
    rsi = var_c8

*(arg1 + 0x2d8) = 0
return arg1
