// 函数: sub_141ef6970
// 地址: 0x141ef6970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int32_t r11 = *(arg1 + 0x7a0)
void* var_a0 = arg1 + 0x788
int32_t rcx = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int32_t r8 = 0
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x798)
    void* r9_1 = arg1 + 0x788
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141ef6a28:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141ef6a28
        
        var_94.d = r11

int32_t rdx_4 = *(arg1 + 0x7a0)
int128_t var_48 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
float var_58[0x4] = var_a8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r14
var_94.d = rdx_4
float var_88[0x4] = (arg1 + 0x778).o

if (rdx_4 != r11)
    void* rax_11 = *(arg1 + 0x798)
    void* r10_1 = arg1 + 0x788
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_141ef6af2:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_94.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141ef6af2
        
        var_94.d = r11

while (true)
    int64_t rax_21 = sx.q(var_58[3])
    int64_t* rdx_9 = var_88[0].q
    
    if (rax_21.d == (var_98_2.q u>> 0x20).d && var_58[0].q == arg1 + 0x788 && rdx_9 == arg1 + 0x778)
        int32_t r11_1 = *(arg2 + 0x28)
        int32_t var_a4_2 = 1
        int32_t rcx_9 = 0
        int32_t var_a8_1 = 0
        int32_t r8_4 = 0
        void* var_a0_1 = arg2 + 0x10
        int32_t var_98_3 = 0xffffffff
        int64_t var_94_1 = 0
        
        if (r11_1 != 0)
            void* rax_25 = *(arg2 + 0x20)
            void* r9_5 = arg2 + 0x10
            
            if (rax_25 != 0)
                r9_5 = rax_25
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_5
            
            if (rdx_12 != 0)
            label_141ef6bd8:
                int32_t rax_32 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_32)
                int32_t var_a4_3 = rax_32
                int32_t rax_33
                
                if (rax_32 == 0)
                    rax_33 = 0x20
                else
                    rax_33 = 0x1f - temp0_5
                
                var_94_1.d = r8_4 - rax_33 + 0x1f
                
                if (r8_4 - rax_33 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_9)
                    r8_4 += 0x20
                    rcx_9 += 1
                    var_94_1:4.d = r8_4
                    var_a8_1 = rcx_9
                    
                    if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_5 + (rdx_13 << 2) + 4)
                    int32_t var_98_4 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_141ef6bd8
                
                var_94_1.d = r11_1
        
        int32_t rdx_14 = *(arg2 + 0x28)
        int128_t var_48_1 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_14.b & 0x1f)
        float var_58_1[0x4] = var_a8_1.o
        int32_t r8_7 = rdx_14 s>> 5
        int32_t r9_7 = rdx_14 & 0xffffffe0
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_5 = r14_1
        var_94_1.d = rdx_14
        var_88 = arg2.o
        
        if (rdx_14 != r11_1)
            void* rax_35 = *(arg2 + 0x20)
            void* r10_2 = arg2 + 0x10
            
            if (rax_35 != 0)
                r10_2 = rax_35
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_18 = *(r10_2 + (sx.q(r8_7) << 2)) & r14_1
            
            if (rdx_18 != 0)
            label_141ef6ca3:
                int32_t rax_42 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_42)
                int32_t r15_1
                
                if (rax_42 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_7
                
                var_94_1.d = r9_7 - r15_1 + 0x1f
                
                if (r9_7 - r15_1 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rcx_14 = sx.q(r8_7)
                    r9_7 += 0x20
                    r8_7 += 1
                    
                    if (rcx_14.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r10_2 + (rcx_14 << 2) + 4)
                    var_98_5 = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_141ef6ca3
                
                var_94_1.d = r11_1
        
        while (true)
            int64_t rcx_16 = sx.q(var_58_1[3])
            int64_t result = var_88[0].q
            
            if (rcx_16.d == (var_98_5.q u>> 0x20).d && var_58_1[0].q == arg2 + 0x10
                    && result == arg2)
                return result
            
            int32_t* r9_11 = (rcx_16 << 4) + *result
            void* const rcx_21
            
            if (*(arg1 + 0x780) == *(arg1 + 0x7ac))
            label_141ef6d50:
                rcx_21 = nullptr
            else
                void* rdx_19 = *(arg1 + 0x7b8)
                void* r8_8 = arg1 + 0x7b0
                int64_t r10_3 = sx.q(*r9_11)
                
                if (rdx_19 != 0)
                    r8_8 = rdx_19
                
                int32_t rax_45 = *(r8_8 + (((sx.q(*(arg1 + 0x7c0)) - 1) & r10_3) << 2))
                
                if (rax_45 == 0xffffffff)
                label_141ef6d50_1:
                    rcx_21 = nullptr
                else
                    int64_t r8_9 = *(arg1 + 0x778)
                    
                    while (true)
                        int64_t rdx_20 = sx.q(rax_45) * 5
                        rcx_21 = r8_9 + (rdx_20 << 3)
                        
                        if (*(r8_9 + (rdx_20 << 3)) == r10_3.d)
                            break
                        
                        rax_45 = *(rcx_21 + 0x20)
                        
                        if (rax_45 == 0xffffffff)
                            goto label_141ef6d50_2
                    
                    if (rax_45 == 0xffffffff)
                    label_141ef6d50_2:
                        rcx_21 = nullptr
            
            void* rax_46 = rcx_21 + 8
            
            if (rcx_21 == 0)
                rax_46 = nullptr
            
            if (rax_46 != 0)
                float zmm0[0x4] = r9_11[1]
                zmm0[0] = zmm0[0] f- data_143f3a920
                *(rax_46 + 8) = _mm_max_ss(zmm0[0], 0)[0]
            
            var_58_1[2] &= not.d(var_88[3])
            sub_14059bdd0(&var_88[2])
    
    *(*rdx_9 + rax_21 * 0x28 + 0x10) = 0
    var_58[2] &= not.d(var_88[3])
    sub_14059bdd0(&var_88[2])
