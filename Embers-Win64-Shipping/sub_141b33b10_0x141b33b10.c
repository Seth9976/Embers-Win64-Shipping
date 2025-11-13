// 函数: sub_141b33b10
// 地址: 0x141b33b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c4 = 1
int32_t r11 = *(arg1 + 0x30)
int32_t rcx = 0
void* var_c0 = arg1 + 0x18
int32_t r8 = 0
int32_t var_c8 = 0
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x18
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141b33bb8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_b4:4.d = r8
            var_c8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b33bb8
        
        var_b4.d = r11

int32_t rdx_5 = *(arg1 + 0x30)
int64_t var_90 = 0xffffffff
int32_t rdi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_a0 = var_c8.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_60 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_b8_2 = rdi
var_b4.d = rdx_5
int128_t result = (arg1 + 8).o
int128_t zmm1 = var_a0
int128_t result_1 = result
int128_t var_70 = zmm1

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x28)
    void* r10_1 = arg1 + 0x18
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rdi
    
    if (rdx_9 != 0)
    label_141b33c92:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_b4.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b8_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141b33c92
        
        var_b4.d = r11

while (true)
    int64_t rax_21 = sx.q(var_70:0xc.d)
    int64_t* rdx_10 = result_1.q
    
    if (rax_21.d == (var_b8_2.q u>> 0x20).d && var_70.q == arg1 + 0x18 && rdx_10 == arg1 + 8)
        return result
    
    void* r14_3 = *rdx_10 + 8 + rax_21 * 0x60
    int32_t var_c4_2 = 1
    int32_t r10_2 = *(r14_3 + 0x28)
    int32_t rcx_9 = 0
    void* var_c0_1 = r14_3 + 0x10
    int32_t r8_4 = 0
    int32_t var_c8_1 = 0
    int32_t var_b8_3 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r10_2 != 0)
        void* rax_22 = *(r14_3 + 0x20)
        void* r9_5 = r14_3 + 0x10
        
        if (rax_22 != 0)
            r9_5 = rax_22
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 - 1)
        int32_t rdx_13 = *r9_5
        
        if (rdx_13 != 0)
        label_141b33d78:
            int32_t rax_29 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_29)
            int32_t var_c4_3 = rax_29
            int32_t rax_30
            
            if (rax_29 == 0)
                rax_30 = 0x20
            else
                rax_30 = 0x1f - temp0_5
            
            var_b4_1.d = r8_4 - rax_30 + 0x1f
            
            if (r8_4 - rax_30 + 0x1f s> r10_2)
                var_b4_1.d = r10_2
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_9)
                r8_4 += 0x20
                rcx_9 += 1
                var_b4_1:4.d = r8_4
                var_c8_1 = rcx_9
                
                if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r9_5 + (rdx_14 << 2) + 4)
                int32_t var_b8_4 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141b33d78
            
            var_b4_1.d = r10_2
    
    int32_t rdx_15 = *(r14_3 + 0x28)
    int128_t var_40_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_15.b & 0x1f)
    int128_t var_50_1 = var_c8_1.o
    int32_t r8_7 = rdx_15 s>> 5
    int32_t r9_7 = rdx_15 & 0xffffffe0
    var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_b8_5 = rsi_1
    var_b4_1.d = rdx_15
    result = r14_3.o
    int64_t* var_a8
    var_a8.o = result
    var_a0 = var_50_1
    
    if (rdx_15 != r10_2)
        void* rax_32 = *(r14_3 + 0x20)
        void* r11_1 = r14_3 + 0x10
        
        if (rax_32 != 0)
            r11_1 = rax_32
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_2 - 1)
        int32_t rdx_19 = *(r11_1 + (sx.q(r8_7) << 2)) & rsi_1
        
        if (rdx_19 != 0)
        label_141b33e42:
            int32_t rax_39 = neg.d(rdx_19) & rdx_19
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_39)
            int32_t rax_40
            
            if (rax_39 == 0)
                rax_40 = 0x20
            else
                rax_40 = 0x1f - temp0_7
            
            var_b4_1.d = r9_7 - rax_40 + 0x1f
            
            if (r9_7 - rax_40 + 0x1f s> r10_2)
                var_b4_1.d = r10_2
        else
            while (true)
                int64_t rcx_14 = sx.q(r8_7)
                r9_7 += 0x20
                r8_7 += 1
                
                if (rcx_14.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_19 = *(r11_1 + (rcx_14 << 2) + 4)
                var_b8_5 = 0xffffffff
                
                if (rdx_19 != 0)
                    goto label_141b33e42
            
            var_b4_1.d = r10_2
    
    while (true)
        int64_t rax_42 = sx.q(var_90:4.d)
        
        if (rax_42.d == (var_b8_5.q u>> 0x20).d && var_a0:8.q == r14_3 + 0x10 && var_a8 == r14_3)
            break
        
        int64_t* rax_43 = sub_140d3c6e0(*var_a8 + ((rax_42 * 3 + 1) << 3))
        
        if (rax_43 != 0)
            int64_t rdx_22 = *rax_43
            (*(rdx_22 + 0x538))(rax_43, rdx_22)
        
        var_90.d &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
    
    var_70:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
