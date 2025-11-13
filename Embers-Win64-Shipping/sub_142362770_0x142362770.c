// 函数: sub_142362770
// 地址: 0x142362770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[0xa]
int32_t arg_18 = 0
int32_t arg_20 = 0
int32_t var_98 = 0
int32_t r12 = 0

if (r8 != 0)
    int32_t r9_1 = r8[1].d
    
    if (r9_1 s> 0)
        void* rcx = **r8
        int32_t rdx = *(rcx + 0x1b0)
        
        if (rdx s< 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(*(rcx + 0x1a0))
            
            if (*(rcx + 0x1b4) == 0)
                rdx = (temp3_1 - temp2_1) s>> 1
            else
                rdx = ((temp2_1 & 3) + temp3_1) s>> 2
        
        var_98 = r9_1
        arg_18 = *(rcx + 0xec)
        r12 = rdx s/ 3
        arg_20 = *(rcx + 0xe8)

void* rax_8 = arg1[0x11]
int32_t r15 = 0

if (rax_8 != 0)
    r15 = *(rax_8 + 0x70) + *(rax_8 + 0x60) + *(rax_8 + 0x50) + *(rax_8 + 0x40) + *(rax_8 + 0x30)

int32_t zmm3 = (zx.o(0)).d
int32_t zmm5 = (zx.o(0)).d
uint128_t var_78

if (r8 != 0)
    uint128_t zmm1 = zx.o(r8[0xa])
    uint128_t zmm2 = *(r8 + 0x40)
    int32_t rax_9 = r8[0xb].d
    zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
    int32_t var_60_1 = rax_9
    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xff).d
    var_78 = zmm2

zmm5 = zmm5 f* 2f
zmm3 = zmm3 f* 2f
int32_t var_d8 = int.d(zmm5 f+ zmm5 f+ 0.5f) s>> 1
int512_t zmm1_1 = sub_140a2e390(&var_78, u"%dx%dx%d", zx.q(int.d(zmm3 f+ zmm3 f+ 0.5f) s>> 1))
void* rcx_2 = arg1[0x11]
int64_t var_80 = 0
int32_t arg_10

if (rcx_2 != 0)
    var_80 = *sub_142216c70(rcx_2 + 0x120, &arg_10)
    rcx_2 = arg1[0x11]

int64_t var_90 = 0
int32_t rsi = 0
int64_t var_88 = 0
int32_t r13 = 0

if (rcx_2 != 0)
    int16_t* rax_14 = sub_142233f80(zx.d(*sub_142230430(rcx_2, &arg_10, zmm1_1)))
    
    if (rax_14 != 0)
        int32_t rbx_2
        
        if (*rax_14 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rax_14[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        if (rbx_2 != 0)
            sub_1405947f0(&var_90, rbx_2)
            r13 = var_88:4.d
            rsi = var_88.d
        
        rsi += rbx_2
        var_88.d = rsi
        
        if (rsi s> r13)
            sub_140594770(&var_90)
            rsi = var_88.d
        
        if (rbx_2 != 0)
            memcpy(var_90, rax_14, rbx_2 * 2)

int64_t var_c8 = 0
int32_t var_c0 = 0
sub_140a20c40(&var_c8, r12)
void var_58
int64_t* rax_15 = sub_140b58170(&var_58, "Triangles", 1)
int64_t r12_3 = var_c8
uint64_t var_b0 = 0
int64_t rbx_3 = *rax_15
int32_t var_a4
uint64_t r12_4

if (var_c0 != 0)
    sub_1405a4c70(&var_b0, var_c0, 0)
    r12_4 = var_b0
    memcpy(r12_4, r12_3, var_c0 * 2)
    arg_10 = var_a4
else
    arg_10 = var_c0
    r12_4 = 0

int64_t r13_1 = sx.q(arg2[1].d)
int32_t rax_17 = (r13_1 + 1).d
arg2[1].d = rax_17

if (rax_17 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_14 = arg_10
int64_t* rax_20 = (r13_1 << 5) + *arg2
*rax_20 = rbx_3
rax_20[1] = r12_4
rax_20[2].d = var_c0
*(rax_20 + 0x14) = rcx_14
rax_20[3] = 2
int64_t rcx_15 = var_c8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int32_t rdx_14 = arg_18
var_c8 = 0
int32_t var_c0_1 = 0
sub_140a20c40(&var_c8, rdx_14)
int64_t* rax_21 = sub_140b58170(&arg_18, "Vertices", 1)
int64_t r12_5 = var_c8
var_b0 = 0
int64_t rbx_4 = *rax_21
uint64_t r12_6

if (var_c0_1 != 0)
    sub_1405a4c70(&var_b0, var_c0_1, 0)
    r12_6 = var_b0
    memcpy(r12_6, r12_5, var_c0_1 * 2)
    arg_10 = var_a4
else
    arg_10 = 0
    r12_6 = 0

int64_t r13_2 = sx.q(arg2[1].d)
int32_t rax_23 = (r13_2 + 1).d
arg2[1].d = rax_23

if (rax_23 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_21 = arg_10
int64_t* rax_26 = (r13_2 << 5) + *arg2
*rax_26 = rbx_4
rax_26[1] = r12_6
rax_26[2].d = var_c0_1
*(rax_26 + 0x14) = rcx_21
rax_26[3] = 2
int64_t rcx_22 = var_c8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

var_c8 = 0
int32_t var_c0_2 = 0
sub_140a20c40(&var_c8, arg_20)
int64_t* rax_27 = sub_140b58170(&arg_18, "UVChannels", 1)
int64_t r12_7 = var_c8
var_b0 = 0
int64_t rbx_5 = *rax_27
uint64_t r12_8

if (var_c0_2 != 0)
    sub_1405a4c70(&var_b0, var_c0_2, 0)
    r12_8 = var_b0
    memcpy(r12_8, r12_7, var_c0_2 * 2)
    arg_10 = var_a4
else
    arg_10 = 0
    r12_8 = 0

int64_t r13_3 = sx.q(arg2[1].d)
int32_t rax_29 = (r13_3 + 1).d
arg2[1].d = rax_29

if (rax_29 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_28 = arg_10
int64_t* rax_32 = (r13_3 << 5) + *arg2
*rax_32 = rbx_5
rax_32[1] = r12_8
rax_32[2].d = var_c0_2
*(rax_32 + 0x14) = rcx_28
rax_32[3] = 2
int64_t rcx_29 = var_c8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

var_c8 = 0
int32_t var_c0_3 = 0
sub_140a20c40(&var_c8, arg1[0xe].d)
int64_t* rax_34 = sub_140b58170(&arg_18, "Materials", 1)
int64_t r12_9 = var_c8
var_b0 = 0
int64_t rbx_6 = *rax_34
uint64_t r12_10

if (var_c0_3 != 0)
    sub_1405a4c70(&var_b0, var_c0_3, 0)
    r12_10 = var_b0
    memcpy(r12_10, r12_9, var_c0_3 * 2)
    arg_10 = var_a4
else
    arg_10 = 0
    r12_10 = 0

int64_t r13_4 = sx.q(arg2[1].d)
int32_t rax_36 = (r13_4 + 1).d
arg2[1].d = rax_36

if (rax_36 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_35 = arg_10
int64_t* rax_39 = (r13_4 << 5) + *arg2
*rax_39 = rbx_6
rax_39[1] = r12_10
rax_39[2].d = var_c0_3
*(rax_39 + 0x14) = rcx_35
rax_39[3] = 2
int64_t rcx_36 = var_c8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t* rax_40 = sub_140b58170(&arg_18, "ApproxSize", 1)
int32_t r14_6 = (var_78:8.q).d
int64_t r12_11 = var_78.q
var_b0 = 0
int64_t rbx_7 = *rax_40
uint64_t r12_12

if (r14_6 != 0)
    sub_1405a4c70(&var_b0, r14_6, 0)
    r12_12 = var_b0
    memcpy(r12_12, r12_11, r14_6 * 2)
    arg_10 = var_a4
else
    arg_10 = 0
    r12_12 = 0

int64_t r13_5 = sx.q(arg2[1].d)
int32_t rax_42 = (r13_5 + 1).d
arg2[1].d = rax_42

if (rax_42 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_41 = arg_10
int64_t* rax_45 = (r13_5 << 5) + *arg2
*rax_45 = rbx_7
rax_45[1] = r12_12
uint64_t r12_13 = 0
*(rax_45 + 0x14) = rcx_41
rax_45[2].d = r14_6
var_c8 = 0
int32_t var_c0_4 = 0
rax_45[3] = 3
sub_140a20c40(&var_c8, r15)
int64_t* rax_46 = sub_140b58170(&arg_10, "CollisionPrims", 1)
int64_t r15_5 = var_c8
var_b0 = 0
int64_t rbx_8 = *rax_46
int32_t r13_6

if (var_c0_4 != 0)
    sub_1405a4c70(&var_b0, var_c0_4, 0)
    r12_13 = var_b0
    memcpy(r12_13, r15_5, var_c0_4 * 2)
    r13_6 = var_a4
else
    r13_6 = 0

int64_t r15_6 = sx.q(arg2[1].d)
int32_t rax_47 = (r15_6 + 1).d
arg2[1].d = rax_47

if (rax_47 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_50 = (r15_6 << 5) + *arg2
*rax_50 = rbx_8
rax_50[1] = r12_13
uint64_t r12_14 = 0
rax_50[2].d = var_c0_4
*(rax_50 + 0x14) = r13_6
rax_50[3] = 2
int64_t rcx_47 = var_c8

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

var_c8 = 0
int32_t var_c0_5 = 0
sub_140a20c40(&var_c8, var_98)
int64_t* rax_51 = sub_140b58170(&arg_10, "LODs", 1)
int32_t r14_8 = var_c0_5
int64_t r15_7 = var_c8
var_b0 = 0
int64_t rbx_9 = *rax_51
int32_t var_a8_6 = r14_8
int32_t r13_7

if (r14_8 != 0)
    sub_1405a4c70(&var_b0, r14_8, 0)
    r12_14 = var_b0
    memcpy(r12_14, r15_7, r14_8 * 2)
    r13_7 = var_a4
    r14_8 = var_a8_6
else
    r13_7 = 0

int64_t r15_8 = sx.q(arg2[1].d)
int32_t rax_52 = (r15_8 + 1).d
arg2[1].d = rax_52

if (rax_52 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_55 = (r15_8 << 5) + *arg2
*rax_55 = rbx_9
rax_55[1] = r12_14
uint64_t r12_15 = 0
rax_55[2].d = r14_8
*(rax_55 + 0x14) = r13_7
rax_55[3] = 2
int64_t rcx_53 = var_c8

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t* rax_56 = sub_142226000(&arg1[0xc], &var_c8)
int64_t rcx_57 = *sub_140b58170(&arg_10, "MinLOD", 1)
sub_140596d10(&var_b0, rax_56)
int64_t rbx_11 = sx.q(arg2[1].d)
int32_t rax_58 = (rbx_11 + 1).d
arg2[1].d = rax_58

if (rax_58 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_62 = (rbx_11 << 5) + *arg2
*rcx_62 = rcx_57
rcx_62[1] = var_b0
rcx_62[2].d = var_a8_6
*(rcx_62 + 0x14) = var_a4
rcx_62[3] = 1
int64_t rcx_63 = var_c8

if (rcx_63 != 0)
    sub_140a74f90(rcx_63)

var_c8 = 0
int32_t var_c0_6 = 0
sub_140a20c40(&var_c8, 0)
int64_t* rax_63 = sub_140b58170(&arg_10, "SectionsWithCollision", 1)
int32_t r14_9 = var_c0_6
int64_t r15_9 = var_c8
var_b0 = 0
int64_t rbx_12 = *rax_63
int32_t var_a8_7 = r14_9
int32_t r13_8

if (r14_9 != 0)
    sub_1405a4c70(&var_b0, r14_9, 0)
    r12_15 = var_b0
    memcpy(r12_15, r15_9, r14_9 * 2)
    r13_8 = var_a4
    r14_9 = var_a8_7
else
    r13_8 = 0

int64_t r15_10 = sx.q(arg2[1].d)
int32_t rax_64 = (r15_10 + 1).d
arg2[1].d = rax_64

if (rax_64 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_67 = (r15_10 << 5) + *arg2
*rax_67 = rbx_12
rax_67[1] = r12_15
rax_67[2].d = r14_9
*(rax_67 + 0x14) = r13_8
rax_67[3] = 2
int64_t rcx_69 = var_c8

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

int64_t* rax_68 = sub_140b63b70(&var_80, &var_c8)
int64_t rcx_72 = *sub_140b58170(&arg_10, "DefaultCollision", 1)
sub_140596d10(&var_b0, rax_68)
int64_t rbx_14 = sx.q(arg2[1].d)
int32_t rax_70 = (rbx_14 + 1).d
arg2[1].d = rax_70

if (rax_70 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_77 = (rbx_14 << 5) + *arg2
*rcx_77 = rcx_72
rcx_77[1] = var_b0
rcx_77[2].d = var_a8_7
*(rcx_77 + 0x14) = var_a4
rcx_77[3] = 1
int64_t rcx_78 = var_c8

if (rcx_78 != 0)
    sub_140a74f90(rcx_78)

int64_t* rax_75 = sub_140b58170(&arg_10, "CollisionComplexity", 1)
var_b0 = 0
int64_t rbx_15 = *rax_75
int64_t r12_16
int32_t r13_9
uint64_t r15_11

if (rsi != 0)
    sub_1405a4c70(&var_b0, rsi, 0)
    r12_16 = var_90
    r15_11 = var_b0
    memcpy(r15_11, r12_16, rsi * 2)
    r13_9 = var_a4
else
    r12_16 = var_90
    r13_9 = 0
    r15_11 = 0

int64_t r14_10 = sx.q(arg2[1].d)
int32_t rax_76 = (r14_10 + 1).d
arg2[1].d = rax_76

if (rax_76 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_79 = (r14_10 << 5) + *arg2
*rax_79 = rbx_15
rax_79[1] = r15_11
rax_79[2].d = rsi
*(rax_79 + 0x14) = r13_9
rax_79[3] = 1
void* result = sub_140cdbf60(arg1, arg2)

if (r12_16 != 0)
    result = sub_140a74f90(r12_16)

int64_t rcx_85 = var_78.q

if (rcx_85 == 0)
    return result

return sub_140a74f90(rcx_85)
