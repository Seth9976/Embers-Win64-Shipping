// 函数: sub_140b88d10
// 地址: 0x140b88d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
sub_140b86a20(&var_88, arg1 + 0x80)
void* var_118 = nullptr
int32_t r11 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t var_10c = 0
int32_t rcx_1 = 0
int32_t var_138 = 0
void* r13 = nullptr
int32_t var_134 = 1
int32_t i_2 = 0
void* var_130 = r9
int32_t r15 = 0
int32_t var_128 = 0xffffffff
int32_t r8 = 0
int64_t var_124 = 0

if (r11 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140b88e27:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_134_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_124:4.d = r8
            var_138 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b88e27
        
        var_124.d = r11

void* var_90 = arg1 + 8
int64_t var_f0 = 0xffffffff
int128_t var_100 = var_138.o
int16_t var_d0 = 0
int128_t zmm3 = var_100
var_100 = zmm3
void* var_108
var_108.o = (arg1 + 8).o
int128_t zmm0
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_f0:8.o = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i = var_f0:4.d
    
    do
        void* rdi_1 = *(*var_108 + sx.q(i) * 0x28 + 0x10)
        
        if (*(rdi_1 + 0x1e4) == 0)
            int64_t* var_e0
            sub_140b891e0(var_e0, i)
            var_d0.b = 1
        else
            int64_t i_3 = sx.q(i_2)
            i_2 = (i_3 + 1).d
            
            if (i_2 s> r15)
                sub_1405a4f90(&var_118)
                r15 = var_10c
                r13 = var_118
            
            sub_140596d10((i_3 << 4) + r13, rdi_1 + 0x18)
        
        var_f0.d &= not.d(var_100:4.d)
        sub_14059bdd0(&var_100)
        i = var_f0:4.d
    while (i s< *(var_100:8.q + 0x18))
    
    if (var_d0.b != 0 && var_d0:1.b != 0)
        i.b = 1
        sub_1405e1160(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), i.b)

int64_t var_78
int64_t* var_130_1 = &var_78
int32_t rcx_11 = 0
int32_t var_138_1 = 0
int32_t r8_2 = 0
int32_t var_134_2 = 1
int32_t var_128_2 = 0xffffffff
int64_t var_124_1 = 0
int64_t* var_68
int32_t var_60

if (var_60 != 0)
    int64_t* r10_1 = &var_78
    
    if (var_68 != 0)
        r10_1 = var_68
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_60 - 1)
    int32_t rdx_13 = *r10_1
    
    if (rdx_13 != 0)
    label_140b88ff7:
        int32_t rax_25 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t var_134_3 = rax_25
        int32_t r12_1
        
        if (rax_25 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        int32_t rax_26 = r8_2 - r12_1 + 0x1f
        
        if (rax_26 s> var_60)
            rax_26 = var_60
        
        var_124_1.d = rax_26
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_11)
            r8_2 += 0x20
            rcx_11 += 1
            var_124_1:4.d = r8_2
            var_138_1 = rcx_11
            
            if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_124_1.d = var_60
                break
            
            rdx_13 = *(r10_1 + (rdx_14 << 2) + 4)
            int32_t var_128_3 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_140b88ff7

int128_t var_a0 = 0xffffffff
var_124_1.d = var_60
double temp0_5[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_108.o = (&var_88).o
var_100 = var_138_1.o
var_f0 = temp0_5.q

while (true)
    int64_t rax_27 = sx.q(var_f0:4.d)
    
    if (rax_27.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_100:8.q == &var_78
            && var_108 == &var_88)
        void* rbx_3 = r13
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx_18 = *rbx_3
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                rbx_3 += 0x10
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (r13 != 0)
            sub_140a74f90(r13)
        
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t result = sub_1405e1cf0(&var_88, 0)
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_23 = var_88
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        __security_check_cookie(rax_1 ^ &var_158)
        return result
    
    int64_t rax_28 = *var_108
    void* rdi_2 = *(rax_28 + ((rax_27 * 5 + 2) << 3))
    void** r15_3 = rax_28 + ((rax_27 * 5 + 2) << 3)
    int64_t* rbx_2 = r13
    void* rsi_3 = (sx.q(i_2) << 4) + r13
    
    if (r13 != rsi_3)
        do
            int16_t* rdx_16
            
            if (*(rdi_2 + 0x20) == 0)
                rdx_16 = &data_142d40450
            else
                rdx_16 = *(rdi_2 + 0x18)
            
            int16_t* const rcx_15
            
            if (rbx_2[1].d == 0)
                rcx_15 = &data_142d40450
            else
                rcx_15 = *rbx_2
            
            if (sub_140a54510(rcx_15, rdx_16) == 0)
                goto label_140b89138
            
            rbx_2 = &rbx_2[2]
        while (rbx_2 != rsi_3)
        
        rdi_2 = *r15_3
    
    var_118 = rdi_2 + 8
    int32_t var_110
    var_110.q = r15_3
    void var_c8
    sub_140b76b10(arg1 + 8, &var_c8, &var_118, nullptr)
label_140b89138:
    var_f0.d &= not.d(var_100:4.d)
    sub_14059bdd0(&var_100)
