// 函数: sub_141cf95d0
// 地址: 0x141cf95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[9].d &= not.d(*(arg1 + 0x3c))
sub_141d02a20(&arg1[7])
sub_141cfc310(arg1)

if (*(arg1 + 0x24) s>= *(arg1[3] + 8) || *(arg1 + 0x4c) s>= *(arg1[8] + 8))
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0)
        sub_1405947f0(&arg1[0xb], 0)
    
    return arg1

int64_t* rcx_3 = arg1[6]
void* rax_4 = *rcx_3

if ((rax_4.b & 1) != 0)
    rax_4 = (rax_4 s>> 1) + rcx_3

void* rcx_6 = (sx.q(*(arg1 + 0x4c)) << 5) + rax_4
void* r14 = *rcx_6

if ((r14.b & 1) != 0)
    r14 = (r14 s>> 1) + rcx_6

int32_t rax_6 = *(rcx_6 + 8)
int64_t var_58 = 0
int64_t r15 = 0
int64_t var_50 = 0
int32_t rsi = 0
int32_t arg_8 = 0
int32_t r13 = rax_6 - 1
int32_t r12 = 0

if (rax_6 == 0)
    r13 = 0

if (r14 != 0 && *r14 != 0 && r13 s> 0)
    if (r13 + 1 s> 0)
        sub_1405947f0(&var_58, r13 + 1)
        r12 = var_50:4.d
        rsi = var_50.d
        r15 = var_58
        arg_8 = r12
    
    rsi += r13 + 1
    var_50.d = rsi
    
    if (rsi s> r12)
        sub_140594770(&var_58)
        rsi = var_50.d
        r15 = var_58
        arg_8 = var_50:4.d
    
    UnDecorator::getReferenceType(r15, r14, r13 * 2)
    *(r15 + (sx.q(rsi) << 1) - 2) = 0

int64_t* rax_9 = arg1[1]
void* rcx_10 = *rax_9

if ((rcx_10.b & 1) != 0)
    rcx_10 = (rcx_10 s>> 1) + rax_9

void* rdx_6 = sx.q(*(arg1 + 0x24)) * 0x50 + rcx_10
void* r13_1 = *rdx_6

if ((r13_1.b & 1) != 0)
    r13_1 = (r13_1 s>> 1) + rdx_6

int32_t rax_11 = *(rdx_6 + 8)
int64_t r12_1 = 0
var_58 = 0
int32_t rdx_7 = 0
var_50.d = 0
int32_t r14_2 = rax_11 - 1
int32_t rax_12 = 0

if (rax_11 == 0)
    r14_2 = 0

var_50:4.d = 0
int32_t r14_4

if (r13_1 != 0 && *r13_1 != 0 && r14_2 s> 0)
    if (r14_2 + 1 s> 0)
        sub_1405947f0(&var_58, r14_2 + 1)
        rdx_7 = var_50.d
        rax_12 = var_50:4.d
        r12_1 = var_58
    
    r14_4 = r14_2 + 1 + rdx_7
    var_50.d = r14_4
    
    if (r14_4 s> rax_12)
        sub_140594770(&var_58)
        r14_4 = var_50.d
        r12_1 = var_58
    
    UnDecorator::getReferenceType(r12_1, r13_1, r14_2 * 2)
    *(r12_1 + (sx.q(r14_4) << 1) - 2) = 0

int32_t r13_3
int64_t r14_5

if (r13_1 == 0 || *r13_1 == 0 || r14_2 s<= 0 || r14_4 s<= 1)
    r13_3 = arg_8
    r14_5 = r15
    r15 = 0
else
    int32_t rsi_2
    
    if (rsi == 0)
        rsi_2 = 0
    else
        rsi_2 = rsi - 1
    
    int32_t rax_14
    
    if (r14_4 == 0)
        rax_14 = r14_4 + 1
    
    if (r14_4 != 0 || rsi_2 == 0)
        rax_14 = 0
    
    int32_t rcx_16 = var_50:4.d
    int32_t rdx_11 = rax_14 + r14_4 + rsi_2
    int64_t var_48 = r12_1
    r12_1 = 0
    
    if (rdx_11 s> rcx_16)
        sub_1405947f0(&var_48, rdx_11)
    
    sub_140a20ba0(&var_48, r15, rsi_2)
    r14_5 = var_48
    rsi = r14_4
    r13_3 = rcx_16
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0

if (&arg1[0xb] != &var_58)
    int64_t rcx_19 = arg1[0xb]
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    arg1[0xb] = r14_5
    arg1[0xc].d = rsi
    *(arg1 + 0x64) = r13_3
else if (r14_5 != 0)
    sub_140a74f90(r14_5)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
