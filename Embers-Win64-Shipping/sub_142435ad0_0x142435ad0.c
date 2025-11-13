// 函数: sub_142435ad0
// 地址: 0x142435ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cdbf60(arg1, arg2)
int32_t rax = *(arg1 + 0x34)
char r14 = 0xc
char r8

if (rax s>= 0)
    r8 = 0xc
    
    if (rax s< 0xc)
        r8 = rax.b
else
    r8 = 0

char r15 = 6
int32_t rax_2 = arg1[7].d + 6
char rcx

if (rax_2 s>= 6)
    rcx = 0xa
    
    if (rax_2 s< 0xa)
        rcx = rax_2.b
else
    rcx = 6

int64_t var_68 = 0
int32_t var_60 = 0
sub_140a20c40(&var_68, 1 << rcx << r8)
void arg_18
int64_t* rax_3 = sub_140b58170(&arg_18, "Size", 1)
int64_t r12 = var_68
uint64_t var_50 = 0
int64_t rbx = *rax_3
int32_t arg_8 = var_60
int32_t var_44
int32_t arg_10
uint64_t r12_1

if (var_60 != 0)
    sub_1405a4c70(&var_50, var_60, 0)
    r12_1 = var_50
    memcpy(r12_1, r12, arg_8 * 2)
    arg_10 = var_44
    arg_8 = var_60
else
    arg_10 = 0
    r12_1 = 0

int64_t r13 = sx.q(arg2[1].d)
int32_t rax_6 = (r13 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_8 = arg_8
uint64_t r13_1 = 0
int64_t* rax_9 = (r13 << 5) + *arg2
*rax_9 = rbx
rax_9[1] = r12_1
rax_9[2].d = rcx_8
*(rax_9 + 0x14) = arg_10
rax_9[3] = 2
int64_t rcx_10 = var_68

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int32_t rax_10 = *(arg1 + 0x34)

if (rax_10 s< 0)
    r14 = 0
else if (rax_10 s< 0xc)
    r14 = rax_10.b

var_68 = 0
int32_t var_60_1 = 0
sub_140a20c40(&var_68, 1 << r14)
int64_t* rax_11 = sub_140b58170(&arg_10, "TileCount", 1)
int64_t r14_1 = var_68
var_50 = 0
int64_t rbx_1 = *rax_11

if (var_60_1 != 0)
    sub_1405a4c70(&var_50, var_60_1, 0)
    r13_1 = var_50
    memcpy(r13_1, r14_1, var_60_1 * 2)
    arg_8 = var_44
else
    arg_8 = 0

int64_t r14_2 = sx.q(arg2[1].d)
int32_t rax_13 = (r14_2 + 1).d
arg2[1].d = rax_13

if (rax_13 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_17 = arg_8
int64_t* rax_16 = (r14_2 << 5) + *arg2
*rax_16 = rbx_1
rax_16[1] = r13_1
rax_16[2].d = var_60_1
uint64_t r12_3 = 0
*(rax_16 + 0x14) = rcx_17
rax_16[3] = 2
int64_t rcx_18 = var_68

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t rax_18 = arg1[7].d + 6

if (rax_18 s>= 6)
    r15 = 0xa
    
    if (rax_18 s< 0xa)
        r15 = rax_18.b

var_68 = 0
int32_t var_60_2 = 0
sub_140a20c40(&var_68, 1 << r15)
int64_t* rax_19 = sub_140b58170(&arg_8, "TileSize", 1)
int64_t r14_3 = var_68
var_50 = 0
int64_t rbx_2 = *rax_19
int32_t r13_2

if (var_60_2 != 0)
    sub_1405a4c70(&var_50, var_60_2, 0)
    r12_3 = var_50
    memcpy(r12_3, r14_3, var_60_2 * 2)
    r13_2 = var_44
else
    r13_2 = 0

int64_t r14_4 = sx.q(arg2[1].d)
int32_t rax_20 = (r14_4 + 1).d
arg2[1].d = rax_20

if (rax_20 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_23 = (r14_4 << 5) + *arg2
*rax_23 = rbx_2
rax_23[1] = r12_3
*(rax_23 + 0x14) = r13_2
rax_23[2].d = var_60_2
rax_23[3] = 2
int64_t rcx_25 = var_68

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int32_t rax_24 = *(arg1 + 0x3c)
int32_t rdx_13

if (rax_24 s>= 0)
    rdx_13 = 4
    
    if (rax_24 s< 4)
        rdx_13 = rax_24
else
    rdx_13 = 0

var_68 = 0
int32_t var_60_3 = 0
sub_140a20c40(&var_68, rdx_13 * 2)
int64_t* rax_25 = sub_140b58170(&arg_8, "TileBorderSize", 1)
int64_t r14_5 = var_68
var_50 = 0
int64_t rbx_3 = *rax_25
int32_t r12_4
uint64_t r15_2

if (var_60_3 != 0)
    sub_1405a4c70(&var_50, var_60_3, 0)
    r15_2 = var_50
    memcpy(r15_2, r14_5, var_60_3 * 2)
    r12_4 = var_44
else
    r12_4 = 0
    r15_2 = 0

int64_t r14_6 = sx.q(arg2[1].d)
int32_t rax_26 = (r14_6 + 1).d
arg2[1].d = rax_26

if (rax_26 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* result = (r14_6 << 5) + *arg2
*result = rbx_3
result[1] = r15_2
result[2].d = var_60_3
*(result + 0x14) = r12_4
result[3] = 2
int64_t rcx_31 = var_68

if (rcx_31 == 0)
    return result

return sub_140a74f90(rcx_31)
