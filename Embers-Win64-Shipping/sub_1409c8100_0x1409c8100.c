// 函数: sub_1409c8100
// 地址: 0x1409c8100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
*(arg1 + 0x28) = *(arg2 + 0x390)
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = *(arg2 + 0x3a4)
sub_1409d9d80(arg1 + 0x40)
sub_1409d93a0(arg1 + 0x40, 0)
sub_1409d9ce0(arg1 + 0x78)
sub_1409d9210(arg1 + 0x78, 0)
void* rax_4 = *(arg2 + 0x28)
int32_t rcx_4 = 0
int64_t var_124 = 0
int32_t r13 = 0
int32_t r8 = 0
int32_t var_138 = 0
int32_t var_134 = 1
int32_t r11 = *(rax_4 + 0x140)
void* var_130 = rax_4 + 0x128
int32_t var_128 = 0xffffffff

if (r11 != 0)
    void* rax_5 = *(rax_4 + 0x138)
    void* r9_1 = rax_4 + 0x128
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1409c8229:
        int32_t rax_12 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_134_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> r11)
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
                goto label_1409c8229
        
        var_124.d = r11

int32_t rdx_4 = *(rax_4 + 0x140)
double zmm2[0x2] = var_128.o
int128_t zmm0 = var_138.o
var_124.d = rdx_4
double var_90[0x2] = zmm2
int128_t var_a0 = zmm0
int32_t rsi_1 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_e0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_1 = rsi_1
int128_t zmm1 = var_a0
int128_t var_100 = (rax_4 + 0x118).o
int128_t var_f0 = zmm1

if (rdx_4 != r11)
    void* rax_17 = *(rax_4 + 0x138)
    void* r10_1 = rax_4 + 0x128
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
    
    if (rdx_8 != 0)
    label_1409c8305:
        int32_t rax_23 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t rax_24
        
        if (rax_23 == 0)
            rax_24 = 0x20
        else
            rax_24 = 0x1f - temp0_4
        
        var_124.d = r9_3 - rax_24 + 0x1f
        
        if (r9_3 - rax_24 + 0x1f s> r11)
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
                goto label_1409c8305
        
        var_124.d = r11

int32_t var_c0

while (true)
    int32_t rcx_10 = var_f0:0xc.d
    int64_t rdx_9 = var_f0.q
    int32_t rax_16
    
    if (rcx_10 != (var_128_1.q u>> 0x20).d || rdx_9 != rax_4 + 0x128)
        rax_16.b = 0
    else
        rax_16.b = 1
    
    if (rax_16.b == 0 || var_100.q != rax_4 + 0x118)
        rax_16.b = 1
    else
        rax_16.b = 0
    
    if (rax_16.b == 0)
        break
    
    int32_t rsi_2 = data_143a1c6c4
    
    if (rcx_10 s< *(rdx_9 + 0x18))
        rsi_2 = rcx_10
    
    int32_t var_6c_1 = 0x80
    int64_t var_a8_1
    __builtin_memset(&var_a8_1, 0, 0x3c)
    int32_t rbx_2 = 0
    int32_t var_64_1 = 0
    int32_t var_68_1 = 0xffffffff
    int32_t* rcx_12 = *(sub_1409ca850(arg1 + 0x78, &var_c0, rsi_2) + 8)
    
    if (rcx_12 != 0)
        *rcx_12 = var_a8_1.d
        rcx_12[1] = var_a8_1:4.d
        rcx_12[2] = var_a0.d
        sub_1409a9d30(&rcx_12[4], &var_a0:8)
        rbx_2 = var_90[0]:4.d
    
    var_90[0].d = 0
    
    if (rbx_2 != 0)
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
    
    int64_t rax_29 = *(arg1 + 0x78)
    int64_t rsi_3 = sx.q(rsi_2)
    int64_t rcx_18 = rsi_3 * 9
    *(rax_29 + (rcx_18 << 3)) = r13
    void* r14_2 = rax_29 + (rcx_18 << 3)
    int64_t rbx_3 = data_143f36150
    int32_t var_118
    var_118.q = rbx_3
    void* const rcx_22
    
    if (*(rax_4 + 0x310) == *(rax_4 + 0x33c))
    label_1409c84d0:
        rcx_22 = nullptr
    else
        int32_t var_114
        int64_t rax_33 = sx.q(sub_140b5ead0(rbx_3.d) + var_114)
        void* r8_5 = rax_4 + 0x340
        void* rcx_20 = *(r8_5 + 8)
        
        if (rcx_20 != 0)
            r8_5 = rcx_20
        
        int32_t rax_34 = *(r8_5 + (((sx.q(*(rax_4 + 0x350)) - 1) & rax_33) << 2))
        
        if (rax_34 == 0xffffffff)
        label_1409c84d0_1:
            rcx_22 = nullptr
        else
            int64_t r8_6 = *(rax_4 + 0x308)
            
            while (true)
                int64_t rdx_15 = sx.q(rax_34) * 3
                rcx_22 = r8_6 + (rdx_15 << 3)
                
                if (*(r8_6 + (rdx_15 << 3)) == rbx_3)
                    break
                
                rax_34 = *(rcx_22 + 0x10)
                
                if (rax_34 == 0xffffffff)
                    goto label_1409c84d0_2
            
            if (rax_34 == 0xffffffff)
            label_1409c84d0_2:
                rcx_22 = nullptr
    
    int64_t i = *(**(*(rcx_22 + 8) + 0x18) + (rsi_3 << 3))
    void* rcx_25 = *(arg1 + 0x28)
    int64_t i_1 = i
    void* r9_7 = *(rcx_25 + 0x68)
    void* rdx_16 = r9_7
    void* r8_9 = sx.q(*(rcx_25 + 0x70)) * 0x30 + r9_7
    int32_t rdx_17
    
    if (r9_7 == r8_9)
    label_1409c851f:
        rdx_17 = -1
    else
        while (*(rdx_16 + 0x10) != i)
            rdx_16 += 0x30
            
            if (rdx_16 == r8_9)
                goto label_1409c851f
        
        rdx_17 = ((rdx_16 - r9_7) s/ 0x30).d
    
    int32_t rax_38 = not.d(var_100:0xc.d)
    *(r14_2 + 4) = rdx_17
    var_f0:8.d &= rax_38
    r13 += 1
    *(r14_2 + 8) = 0
    sub_14059bdd0(&var_100:8)

int32_t rcx_28 = 0
void* rsi_5 = rax_4 + 0xe0
var_138 = 0
int32_t r11_2 = *(rsi_5 + 0x28)
void* rdi_3 = rsi_5 + 0x10
int32_t r8_10 = 0
void* var_d0_1 = rsi_5
int32_t var_134_2 = 1
void* var_130_1 = rdi_3
int32_t var_128_2 = 0xffffffff
int64_t var_124_1 = 0

if (r11_2 != 0)
    void* rax_42 = *(rdi_3 + 0x10)
    void* r9_8 = rdi_3
    
    if (rax_42 != 0)
        r9_8 = rax_42
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_2 - 1)
    int32_t rdx_23 = *r9_8
    
    if (rdx_23 != 0)
    label_1409c860f:
        int32_t rax_49 = ((rdx_23 - 1) & rdx_23) ^ rdx_23
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_49)
        int32_t var_134_3 = rax_49
        int32_t rax_50
        
        if (rax_49 == 0)
            rax_50 = 0x20
        else
            rax_50 = 0x1f - temp0_5
        
        var_124_1.d = r8_10 - rax_50 + 0x1f
        
        if (r8_10 - rax_50 + 0x1f s> r11_2)
            var_124_1.d = r11_2
    else
        while (true)
            int64_t rdx_24 = sx.q(rcx_28)
            r8_10 += 0x20
            rcx_28 += 1
            var_124_1:4.d = r8_10
            var_138 = rcx_28
            
            if (rdx_24.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                var_124_1.d = r11_2
                break
            
            rdx_23 = *(r9_8 + (rdx_24 << 2) + 4)
            var_128_2 = 0xffffffff
            
            if (rdx_23 != 0)
                goto label_1409c860f

int32_t r10_2 = *(rsi_5 + 0x28)
zmm2 = var_128_2.o
int32_t var_118_1 = r10_2
var_a0 = var_138.o
var_90 = zmm2
int32_t r8_13 = r10_2 s>> 5
int32_t r9_10 = r10_2 & 0xffffffe0
int64_t var_e0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
zmm1 = var_a0
var_100 = rsi_5.o
int128_t var_f0_1 = zmm1
int32_t result

if (r10_2 != r11_2)
    void* rax_53 = *(rdi_3 + 0x10)
    void* r10_3 = rdi_3
    
    if (rax_53 != 0)
        r10_3 = rax_53
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r11_2 - 1)
    int32_t rdx_28 = *(r10_3 + (sx.q(r8_13) << 2)) & 0xffffffff << (r10_2 & 0x1f).b
    
    if (rdx_28 != 0)
    label_1409c8700:
        result = ((rdx_28 - 1) & rdx_28) ^ rdx_28
        uint64_t rflags_4
        int32_t temp0_7
        temp0_7, rflags_4 = _bit_scan_reverse(result)
        int32_t r14_3
        
        if (result == 0)
            r14_3 = 0x20
        else
            r14_3 = 0x1f - temp0_7
        
        r10_2 = r9_10 - r14_3 + 0x1f
        var_118_1 = r10_2
        
        if (r10_2 s> r11_2)
            r10_2 = r11_2
            var_118_1 = r11_2
    else
        while (true)
            int64_t rcx_32 = sx.q(r8_13)
            r9_10 += 0x20
            r8_13 += 1
            
            if (rcx_32.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_28 = *(r10_3 + (rcx_32 << 2) + 4)
            
            if (rdx_28 != 0)
                goto label_1409c8700
        
        r10_2 = r11_2
        var_118_1 = r11_2

while (true)
    int32_t rcx_34 = var_f0_1:0xc.d
    int64_t rdx_29 = var_f0_1.q
    
    if (rcx_34 != r10_2 || rdx_29 != rdi_3)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0 || var_100.q != rsi_5)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int32_t r8_14 = data_143a1c6c8
    
    if (rcx_34 s< *(rdx_29 + 0x18))
        r8_14 = rcx_34
    
    int32_t rbx_5 = data_143a1c6b0
    int64_t r14_4 = sx.q(r8_14)
    int64_t rax_59 = r14_4 * 5
    int64_t rdi_4 = sx.q(*(*rsi_5 + (rax_59 << 3) + 0x20))
    void* r13_1 = *(arg1 + 0x78) + rdi_4 * 0x48
    int32_t* rcx_38 = *(sub_1409ca9d0(arg1 + 0x40, &var_138, r8_14) + 8)
    
    if (rcx_38 != 0)
        *rcx_38 = rbx_5
        *(rcx_38 + 8) = 0
        *(rcx_38 + 0x10) = 0
    
    int64_t rcx_39 = *(arg1 + 0x40)
    int64_t rax_62 = r14_4 * 3
    *(rcx_39 + (rax_62 << 3)) = rdi_4.d
    int64_t* rax_64 = *rsi_5 + (rax_59 << 3) + 0x10
    int32_t* rbx_6 = *rax_64
    int64_t rcx_40 = sx.q(rax_64[1].d)
    void* r15_4 = &rbx_6[rcx_40]
    
    if (rbx_6 != r15_4)
        do
            int64_t rdx_33 = *(rax_4 + 0xa8)
            int32_t var_4c_1 = data_143a1c6b0
            int64_t rcx_41 = sx.q(*rbx_6) << 2
            int32_t rax_67 = *(rdx_33 + (rcx_41 << 2))
            int32_t var_54_1 = *(rdx_33 + (rcx_41 << 2) + 4)
            int32_t var_50_1 = *(rdx_33 + (rcx_41 << 2) + 8)
            sub_14090a150(r13_1 + 0x10, &var_c0)
            int128_t* var_b8
            *var_b8 = rax_67.o
            int64_t r14_5 = sx.q(*(rcx_39 + (rax_62 << 3) + 0x10))
            int32_t rax_71 = (r14_5 + 1).d
            *(rcx_39 + (rax_62 << 3) + 0x10) = rax_71
            
            if (rax_71 s> *(rcx_39 + (rax_62 << 3) + 0x14))
                sub_1405a4cf0(rcx_39 + (rax_62 << 3) + 8)
            
            rbx_6 = &rbx_6[1]
            *(*(rcx_39 + (rax_62 << 3) + 8) + (r14_5 << 2)) = var_c0
        while (rbx_6 != r15_4)
        
        rsi_5 = var_d0_1
        rcx_40 = zx.q(rax_64[1].d)
    
    int32_t rax_74 = var_100:0xc.d
    *(r13_1 + 8) += rcx_40.d
    var_f0_1:8.d &= not.d(rax_74)
    sub_14059bdd0(&var_100:8)
    r10_2 = var_118_1
    rdi_3 = rsi_5 + 0x10

__security_check_cookie(rax_1 ^ &var_158)
return result
