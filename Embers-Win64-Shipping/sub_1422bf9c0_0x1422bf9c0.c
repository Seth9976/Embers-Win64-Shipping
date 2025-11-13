// 函数: sub_1422bf9c0
// 地址: 0x1422bf9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422c0220(arg1, arg2)
int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(arg1[5].d) * 0xd8, sx.q(*(arg1 + 0x2c)) * 0xd8, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(arg1[9].d + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x4c) + 0x1f) u>> 5 << 2, r9_1)
int64_t rdx_6 = sx.q(arg1[0xd].d) << 2
(*(*arg2 + 8))(arg2, rdx_6, rdx_6)
int32_t var_94 = 1
int32_t r11 = arg1[9].d
int32_t rbx_1 = 0
int32_t var_98 = 0
int32_t rcx_3 = 0
int32_t var_88 = 0xffffffff
int32_t r8_6 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_3 = arg1[8]
    void* r9_2 = &arg1[6]
    
    if (rax_3 != 0)
        r9_2 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *r9_2
    
    if (rdx_9 != 0)
    label_1422bfad8:
        int32_t rax_10 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_94_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_84.d = r8_6 - rax_11 + 0x1f
        
        if (r8_6 - rax_11 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_3)
            r8_6 += 0x20
            rcx_3 += 1
            var_84:4.d = r8_6
            var_98 = rcx_3
            
            if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r9_2 + (rdx_10 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1422bfad8
        
        var_84.d = r11

int32_t rdx_11 = arg1[9].d
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_11.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_9 = rdx_11 s>> 5
int32_t r9_4 = rdx_11 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_11
int128_t var_78 = (&arg1[4]).o
int96_t var_68 = var_48:8.12

if (rdx_11 != r11)
    void* rax_13 = arg1[8]
    void* r10_1 = &arg1[6]
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_15 = *(r10_1 + (sx.q(r8_9) << 2)) & r12
    
    if (rdx_15 != 0)
    label_1422bfba3:
        int32_t rax_20 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_4
        
        var_84.d = r9_4 - rax_21 + 0x1f
        
        if (r9_4 - rax_21 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_9)
            r9_4 += 0x20
            r8_9 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r10_1 + (rcx_8 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_1422bfba3
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_23 = sx.q(var_5c)
    int64_t* rdx_16 = var_78.q
    
    if (rax_23.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[6] && rdx_16 == &arg1[4])
        (*(*arg2 + 8))(arg2, sx.q(arg1[0xf].d) << 3, sx.q(*(arg1 + 0x7c)) << 3)
        (*(*arg2 + 8))(arg2, sx.q(arg1[0x11].d) << 5, sx.q(*(arg1 + 0x8c)) << 5)
        int64_t r9_6 = *arg2
        (*(r9_6 + 8))(arg2, zx.q(arg1[0x15].d + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0xac) + 0x1f) u>> 5 << 2, r9_6, var_98, &arg1[6], var_88_2)
        int64_t rdx_27 = sx.q(arg1[0x19].d) << 2
        (*(*arg2 + 8))(arg2, rdx_27, rdx_27)
        int32_t var_98_1 = 0
        int32_t r10_2 = arg1[0x15].d
        int32_t var_94_2 = 1
        int32_t rcx_17 = 0
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_2 != 0)
            void* rax_31 = arg1[0x14]
            void* r8_19 = &arg1[0x12]
            
            if (rax_31 != 0)
                r8_19 = rax_31
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2 - 1)
            int32_t rdx_30 = *r8_19
            
            if (rdx_30 != 0)
            label_1422bfd16:
                int32_t rax_38 = neg.d(rdx_30) & rdx_30
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_38)
                int32_t var_94_3 = rax_38
                int32_t rax_39
                
                if (rax_38 == 0)
                    rax_39 = 0x20
                else
                    rax_39 = 0x1f - temp0_5
                
                var_84_1.d = rcx_17 - rax_39 + 0x1f
                
                if (rcx_17 - rax_39 + 0x1f s> r10_2)
                    var_84_1.d = r10_2
            else
                while (true)
                    int64_t rdx_31 = sx.q(rbx_1)
                    rcx_17 += 0x20
                    rbx_1 += 1
                    var_84_1:4.d = rcx_17
                    var_98_1 = rbx_1
                    
                    if (rdx_31.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_30 = *(r8_19 + (rdx_31 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_30 != 0)
                        goto label_1422bfd16
                
                var_84_1.d = r10_2
        
        int32_t rdx_33 = arg1[0x15].d
        int128_t var_38_1 = 0xffffffff
        int32_t r12_1 = 0xffffffff << (rdx_33.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_21 = rdx_33 s>> 5
        int32_t r9_8 = rdx_33 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = r12_1
        var_84_1.d = rdx_33
        var_78 = (arg1 + 0x80).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_33 != r10_2)
            void* rax_41 = arg1[0x14]
            void* r10_3 = &arg1[0x12]
            
            if (rax_41 != 0)
                r10_3 = rax_41
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_37 = *(r10_3 + (sx.q(r8_21) << 2)) & r12_1
            
            if (rdx_37 != 0)
            label_1422bfde2:
                int32_t rax_48 = neg.d(rdx_37) & rdx_37
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_48)
                int32_t r15_1
                
                if (rax_48 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_7
                
                var_84_1.d = r9_8 - r15_1 + 0x1f
                
                if (r9_8 - r15_1 + 0x1f s> r10_2)
                    var_84_1.d = r10_2
            else
                while (true)
                    int64_t rcx_22 = sx.q(r8_21)
                    r9_8 += 0x20
                    r8_21 += 1
                    
                    if (rcx_22.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_37 = *(r10_3 + (rcx_22 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_37 != 0)
                        goto label_1422bfde2
                
                var_84_1.d = r10_2
        
        while (true)
            int64_t rcx_24 = sx.q(var_5c)
            int64_t* result = var_78.q
            
            if (rcx_24.d == (var_88_5.q u>> 0x20).d && var_68_1.q == &arg1[0x12]
                    && result == arg1 + 0x80)
                return result
            
            int64_t rax_50 = *result
            int64_t r9_10 = *arg2
            int64_t rcx_25 = rcx_24 << 5
            (*(r9_10 + 8))(arg2, sx.q(*(rcx_25 + rax_50 + 0x10)), sx.q(*(rcx_25 + rax_50 + 0x14)), 
                r9_10, var_98_1, &arg1[0x12], var_88_5)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    sub_1422bf650(rax_23 * 0xd8 + *rdx_16 + 8, arg2)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
