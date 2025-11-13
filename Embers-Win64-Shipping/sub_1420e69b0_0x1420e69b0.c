// 函数: sub_1420e69b0
// 地址: 0x1420e69b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_18 = arg3
int64_t var_48
sub_140baa480(&var_48, arg2)
int64_t var_98
sub_140baaa80(&var_98, arg2)
char rax
int32_t rcx_3
rax, rcx_3 = sub_140a32a50(&var_98, arg1 + 0xd0, 1)
int32_t var_90

if (rax != 0)
    int32_t rax_1 = *(arg1 + 0xd8)
    rcx_3 = rax_1 - 1
    int32_t rax_2 = var_90
    
    if (rax_1 == 0)
        rcx_3 = 0
    
    int32_t rbx_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rbx_1 = 0
    
    if (rcx_3 s>= 0)
        if (rcx_3 s< rbx_1)
            rbx_1 = rcx_3
        
        if (rbx_1 != 0)
            rcx_3 = rax_2 - rbx_1
            
            if (rax_2 != rbx_1)
                int64_t rcx_5 = var_98
                rcx_3 = memmove(rcx_5, rcx_5 + (sx.q(rbx_1) << 1), rcx_3 * 2)
                rax_2 = var_90
            
            var_90 = rax_2 - rbx_1

int64_t rbx_2 = var_48
int16_t* var_78 = nullptr
int32_t var_40
sub_1405a4c70(&var_78, sbb.d(rcx_3, rcx_3, var_40 != 0) + 2 + var_40, 0)
memcpy(var_78, rbx_2, var_40 * 2)
int32_t rcx_10 = sub_140a20ba0(&var_78, &data_142d5a024, 1)
int16_t* rdi_1 = var_78
var_78 = nullptr
int32_t var_70
var_70.q = 0
int32_t var_6c
int16_t* var_68
int16_t* var_58
int32_t var_4c
int16_t* r14
int32_t r15

if (var_40 s> 1)
    int32_t rbx_5
    
    if (var_90 == 0)
        rbx_5 = 0
    else
        rbx_5 = var_90 - 1
    
    int32_t rcx_14
    
    if (var_40 == 0)
        rcx_14 = var_40 + 1
    
    if (var_40 != 0 || rbx_5 == 0)
        rcx_14 = 0
    
    var_58 = rdi_1
    int32_t rdx_9 = var_40 + rcx_14 + rbx_5
    var_4c = var_6c
    
    if (rdx_9 s> var_6c)
        sub_1405947f0(&var_58, rdx_9)
    
    rcx_10 = sub_140a20ba0(&var_58, var_98, rbx_5)
    r14 = var_58
    r15 = var_40
else
    r15 = var_90
    r14 = nullptr
    int64_t rbx_3 = var_98
    var_68 = nullptr
    
    if (r15 != 0)
        sub_1405a4c70(&var_68, r15, 0)
        r14 = var_68
        rcx_10 = memcpy(r14, rbx_3, r15 * 2)
    
    if (rdi_1 != 0)
        rcx_10 = sub_140a74f90(rdi_1)

int64_t rbx_6 = var_48
var_78 = nullptr
sub_1405a4c70(&var_78, sbb.d(rcx_10, rcx_10, var_40 != 0) + 2 + var_40, 0)
memcpy(var_78, rbx_6, var_40 * 2)
sub_140a20ba0(&var_78, &data_142d5a024, 1)
int16_t* r12 = var_78
int32_t rbx_7 = *(arg1 + 0xd8)
var_78 = nullptr
int32_t var_70_1
var_70_1.q = 0
int32_t rax_11
int16_t* rsi_2
int16_t* rdi_3

if (var_40 s> 1)
    int32_t rdi_4 = rbx_7 - 1
    
    if (rbx_7 == 0)
        rdi_4 = 0
    
    int32_t rcx_23
    
    if (var_40 == 0)
        rcx_23 = var_40 + 1
    
    if (var_40 != 0 || rdi_4 == 0)
        rcx_23 = 0
    
    var_68 = r12
    r12 = nullptr
    int32_t rdx_17 = rcx_23 + var_40 + rdi_4
    
    if (rdx_17 s> var_6c)
        sub_1405947f0(&var_68, rdx_17)
    
    sub_140a20ba0(&var_68, *(arg1 + 0xd0), rdi_4)
    rdi_3 = var_68
    rbx_7 = var_40
    rax_11 = var_6c
    var_68 = nullptr
    int32_t var_60_2
    var_60_2.q = 0
    rsi_2 = rdi_3
else
    int64_t rsi_1 = *(arg1 + 0xd0)
    rdi_3 = nullptr
    var_58 = nullptr
    
    if (rbx_7 != 0)
        sub_1405a4c70(&var_58, rbx_7, 0)
        rdi_3 = var_58
        memcpy(rdi_3, rsi_1, rbx_7 * 2)
        rax_11 = var_4c
        rsi_2 = rdi_3
    else
        rax_11 = 0
        rsi_2 = nullptr

int16_t* var_88
int32_t var_80

if (rbx_7 s> 1)
    int32_t rsi_4
    
    if (var_90 == 0)
        rsi_4 = 0
    else
        rsi_4 = var_90 - 1
    
    int32_t rcx_29
    
    if (rbx_7 == 0)
        rcx_29 = rbx_7 + 1
    
    if (rbx_7 != 0 || rsi_4 == 0)
        rcx_29 = 0
    
    var_58 = rdi_3
    int32_t rdx_22 = rbx_7 + rsi_4 + rcx_29
    
    if (rdx_22 s> rax_11)
        sub_1405947f0(&var_58, rdx_22)
    
    sub_140a20ba0(&var_58, var_98, rsi_4)
    var_88 = var_58
    var_80 = rbx_7
    int32_t var_7c_2 = rax_11
else
    int64_t rdi_5 = var_98
    var_88 = nullptr
    var_80 = var_90
    
    if (var_90 != 0)
        sub_1405a4c70(&var_88, var_90, 0)
        memcpy(var_88, rdi_5, var_90 * 2)
    else
        int32_t var_7c_1 = 0
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)

if (r12 != 0)
    sub_140a74f90(r12)

int32_t rdx_25 = data_143f481c8 + 1
data_143f481c8 = rdx_25
var_58 = nullptr
int32_t var_50
var_50.q = 0
sub_140a20c40(&var_58, rdx_25)
int32_t rbx_10

if (var_50 == 0)
    rbx_10 = 0
else
    rbx_10 = var_50 - 1

var_68 = nullptr
int32_t rdx_26 = 0
int32_t rax_15 = 0
int32_t var_60_3 = 0
int16_t* rdi_6 = nullptr
int32_t var_5c_2 = 0

if (rbx_10 + 0x10 s> 0)
    sub_1405947f0(&var_68, rbx_10 + 0x10)
    rax_15 = var_5c_2
    rdx_26 = var_60_3
    rdi_6 = var_68

int32_t rsi_6 = rbx_10 + 0x10 + rdx_26

if (rsi_6 s> rax_15)
    sub_140594770(&var_68)
    rdi_6 = var_68

int64_t rbx_11 = sx.q(rbx_10)
__builtin_memcpy(rdi_6, u"_LevelInstance_", 0x1e)
memcpy(&rdi_6[0xf], var_58, rbx_11.d * 2)
rdi_6[rbx_11 + 0xf] = 0
int32_t r8_18 = rsi_6 - 1

if (rsi_6 == 0)
    r8_18 = 0

sub_140a20ba0(&var_88, rdi_6, r8_18)

if (rdi_6 != 0)
    sub_140a74f90(rdi_6)

int16_t* rcx_40 = var_58

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t arg_8 = 0
int64_t* rax_16 = sub_14252cd20()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

int64_t* result = sub_140d2dfc0(rax_16, arg1, 0, 0x40, 0, 0, 0, 0, 0)
int16_t* const rdi_8 = &data_142d40450
int16_t* const rdx_31 = &data_142d40450

if (var_80 != 0)
    rdx_31 = var_88

sub_1420ee550(result, *sub_140b58260(&arg_8, rdx_31, 1))
sub_140acc920(&var_58, sub_140adc660(&arg_8))
int64_t rax_20 = *result
char* rdx_33
rdx_33.b = 1
*(result + 0xbc) = var_58.o
(*(rax_20 + 0x260))(result, rdx_33)
char rax_21 = *(result + 0xba)

if ((rax_21 & 8) == 0)
    *(result + 0xba) = rax_21 | 8
    
    if (sub_140d23dc0(result, 0x30) == 0)
        void* rcx_49 = result[4]
        
        if (rcx_49 != 0)
            sub_14244a940(rcx_49, result)

*(result + 0xba) &= 0x7f
result[0x29].d |= 3
sub_140ade170(arg4, &var_58)
float zmm3[0x4] = data_14399f668
int128_t* rax_23 = arg_18
int128_t zmm5 = var_58.o

if (r15 != 0)
    rdi_8 = r14

int64_t zmm0_1 = *(rax_23 + 8)
float zmm4[0x4] = *rax_23
float zmm2[0x4] = _mm_unpacklo_ps(*(rax_23 + 4), 0)
zmm4 = _mm_unpacklo_ps(zmm4, zmm0_1)
zmm0_1 = data_14399f670
zmm4 = _mm_unpacklo_ps(zmm4, zmm2[0].q)
zmm2 = _mm_unpacklo_ps(data_14399f66c, 0)
*(result + 0xa0) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), zmm2[0].q)
*(result + 0x80) = zmm5
*(result + 0x90) = zmm4
result[0xa] = *sub_140b58260(&arg_18, rdi_8, 1)
sub_14242c7b0(arg1, result)
int16_t* rcx_54 = var_88
*arg5 = 1

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rcx_56 = var_98

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int64_t rcx_57 = var_48

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

return result
