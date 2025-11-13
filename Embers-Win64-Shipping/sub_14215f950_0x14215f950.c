// 函数: sub_14215f950
// 地址: 0x14215f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r11 = *(arg1 + 0x448)
void* r9 = arg1 + 0x430
void* var_b0 = r9
int32_t rcx = 0
int32_t var_a8 = 0xffffffff
int32_t r8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14215fa08:
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
            var_a0 = rcx
            var_b8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14215fa08
        
        var_a4 = r11

int64_t* var_30 = arg1 + 0x420
int64_t var_80 = 0xffffffff
int128_t var_90 = var_b8.o
char var_60 = 0
int128_t zmm3 = var_90
var_90 = zmm3
int64_t* var_98
var_98.o = (arg1 + 0x420).o
int128_t zmm0
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_38_1 = zmm0
var_80:8.o = zmm0
char var_5f

if (0 s< *(zmm3.q + 0x18))
    int32_t i = var_80:4.d
    
    do
        int64_t* rcx_3 = *((sx.q(i) << 5) + *var_98 + 8)
        (*(*rcx_3 + 8))(rcx_3, arg2)
        var_80.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = var_80:4.d
    while (i s< *(var_90:8.q + 0x18))
    
    if (var_60 != 0 && var_5f != 0)
        sub_141b50c00(arg1 + 0x420, *(arg1 + 0x428) - *(arg1 + 0x454), 1)

int32_t var_b4_2 = 1
int32_t r11_1 = *(arg1 + 0x590)
int32_t rcx_6 = 0
int32_t var_b8_1 = 0
int32_t r8_2 = 0
int32_t var_a8_2 = 0xffffffff
var_a4.q = 0

if (r11_1 != 0)
    void* rax_17 = *(arg1 + 0x588)
    void* r9_1 = arg1 + 0x578
    
    if (rax_17 != 0)
        r9_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_12 = *r9_1
    int32_t var_a4_2
    
    if (rdx_12 != 0)
    label_14215fb68:
        int32_t rax_24 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_b4_3 = rax_24
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_4
        
        int32_t var_a4_1 = r8_2 - rax_25 + 0x1f
        
        if (r8_2 - rax_25 + 0x1f s> r11_1)
            var_a4_2 = r11_1
    else
        while (true)
            int64_t rdx_13 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_a0 = r8_2
            var_b8_1 = rcx_6
            
            if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
            int32_t var_a8_3 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_14215fb68
        
        var_a4_2 = r11_1

int32_t rdx_14 = *(arg1 + 0x590)
int32_t var_a4_3 = rdx_14
int128_t var_40 = 0xffffffff
int128_t var_50 = var_b8_1.o
int32_t r14 = 0xffffffff << (rdx_14.b & 0x1f)
int32_t r8_5 = rdx_14 s>> 5
int32_t r9_3 = rdx_14 & 0xffffffe0
var_80 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_a8_4 = r14
var_98.o = (arg1 + 0x568).o
var_90 = var_50

if (rdx_14 != r11_1)
    void* rax_27 = *(arg1 + 0x588)
    void* r10_1 = arg1 + 0x578
    
    if (rax_27 != 0)
        r10_1 = rax_27
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_1 - 1)
    int32_t rdx_18 = *(r10_1 + (sx.q(r8_5) << 2)) & r14
    int32_t var_a4_5
    
    if (rdx_18 != 0)
    label_14215fc42:
        int32_t rax_34 = neg.d(rdx_18) & rdx_18
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_reverse(rax_34)
        int32_t rax_35
        
        if (rax_34 == 0)
            rax_35 = 0x20
        else
            rax_35 = 0x1f - temp0_6
        
        int32_t var_a4_4 = r9_3 - rax_35 + 0x1f
        
        if (r9_3 - rax_35 + 0x1f s> r11_1)
            var_a4_5 = r11_1
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_11.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_18 = *(r10_1 + (rcx_11 << 2) + 4)
            var_a8_4 = 0xffffffff
            
            if (rdx_18 != 0)
                goto label_14215fc42
        
        var_a4_5 = r11_1

while (true)
    int64_t rcx_13 = sx.q(var_80:4.d)
    
    if (rcx_13.d == (var_a8_4.q u>> 0x20).d && var_90:8.q == arg1 + 0x578 && var_98 == arg1 + 0x568)
        int32_t var_b8_2 = 0
        int32_t r9_5 = *(arg1 + 0xc8)
        void* r8_8 = arg1 + 0xb0
        int32_t var_b4_4 = 1
        int32_t rcx_18 = 0
        void* var_b0_2 = r8_8
        int32_t var_a8_5 = 0xffffffff
        int32_t var_a4_6 = 0
        int32_t var_a0_1 = 0
        
        if (r9_5 != 0)
            void* rax_43 = *(r8_8 + 0x10)
            
            if (rax_43 != 0)
                r8_8 = rax_43
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r9_5 - 1)
            int32_t rdx_23 = *r8_8
            int32_t var_a4_8
            
            if (rdx_23 != 0)
            label_14215fd46:
                int32_t rax_50 = neg.d(rdx_23) & rdx_23
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_50)
                int32_t var_b4_5 = rax_50
                int32_t rax_51
                
                if (rax_50 == 0)
                    rax_51 = 0x20
                else
                    rax_51 = 0x1f - temp0_7
                
                int32_t var_a4_7 = rcx_18 - rax_51 + 0x1f
                
                if (rcx_18 - rax_51 + 0x1f s> r9_5)
                    var_a4_8 = r9_5
            else
                while (true)
                    int64_t rdx_24 = sx.q(rdi)
                    rcx_18 += 0x20
                    rdi += 1
                    var_a0_1 = rcx_18
                    var_b8_2 = rdi
                    
                    if (rdx_24.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_23 = *(r8_8 + (rdx_24 << 2) + 4)
                    int32_t var_a8_6 = 0xffffffff
                    
                    if (rdx_23 != 0)
                        goto label_14215fd46
                
                var_a4_8 = r9_5
        
        void* var_30_1 = arg1 + 0xa0
        zmm0 = var_b8_2.o
        int128_t var_40_1 = 0xffffffff
        char var_60_1 = 0
        void* result = zmm0.q
        var_90 = zmm0
        var_98.o = (arg1 + 0xa0).o
        zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_80:8.o = zmm0
        
        if (0 s< *(result + 0x18))
            int32_t i_1 = var_80:4.d
            
            do
                (*(*arg2 + 0x38))(arg2, (sx.q(i_1) << 5) + *var_98 + 0x10, arg1, 0, var_b8_2, 
                    var_b0_2, 0xffffffff, var_a0_1, var_98)
                var_80.d &= not.d(var_90:4.d)
                sub_14059bdd0(&var_90)
                result = var_90:8.q
                i_1 = var_80:4.d
            while (i_1 s< *(result + 0x18))
            
            if (var_60_1 != 0 && var_5f != 0)
                result = sub_1421627a0(arg1 + 0xa0, *(arg1 + 0xa8) - *(arg1 + 0xd4), 1)
        
        void* rcx_25 = *(arg1 + 0x150)
        
        if (rcx_25 == 0)
            return result
        
        return sub_142162100(rcx_25, arg2)
    
    int64_t rbx_2 = *(*var_98 + rcx_13 * 0x10)
    (*(*arg2 + 0x38))(arg2, rbx_2 + 0x48, arg1, 0, var_b8_1, arg1 + 0x578, var_a8_4, var_a0, var_98)
    (*(*arg2 + 0x38))(arg2, rbx_2 + 0x40, arg1, 0)
    var_80.d &= not.d(var_90:4.d)
    sub_14059bdd0(&var_90)
