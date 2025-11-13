// 函数: sub_141810fa0
// 地址: 0x141810fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_68
sub_140a2e390(&var_68, u"%d", zx.q(arg2))
int16_t* const rsi = &data_142d40450
int32_t var_60

if (var_60 != 0)
    rsi = var_68

int32_t r12 = 0
void* var_88 = nullptr
int32_t rax = 0
int32_t var_7c = 0
void* r14 = nullptr
int32_t var_80 = 0
int32_t rdi = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rbx_1.d + 1)
        rax = var_7c
        rdi = var_80
        r14 = var_88
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax)
        sub_140594770(&var_88)
        r14 = var_88
    
    UnDecorator::getReferenceType(r14, rsi, (rbx_1.d + 1) * 2)

var_88 = nullptr
var_80.q = 0
sub_1405947f0(&var_88, 4)
int32_t rbx_3 = var_80 + 4

if (rbx_3 s> var_7c)
    sub_140594770(&var_88)

void* r15 = var_88
UnDecorator::getReferenceType(r15, &data_142fe26e0, 8)
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 4)
int32_t rax_1 = var_70 + 4
var_70 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, &data_142fe26e0, 8)
var_88 = nullptr
uint64_t rsi_1 = 0
int32_t var_80_1
var_80_1.q = 0
uint64_t var_58 = 0
int32_t var_4c

if (rbx_3 != 0)
    sub_1405a4c70(&var_58, rbx_3, 0)
    rsi_1 = var_58
    memcpy(rsi_1, r15, rbx_3 * 2)
else
    var_4c = 0

uint64_t rbx_4 = 0
uint64_t var_48 = 0

if (rdi != 0)
    sub_1405a4c70(&var_48, rdi, 0)
    rbx_4 = var_48
    memcpy(rbx_4, r14, rdi * 2)
    int32_t var_3c
    r12 = var_3c
    rsi_1 = var_58

int64_t r13 = sx.q(var_80_1)
int32_t i_2 = (r13 + 1).d

if (i_2 s> var_7c)
    sub_1405c4f50(&var_88)

uint64_t* rcx_18 = r13 * 0x30 + var_88
*rcx_18 = rsi_1
rcx_18[1].d = rbx_3
*(rcx_18 + 0xc) = var_4c
rcx_18[2] = rbx_4
rcx_18[3].d = rdi
*(rcx_18 + 0x1c) = r12
rcx_18[4] = 0
rcx_18[5].b = 0
*(rcx_18 + 0x2c) = 0
int64_t result = (*(*arg1 + 0x58))(arg1, &var_78, &var_88)
int32_t i_1 = i_2
void* rbx_5 = var_88

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_20 = *(rbx_5 + 0x10)
        
        if (rcx_20 != 0)
            result = sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = *rbx_5
        
        if (rcx_21 != 0)
            result = sub_140a74f90(rcx_21)
        
        rbx_5 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_88

if (rbx_5 != 0)
    result = sub_140a74f90(rbx_5)

int64_t rcx_23 = var_78

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

if (r15 != 0)
    result = sub_140a74f90(r15)

if (r14 != 0)
    result = sub_140a74f90(r14)

int16_t* rcx_26 = var_68

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
