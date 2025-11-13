// 函数: sub_141cfe120
// 地址: 0x141cfe120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int16_t* var_38 = nullptr
int32_t rax = 0
int32_t var_2c = 0
int32_t var_30 = 0
int16_t* r15 = nullptr
int32_t rsi = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rax = var_2c
        rsi = var_30
        r15 = var_38
    
    rsi += rbx_1.d + 1
    
    if (rsi s> rax)
        sub_140594770(&var_38)
        r15 = var_38
    
    UnDecorator::getReferenceType(r15, arg3, (rbx_1.d + 1) * 2)

int32_t rax_1 = *(arg4 + 0xf8)
int32_t rbx_3 = rsi - 1
*arg2 = 0
arg2[1] = 0
int32_t rcx_3 = rax_1 - 1

if (rax_1 == 0)
    rcx_3 = 0

if (rsi == 0)
    rbx_3 = 0

int32_t rdx_3

if (rcx_3 s>= 0)
    rdx_3 = rbx_3
    
    if (rcx_3 s< rbx_3)
        rdx_3 = rcx_3
else
    rdx_3 = 0

int64_t r9 = sx.q(rdx_3)

if (sx.q(rcx_3) + 0x7fffffff s< r9)
    rbx_3 = rdx_3
else if (sx.q(rcx_3) + 0x7fffffff s< sx.q(rbx_3))
    rbx_3 = rcx_3 + 0x7fffffff

var_38 = nullptr
int16_t* const rax_3 = &data_142d40450
var_30.q = 0

if (rsi != 0)
    rax_3 = r15

int16_t* rsi_1 = nullptr
int32_t rbx_4 = rbx_3 - rdx_3
int32_t r14_1 = 0
void* r13_1 = &rax_3[r9]

if (r13_1 != 0 && *r13_1 != 0 && rbx_4 s> 0)
    if (rbx_4 + 1 s> 0)
        sub_1405947f0(&var_38, rbx_4 + 1)
        r12 = var_2c
        r14_1 = var_30
        rsi_1 = var_38
    
    r14_1 = r14_1 + 1 + rbx_4
    
    if (r14_1 s> r12)
        sub_140594770(&var_38)
        r12 = var_2c
        rsi_1 = var_38
    
    UnDecorator::getReferenceType(rsi_1, r13_1, rbx_4 * 2)
    rsi_1[sx.q(r14_1) - 1] = 0

if (arg2 != &var_38)
    int64_t rcx_7 = *arg2
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg2 = rsi_1
    arg2[1].d = r14_1
    *(arg2 + 0xc) = r12
else if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
