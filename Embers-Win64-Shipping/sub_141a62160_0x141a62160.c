// 函数: sub_141a62160
// 地址: 0x141a62160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4 = 1
int64_t* var_98 = nullptr
int32_t r11 = arg1[0x37].d
void* rbx = &arg1[0x34]
int32_t var_8c = 0
int32_t rcx = 0
int32_t var_b8 = 0
int64_t* r15 = nullptr
void* var_b0 = rbx
int32_t rdi = 0
int32_t var_a8 = 0xffffffff
int32_t r13 = 0
int32_t var_a4 = 0
int32_t r8 = 0
int32_t var_a0 = 0

if (r11 != 0)
    void* rax_1 = *(rbx + 0x10)
    void* r9_1 = rbx
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141a62228:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_a4 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_a0_1 = rcx
            var_b8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141a62228
        
        var_a4 = r11

int32_t rdx_5 = arg1[0x37].d
int128_t var_80 = var_b8.o
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int128_t var_70 = 0xffffffff
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_80
var_80:8.d = r12
var_80:0xc.d = rdx_5
int64_t var_60 = (&arg1[0x32]).o.q
int128_t var_50 = zmm1

if (rdx_5 != r11)
    void* rax_11 = *(rbx + 0x10)
    void* r10_1 = rbx
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_9 != 0)
    label_141a622f2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_80:0xc.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_80:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141a622f2
        
        var_80:0xc.d = r11

while (true)
    int64_t rax_21 = sx.q(var_50:0xc.d)
    void var_58
    int32_t var_54
    void arg_18
    
    if (rax_21.d == (var_80:8.q u>> 0x20).d && var_50.q == rbx && var_60 == &arg1[0x32])
        int64_t* rbx_2 = r15
        int64_t* r14_1 = nullptr
        void* rdi_3 = &r15[sx.q(rdi) * 2]
        
        if (r15 != rdi_3)
            do
                sub_141a62690(arg1, rbx_2)
                rbx_2 = &rbx_2[2]
            while (rbx_2 != rdi_3)
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        int32_t rcx_13 = 0
        var_98 = nullptr
        int32_t var_8c_1 = 0
        int32_t rdi_4 = arg1[0x41].d
        void* r10_2 = &arg1[0x3e]
        int32_t var_b8_1 = 0
        int32_t rbx_3 = 0
        int32_t var_b4_2 = 1
        int32_t r13_1 = 0
        void* var_b0_1 = r10_2
        int32_t r8_4 = 0
        int32_t var_a8_2 = 0xffffffff
        var_a4.q = 0
        
        if (rdi_4 != 0)
            void* rax_27 = *(r10_2 + 0x10)
            void* r9_5 = r10_2
            
            if (rax_27 != 0)
                r9_5 = rax_27
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rdi_4 - 1)
            int32_t rdx_15 = *r9_5
            int32_t var_a4_2
            
            if (rdx_15 != 0)
            label_141a62488:
                int32_t rax_34 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_34)
                int32_t var_b4_3 = rax_34
                int32_t rax_35
                
                if (rax_34 == 0)
                    rax_35 = 0x20
                else
                    rax_35 = 0x1f - temp0_5
                
                int32_t var_a4_1 = r8_4 - rax_35 + 0x1f
                
                if (r8_4 - rax_35 + 0x1f s> rdi_4)
                    var_a4_2 = rdi_4
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_13)
                    r8_4 += 0x20
                    rcx_13 += 1
                    int32_t var_a0_2 = r8_4
                    var_b8_1 = rcx_13
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r9_5 + (rdx_16 << 2) + 4)
                    int32_t var_a8_3 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_141a62488
                
                var_a4_2 = rdi_4
        
        int32_t rdx_17 = arg1[0x41].d
        int128_t var_80_1 = var_b8_1.o
        int32_t rsi_4 = 0xffffffff << (rdx_17.b & 0x1f)
        int32_t r8_7 = rdx_17 s>> 5
        int32_t r9_7 = rdx_17 & 0xffffffe0
        int128_t var_70_1 = 0xffffffff
        int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        zmm1 = var_80_1
        var_80_1:8.d = rsi_4
        var_80_1:0xc.d = rdx_17
        int64_t* var_60_1 = (&arg1[0x3c]).o.q
        int128_t var_50_1 = zmm1
        
        if (rdx_17 != rdi_4)
            void* rax_37 = *(r10_2 + 0x10)
            
            if (rax_37 != 0)
                r10_2 = rax_37
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rdi_4 - 1)
            int32_t rdx_21 = *(r10_2 + (sx.q(r8_7) << 2)) & rsi_4
            
            if (rdx_21 != 0)
            label_141a62552:
                int32_t rax_44 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_44)
                int32_t rax_45
                
                if (rax_44 == 0)
                    rax_45 = 0x20
                else
                    rax_45 = 0x1f - temp0_7
                
                var_80_1:0xc.d = r9_7 - rax_45 + 0x1f
                
                if (r9_7 - rax_45 + 0x1f s> rdi_4)
                    var_80_1:0xc.d = rdi_4
            else
                while (true)
                    int64_t rcx_18 = sx.q(r8_7)
                    r9_7 += 0x20
                    r8_7 += 1
                    
                    if (rcx_18.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r10_2 + (rcx_18 << 2) + 4)
                    var_80_1:8.d = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_141a62552
                
                var_80_1:0xc.d = rdi_4
            
            r10_2 = &arg1[0x3e]
        
        while (true)
            int64_t result = sx.q(var_50_1:0xc.d)
            
            if (result.d == (var_80_1:8.q u>> 0x20).d && var_50_1.q == r10_2
                    && var_60_1 == &arg1[0x3c])
                void* rbx_4 = r14_1
                void* rdi_8 = &r14_1[sx.q(rbx_3) * 4]
                
                if (r14_1 != rdi_8)
                    do
                        sub_141a60b30(&arg1[0x3c], rbx_4)
                        result = sub_141a56880(&arg1[0x14], rbx_4 + 0x10)
                        rbx_4 += 0x20
                    while (rbx_4 != rdi_8)
                
                if (r14_1 == 0)
                    return result
                
                return sub_140a74f90(r14_1)
            
            int64_t* rsi_5 = *var_60_1 + result * 0x28
            
            if (*sub_140b162a0(arg2, &arg_18, rsi_5) == 0xffffffff)
                int64_t rdi_5 = sx.q(rbx_3)
                rbx_3 = (rdi_5 + 1).d
                
                if (rbx_3 s> r13_1)
                    sub_1405c4e40(&var_98)
                    r13_1 = var_8c_1
                    r14_1 = var_98
                
                int128_t* rax_50 = rdi_5 << 5
                *(rax_50 + r14_1) = *rsi_5
                *(rax_50 + r14_1 + 0x10) = *(rsi_5 + 0x10)
            
            var_50_1:8.d &= not.d(var_54)
            sub_14059bdd0(&var_58)
            r10_2 = &arg1[0x3e]
    
    int64_t* rsi_2 = rax_21 * 0x1c + *var_60
    
    if (*sub_140b162a0(arg2, &arg_18, rsi_2) == 0xffffffff)
        int64_t rbx_1 = sx.q(rdi)
        rdi = (rbx_1 + 1).d
        
        if (rdi s> r13)
            sub_1405a4f90(&var_98)
            r13 = var_8c
            r15 = var_98
        
        rbx = var_b0
        *(r15 + rbx_1 * 0x10) = *rsi_2
    
    var_50:8.d &= not.d(var_54)
    sub_14059bdd0(&var_58)
