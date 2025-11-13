// 函数: sub_141c689e0
// 地址: 0x141c689e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c699c0(arg1)
int32_t rax = data_143f34a18
int32_t arg_8 = rax
sub_140b34200("SubmixSoundfieldChildren", rax)

if (*(arg1 + 0x138) != 0)
    *(arg1 + 0xe8) = 0
    
    if (*(arg1 + 0xec) s<= 0xffffffff)
        sub_140775b10(arg1 + 0xe0, 0)
    
    void* rax_1 = *(arg1 + 0x88)
    int64_t r14_1 = sx.q(*(arg1 + 0xe8))
    int32_t rsi_2 = *(rax_1 + 0x958) * *(rax_1 + 0x14)
    int32_t rax_2 = r14_1.d + rsi_2
    *(arg1 + 0xe8) = rax_2
    
    if (rax_2 s> *(arg1 + 0xec))
        sub_140775270(arg1 + 0xe0)
    
    memset(*(arg1 + 0xe0) + (r14_1 << 2), 0, sx.q(rsi_2) << 2)

int32_t var_d4 = 1
int32_t r11 = *(arg1 + 0x50)
void* var_d0 = arg1 + 0x38
int32_t rcx_3 = 0
int32_t var_d8 = 0
int32_t r8_3 = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r11 != 0)
    void* rax_4 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_141c68b08:
        int32_t rax_11 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_d4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_c4.d = r8_3 - rax_12 + 0x1f
        
        if (r8_3 - rax_12 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_c4:4.d = r8_3
            var_d8 = rcx_3
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141c68b08
        
        var_c4.d = r11

int32_t rdx_6 = *(arg1 + 0x50)
double zmm2[0x2] = var_c8.o
double var_78 = zmm2[0]
int32_t r15 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_88 = var_d8.o
int32_t r8_6 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_98 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_c8_1 = r15
var_c4.d = rdx_6
int128_t zmm1 = var_88
int128_t var_b8 = (arg1 + 0x28).o
int128_t var_a8 = zmm1

if (rdx_6 != r11)
    void* rax_14 = *(arg1 + 0x48)
    void* r10_1 = arg1 + 0x38
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_6) << 2)) & r15
    
    if (rdx_10 != 0)
    label_141c68bd3:
        int32_t rax_21 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_4
        
        var_c4.d = r9_3 - rax_22 + 0x1f
        
        if (r9_3 - rax_22 + 0x1f s> r11)
            var_c4.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_6)
            r9_3 += 0x20
            r8_6 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_8 << 2) + 4)
            var_c8_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141c68bd3
        
        var_c4.d = r11

while (true)
    int64_t rax_24 = sx.q(var_a8:0xc.d)
    void** rdx_11 = var_b8.q
    
    if (rax_24.d == (var_c8_1.q u>> 0x20).d && var_a8.q == arg1 + 0x38 && rdx_11 == arg1 + 0x28)
        if (*(arg1 + 0x30) != *(arg1 + 0x5c) && *(arg1 + 0x138) != 0)
            void* rcx_14 = *(arg1 + 0x88)
            int128_t zmm0 = data_14399f720
            var_d8 = 0
            int64_t var_d0_1 = 0
            var_c8_1.o = zmm0
            int32_t rdx_14 = *(rcx_14 + 0x958)
            var_d8 = rdx_14
            int64_t* rax_28 = sub_141c5d950(rcx_14, rdx_14)
            int64_t* rcx_15 = *(arg1 + 0x138)
            int64_t* var_d0_2 = rax_28
            var_b8.q = arg1 + 0xe0
            var_c8_1.o = data_14399f720
            var_a8.q = *(arg1 + 0x180)
            var_b8:8.d = *(*(arg1 + 0x88) + 0x958)
            var_a8:8.q = &var_d8
            (*(*rcx_15 + 0x10))(rcx_15, &var_b8, arg2)
        
        sub_140b38680("SubmixSoundfieldChildren", arg_8)
        int32_t rax_33 = data_143f34a18
        sub_140b34200("SubmixSoundfieldSources", rax_33)
        int32_t rcx_16 = 0
        int32_t var_d4_2 = 1
        void* r14_3 = arg1 + 0x90
        var_d8 = 0
        int32_t r11_1 = *(r14_3 + 0x28)
        void* r13_1 = r14_3 + 0x10
        int32_t r8_10 = 0
        void* var_d0_3 = r13_1
        int32_t var_c8_2 = 0xffffffff
        int64_t var_c4_1 = 0
        
        if (r11_1 != 0)
            void* rax_34 = *(r13_1 + 0x10)
            void* r9_5 = r13_1
            
            if (rax_34 != 0)
                r9_5 = rax_34
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_20 = *r9_5
            
            if (rdx_20 != 0)
            label_141c68d88:
                int32_t rax_41 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_41)
                int32_t var_d4_3 = rax_41
                int32_t rax_42
                
                if (rax_41 == 0)
                    rax_42 = 0x20
                else
                    rax_42 = 0x1f - temp0_5
                
                var_c4_1.d = r8_10 - rax_42 + 0x1f
                
                if (r8_10 - rax_42 + 0x1f s> r11_1)
                    var_c4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_21 = sx.q(rcx_16)
                    r8_10 += 0x20
                    rcx_16 += 1
                    var_c4_1:4.d = r8_10
                    var_d8 = rcx_16
                    
                    if (rdx_21.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r9_5 + (rdx_21 << 2) + 4)
                    var_c8_2 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_141c68d88
                
                var_c4_1.d = r11_1
        
        int32_t rdx_22 = *(r14_3 + 0x28)
        zmm2 = var_c8_2.o
        var_b8.q = r14_3
        var_a8 = zmm2
        int32_t rsi_4 = 0xffffffff << (rdx_22.b & 0x1f)
        var_b8 = var_d8.o
        int32_t r8_13 = rdx_22 s>> 5
        int32_t r9_7 = rdx_22 & 0xffffffe0
        var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_c8_3 = rsi_4
        var_c4_1.d = rdx_22
        void* var_90
        var_90.o = var_b8
        var_88 = var_a8
        
        if (rdx_22 != r11_1)
            void* rax_44 = *(r13_1 + 0x10)
            void* r10_2 = r13_1
            
            if (rax_44 != 0)
                r10_2 = rax_44
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_26 = *(r10_2 + (sx.q(r8_13) << 2)) & rsi_4
            
            if (rdx_26 != 0)
            label_141c68e52:
                int32_t rax_51 = neg.d(rdx_26) & rdx_26
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_51)
                int32_t r12_1
                
                if (rax_51 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_7
                
                var_c4_1.d = r9_7 - r12_1 + 0x1f
                
                if (r9_7 - r12_1 + 0x1f s> r11_1)
                    var_c4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_21 = sx.q(r8_13)
                    r9_7 += 0x20
                    r8_13 += 1
                    
                    if (rcx_21.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_26 = *(r10_2 + (rcx_21 << 2) + 4)
                    var_c8_3 = 0xffffffff
                    
                    if (rdx_26 != 0)
                        goto label_141c68e52
                
                var_c4_1.d = r11_1
        
        while (true)
            int64_t rax_53 = sx.q(var_78:4.d)
            
            if (rax_53.d == (var_c8_3.q u>> 0x20).d && var_88:8.q == r13_1 && var_90 == r14_3)
                sub_140b38680("SubmixSoundfieldSources", rax_33)
                int32_t r14_5 = data_143f34a18
                sub_140b34200("SubmixSoundfieldProcessors", r14_5)
                void* i = *(arg1 + 0x188)
                
                for (void* rsi_8 = (sx.q(*(arg1 + 0x190)) << 4) + i; i != rsi_8; i += 0x10)
                    int64_t* rcx_35 = *(i + 8)
                    (*(*rcx_35 + 8))(rcx_35, arg2, *(arg1 + 0x180), *i)
                
                return sub_140b38680("SubmixSoundfieldProcessors", r14_5) __tailcall
            
            int64_t* rdi_4 = *(arg1 + 0x180)
            int64_t* rcx_24 = *(arg1 + 0x130)
            var_b8 = *(*var_90 + rax_53 * 0x18)
            int64_t* rax_56
            void var_5c
            void arg_20
            
            if (rcx_24 == 0)
                rax_56 = sub_141c4a9f0(&var_5c)
            else
                rax_56 = (*(*rcx_24 + 8))(rcx_24, &arg_20)
            int64_t var_68 = *rax_56
            int32_t var_60_1 = (*(*rdi_4 + 8))(rdi_4)
            int64_t* rax_60 = var_b8.q
            int64_t r14_4 = sx.q(*(rax_60 + 0x8c))
            void* rdi_5 = *rax_60
            void* rax_62 = r14_4 * 0x3f0 + *(rdi_5 + 0xc8)
            char rcx_27 = *(rax_62 + 0x3d0)
            int64_t rdx_30
            void* rdi_6
            
            if ((rcx_27 & 0x10) != 0 || (*(rax_62 + 0x3d1) & 0x10) != 0 || (rcx_27 & 8) == 0)
                rdi_6 = *(rdi_5 + 0xd8)
                rdx_30 = 0
            else
                rdi_6 = *(rdi_5 + 0xd8)
                int64_t rsi_5 = r14_4 * 0x2f0
                sub_141c5c310(rdi_6 + 0x278 + rsi_5, &arg_8, &var_68)
                int64_t rax_63 = sx.q(arg_8)
                
                if (rax_63.d == 0xffffffff)
                    rdx_30 = *0x28
                else
                    rdx_30 = *((rax_63 << 6) + *(rsi_5 + rdi_6 + 0x278) + 0x28)
            
            *(arg1 + 0x160) = *(r14_4 * 0x2f0 + rdi_6 + 0x10)
            
            if (rdx_30 != 0)
                int64_t* rcx_33 = *(arg1 + 0x170)
                var_d8.q = rdx_30
                int32_t var_c8_4 = var_b8:8.d.d
                int64_t var_d0_4 = *(arg1 + 0x180)
                (*(*rcx_33 + 8))(rcx_33, &var_d8, arg2)
            
            var_78.d &= not.d(var_88:4.d)
            sub_14059bdd0(&var_88)
            r14_3 = arg1 + 0x90
    
    sub_141c65240(arg1, *rdx_11 + rax_24 * 0x38 + 8, arg2)
    var_a8:8.d &= not.d(var_b8:0xc.d)
    sub_14059bdd0(&var_b8:8)
