// 函数: sub_142192090
// 地址: 0x142192090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4df0(arg2)

int64_t* rsi = *arg2 + rbx * 0x18

if (rsi == 0)
    rsi = nullptr
else
    __builtin_memset(rsi, 0, 0x18)

rsi[2] = *(arg1 + 0x78)
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 9)
int32_t r12 = var_30:4.d
int32_t r15 = var_30.d + 9
var_30.d = r15

if (r15 s> r12)
    sub_140594770(&var_38)
    r12 = var_30:4.d
    r15 = var_30.d

int64_t r14 = var_38
UnDecorator::getReferenceType(r14, u"Position", 0x12)

if (rsi != &var_38)
    int64_t rcx_5 = *rsi
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *rsi = r14
    rsi[1].d = r15
    *(rsi + 0xc) = r12
else if (r14 != 0)
    sub_140a74f90(r14)

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rsi_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4df0(arg2)

int64_t* rsi_2 = *arg2 + rsi_1 * 0x18

if (rsi_2 == 0)
    rsi_2 = nullptr
else
    __builtin_memset(rsi_2, 0, 0x18)

rsi_2[2] = *(arg1 + 0xc8)
var_38 = 0
int64_t var_30_1 = 0
sub_1405947f0(&var_38, 8)
int32_t r12_1 = var_30_1:4.d
int32_t r15_1 = var_30_1.d + 8
var_30_1.d = r15_1

if (r15_1 s> r12_1)
    sub_140594770(&var_38)
    r12_1 = var_30_1:4.d
    r15_1 = var_30_1.d

int64_t r14_1 = var_38
UnDecorator::getReferenceType(r14_1, u"Tangent", 0x10)

if (rsi_2 != &var_38)
    int64_t rcx_12 = *rsi_2
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    *rsi_2 = r14_1
    rsi_2[1].d = r15_1
    *(rsi_2 + 0xc) = r12_1
else if (r14_1 != 0)
    sub_140a74f90(r14_1)

int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_6 = (rsi_3 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405a4df0(arg2)

int64_t* rdi_1 = *arg2 + rsi_3 * 0x18

if (rdi_1 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(rdi_1, 0, 0x18)

rdi_1[2] = *(arg1 + 0x100)
var_38 = 0
int64_t var_30_2 = 0
sub_1405947f0(&var_38, 9)
int32_t r14_2 = var_30_2:4.d
int32_t rsi_4 = var_30_2.d + 9
var_30_2.d = rsi_4

if (rsi_4 s> r14_2)
    sub_140594770(&var_38)
    r14_2 = var_30_2:4.d
    rsi_4 = var_30_2.d

int64_t rbx_1 = var_38
UnDecorator::getReferenceType(rbx_1, u"Strength", 0x12)
int64_t* result = &var_38

if (rdi_1 != &var_38)
    int64_t rcx_19 = *rdi_1
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    *rdi_1 = rbx_1
    rdi_1[1].d = rsi_4
    *(rdi_1 + 0xc) = r14_2
else if (rbx_1 != 0)
    return sub_140a74f90(rbx_1)

return result
