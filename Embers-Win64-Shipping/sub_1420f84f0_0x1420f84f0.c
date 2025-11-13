// 函数: sub_1420f84f0
// 地址: 0x1420f84f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
sub_140a4bff0(arg1 + 0x80, &var_98, 0x50)
uint64_t rdx_2 = sub_140a4bff0(arg1 + 0xd0, &var_e8, 0x50)
int64_t var_88
int64_t* var_160 = &var_88
int32_t rcx_2 = 0
int32_t var_168 = 0
int32_t r8 = 0
int32_t var_164 = 1
int32_t var_158 = 0xffffffff
int64_t var_154 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r9_1 = &var_88
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    rdx_2 = zx.q(*r9_1)
    
    if (rdx_2.d != 0)
    label_1420f863b:
        int32_t rax_9 = neg.d(rdx_2.d) & rdx_2.d
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_164_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8 - rax_10 + 0x1f
        
        if (rax_11 s> var_70)
            rax_11 = var_70
        
        var_154.d = rax_11
    else
        while (true)
            rdx_2 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_154:4.d = r8
            var_168 = rcx_2
            
            if (rdx_2.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_154.d = var_70
                break
            
            rdx_2 = zx.q(*(r9_1 + (rdx_2 << 2) + 4))
            var_158 = 0xffffffff
            
            if (rdx_2.d != 0)
                goto label_1420f863b

int16_t var_130 = 0
int64_t* var_f8 = &var_98
int64_t* var_138 = &var_98
int128_t var_108 = 0xffffffff
int128_t zmm3 = var_168.o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_168.o = (&var_98).o
var_158.o = zmm3
var_108 = zmm0
int128_t var_148 = zmm0
int32_t i_3
void var_128

if (0 s< *(zmm3.q + 0x18))
    int32_t i = i_3
    
    do
        void** rsi_1 = var_168.q
        int32_t* rax_13
        int64_t rdi_2
        
        if (arg2 != 0)
            rdi_2 = sx.q(i) << 5
            rax_13, rdx_2 = sub_140b162a0(arg2, &var_128, *rsi_1 + rdi_2)
        
        if (arg2 == 0 || *rax_13 == 0xffffffff)
            void* rbx_1 = *((sx.q(i) << 5) + *rsi_1 + 0x10)
            
            if (rbx_1 != 0)
                sub_142289d10(rbx_1, rdx_2.d)
                j_sub_140a74f90(rbx_1)
        else
            int128_t* rdx_7 = *rsi_1 + rdi_2
            sub_1420f27e0(arg1 + 0x80, rdx_7, &rdx_7[1])
        
        var_154:4.d &= not.d(var_160:4.d)
        rdx_2 = sub_14059bdd0(&var_160)
        i = i_3
    while (i s< *(var_158.q + 0x18))
    
    if (var_130.b != 0 && var_130:1.b != 0)
        sub_140cb1970(var_138, var_138[1].d - *(var_138 + 0x34), 1)

int64_t var_d8
var_160 = &var_d8
int32_t rcx_12 = 0
int32_t var_168_1 = 0
int32_t r8_6 = 0
int32_t var_164_2 = 1
int32_t var_158_1 = 0xffffffff
int64_t var_154_1 = 0
int64_t* var_c8
int32_t var_c0

if (var_c0 != 0)
    int64_t* r9_2 = &var_d8
    
    if (var_c8 != 0)
        r9_2 = var_c8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_c0 - 1)
    int32_t rdx_13 = *r9_2
    
    if (rdx_13 != 0)
    label_1420f881b:
        int32_t rax_25 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t var_164_3 = rax_25
        int32_t r12_1
        
        if (rax_25 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        int32_t rax_26 = r8_6 - r12_1 + 0x1f
        
        if (rax_26 s> var_c0)
            rax_26 = var_c0
        
        var_154_1.d = rax_26
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_12)
            r8_6 += 0x20
            rcx_12 += 1
            var_154_1:4.d = r8_6
            var_168_1 = rcx_12
            
            if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_154_1.d = var_c0
                break
            
            rdx_13 = *(r9_2 + (rdx_14 << 2) + 4)
            var_158_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1420f881b

int16_t var_130_1 = 0
int64_t* var_f8_1 = &var_e8
int64_t* var_138_1 = &var_e8
int128_t var_108_1 = 0xffffffff
zmm3 = var_168_1.o
var_168_1.o = (&var_e8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_158_1.o = zmm3
int128_t var_148_1 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1 = i_3
    
    do
        void** rsi_2 = var_168_1.q
        int32_t* rax_28
        int64_t rbx_3
        
        if (arg2 != 0)
            rbx_3 = sx.q(i_1) << 5
            rax_28 = sub_140b162a0(arg2, &var_128, *rsi_2 + rbx_3)
        
        if (arg2 == 0 || *rax_28 == 0xffffffff)
            int64_t* rcx_18 = *((sx.q(i_1) << 5) + *rsi_2 + 0x10)
            
            if (rcx_18 != 0)
                (**rcx_18)(rcx_18, 1)
        else
            int128_t* rdx_17 = *rsi_2 + rbx_3
            sub_1420f27e0(arg1 + 0xd0, rdx_17, &rdx_17[1])
        
        var_154_1:4.d &= not.d(var_160:4.d)
        sub_14059bdd0(&var_160)
        i_1 = i_3
    while (i_1 s< *(var_158_1.q + 0x18))
    
    if (var_130_1.b != 0 && var_130_1:1.b != 0)
        sub_140cb1970(var_138_1, var_138_1[1].d - *(var_138_1 + 0x34), 1)

int32_t i_4 = *(arg1 + 0x220)
void*** rbx_4 = *(arg1 + 0x218)

if (i_4 != 0)
    int32_t i_2
    
    do
        sub_1420d95f0(rbx_4)
        rbx_4 = &rbx_4[0xa]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

*(arg1 + 0x220) = 0

if (*(arg1 + 0x224) != 0)
    sub_1405a5310(arg1 + 0x218, 0)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t var_e0
var_e0.d = 0
int32_t var_b8_1 = 0xffffffff
int32_t var_b4_1 = 0
sub_14059a8e0(&var_d8, 0)

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_27 = var_e8

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_90
var_90.d = 0
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
void* result = sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_32 = var_98

if (rcx_32 != 0)
    result = sub_140a74f90(rcx_32)

__security_check_cookie(rax_1 ^ &var_188)
return result
