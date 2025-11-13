// 函数: sub_141ce0900
// 地址: 0x141ce0900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_94 = 1
*(arg1 + 0x50) = 0
int32_t r11 = arg2[5].d
int32_t var_98 = 0
int32_t* var_90 = &arg2[2]
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int32_t rcx = 0
int64_t var_84 = 0

if (r11 != 0)
    int32_t* rax_1 = arg2[4]
    int32_t* r9_1 = &arg2[2]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141ce09a8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_84:4.d = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141ce09a8
        
        var_84.d = r11

int32_t rdx_5 = arg2[5].d
int32_t r8_2 = rdx_5 s>> 5
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_88_2 = r12
int64_t* r10 = arg2
var_84.d = rdx_5
int128_t var_70 = var_98.o
int32_t var_60 = -1

if (rdx_5 != r11)
    int32_t* rax_11 = arg2[4]
    int32_t* r11_1 = &arg2[2]
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r11_1[sx.q(r8_2)] & r12
    
    if (rdx_9 != 0)
    label_141ce0a62:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_3
        
        var_84.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r11_1[rcx_5 + 1]
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141ce0a62
        
        var_84.d = r11

while (true)
    int32_t result_1
    int64_t result_2 = sx.q(result_1)
    
    if (result_2.d == (var_88_2.q u>> 0x20).d && var_70:8.q == &arg2[2] && r10 == arg2)
        int32_t r10_1 = *(arg1 + 0x28)
        int32_t var_98_1 = 0
        int32_t rcx_9 = 0
        int32_t var_94_2 = 1
        void* var_90_1 = arg1 + 0x10
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r10_1 != 0)
            void* rax_24 = *(arg1 + 0x20)
            void* r8_3 = arg1 + 0x10
            
            if (rax_24 != 0)
                r8_3 = rax_24
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_1 - 1)
            int32_t rdx_14 = *r8_3
            
            if (rdx_14 != 0)
            label_141ce0b46:
                int32_t rax_31 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_31)
                int32_t var_94_3 = rax_31
                int32_t rax_32
                
                if (rax_31 == 0)
                    rax_32 = 0x20
                else
                    rax_32 = 0x1f - temp0_4
                
                var_84_1.d = rcx_9 - rax_32 + 0x1f
                
                if (rcx_9 - rax_32 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rdx_15 = sx.q(rbx)
                    rcx_9 += 0x20
                    rbx += 1
                    var_84_1:4.d = rcx_9
                    var_98_1 = rbx
                    
                    if (rdx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r8_3 + (rdx_15 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_141ce0b46
                
                var_84_1.d = r10_1
        
        int32_t rdx_17 = *(arg1 + 0x28)
        int128_t var_38 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_17.b & 0x1f)
        int128_t var_48 = var_98_1.o
        int32_t r8_5 = rdx_17 s>> 5
        int32_t r9_6 = rdx_17 & 0xffffffe0
        int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int32_t var_88_5 = r14_1
        var_84_1.d = rdx_17
        int64_t* var_78
        var_78.o = arg1.o
        var_70 = var_48
        
        if (rdx_17 != r10_1)
            void* rax_34 = *(arg1 + 0x20)
            void* r10_2 = arg1 + 0x10
            
            if (rax_34 != 0)
                r10_2 = rax_34
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_1 - 1)
            int32_t rdx_21 = *(r10_2 + (sx.q(r8_5) << 2)) & r14_1
            
            if (rdx_21 != 0)
            label_141ce0c12:
                int32_t rax_41 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_41)
                int32_t rax_42
                
                if (rax_41 == 0)
                    rax_42 = 0x20
                else
                    rax_42 = 0x1f - temp0_6
                
                var_84_1.d = r9_6 - rax_42 + 0x1f
                
                if (r9_6 - rax_42 + 0x1f s> r10_1)
                    var_84_1.d = r10_1
            else
                while (true)
                    int64_t rcx_14 = sx.q(r8_5)
                    r9_6 += 0x20
                    r8_5 += 1
                    
                    if (rcx_14.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r10_2 + (rcx_14 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_141ce0c12
                
                var_84_1.d = r10_1
        
        while (true)
            int64_t result = sx.q(result_1)
            
            if (result.d == (var_88_5.q u>> 0x20).d && var_70:8.q == arg1 + 0x10 && var_78 == arg1)
                return result
            
            int64_t* rcx_17 = *(*var_78 + result * 0x18 + 8)
            (*(*rcx_17 + 0x38))(rcx_17, arg2)
            var_60 &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
    
    int32_t rdx_11 = *(*r10 + (result_2 << 3)) + 1
    
    if (*(arg1 + 0x50) s>= rdx_11)
        rdx_11 = *(arg1 + 0x50)
    
    var_60 &= not.d(var_70:4.d)
    *(arg1 + 0x50) = rdx_11
    sub_14059bdd0(&var_70)
    r10 = arg2
