// 函数: sub_141dc57a0
// 地址: 0x141dc57a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = 0
int32_t var_78 = 0
int64_t var_48
sub_140a2e390(&var_48, u"%dx%dx%d", 0)
void arg_10
int64_t* rax = sub_140b58170(&arg_10, "Dimensions", 1)
int64_t rdi = var_48
uint64_t var_60 = 0
int64_t rbx = *rax
int64_t var_68 = rbx
int32_t var_54
int32_t var_40
int32_t r12

if (var_40 != 0)
    sub_1405a4c70(&var_60, var_40, 0)
    r14 = var_60
    memcpy(r14, rdi, var_40 * 2)
    r12 = var_54
    rbx = var_68
else
    r12 = 0

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rdi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_4 = (rdi_1 << 5) + *arg2
*rax_4 = rbx
rax_4[1] = r14
*(rax_4 + 0x14) = r12
uint64_t r12_1 = 0
rax_4[2].d = var_40
rax_4[3] = 3
void* rax_5 = arg1[0x17]
int32_t rax_6

if (rax_5 == 0)
    rax_6 = 0
else
    rax_6 = *(rax_5 + 0xc)

int64_t r15_1 = 0
var_68 = 0
int32_t rdi_2 = 0
var_60.d = 0
int32_t rax_8 = 0
int16_t* r14_1 = (&data_1439c85e0)[sx.q(rax_6) * 5]
var_60:4.d = 0

if (r14_1 != 0 && *r14_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        rax_8 = var_60:4.d
        rdi_2 = var_60.d
        r15_1 = var_68
    
    rdi_2 += rbx_1.d + 1
    var_60.d = rdi_2
    
    if (rdi_2 s> rax_8)
        sub_140594770(&var_68)
        rdi_2 = var_60.d
        r15_1 = var_68
    
    UnDecorator::getReferenceType(r15_1, r14_1, (rbx_1.d + 1) * 2)

int64_t* rax_9 = sub_140b58170(&arg_10, "Format", 1)
var_60 = 0
int64_t rbx_3 = *rax_9
var_68 = rbx_3
int32_t r13_1

if (rdi_2 != 0)
    sub_1405a4c70(&var_60, rdi_2, 0)
    r12_1 = var_60
    memcpy(r12_1, r15_1, rdi_2 * 2)
    r13_1 = var_54
    rbx_3 = var_68
else
    r13_1 = 0

int64_t r14_2 = sx.q(arg2[1].d)
int32_t rax_10 = (r14_2 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_13 = (r14_2 << 5) + *arg2
*rax_13 = rbx_3
rax_13[1] = r12_1
rax_13[2].d = rdi_2
*(rax_13 + 0x14) = r13_1
rax_13[3] = 1

if (r15_1 != 0)
    sub_140a74f90(r15_1)

void* result = sub_140cdbf60(arg1, arg2)
int64_t rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
