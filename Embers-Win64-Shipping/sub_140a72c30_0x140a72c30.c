// 函数: sub_140a72c30
// 地址: 0x140a72c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_140a60270(arg1)
int32_t rax_3
struct DOS_Header* const rdx
rax_3, rdx = (*(*arg2 + 0x108))(arg2)
int32_t rbx

switch (rax_3)
    case 0
        rbx = 6
    case 1
        rbx = 5
    case 2
        rbx = 4
    case 3
        rbx = 3
    case 5
        rbx = 2
    case 6
        rbx = 1
    default
        rbx = 0

bool cond:0 = sub_141e40700(arg2) != 0
arg1[0x12].d = rbx
*(arg1 + 0x8d) = cond:0
*(arg1 + 0x94) = sub_141abb820(arg2)
arg1[0x13].d = sub_142a59180(arg2)
*(arg1 + 0x9c) = sub_142a59190(arg2)
arg1[0x14].d = sub_142a59170(arg2)
rdx.b = 1
(*(*arg2 + 0xc8))(arg2, rdx)
int64_t* var_90 = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
void* rax_12 = (*(*arg2 + 0x130))(arg2)
int16_t* r14 = nullptr
int16_t* var_a8 = nullptr
int32_t var_9c = 0
int32_t r12 = 0
int16_t rax_13 = *(rax_12 + 0x3d0)
int32_t rbx_2

if (rax_13 s< 0)
    rbx_2 = *(rax_12 + 0x3d4)
else
    rbx_2 = sx.d(rax_13) s>> 5

int32_t var_a0

if (rbx_2 s>= 1)
    if (rbx_2 + 1 s> 0)
        var_a0 = rbx_2 + 1
        sub_140594770(&var_a8)
        r14 = var_a8
        r12 = var_a0
    else if (rbx_2 + 1 s< 0 && rbx_2 != 0xffffffff)
        var_a0 = rbx_2 + 1
        sub_1405a50a0(&var_a8)
        r14 = var_a8
        r12 = var_a0
    
    char rax_15 = (*(rax_12 + 0x3d0)).b
    void* rdx_2
    
    if ((rax_15 & 0x11) == 0)
        rdx_2 = rax_12 + 0x3d2
        
        if ((rax_15 & 2) == 0)
            rdx_2 = *(rax_12 + 0x3e0)
    else
        rdx_2 = nullptr
    
    memcpy(r14, rdx_2, rbx_2 * 2)
    r14[sx.q(rbx_2)] = 0

if (arg1 != &var_a8)
    int16_t* rbx_4 = *arg1
    
    if (rbx_4 != 0)
        int64_t* rcx_13 = data_143ddb3f0
        
        if (rcx_13 == 0)
            sub_140a750a0()
            rcx_13 = data_143ddb3f0
        
        (*(*rcx_13 + 0x30))(rcx_13, rbx_4)
    
    *arg1 = r14
    arg1[1].d = r12
    *(arg1 + 0xc) = var_9c
else if (r14 != 0)
    int64_t* rcx_14 = data_143ddb3f0
    
    if (rcx_14 == 0)
        sub_140a750a0()
        rcx_14 = data_143ddb3f0
    
    (*(*rcx_14 + 0x30))(rcx_14, r14)

void* rax_20 = sub_142a5d220(arg2, &var_88)
var_a8 = nullptr
int16_t* r14_1 = nullptr
int32_t var_9c_1 = 0
int32_t r12_1 = 0
int16_t rax_21 = *(rax_20 + 8)
int32_t rbx_6

if (rax_21 s< 0)
    rbx_6 = *(rax_20 + 0xc)
else
    rbx_6 = sx.d(rax_21) s>> 5

if (rbx_6 s>= 1)
    if (rbx_6 + 1 s> 0)
        var_a0 = rbx_6 + 1
        sub_140594770(&var_a8)
        r14_1 = var_a8
        r12_1 = var_a0
    else if (rbx_6 + 1 s< 0 && rbx_6 != 0xffffffff)
        var_a0 = rbx_6 + 1
        sub_1405a50a0(&var_a8)
        r14_1 = var_a8
        r12_1 = var_a0
    
    char rax_23 = (*(rax_20 + 8)).b
    void* rdx_7
    
    if ((rax_23 & 0x11) == 0)
        rdx_7 = rax_20 + 0xa
        
        if ((rax_23 & 2) == 0)
            rdx_7 = *(rax_20 + 0x18)
    else
        rdx_7 = nullptr
    
    memcpy(r14_1, rdx_7, rbx_6 * 2)
    r14_1[sx.q(rbx_6)] = 0

if (&arg1[2] != &var_a8)
    int16_t* r15_2 = arg1[2]
    
    if (r15_2 != 0)
        int64_t* rcx_19 = data_143ddb3f0
        
        if (rcx_19 == 0)
            sub_140a750a0()
            rcx_19 = data_143ddb3f0
        
        (*(*rcx_19 + 0x30))(rcx_19, r15_2)
    
    arg1[2] = r14_1
    arg1[3].d = r12_1
    *(arg1 + 0x1c) = var_9c_1
else if (r14_1 != 0)
    int64_t* rcx_20 = data_143ddb3f0
    
    if (rcx_20 == 0)
        sub_140a750a0()
        rcx_20 = data_143ddb3f0
    
    (*(*rcx_20 + 0x30))(rcx_20, r14_1)

void* rax_28 = sub_142a5d280(arg2, &var_88)
var_a8 = nullptr
int16_t* r14_2 = nullptr
int32_t var_9c_2 = 0
int32_t r12_2 = 0
int16_t rax_29 = *(rax_28 + 8)
int32_t rbx_10

if (rax_29 s< 0)
    rbx_10 = *(rax_28 + 0xc)
else
    rbx_10 = sx.d(rax_29) s>> 5

if (rbx_10 s>= 1)
    if (rbx_10 + 1 s> 0)
        var_a0 = rbx_10 + 1
        sub_140594770(&var_a8)
        r14_2 = var_a8
        r12_2 = var_a0
    else if (rbx_10 + 1 s< 0 && rbx_10 != 0xffffffff)
        var_a0 = rbx_10 + 1
        sub_1405a50a0(&var_a8)
        r14_2 = var_a8
        r12_2 = var_a0
    
    char rax_31 = (*(rax_28 + 8)).b
    void* rdx_12
    
    if ((rax_31 & 0x11) == 0)
        rdx_12 = rax_28 + 0xa
        
        if ((rax_31 & 2) == 0)
            rdx_12 = *(rax_28 + 0x18)
    else
        rdx_12 = nullptr
    
    memcpy(r14_2, rdx_12, rbx_10 * 2)
    r14_2[sx.q(rbx_10)] = 0

if (&arg1[4] != &var_a8)
    int16_t* r15_4 = arg1[4]
    
    if (r15_4 != 0)
        int64_t* rcx_25 = data_143ddb3f0
        
        if (rcx_25 == 0)
            sub_140a750a0()
            rcx_25 = data_143ddb3f0
        
        (*(*rcx_25 + 0x30))(rcx_25, r15_4)
    
    arg1[4] = r14_2
    arg1[5].d = r12_2
    *(arg1 + 0x2c) = var_9c_2
else if (r14_2 != 0)
    int64_t* rcx_26 = data_143ddb3f0
    
    if (rcx_26 == 0)
        sub_140a750a0()
        rcx_26 = data_143ddb3f0
    
    (*(*rcx_26 + 0x30))(rcx_26, r14_2)

void* rax_36 = sub_142a5d440(arg2, &var_88)
var_a8 = nullptr
int16_t* r14_3 = nullptr
int32_t var_9c_3 = 0
int32_t r12_3 = 0
int16_t rax_37 = *(rax_36 + 8)
int32_t rbx_14

if (rax_37 s< 0)
    rbx_14 = *(rax_36 + 0xc)
else
    rbx_14 = sx.d(rax_37) s>> 5

if (rbx_14 s>= 1)
    if (rbx_14 + 1 s> 0)
        var_a0 = rbx_14 + 1
        sub_140594770(&var_a8)
        r14_3 = var_a8
        r12_3 = var_a0
    else if (rbx_14 + 1 s< 0 && rbx_14 != 0xffffffff)
        var_a0 = rbx_14 + 1
        sub_1405a50a0(&var_a8)
        r14_3 = var_a8
        r12_3 = var_a0
    
    char rax_39 = (*(rax_36 + 8)).b
    void* rdx_17
    
    if ((rax_39 & 0x11) == 0)
        rdx_17 = rax_36 + 0xa
        
        if ((rax_39 & 2) == 0)
            rdx_17 = *(rax_36 + 0x18)
    else
        rdx_17 = nullptr
    
    memcpy(r14_3, rdx_17, rbx_14 * 2)
    r14_3[sx.q(rbx_14)] = 0

if (&arg1[6] != &var_a8)
    int16_t* r15_6 = arg1[6]
    
    if (r15_6 != 0)
        int64_t* rcx_31 = data_143ddb3f0
        
        if (rcx_31 == 0)
            sub_140a750a0()
            rcx_31 = data_143ddb3f0
        
        (*(*rcx_31 + 0x30))(rcx_31, r15_6)
    
    arg1[6] = r14_3
    arg1[7].d = r12_3
    *(arg1 + 0x3c) = var_9c_3
else if (r14_3 != 0)
    int64_t* rcx_32 = data_143ddb3f0
    
    if (rcx_32 == 0)
        sub_140a750a0()
        rcx_32 = data_143ddb3f0
    
    (*(*rcx_32 + 0x30))(rcx_32, r14_3)

void* rax_44 = sub_142a5d490(arg2, &var_88)
var_a8 = nullptr
int16_t* r15_7 = nullptr
var_a0.q = 0
int16_t rax_45 = *(rax_44 + 8)
int32_t rbx_18

if (rax_45 s< 0)
    rbx_18 = *(rax_44 + 0xc)
else
    rbx_18 = sx.d(rax_45) s>> 5

if (rbx_18 s>= 1)
    if (rbx_18 + 1 s> 0)
        var_a0 = rbx_18 + 1
        sub_140594770(&var_a8)
        r15_7 = var_a8
    else if (rbx_18 + 1 s< 0 && rbx_18 != 0xffffffff)
        var_a0 = rbx_18 + 1
        sub_1405a50a0(&var_a8)
        r15_7 = var_a8
    
    char rax_47 = (*(rax_44 + 8)).b
    void* rdx_22
    
    if ((rax_47 & 0x11) == 0)
        rdx_22 = rax_44 + 0xa
        
        if ((rax_47 & 2) == 0)
            rdx_22 = *(rax_44 + 0x18)
    else
        rdx_22 = nullptr
    
    memcpy(r15_7, rdx_22, rbx_18 * 2)
    r15_7[sx.q(rbx_18)] = 0

sub_140597da0(&arg1[8], &var_a8)
int16_t* rbx_20 = var_a8

if (rbx_20 != 0)
    int64_t* rcx_38 = data_143ddb3f0
    
    if (rcx_38 == 0)
        sub_140a750a0()
        rcx_38 = data_143ddb3f0
    
    (*(*rcx_38 + 0x30))(rcx_38, rbx_20)

void* rax_51 = (*(*arg2 + 0x130))(arg2)
var_a8 = nullptr
var_a0.q = 0
int16_t rcx_40 = *(rax_51 + 0x1d0)
int32_t r9_1

if (rcx_40 s< 0)
    r9_1 = *(rax_51 + 0x1d4)
else
    r9_1 = sx.d(rcx_40) s>> 5

void var_98

if (r9_1 != 0)
    sub_140a6d980(&var_98, rax_51 + 0x1c8, 0, r9_1, &var_a8)

sub_140597da0(&arg1[0xa], &var_a8)
int16_t* rbx_21 = var_a8

if (rbx_21 != 0)
    int64_t* rcx_43 = data_143ddb3f0
    
    if (rcx_43 == 0)
        sub_140a750a0()
        rcx_43 = data_143ddb3f0
    
    (*(*rcx_43 + 0x30))(rcx_43, rbx_21)

void* rax_54 = (*(*arg2 + 0x130))(arg2)
var_a8 = nullptr
var_a0.q = 0
int16_t rcx_45 = *(rax_54 + 0x190)
int32_t r9_3

if (rcx_45 s< 0)
    r9_3 = *(rax_54 + 0x194)
else
    r9_3 = sx.d(rcx_45) s>> 5

if (r9_3 != 0)
    sub_140a6d980(&var_98, rax_54 + 0x188, 0, r9_3, &var_a8)

sub_140597da0(&arg1[0xc], &var_a8)
int16_t* rbx_22 = var_a8

if (rbx_22 != 0)
    int64_t* rcx_48 = data_143ddb3f0
    
    if (rcx_48 == 0)
        sub_140a750a0()
        rcx_48 = data_143ddb3f0
    
    (*(*rcx_48 + 0x30))(rcx_48, rbx_22)

arg1[0xe].w = sub_140a67ec0(&var_90, 1, 0x2c)
*(arg1 + 0x72) = sub_140a67ec0(&var_90, 0, 0x2e)
*(arg1 + 0x74) = sub_142a5d070(arg2)
char rax_60

if (sub_142a5d560(arg2) s>= 1)
    rax_60 = sub_142a5d560(arg2)
else
    rax_60 = *(arg1 + 0x74)

*(arg1 + 0x75) = rax_60
*(arg1 + 0x76) = sub_140a67ec0(&var_90, 4, 0x30)
arg1[0xf].w = sub_140a67ec0(&var_90, 0x12, 0x31)
*(arg1 + 0x7a) = sub_140a67ec0(&var_90, 0x13, 0x32)
*(arg1 + 0x7c) = sub_140a67ec0(&var_90, 0x14, 0x33)
*(arg1 + 0x7e) = sub_140a67ec0(&var_90, 0x15, 0x34)
arg1[0x10].w = sub_140a67ec0(&var_90, 0x16, 0x35)
*(arg1 + 0x82) = sub_140a67ec0(&var_90, 0x17, 0x36)
*(arg1 + 0x84) = sub_140a67ec0(&var_90, 0x18, 0x37)
*(arg1 + 0x86) = sub_140a67ec0(&var_90, 0x19, 0x38)
arg1[0x11].w = sub_140a67ec0(&var_90, 0x1a, 0x39)
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
