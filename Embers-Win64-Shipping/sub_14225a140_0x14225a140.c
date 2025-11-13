// 函数: sub_14225a140
// 地址: 0x14225a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
void* rsi = &arg1[2]
__builtin_memset(arg1, 0, 0x30)
void* r15 = &arg1[4]
uint64_t* result = arg1
int64_t rax = sub_140bcb6b0(arg2, 1)
int64_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140bc7f20(arg2)
void** const var_e8
sub_140b4c2a0(&var_e8)
var_e8 = &data_142d84578
int64_t var_50 = 0
int64_t var_48 = rax_1
char var_40 = 0
sub_140b55290(&var_e8, 1)
var_e8[0x1b](&var_e8, 0)
var_e8 = &data_142d847a8
char arg_20 = 1
int32_t var_114 = 0
int32_t var_110 = 0
int32_t var_10c = 0
int64_t* var_e0
char* rdx_1 = *var_e0

if (&rdx_1[1] u> var_e0[1])
    sub_140679c80(&var_e8, &arg_20, 1)
else
    arg_20 = *rdx_1
    *var_e0 += 1

char rcx_7 = 0

if (arg_20 == 0)
    rcx_7 = 0x20

char var_bf
rcx_7 |= var_bf & 0xdf
int32_t* r8 = *var_e0

if (&r8[1] u> var_e0[1])
    int32_t* rdx_4 = &var_114
    void** const* rcx_8 = &var_e8
    
    if ((rcx_7 & 0x20) != 0)
        sub_140b54070(rcx_8, rdx_4, zmm1)
    else
        var_e8[0x2a](rcx_8, rdx_4, 4)
else
    var_114 = *r8
    *var_e0 += 4

int32_t* rdx_5 = *var_e0

if (&rdx_5[1] u> var_e0[1])
    int32_t* rdx_6 = &var_110
    void** const* rcx_10 = &var_e8
    
    if ((rcx_7 & 0x20) != 0)
        sub_140b54070(rcx_10, rdx_6, zmm1)
    else
        var_e8[0x2a](rcx_10, rdx_6, 4)
else
    var_110 = *rdx_5
    *var_e0 += 4

int32_t* rdx_7 = *var_e0

if (&rdx_7[1] u> var_e0[1])
    int32_t* rdx_8 = &var_10c
    void** const* rcx_12 = &var_e8
    
    if ((rcx_7 & 0x20) != 0)
        sub_140b54070(rcx_12, rdx_8, zmm1)
    else
        var_e8[0x2a](rcx_12, rdx_8, 4)
else
    var_10c = *rdx_7
    *var_e0 += 4

int32_t rax_15 = var_114
result[1].d = 0

if (*(result + 0xc) != rax_15)
    sub_1405c5570(result, rax_15)
    rax_15 = var_114

int32_t r14_1 = 0
char var_118
void** const var_108

if (rax_15 s> 0)
    do
        int32_t rax_16
        rax_16, zmm1 = sub_140bc7f20(arg2)
        var_118 = 0
        char* r8_1 = *var_e0
        
        if (&r8_1[1] u> var_e0[1])
            var_e8[0x2a](&var_e8, &var_118, 1)
        else
            var_118 = *r8_1
            *var_e0 += 1
        
        if (var_118 != 0)
            int64_t var_100_1 = var_50 + rax
            int64_t* rcx_20 = data_143ef8520
            var_108 = &data_14301aa28
            int32_t var_f8_1 = rax_16 - var_50.d
            int32_t var_f4_1 = 0
            r12 = (*(*rcx_20 + 0x58))(rcx_20, &var_108)
            var_50 += zx.q(var_f4_1)
        
        int64_t rbx_3 = sx.q(result[1].d)
        int32_t rcx_22 = (rbx_3 + 1).d
        result[1].d = rcx_22
        
        if (rcx_22 s> *(result + 0xc))
            sub_1405a4d70(result)
        
        r14_1 += 1
        *(*result + (rbx_3 << 3)) = r12
        r12 = 0
    while (r14_1 s< var_114)
    
    rsi = &result[2]
    r15 = &result[4]

int32_t rax_21 = var_110
*(rsi + 8) = 0

if (*(rsi + 0xc) != rax_21)
    sub_1405c5570(rsi, rax_21)
    rax_21 = var_110

int32_t r14_2 = 0

if (rax_21 s> 0)
    do
        int32_t rax_22
        rax_22, zmm1 = sub_140bc7f20(arg2)
        var_118 = 0
        char* r8_2 = *var_e0
        
        if (&r8_2[1] u> var_e0[1])
            var_e8[0x2a](&var_e8, &var_118, 1)
        else
            var_118 = *r8_2
            *var_e0 += 1
        
        if (var_118 != 0)
            int64_t var_100_2 = var_50 + rax
            int64_t* rcx_31 = data_143ef8520
            var_108 = &data_14301aa28
            int32_t var_f8_2 = rax_22 - var_50.d
            int32_t var_f4_2 = 0
            r12 = (*(*rcx_31 + 0x58))(rcx_31, &var_108)
            var_50 += zx.q(var_f4_2)
        
        int64_t rbx_6 = sx.q(*(rsi + 8))
        int32_t rcx_33 = (rbx_6 + 1).d
        *(rsi + 8) = rcx_33
        
        if (rcx_33 s> *(rsi + 0xc))
            sub_1405a4d70(rsi)
        
        r14_2 += 1
        *(*rsi + (rbx_6 << 3)) = r12
        r12 = 0
    while (r14_2 s< var_110)
    
    result = arg1
    r15 = &result[4]

int32_t rax_27 = var_10c
*(r15 + 8) = 0

if (*(r15 + 0xc) != rax_27)
    sub_1405c5570(r15, rax_27)
    rax_27 = var_10c

int32_t rbx_7 = 0

if (rax_27 s> 0)
    do
        int32_t rax_28
        rax_28, zmm1 = sub_140bc7f20(arg2)
        int64_t* rcx_37 = data_143ef8520
        int64_t var_100_3 = var_50 + rax
        var_108 = &data_14301aa28
        int32_t var_f8_3 = rax_28 - var_50.d
        int32_t var_f4_3 = 0
        int64_t rax_31 = (*(*rcx_37 + 0x28))(rcx_37, &var_108)
        int64_t rsi_1 = sx.q(*(r15 + 8))
        var_50 += zx.q(var_f4_3)
        int32_t rcx_39 = (rsi_1 + 1).d
        *(r15 + 8) = rcx_39
        
        if (rcx_39 s> *(r15 + 0xc))
            sub_1405a4d70(r15)
        
        rbx_7 += 1
        *(*r15 + (rsi_1 << 3)) = rax_31
    while (rbx_7 s< var_10c)
    
    result = arg1

sub_14225b3a0(&var_e8, arg3, zmm1)
sub_140bd1d40(arg2)
var_e8 = &data_142d84578

if (var_40 != 0)
    sub_140a74f90(rax)
    int64_t var_58_1 = 0

sub_140b4cb40(&var_e8)
return result
