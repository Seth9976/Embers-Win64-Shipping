// 函数: sub_1409c7a10
// 地址: 0x1409c7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
*(arg1 + 0x28) = *(arg2 + 0x390)
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
sub_1409d9d80(arg1 + 0x40)
sub_1409d93a0(arg1 + 0x40, 0)
sub_1409d9ce0(arg1 + 0x78)
sub_1409d9210(arg1 + 0x78, 0)
void* rax_3 = *(arg2 + 0x28)
int32_t rcx_4 = 0
int32_t r15 = 0
int32_t var_138 = 0
int32_t var_134 = 1
int32_t r8 = 0
int32_t var_128 = 0xffffffff
int32_t r11 = *(rax_3 + 0x140)
void* var_130 = rax_3 + 0x128
int64_t var_124 = 0

if (r11 != 0)
    void* rax_4 = *(rax_3 + 0x138)
    void* r9_1 = rax_3 + 0x128
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1409c7b2c:
        int32_t rax_11 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_134_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_124:4.d = r8
            var_138 = rcx_4
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_128 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1409c7b2c
        
        var_124.d = r11

int32_t rdx_4 = *(rax_3 + 0x140)
double zmm2[0x2] = var_128.o
int128_t zmm0 = var_138.o
var_124.d = rdx_4
double var_90[0x2] = zmm2
int128_t var_a0 = zmm0
int32_t rsi_1 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_f8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_1 = rsi_1
int128_t zmm1 = var_a0
int128_t var_118 = (rax_3 + 0x118).o
int128_t var_108 = zmm1

if (rdx_4 != r11)
    void* rax_16 = *(rax_3 + 0x138)
    void* r10_1 = rax_3 + 0x128
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
    
    if (rdx_8 != 0)
    label_1409c7c18:
        int32_t rax_22 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_4
        
        var_124.d = r9_3 - rax_23 + 0x1f
        
        if (r9_3 - rax_23 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_8 << 2) + 4)
            var_128_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1409c7c18
        
        var_124.d = r11

int32_t var_c0

while (true)
    int32_t rcx_10 = var_108:0xc.d
    int64_t rdx_9 = var_108.q
    int32_t rax_15
    
    if (rcx_10 != (var_128_1.q u>> 0x20).d || rdx_9 != rax_3 + 0x128)
        rax_15.b = 0
    else
        rax_15.b = 1
    
    if (rax_15.b == 0 || var_118.q != rax_3 + 0x118)
        rax_15.b = 1
    else
        rax_15.b = 0
    
    if (rax_15.b == 0)
        break
    
    int32_t rsi_2 = data_143a1c6c4
    
    if (rcx_10 s< *(rdx_9 + 0x18))
        rsi_2 = rcx_10
    
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int64_t var_a8_1
    __builtin_memset(&var_a8_1, 0, 0x3c)
    int32_t rdi_2 = 0
    int32_t var_64_1 = 0
    int32_t* rcx_12 = *(sub_1409ca850(arg1 + 0x78, &var_c0, rsi_2) + 8)
    
    if (rcx_12 != 0)
        *rcx_12 = var_a8_1.d
        rcx_12[1] = var_a8_1:4.d
        rcx_12[2] = var_a0.d
        sub_1409a9d30(&rcx_12[4], &var_a0:8)
        rdi_2 = var_90[0]:4.d
    
    var_90[0].d = 0
    
    if (rdi_2 != 0)
        sub_1405a5410(&var_a0:8, 0)
    
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    sub_14059a8e0(&var_90[1], 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_17 = var_a0:8.q
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = sx.q(rsi_2) * 9
    int64_t rax_29 = *(arg1 + 0x78)
    *(rax_29 + (rcx_18 << 3)) = r15
    r15 += 1
    *(rax_29 + (rcx_18 << 3) + 8) = 0
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)

int32_t rcx_20 = 0
void* rsi_4 = rax_3 + 0xe0
var_138 = 0
int32_t r11_2 = *(rsi_4 + 0x28)
void* r14_2 = rsi_4 + 0x10
void* var_d0 = rsi_4
int32_t r8_5 = 0
int32_t var_134_2 = 1
void* var_130_1 = r14_2
int32_t var_128_2 = 0xffffffff
int64_t var_124_1 = 0

if (r11_2 != 0)
    void* rax_32 = *(r14_2 + 0x10)
    void* r9_5 = r14_2
    
    if (rax_32 != 0)
        r9_5 = rax_32
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_2 - 1)
    int32_t rdx_14 = *r9_5
    
    if (rdx_14 != 0)
    label_1409c7e1c:
        int32_t rax_39 = ((rdx_14 - 1) & rdx_14) ^ rdx_14
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_39)
        int32_t var_134_3 = rax_39
        int32_t rax_40
        
        if (rax_39 == 0)
            rax_40 = 0x20
        else
            rax_40 = 0x1f - temp0_5
        
        var_124_1.d = r8_5 - rax_40 + 0x1f
        
        if (r8_5 - rax_40 + 0x1f s> r11_2)
            var_124_1.d = r11_2
    else
        while (true)
            int64_t rdx_15 = sx.q(rcx_20)
            r8_5 += 0x20
            rcx_20 += 1
            var_124_1:4.d = r8_5
            var_138 = rcx_20
            
            if (rdx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r9_5 + (rdx_15 << 2) + 4)
            var_128_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_1409c7e1c
        
        var_124_1.d = r11_2

int32_t rdx_16 = *(rsi_4 + 0x28)
zmm2 = var_128_2.o
zmm0 = var_138.o
var_90 = zmm2
int32_t rdi_3 = 0xffffffff << (rdx_16.b & 0x1f)
var_a0 = zmm0
int32_t r8_8 = rdx_16 s>> 5
int32_t r9_7 = rdx_16 & 0xffffffe0
int64_t var_f8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_3 = rdi_3
var_124_1.d = rdx_16
zmm1 = var_a0
var_118 = rsi_4.o
int128_t var_108_1 = zmm1

if (rdx_16 != r11_2)
    void* rax_42 = *(r14_2 + 0x10)
    void* r10_2 = r14_2
    
    if (rax_42 != 0)
        r10_2 = rax_42
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r11_2 - 1)
    int32_t rdx_20 = *(r10_2 + (sx.q(r8_8) << 2)) & rdi_3
    
    if (rdx_20 != 0)
    label_1409c7ef4:
        int32_t rax_49 = ((rdx_20 - 1) & rdx_20) ^ rdx_20
        uint64_t rflags_4
        int32_t temp0_7
        temp0_7, rflags_4 = _bit_scan_reverse(rax_49)
        int32_t r12_1
        
        if (rax_49 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_7
        
        var_124_1.d = r9_7 - r12_1 + 0x1f
        
        if (r9_7 - r12_1 + 0x1f s> r11_2)
            var_124_1.d = r11_2
    else
        while (true)
            int64_t rcx_25 = sx.q(r8_8)
            r9_7 += 0x20
            r8_8 += 1
            
            if (rcx_25.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_20 = *(r10_2 + (rcx_25 << 2) + 4)
            var_128_3 = 0xffffffff
            
            if (rdx_20 != 0)
                goto label_1409c7ef4
        
        var_124_1.d = r11_2

uint64_t result = var_128_3.q u>> 0x20
uint64_t result_1 = result

while (true)
    int32_t rcx_27 = var_108_1:0xc.d
    int64_t rdx_21 = var_108_1.q
    
    if (rcx_27 != result.d || rdx_21 != r14_2)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0 || var_118.q != rsi_4)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int32_t r8_9 = data_143a1c6c8
    
    if (rcx_27 s< *(rdx_21 + 0x18))
        r8_9 = rcx_27
    
    int32_t rbx_4 = data_143a1c6b0
    int64_t r14_3 = sx.q(r8_9)
    int64_t r15_1 = r14_3 * 0x28
    int64_t rdi_4 = sx.q(*(r15_1 + *rsi_4 + 0x20))
    void* r13_1 = *(arg1 + 0x78) + rdi_4 * 0x48
    int32_t* rcx_31 = *(sub_1409ca9d0(arg1 + 0x40, &var_138, r8_9) + 8)
    
    if (rcx_31 != 0)
        *rcx_31 = rbx_4
        *(rcx_31 + 8) = 0
        *(rcx_31 + 0x10) = 0
    
    int64_t rcx_32 = *(arg1 + 0x40)
    int64_t rax_55 = r14_3 * 3
    *(rcx_32 + (rax_55 << 3)) = rdi_4.d
    int64_t* r12_4 = r15_1 + 0x10 + *rsi_4
    int32_t* rbx_5 = *r12_4
    int64_t rcx_33 = sx.q(r12_4[1].d)
    void* r15_2 = &rbx_5[rcx_33]
    
    if (rbx_5 != r15_2)
        do
            int64_t rdx_25 = *(rax_3 + 0xa8)
            int64_t rcx_35 = sx.q(*rbx_5) * 2
            int32_t var_4c_1 = data_143a1c6b0
            int32_t rax_57 = *(rdx_25 + (rcx_35 << 3))
            int32_t var_54_1 = *(rdx_25 + (rcx_35 << 3) + 4)
            int32_t var_50_1 = *(rdx_25 + (rcx_35 << 3) + 8)
            sub_14090a150(r13_1 + 0x10, &var_c0)
            int128_t* var_b8
            *var_b8 = rax_57.o
            int64_t r14_4 = sx.q(*(rcx_32 + (rax_55 << 3) + 0x10))
            int32_t rax_61 = (r14_4 + 1).d
            *(rcx_32 + (rax_55 << 3) + 0x10) = rax_61
            
            if (rax_61 s> *(rcx_32 + (rax_55 << 3) + 0x14))
                sub_1405a4cf0(rcx_32 + (rax_55 << 3) + 8)
            
            rbx_5 = &rbx_5[1]
            *(*(rcx_32 + (rax_55 << 3) + 8) + (r14_4 << 2)) = var_c0
        while (rbx_5 != r15_2)
        
        rsi_4 = var_d0
        rcx_33 = zx.q(r12_4[1].d)
    
    int32_t rax_63 = var_118:0xc.d
    *(r13_1 + 8) += rcx_33.d
    var_108_1:8.d &= not.d(rax_63)
    sub_14059bdd0(&var_118:8)
    result = result_1
    r14_2 = rsi_4 + 0x10

__security_check_cookie(rax_1 ^ &var_158)
return result
