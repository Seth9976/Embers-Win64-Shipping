// 函数: sub_1426afd70
// 地址: 0x1426afd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
int16_t rax = arg6

if (arg4 u<= arg6)
    rax = arg4

uint64_t r10 = zx.q(rax)
uint64_t rdx = zx.q(r10.d)
*arg8 = r10.w
void* rbx

if (r10.w != arg4)
    rbx = *(*(r10 * 0x58 + *arg1 + 8) + 0x48)
else
    rbx = arg3

void* i_1

if (r10.w != arg6)
    i_1 = *(*(rdx * 0x58 + *arg1 + 8) + 0x48)
else
    i_1 = arg5

if (rbx == 0 && r10.w != arg4)
    rbx = *(rdx * 0x58 + *arg1)

if (i_1 == 0 && r10.w != arg6)
    i_1 = *(rdx * 0x58 + *arg1)

if (rbx != 0 && i_1 != 0)
    uint32_t i = zx.d(*(rbx + 0x54))
    uint32_t rax_6 = zx.d(*(i_1 + 0x54))
    bool cond:1 = rax_6 u<= i
    
    if (rax_6 u< i)
        do
            rbx = *(rbx + 0x48)
            i = zx.d(*(rbx + 0x54))
        while (i u> rax_6)
        
        cond:1 = rax_6 u<= i
    
    if (not(cond:1))
        do
            i_1 = *(i_1 + 0x48)
        while (zx.d(*(i_1 + 0x54)) u> i)
    
    for (; rbx != i_1; i_1 = *(i_1 + 0x48))
        rbx = *(rbx + 0x48)
    
    *arg7 = rbx
    return arg7

uint32_t rax_9 = zx.d(arg4)
int32_t r15 = 0x10
uint64_t rdx_1

if (rax_9 s< arg1[1].d)
    rdx_1 = zx.q(*(zx.q(arg4) * 0x58 + *arg1 + 0x40))

uint64_t var_d8
uint64_t var_c8
uint64_t var_a8
uint64_t* rax_15
int32_t r14

if (rax_9 s>= arg1[1].d || rdx_1.d s>= arg2[1].d)
    var_c8 = 0
    int32_t var_c0_1 = 0
    sub_1405947f0(&var_c8, 8)
    int32_t rax_17 = var_c0_1 + 8
    var_c0_1 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, u"unknown", 0x10)
    rax_15 = &var_c8
    r14 = 2
else
    void* rax_13 = *(rdx_1 * 0x38 + *arg2)
    
    if (rax_13 != 0)
        var_a8 = *(rax_13 + 0x18)
        sub_140b63b70(&var_a8, &var_d8)
        rax_15 = &var_d8
        r14 = 1
    else
        var_d8 = 0
        int32_t var_d0_1 = 0
        sub_1405947f0(&var_d8, (rax_13 + 5).d)
        int32_t rax_14 = var_d0_1 + 5
        var_d0_1 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_d8)
        
        UnDecorator::getReferenceType(var_d8, u"None", 0xa)
        rax_15 = &var_d8
        r14 = 1

uint64_t rcx_15 = *rax_15
*rax_15 = 0
var_a8 = rcx_15
int32_t rcx_16 = rax_15[1].d
rax_15[1] = 0

if ((r14.b & 2) != 0)
    uint64_t rcx_17 = var_c8
    r14 &= 0xfffffffd
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

if ((r14.b & 1) != 0)
    uint64_t rcx_18 = var_d8
    r14 &= 0xfffffffe
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

uint32_t rax_18 = zx.d(arg6)
uint64_t rdx_6

if (rax_18 s< arg1[1].d)
    rdx_6 = zx.q(*(zx.q(arg6) * 0x58 + *arg1 + 0x40))

uint64_t var_b0
uint64_t* rax_24
int32_t rsi_1

if (rax_18 s>= arg1[1].d || rdx_6.d s>= arg2[1].d)
    var_c8 = 0
    int32_t var_c0_2 = 0
    sub_1405947f0(&var_c8, 8)
    int32_t rax_26 = var_c0_2 + 8
    var_c0_2 = rax_26
    
    if (rax_26 s> 0)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, u"unknown", 0x10)
    rax_24 = &var_c8
    rsi_1 = 8
else
    uint64_t rax_22 = *(rdx_6 * 0x38 + *arg2)
    
    if (rax_22 != 0)
        var_b0 = *(rax_22 + 0x18)
        sub_140b63b70(&var_b0, &var_d8)
        rax_24 = &var_d8
        rsi_1 = 4
    else
        var_d8 = rax_22
        sub_1405947f0(&var_d8, 5)
        uint64_t var_d0_2
        var_d0_2.d = rax_22.d + 5
        
        if (rax_22.d + 5 s> var_d0_2:4.d)
            sub_140594770(&var_d8)
        
        UnDecorator::getReferenceType(var_d8, u"None", 0xa)
        rax_24 = &var_d8
        rsi_1 = 4

int32_t rsi_2 = rsi_1 | r14
uint64_t r14_1 = *rax_24
*rax_24 = 0
int32_t rcx_28 = rax_24[1].d
rax_24[1] = 0
var_b0 = r14_1

if ((rsi_2.b & 8) != 0)
    uint64_t rcx_29 = var_c8
    rsi_2 &= 0xfffffff7
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)

if ((rsi_2.b & 4) != 0)
    uint64_t rcx_30 = var_d8
    rsi_2 &= 0xfffffffb
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)

uint64_t rax_28 = zx.q(*arg8)
uint64_t r8

if (rax_28.d s< arg1[1].d)
    r8 = zx.q(*(rax_28 * 0x58 + *arg1 + 0x40))

int16_t* const var_b8
uint64_t* rax_33

if (rax_28.d s>= arg1[1].d || r8.d s>= arg2[1].d)
    var_c8 = 0
    int32_t var_c0_3 = 0
    sub_1405947f0(&var_c8, 8)
    int32_t rax_35 = var_c0_3 + 8
    var_c0_3 = rax_35
    
    if (rax_35 s> 0)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, u"unknown", 0x10)
    rax_33 = &var_c8
    r15 = 0x20
else
    uint64_t rax_31 = *(r8 * 0x38 + *arg2)
    
    if (rax_31 != 0)
        var_b8 = *(rax_31 + 0x18)
        sub_140b63b70(&var_b8, &var_d8)
        rax_33 = &var_d8
    else
        var_d8 = rax_31
        sub_1405947f0(&var_d8, 5)
        uint64_t var_d0_3
        var_d0_3.d = rax_31.d + 5
        
        if (rax_31.d + 5 s> var_d0_3:4.d)
            sub_140594770(&var_d8)
        
        UnDecorator::getReferenceType(var_d8, u"None", 0xa)
        rax_33 = &var_d8

uint64_t r13_1 = *rax_33
*rax_33 = 0
int32_t r15_1 = r15 | rsi_2
arg6.d = rax_33[1].d
rax_33[1] = 0

if ((r15_1.b & 0x20) != 0)
    uint64_t rcx_41 = var_c8
    r15_1 &= 0xffffffdf
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)

if ((r15_1.b & 0x10) != 0)
    uint64_t rcx_42 = var_d8
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)

uint64_t rax_39 = *arg1 + zx.q(*arg8) * 0x58
var_c8 = rax_39
int64_t var_50
int64_t* rax_40 = sub_1426ada60(&var_50, *(rax_39 + 8))
int16_t* const rsi_3 = &data_142d40450

if (rax_40[1].d == 0)
    var_b8 = &data_142d40450
else
    var_b8 = *rax_40
    r14_1 = var_b0

uint64_t rax_41 = &data_142d40450

if (arg6.d != 0)
    rax_41 = r13_1

var_d8 = rax_41
int64_t var_60
int64_t* rax_42 = sub_1426ada60(&var_60, i_1)
int16_t* const r12_1

if (rax_42[1].d == 0)
    r12_1 = &data_142d40450
else
    r12_1 = *rax_42

uint64_t r15_2 = &data_142d40450

if (rcx_28 != 0)
    r15_2 = r14_1

int64_t var_70
int64_t* rax_43 = sub_1426ada60(&var_70, arg5)
int16_t* const r14_3

if (rax_43[1].d == 0)
    r14_3 = &data_142d40450
else
    r14_3 = *rax_43

int64_t var_80
int64_t* rax_44 = sub_1426ada60(&var_80, rbx)
int16_t* const rdi

if (rax_44[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *rax_44

uint64_t rbx_1 = &data_142d40450

if (rcx_16 != 0)
    rbx_1 = var_a8

int64_t var_90
int64_t* rax_45 = sub_1426ada60(&var_90, arg3)
int16_t* const r9

if (rax_45[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *rax_45

uint64_t rcx_49 = var_c8

if (*(rcx_49 + 8) == *rcx_49)
    rsi_3 = u" (root)"

int16_t* const var_e8 = rsi_3
int16_t* const var_f0 = var_b8
uint64_t var_f8 = var_d8
uint32_t var_100 = zx.d(*arg8)
int16_t* const var_108 = r12_1
uint64_t var_110 = r15_2
uint32_t var_118 = rax_18
int16_t* const var_120 = r14_3
int16_t* const var_128 = rdi
uint64_t var_130 = rbx_1
uint32_t var_138 = rax_9
sub_140af98a0("Unknown", 0x30c, 
    Fatal error in FindCommonParent() call.\nInNodeA: %s, InstanceIdxA: %d (%s), NodeA: %s\nInNodeB: %s, "
"InstanceIdxB: %d (%s), NodeB: %s\nCommonInstanceIdx: %d (%s), ActiveNode: %s%s", r9)
int64_t rcx_52 = var_90

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

int64_t rcx_53 = var_80

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t rcx_54 = var_70

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

int64_t rcx_55 = var_60

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

int64_t rcx_56 = var_50

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

sub_140afbb40()

if (r13_1 != 0)
    sub_140a74f90(r13_1)

uint64_t rcx_58 = var_b0

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

uint64_t rax_51 = var_a8

if (rax_51 == 0)
    return rax_51

return sub_140a74f90(rax_51)
