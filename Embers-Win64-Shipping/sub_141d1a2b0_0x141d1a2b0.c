// 函数: sub_141d1a2b0
// 地址: 0x141d1a2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3:4.d

if (arg1[0xc].d == *(arg1 + 0x8c))
label_141d1a344:
    sub_141d1a650(arg1, arg3)
else
    int32_t rax_1 = sub_140b5ead0(arg3.d)
    void* r8 = &arg1[0x12]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[0x14].d) - 1) & sx.q(rax_1 + rsi)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141d1a344_1:
        sub_141d1a650(arg1, arg3)
    else
        int64_t r8_1 = arg1[0xb]
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            
            if (*(r8_1 + (rdx_3 << 2)) == arg3)
                break
            
            rax_4 = *(r8_1 + (rdx_3 << 2) + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141d1a344_2
        
        if (rax_4 == 0xffffffff)
        label_141d1a344_2:
            sub_141d1a650(arg1, arg3)

void* const rcx_7

if (arg1[0xc].d == *(arg1 + 0x8c))
label_141d1a3b0:
    rcx_7 = nullptr
else
    int32_t rax_6 = sub_140b5ead0(arg3.d)
    void* r8_2 = &arg1[0x12]
    void* rcx_5 = *(r8_2 + 8)
    
    if (rcx_5 != 0)
        r8_2 = rcx_5
    
    int32_t rax_9 = *(r8_2 + (((sx.q(arg1[0x14].d) - 1) & sx.q(rax_6 + rsi)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_141d1a3b0_1:
        rcx_7 = nullptr
    else
        int64_t r8_3 = arg1[0xb]
        
        while (true)
            int64_t rdx_8 = sx.q(rax_9) * 5
            rcx_7 = r8_3 + (rdx_8 << 2)
            
            if (*(r8_3 + (rdx_8 << 2)) == arg3)
                break
            
            rax_9 = *(rcx_7 + 0xc)
            
            if (rax_9 == 0xffffffff)
                goto label_141d1a3b0_2
        
        if (rax_9 == 0xffffffff)
        label_141d1a3b0_2:
            rcx_7 = nullptr

int32_t r11 = arg1[6].d
int32_t rcx_8 = 0
int32_t arg_8 = *(rcx_7 + 8)
int32_t r8_4 = 0
int32_t var_a8 = 0
int32_t var_a4 = 1
void* var_a0 = &arg1[3]
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_11 = arg1[5]
    void* r9_1 = &arg1[3]
    
    if (rax_11 != 0)
        r9_1 = rax_11
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_141d1a438:
        int32_t rax_18 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_a4_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_2
        
        var_94.d = r8_4 - rax_19 + 0x1f
        
        if (r8_4 - rax_19 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_8)
            r8_4 += 0x20
            rcx_8 += 1
            var_94:4.d = r8_4
            var_a8 = rcx_8
            
            if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141d1a438
        
        var_94.d = r11

int32_t rdx_13 = arg1[6].d
double zmm2[0x2] = var_98.o
double var_48[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_13.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_7 = rdx_13 s>> 5
int32_t r9_3 = rdx_13 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r12
var_94.d = rdx_13
int128_t var_88 = (&arg1[1]).o
int128_t var_78 = var_58

if (rdx_13 != r11)
    void* rax_21 = arg1[5]
    void* r10_1 = &arg1[3]
    
    if (rax_21 != 0)
        r10_1 = rax_21
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_17 = *(r10_1 + (sx.q(r8_7) << 2)) & r12
    
    if (rdx_17 != 0)
    label_141d1a502:
        int32_t rax_28 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_28)
        int32_t rsi_1
        
        if (rax_28 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - rsi_1 + 0x1f
        
        if (r9_3 - rsi_1 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_7)
            r9_3 += 0x20
            r8_7 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r10_1 + (rcx_13 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_141d1a502
        
        var_94.d = r11

int32_t r12_1 = arg_8

while (true)
    int64_t rax_30 = sx.q(var_78:0xc.d)
    int64_t rdx_18 = var_88.q
    
    if (rax_30.d == (var_98_1.q u>> 0x20).d && var_78.q == &arg1[3] && rdx_18 == &arg1[1])
        var_a8.q = data_143f37058
        int64_t var_a0_1 = arg3
        sub_141d1ca50(&arg1[1], &arg_8, &var_a8)
        void* const rcx_24
        
        if (arg1[0xc].d == *(arg1 + 0x8c))
        label_141d1a610:
            rcx_24 = nullptr
        else
            int32_t rax_37 = sub_140b5ead0(arg3.d) + arg3:4.d
            void* r8_9 = &arg1[0x12]
            void* rcx_22 = *(r8_9 + 8)
            
            if (rcx_22 != 0)
                r8_9 = rcx_22
            
            int32_t rax_39 = *(r8_9 + (((sx.q(arg1[0x14].d) - 1) & sx.q(rax_37)) << 2))
            
            if (rax_39 == 0xffffffff)
            label_141d1a610_1:
                rcx_24 = nullptr
            else
                int64_t r8_10 = arg1[0xb]
                
                while (true)
                    int64_t rdx_24 = sx.q(rax_39) * 5
                    rcx_24 = r8_10 + (rdx_24 << 2)
                    
                    if (*(r8_10 + (rdx_24 << 2)) == arg3)
                        break
                    
                    rax_39 = *(rcx_24 + 0xc)
                    
                    if (rax_39 == 0xffffffff)
                        goto label_141d1a610_2
                
                if (rax_39 == 0xffffffff)
                label_141d1a610_2:
                    rcx_24 = nullptr
        
        *(rcx_24 + 8) += arg2
        (*(*arg1 + 0x20))(arg1, arg3, zx.q(r12_1), zx.q(arg2))
        return zx.q(r12_1)
    
    void* rcx_17 = rax_30 * 0x30 + *rdx_18
    
    if (*(rcx_17 + 8) == arg3)
        int64_t* rcx_18 = *(rcx_17 + 0x20)
        (**rcx_18)(rcx_18, zx.q(r12_1 + arg2))
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
