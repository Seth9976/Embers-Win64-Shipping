// 函数: sub_1423119b0
// 地址: 0x1423119b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* rax = arg1[0xb]
uint64_t r15 = 0
int32_t r12 = 0
int32_t rdx = 0

if (rax != 0 && rax[1].d s> 0)
    int64_t* rbx_1 = **rax
    int32_t rax_2 = sub_142337df0(rbx_1)
    rdx = *(rbx_1 + 0xec)
    r12 = rax_2

int32_t arg_10 = arg1[0x1c].d
int64_t var_68 = 0
int32_t var_60 = 0
sub_140a20c40(&var_68, rdx)
void arg_18
int64_t* rax_4 = sub_140b58170(&arg_18, "Vertices", 1)
int64_t r14 = var_68
uint64_t var_50 = 0
int64_t rbx_2 = *rax_4
int32_t var_44
int32_t r13

if (var_60 != 0)
    sub_1405a4c70(&var_50, var_60, 0)
    r15 = var_50
    memcpy(r15, r14, var_60 * 2)
    r13 = var_44
else
    r13 = 0

int64_t r14_1 = sx.q(arg2[1].d)
int32_t rax_5 = (r14_1 + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_8 = (r14_1 << 5) + *arg2
*rax_8 = rbx_2
rax_8[1] = r15
*(rax_8 + 0x14) = r13
rax_8[2].d = var_60
rax_8[3] = 2
int64_t rcx_6 = var_68

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

var_68 = 0
int32_t var_60_1 = 0
sub_140a20c40(&var_68, r12)
int64_t* rax_9 = sub_140b58170(&arg_18, "Triangles", 1)
int64_t rsi_2 = var_68
var_50 = 0
int64_t rbx_3 = *rax_9
int32_t r12_1
uint64_t r15_1

if (var_60_1 != 0)
    sub_1405a4c70(&var_50, var_60_1, 0)
    r15_1 = var_50
    memcpy(r15_1, rsi_2, var_60_1 * 2)
    r12_1 = var_44
else
    r12_1 = 0
    r15_1 = 0

int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_10 = (rsi_3 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_13 = (rsi_3 << 5) + *arg2
*rax_13 = rbx_3
rax_13[1] = r15_1
rax_13[2].d = var_60_1
*(rax_13 + 0x14) = r12_1
rax_13[3] = 2
int64_t rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int32_t rdx_8 = arg_10
var_68 = 0
int32_t var_60_2 = 0
sub_140a20c40(&var_68, rdx_8)
int64_t* rax_14 = sub_140b58170(&arg_10, "LODs", 1)
int64_t rsi_4 = var_68
var_50 = 0
int64_t rbx_4 = *rax_14
int32_t r12_2
uint64_t r15_2

if (var_60_2 != 0)
    sub_1405a4c70(&var_50, var_60_2, 0)
    r15_2 = var_50
    memcpy(r15_2, rsi_4, var_60_2 * 2)
    r12_2 = var_44
else
    r12_2 = 0
    r15_2 = 0

int64_t rsi_5 = sx.q(arg2[1].d)
int32_t rax_15 = (rsi_5 + 1).d
arg2[1].d = rax_15

if (rax_15 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_18 = (rsi_5 << 5) + *arg2
*rax_18 = rbx_4
rax_18[1] = r15_2
rax_18[2].d = var_60_2
*(rax_18 + 0x14) = r12_2
rax_18[3] = 2
int64_t rcx_18 = var_68

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

var_68 = 0
int32_t var_60_3 = 0
int64_t* r13_1 = arg_8
sub_140a20c40(&var_68, r13_1[0x32].d)
int64_t* rax_19 = sub_140b58170(&arg_8, "Bones", 1)
int64_t rsi_6 = var_68
var_50 = 0
int64_t rbx_5 = *rax_19
int32_t r12_3
uint64_t r15_3

if (var_60_3 != 0)
    sub_1405a4c70(&var_50, var_60_3, 0)
    r15_3 = var_50
    memcpy(r15_3, rsi_6, var_60_3 * 2)
    r12_3 = var_44
else
    r12_3 = 0
    r15_3 = 0

int64_t rsi_7 = sx.q(arg2[1].d)
int32_t rax_20 = (rsi_7 + 1).d
arg2[1].d = rax_20

if (rax_20 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_23 = (rsi_7 << 5) + *arg2
*rax_23 = rbx_5
rax_23[1] = r15_3
uint64_t r15_4 = 0
rax_23[2].d = var_60_3
*(rax_23 + 0x14) = r12_3
rax_23[3] = 2
int64_t rcx_24 = var_68

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t rdx_16 = r13_1[0x2e].d
var_68 = 0
int32_t var_60_4 = 0
sub_140a20c40(&var_68, rdx_16)
int64_t* rax_24 = sub_140b58170(&arg_8, "MorphTargets", 1)
int64_t rsi_8 = var_68
var_50 = 0
int64_t rbx_6 = *rax_24
int32_t r12_4

if (var_60_4 != 0)
    sub_1405a4c70(&var_50, var_60_4, 0)
    r15_4 = var_50
    memcpy(r15_4, rsi_8, var_60_4 * 2)
    r12_4 = var_44
else
    r12_4 = 0

int64_t rsi_9 = sx.q(arg2[1].d)
int32_t rax_25 = (rsi_9 + 1).d
arg2[1].d = rax_25

if (rax_25 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_28 = (rsi_9 << 5) + *arg2
*rax_28 = rbx_6
rax_28[1] = r15_4
rax_28[2].d = var_60_4
*(rax_28 + 0x14) = r12_4
rax_28[3] = 2
int64_t rcx_30 = var_68

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

return sub_140cdbf60(r13_1, arg2) __tailcall
