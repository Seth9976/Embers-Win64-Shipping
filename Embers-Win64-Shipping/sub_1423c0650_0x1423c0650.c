// 函数: sub_1423c0650
// 地址: 0x1423c0650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
sub_140a2e390(&var_48, u"%dx%d", 0)
int32_t arg_10
int64_t* rax = sub_140b58170(&arg_10, "Dimensions", 1)
int64_t rdi = var_48
uint64_t var_60 = 0
int64_t rbx = *rax
int64_t var_68 = rbx
int32_t var_54
int32_t var_40
int32_t r12
uint64_t r15

if (var_40 != 0)
    sub_1405a4c70(&var_60, var_40, 0)
    r15 = var_60
    memcpy(r15, rdi, var_40 * 2)
    r12 = var_54
    rbx = var_68
else
    r12 = 0
    r15 = 0

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rdi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_4 = (rdi_1 << 5) + *arg2
*rax_4 = rbx
rax_4[1] = r15
rax_4[2].d = var_40
*(rax_4 + 0x14) = r12
rax_4[3] = 3
void* rax_5 = arg1[0x1a]

if (rax_5 == 0 || *(rax_5 + 0xc) == 5)
    rax_5.b = 0
else
    rax_5.b = 1

wchar16 const* const r15_1 = u"False"

if (rax_5.b != 0)
    r15_1 = u"True"

uint64_t r13_1 = 0
int32_t rax_6 = 0
var_68 = 0
int64_t r12_1 = 0
var_60.d = 0
int32_t rsi_1 = 0
var_60:4.d = 0
int64_t rdi_2 = -1

if (*r15_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r15_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        rax_6 = var_60:4.d
        rsi_1 = var_60.d
        r12_1 = var_68
    
    rsi_1 += rbx_1.d + 1
    var_60.d = rsi_1
    
    if (rsi_1 s> rax_6)
        sub_140594770(&var_68)
        rsi_1 = var_60.d
        r12_1 = var_68
    
    UnDecorator::getReferenceType(r12_1, r15_1, (rbx_1.d + 1) * 2)

void arg_18
int64_t* rax_7 = sub_140b58170(&arg_18, "HasAlphaChannel", 1)
var_60 = 0
int64_t rbx_3 = *rax_7
var_68 = rbx_3

if (rsi_1 != 0)
    sub_1405a4c70(&var_60, rsi_1, 0)
    r13_1 = var_60
    memcpy(r13_1, r12_1, rsi_1 * 2)
    rbx_3 = var_68
    arg_10 = var_54
else
    arg_10 = 0

int64_t r15_2 = sx.q(arg2[1].d)
int32_t rax_9 = (r15_2 + 1).d
arg2[1].d = rax_9

if (rax_9 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int32_t rcx_12 = arg_10
int64_t* rax_12 = (r15_2 << 5) + *arg2
*rax_12 = rbx_3
rax_12[1] = r13_1
int32_t r13_2 = 0
rax_12[2].d = rsi_1
*(rax_12 + 0x14) = rcx_12
rax_12[3] = 1

if (r12_1 != 0)
    sub_140a74f90(r12_1)

void* rax_14 = arg1[0x1a]
uint32_t rax_15

if (rax_14 == 0)
    rax_15 = 0
else
    void* rcx_14 = *(rax_14 + 0x28)
    
    if (rcx_14 == 0)
        rax_15 = *(rax_14 + 0xc)
    else
        rax_15 = zx.d(*(rcx_14 + 0x20))

int64_t r15_3 = 0
var_68 = 0
int32_t rsi_2 = 0
var_60.d = 0
int32_t rax_17 = 0
int16_t* rbx_4 = (&data_1439c85e0)[sx.q(rax_15) * 5]
var_60:4.d = 0

if (rbx_4 != 0 && *rbx_4 != 0)
    do
        rdi_2 += 1
    while (rbx_4[rdi_2] != 0)
    
    if (rdi_2.d + 1 s> 0)
        sub_1405947f0(&var_68, rdi_2.d + 1)
        rax_17 = var_60:4.d
        rsi_2 = var_60.d
        r15_3 = var_68
    
    rsi_2 += rdi_2.d + 1
    var_60.d = rsi_2
    
    if (rsi_2 s> rax_17)
        sub_140594770(&var_68)
        rsi_2 = var_60.d
        r15_3 = var_68
    
    UnDecorator::getReferenceType(r15_3, rbx_4, (rdi_2.d + 1) * 2)

int64_t* rax_18 = sub_140b58170(&arg_10, "Format", 1)
var_60 = 0
int64_t rbx_5 = *rax_18
var_68 = rbx_5
uint64_t r12_2

if (rsi_2 != 0)
    sub_1405a4c70(&var_60, rsi_2, 0)
    r12_2 = var_60
    memcpy(r12_2, r15_3, rsi_2 * 2)
    r13_2 = var_54
    rbx_5 = var_68
else
    r12_2 = 0

int64_t rdi_4 = sx.q(arg2[1].d)
int32_t rax_19 = (rdi_4 + 1).d
arg2[1].d = rax_19

if (rax_19 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_22 = (rdi_4 << 5) + *arg2
*rax_22 = rbx_5
rax_22[1] = r12_2
rax_22[2].d = rsi_2
*(rax_22 + 0x14) = r13_2
rax_22[3] = 1

if (r15_3 != 0)
    sub_140a74f90(r15_3)

void* result = sub_140cdbf60(arg1, arg2)
int64_t rcx_25 = var_48

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
