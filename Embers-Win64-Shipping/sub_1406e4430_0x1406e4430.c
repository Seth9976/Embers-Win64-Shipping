// 函数: sub_1406e4430
// 地址: 0x1406e4430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int32_t arg_18 = 0
int64_t* var_108
int64_t* var_f8
int64_t* var_e8
int64_t* var_d8
int32_t var_cc
int64_t* var_c8
int64_t* var_b8
int64_t* var_a8
int64_t* var_98
int64_t* var_88
int64_t* var_78
int64_t* var_70
int64_t* var_68
int64_t* var_60
int64_t* var_58
int64_t var_48
int32_t rbx_2
int64_t* r14_1

if (arg3 == 0)
    r14_1 = &var_48
    rbx_2 = 0x200
    var_60 = var_a8
    var_68 = var_c8
    var_70 = var_b8
    var_b8 = arg2
    var_48 = 0
    int64_t var_40_1 = 0
    var_c8 = arg2
    var_78 = arg2
else
    var_a8 = nullptr
    int64_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 2)
    int32_t r13_1 = var_a0_1:4.d
    int32_t r15_1 = var_a0_1.d + 2
    var_a0_1.d = r15_1
    
    if (r15_1 s> r13_1)
        sub_140594770(&var_a8)
        r13_1 = var_a0_1:4.d
        r15_1 = var_a0_1.d
    
    int64_t* rax = var_a8
    var_60 = rax
    sub_1405a7220(rax, 2, U"},{]", 2, 0x3f)
    var_c8 = nullptr
    int64_t var_c0_1 = 0
    sub_1405947f0(&var_c8, 2)
    int32_t r12_1 = var_c0_1:4.d
    int32_t rbx = var_c0_1.d + 2
    var_c0_1.d = rbx
    
    if (rbx s> r12_1)
        sub_140594770(&var_c8)
        r12_1 = var_c0_1:4.d
        rbx = var_c0_1.d
    
    int64_t* rax_1 = var_c8
    var_68 = rax_1
    sub_1405a7220(rax_1, 2, &(*U"},{]")[1], 2, 0x3f)
    var_b8 = nullptr
    int64_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 2)
    int32_t r14 = var_b0_1:4.d
    int32_t rdi_1 = var_b0_1.d + 2
    var_b0_1.d = rdi_1
    
    if (rdi_1 s> r14)
        sub_140594770(&var_b8)
        r14 = var_b0_1:4.d
        rdi_1 = var_b0_1.d
    
    int64_t* rax_2 = var_b8
    var_70 = rax_2
    sub_1405a7220(rax_2, 2, &(*U"},{]")[2], 2, 0x3f)
    var_88 = nullptr
    int64_t var_80_1 = 0
    sub_140a20c40(&var_88, arg5)
    var_98 = nullptr
    int64_t var_90_1 = 0
    sub_140a20c40(&var_98, arg4)
    int32_t rax_3
    int64_t* rdi_2
    int32_t r8
    
    if (rdi_1 s> 1)
        int32_t rsi_1 = var_90_1.d
        int32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        int32_t rax_4
        
        if (rdi_1 == 0)
            rax_4 = rdi_1 + 1
        
        if (rdi_1 != 0 || rsi_2 == 0)
            rax_4 = 0
        
        var_70 = nullptr
        int32_t rdx_6 = rdi_1 + rax_4 + rsi_2
        var_108 = var_b8
        int64_t var_100
        var_100.d = rdi_1
        var_100:4.d = r14
        
        if (rdx_6 s> r14)
            sub_1405947f0(&var_108, rdx_6)
        
        sub_140a20ba0(&var_108, var_98, rsi_2)
        rdi_2 = var_108
        rax_3 = var_100.d
        r8 = var_100:4.d
        var_108 = nullptr
        int64_t var_100_1 = 0
    else
        rdi_2 = var_98
        rax_3 = var_90_1.d
        r8 = var_90_1:4.d
        var_98 = nullptr
        int64_t var_90_2 = 0
    
    var_b8 = rdi_2
    int64_t* rsi_3
    
    if (rax_3 s> 1)
        int32_t rbx_1
        
        if (rbx == 0)
            rbx_1 = 0
        else
            rbx_1 = rbx - 1
        
        int32_t rcx_14
        
        if (rax_3 == 0)
            rcx_14 = rax_3 + 1
        
        if (rax_3 != 0 || rbx_1 == 0)
            rcx_14 = 0
        
        var_f8 = rdi_2
        int32_t rdx_10 = rcx_14 + rax_3 + rbx_1
        var_b8 = nullptr
        int64_t var_f0
        var_f0.d = rax_3
        var_f0:4.d = r8
        
        if (rdx_10 s> r8)
            sub_1405947f0(&var_f8, rdx_10)
        
        sub_140a20ba0(&var_f8, var_c8, rbx_1)
        rsi_3 = var_f8
        rbx = var_f0.d
        r12_1 = var_f0:4.d
        var_f8 = nullptr
        int64_t var_f0_1 = 0
        var_c8 = rsi_3
    else
        int64_t* rdx_8 = var_c8
        rsi_3 = rdx_8
        var_c8 = rdx_8
        var_68 = nullptr
    
    int32_t rax_5
    int64_t* rdi_3
    int32_t r8_3
    
    if (rbx s> 1)
        int32_t rdi_4 = var_80_1.d
        int32_t rdi_5
        
        if (rdi_4 == 0)
            rdi_5 = 0
        else
            rdi_5 = rdi_4 - 1
        
        int32_t rax_6
        
        if (rbx == 0)
            rax_6 = rbx + 1
        
        if (rbx != 0 || rdi_5 == 0)
            rax_6 = 0
        
        var_e8 = rsi_3
        int32_t rdx_13 = rax_6 + rdi_5 + rbx
        var_c8 = nullptr
        
        if (rdx_13 s> r12_1)
            sub_1405947f0(&var_e8, rdx_13)
        
        sub_140a20ba0(&var_e8, var_88, rdi_5)
        rdi_3 = var_e8
        rax_5 = rbx
        r8_3 = r12_1
        var_e8 = nullptr
        int32_t var_e0_1
        var_e0_1.q = 0
    else
        rdi_3 = var_88
        rax_5 = var_80_1.d
        r8_3 = var_80_1:4.d
        var_88 = nullptr
        int64_t var_80_2 = 0
    
    var_78 = rdi_3
    
    if (rax_5 s> 1)
        int32_t rbx_3 = r15_1 - 1
        
        if (r15_1 == 0)
            rbx_3 = 0
        
        int32_t rcx_19
        
        if (rax_5 == 0)
            rcx_19 = rax_5 + 1
        
        if (rax_5 != 0 || rbx_3 == 0)
            rcx_19 = 0
        
        var_d8 = rdi_3
        int32_t rdx_17 = rcx_19 + rbx_3 + rax_5
        var_78 = nullptr
        var_cc = r8_3
        
        if (rdx_17 s> r8_3)
            sub_1405947f0(&var_d8, rdx_17)
        
        sub_140a20ba0(&var_d8, var_a8, rbx_3)
        r14_1 = &var_58
        rdi = arg2
        var_58 = var_d8
        rbx_2 = 0x1ff
        int32_t var_50_2 = rax_5
        int32_t var_4c_2 = var_cc
    else
        r14_1 = &var_58
        rdi = arg2
        rbx_2 = 0x1ff
        var_58 = var_a8
        var_60 = nullptr
        int32_t var_50_1 = r15_1
        int32_t var_4c_1 = r13_1

var_f8 = nullptr
int64_t var_f0_2 = 0
sub_1405947f0(&var_f8, 2)
int32_t r13_2 = var_f0_2:4.d
int32_t rsi_4 = var_f0_2.d + 2
var_f0_2.d = rsi_4

if (rsi_4 s> r13_2)
    sub_140594770(&var_f8)
    r13_2 = var_f0_2:4.d
    rsi_4 = var_f0_2.d

sub_1405a7220(var_f8, 2, &(*U"},{]")[3], 2, 0x3f)
var_108 = nullptr
int64_t var_100_2 = 0
sub_1405947f0(&var_108, 2)
int32_t r12_2 = var_100_2:4.d
int32_t r15_2 = var_100_2.d + 2
var_100_2.d = r15_2

if (r15_2 s> r12_2)
    sub_140594770(&var_108)
    r12_2 = var_100_2:4.d
    r15_2 = var_100_2.d

int64_t* rax_11 = var_108
var_a8 = rax_11
sub_1405a7220(rax_11, 2, U"[", 2, 0x3f)
int32_t rcx_30
int32_t rdi_6
int64_t* r15_3

if (r15_2 s> 1)
    int32_t rax_12 = rdi[1].d
    int32_t rdi_7 = rax_12 - 1
    
    if (rax_12 == 0)
        rdi_7 = 0
    
    int32_t rax_13
    
    if (r15_2 == 0)
        rax_13 = 1
    
    if (r15_2 != 0 || rdi_7 == 0)
        rax_13 = 0
    
    int64_t* rcx_33 = var_108
    var_a8 = nullptr
    int32_t rdx_28 = r15_2 + rdi_7 + rax_13
    var_e8 = rcx_33
    
    if (rdx_28 s> r12_2)
        sub_1405947f0(&var_e8, rdx_28)
    
    sub_140a20ba0(&var_e8, *arg2, rdi_7)
    r15_3 = var_e8
    rdi_6 = r15_2
    rcx_30 = r12_2
    var_e8 = nullptr
    int32_t var_e0_2
    var_e0_2.q = 0
else
    rdi_6 = rdi[1].d
    r15_3 = nullptr
    var_d8 = nullptr
    int64_t r12_3 = *arg2
    
    if (rdi_6 != 0)
        sub_1405a4c70(&var_d8, rdi_6, 0)
        r15_3 = var_d8
        memcpy(r15_3, r12_3, rdi_6 * 2)
        rcx_30 = var_cc
    else
        rcx_30 = 0

int64_t* rcx_36
int64_t* r12_4

if (rdi_6 s> 1)
    int32_t rsi_5
    
    if (rsi_4 == 0)
        rsi_5 = 0
    else
        rsi_5 = rsi_4 - 1
    
    int32_t rax_14
    
    if (rdi_6 == 0)
        rax_14 = rdi_6 + 1
    
    if (rdi_6 != 0 || rsi_5 == 0)
        rax_14 = 0
    
    var_108 = r15_3
    int32_t rdx_32 = rdi_6 + rsi_5 + rax_14
    var_100_2.d = rdi_6
    var_100_2:4.d = rcx_30
    r15_3 = nullptr
    
    if (rdx_32 s> rcx_30)
        sub_1405947f0(&var_108, rdx_32)
    
    r12_4 = var_f8
    sub_140a20ba0(&var_108, r12_4, rsi_5)
    rcx_36 = var_108
    rsi_4 = var_100_2.d
    r13_2 = var_100_2:4.d
    var_108 = nullptr
    int64_t var_100_3 = 0
else
    rcx_36 = var_f8
    r12_4 = nullptr

int64_t* result

if (rsi_4 s> 1)
    int32_t rax_18 = r14_1[1].d
    int32_t rdi_8 = rax_18 - 1
    
    if (rax_18 == 0)
        rdi_8 = 0
    
    int32_t rax_19
    
    if (rsi_4 == 0)
        rax_19 = rsi_4 + 1
    
    if (rsi_4 != 0 || rdi_8 == 0)
        rax_19 = 0
    
    var_d8 = rcx_36
    int32_t rdx_35 = rax_19 + rdi_8 + rsi_4
    
    if (rdx_35 s> r13_2)
        sub_1405947f0(&var_d8, rdx_35)
    
    sub_140a20ba0(&var_d8, *r14_1, rdi_8)
    result = arg1
    *result = var_d8
    result[1].d = rsi_4
    *(result + 0xc) = r13_2
else
    int64_t rax_15 = *r14_1
    result = arg1
    *r14_1 = 0
    *result = rax_15
    result[1].d = r14_1[1].d
    *(result + 0xc) = *(r14_1 + 0xc)
    r14_1[1] = 0
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)

if (r15_3 != 0)
    sub_140a74f90(r15_3)

int64_t* rax_23 = var_a8

if (rax_23 != 0)
    sub_140a74f90(rax_23)

if (r12_4 != 0)
    sub_140a74f90(r12_4)

if (test_bit(rbx_2, 9))
    int64_t rcx_44 = var_48
    rbx_2 &= 0xfffffdff
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)

if (test_bit(rbx_2, 8))
    int64_t* rcx_45 = var_58
    rbx_2 &= 0xfffffeff
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)

if (rbx_2.b s< 0)
    rbx_2 &= 0xffffff7f
    
    if (var_78 != 0)
        sub_140a74f90(var_78)

if ((rbx_2.b & 0x40) != 0)
    int64_t* rax_25 = var_c8
    rbx_2 &= 0xffffffbf
    
    if (rax_25 != 0)
        sub_140a74f90(rax_25)

if ((rbx_2.b & 0x20) != 0)
    int64_t* rax_26 = var_b8
    rbx_2 &= 0xffffffdf
    
    if (rax_26 != 0)
        sub_140a74f90(rax_26)

if ((rbx_2.b & 0x10) != 0)
    int64_t* rcx_49 = var_98
    rbx_2 &= 0xffffffef
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)

if ((rbx_2.b & 8) != 0)
    int64_t* rcx_50 = var_88
    rbx_2 &= 0xfffffff7
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)

if ((rbx_2.b & 4) != 0)
    rbx_2 &= 0xfffffffb
    
    if (var_70 != 0)
        sub_140a74f90(var_70)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    
    if (var_68 != 0)
        sub_140a74f90(var_68)

if ((rbx_2.b & 1) != 0 && var_60 != 0)
    sub_140a74f90(var_60)

int64_t rcx_54 = *arg2

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

return result
