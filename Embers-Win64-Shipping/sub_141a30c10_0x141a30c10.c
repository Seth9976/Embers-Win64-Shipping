// 函数: sub_141a30c10
// 地址: 0x141a30c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
void* rdx = nullptr

if (sub_141a52670() != arg2)
    rdx = *(arg2 + 0x110)

sub_140d15b50(arg1, rdx)
arg1[3] = 0x3f800000
arg1[4].d = 0
arg1[5] = 0
arg1[6] = 0
arg1[7].d = 0xea60
*(arg1 + 0x3c) = 1
sub_141a529c0(arg2, &arg1[8])
uint32_t arg_c = 0
*(arg1 + 0x44) = 0.q
int32_t arg_14 = 0
*(arg1 + 0x4c) = 0.q
arg_c = 0
*(arg1 + 0x54) = 0.q
arg_14 = 0
*(arg1 + 0x5c) = 0.q
arg_c = 0
*(arg1 + 0x64) = 0.q
arg_14 = 0
*(arg1 + 0x6c) = 0.q
arg_c = 0
*(arg1 + 0x74) = 0.q
arg_14 = 0
*(arg1 + 0x7c) = 0.q
arg_c = 0
*(arg1 + 0x84) = 0.q
arg_14 = 0
*(arg1 + 0x8c) = 0.q
*(arg1 + 0x94) = *(arg2 + 0xf4)
arg1[0x15].b &= 0xfe
arg1[0x15].b |= 2
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
int128_t zmm0 = *(arg2 + 0x28)
arg_c = 0
uint64_t var_78 = 0.q
*(arg1 + 0xb8) = zmm0
arg_14 = 0
int64_t var_70 = 0.q
zmm0 = var_78.o
arg1[0x19] = 0x3f800000
arg1[0x1a].d = 0
arg1[0x1b] = 0
arg_c = 0
var_78 = 0.q
arg_14 = 0
arg1[0x1c] = 0
*(arg1 + 0x74) = zmm0
int64_t var_70_1 = 0.q
*(arg1 + 0x84) = var_78.o
void* rax_16 = sub_141a52920(arg1)
void* const r13

if (rax_16 == 0)
    r13 = nullptr
else
    int64_t rdx_2 = *rax_16
    r13 = (*(rdx_2 + 0x280))(rax_16, rdx_2)

arg1[7] = *(r13 + 0x108)
*(arg1 + 0x54) = *(r13 + 0xf8)
uint64_t rdi = *(arg2 + 0x98)
uint64_t rbx = *(arg2 + 0x90)

if (rbx.b == 0)
    arg_c = (rbx u>> 0x20).d + 1
    rbx = 1.q

if (rdi.b == 1)
    arg_c = (rdi u>> 0x20).d + 1
    rdi = 0.q

var_78 = rbx
uint64_t var_70_2 = rdi
uint64_t var_60
int64_t* rax_23 = sub_141a34710(&arg1[3], sub_141a5a760(arg2, &var_60))
arg1[0x19] = *rax_23
arg1[0x1a].d = rax_23[1].d
sub_140747360(&arg1[0x1b], &rax_23[2])
int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

char var_8c
char arg_8
int64_t* rax_24
uint128_t zmm0_4

if (*(arg2 + 0xe4) != 0)
    *(arg1 + 0x44) = *(r13 + 0xf8)
    arg1[9].d += *(arg2 + 0xe0)
    int32_t rax_27 = arg1[0xa].d - *(arg2 + 0xe8)
    int32_t rcx_11 = arg1[9].d + 1
    
    if (rax_27 s>= rcx_11)
        rcx_11 = rax_27
    
    arg1[0xa].d = rcx_11
    char var_98
    int64_t var_94
    
    if (rbx.b != 2)
        arg_c = 0
        arg_8.d = (rbx u>> 0x20).d
        var_8c = 1
        
        if (rbx.b != 1)
            var_8c = 0
        
        var_98.q = var_8c.q
        var_94:4.d = arg_8.q:4.d
    else
        var_98 = rbx.b
        var_94 = 0
    
    char* rcx_12
    
    if (rdi.b != 2)
        arg_c = 0
        arg_8.d = (rdi u>> 0x20).d
        var_8c = 1
        
        if (rdi.b != 1)
            var_8c = 0
        
        rcx_12 = &var_78
        var_78 = var_8c.q
        var_70_2.d = arg_8.q:4.d
    else
        var_8c = rdi.b
        rcx_12 = &var_8c
        int64_t var_88_2 = 0
    
    var_60 = var_98.q
    int32_t var_58_1 = var_94:4.d
    uint64_t var_54_1 = *rcx_12
    var_50:4.d = *(rcx_12 + 8)
    int64_t* rax_38 = sub_141a6af80(&arg1[3], &var_78, &var_60)
    int128_t zmm1_1 = *rax_38
    char rax_39 = zmm1_1.b
    var_60.o = zmm1_1
    uint64_t var_50_1 = rax_38[2]
    
    if (rax_39 != 2)
        arg_8 = 1
        
        if (rax_39 != 1)
            arg_8 = 0
        
        arg_c = (var_60 u>> 0x20).d
    else
        arg_8 = rax_39
        arg_c = 0
    
    char rax_42 = var_54_1.b
    uint64_t rcx_14 = arg_8.q
    
    if (rax_42 != 2)
        arg_8 = 1
        
        if (rax_42 != 1)
            arg_8 = 0
        
        arg_c = (var_54_1 u>> 0x20).d
    else
        arg_8 = rax_42
        arg_c = 0
    
    int64_t* var_70_3 = arg_8.q
    var_78 = rcx_14
    zmm0_4 = var_78.o
else
    rax_24 = sub_141a35b10(&var_8c, &var_78, &arg1[3])
    *(arg1 + 0x44) = *rax_24
    zmm0_4 = *rax_24

*(arg1 + 0x64) = zmm0_4
int32_t rdx_9 = *(arg2 + 0xa0)

if (rdx_9 s> 0)
    if (rbx.b == 0)
        rax_24.b = 1
        arg_c = (rbx u>> 0x20).d
        rbx = 1.q
    else if (rbx.b != 1)
        arg_8.q = rbx
        rax_24 = zx.q(arg_8)
    else
        rax_24.b = 0
        arg_c = (rbx u>> 0x20).d
        rbx = 0.q
    
    int64_t rcx_15 = 0
    uint64_t var_70_4 = rbx
    
    if (rax_24.b == 1)
        rcx_15 = 4
    
    arg_c = *(rcx_15 + 0x14302eba0) + (rbx u>> 0x20).d - rdx_9
    var_78 = 1.q
    *(arg1 + 0x74) = *sub_141a35b10(&var_8c, &var_78, arg1 + 0x18)

int32_t rdx_11 = *(arg2 + 0xa4)

if (rdx_11 s> 0)
    if (rdi.b == 0)
        rax_24.b = 1
        arg_c = (rdi u>> 0x20).d
        rdi = 1.q
    else if (rdi.b != 1)
        arg_8.q = rdi
        rax_24 = zx.q(arg_8)
    else
        rax_24.b = 0
        arg_c = (rdi u>> 0x20).d
        rdi = 0.q
    
    var_78 = rdi
    
    if (rax_24.b == 0)
        r14 = 4
    
    arg_c = *(r14 + 0x14302eb98) + (rdi u>> 0x20).d + rdx_11
    int64_t var_70_5 = 0.q
    *(arg1 + 0x84) = *sub_141a35b10(&var_8c, &var_78, arg1 + 0x18)

return arg1
