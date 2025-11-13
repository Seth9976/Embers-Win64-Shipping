// 函数: sub_1408510e0
// 地址: 0x1408510e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = nullptr
int32_t arg_8 = 0

if (*(arg1 + 0x710) s> 1)
    return arg1 + 0x708

void* rcx = *(arg1 + 0x28)
void* const r12

if (rcx == 0)
    r12 = nullptr
else
    r12 = *(rcx + 0x408)

void* const arg_18

if (rcx == 0)
    arg_18 = nullptr
else
    arg_18 = *(rcx + 0xc0)

int32_t rsi = 0x10
int64_t var_88
int16_t* var_68
int64_t* rax_2
int64_t rdi
int32_t r14

if (rcx == 0)
    var_88 = 0
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, 8)
    int32_t rax_3 = var_80_1 + 8
    var_80_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_88)
    
    rdi = var_88
    UnDecorator::getReferenceType(rdi, u"nullptr", 0x10)
    rax_2 = &var_88
    r14 = 2
else
    rax_2 = sub_140d21830(rcx, &var_68, 0, 0)
    rdi = var_88
    r14 = 1

int32_t r13 = rax_2[1].d
int64_t rax_4 = *rax_2
int16_t* var_78 = nullptr
arg_8 = r13

if (r13 != 0)
    sub_1405a4c70(&var_78, r13, 0)
    memcpy(var_78, rax_4, r13 * 2)
    arg_8 = r13

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rdi != 0)
        sub_140a74f90(rdi)

if ((r14.b & 1) != 0)
    int16_t* rcx_7 = var_68
    r14 &= 0xfffffffe
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int64_t var_58
int64_t* rax_6
int32_t rdi_1
int64_t r12_1

if (r12 == 0)
    var_88 = 0
    int32_t var_80_2 = 0
    sub_1405947f0(&var_88, 8)
    int32_t rax_7 = var_80_2 + 8
    var_80_2 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_88)
    
    r12_1 = var_88
    UnDecorator::getReferenceType(r12_1, u"nullptr", 0x10)
    rax_6 = &var_88
    rdi_1 = 8
else
    rax_6 = sub_140d21830(r12, &var_58, 0, 0)
    r12_1 = var_88
    rdi_1 = 4

int32_t rdi_2 = rdi_1 | r14
var_68 = nullptr
int32_t r14_1 = rax_6[1].d
int16_t* r13_1 = nullptr
int64_t rax_8 = *rax_6
int64_t arg_10
arg_10.d = r14_1

if (r14_1 != 0)
    sub_1405a4c70(&var_68, r14_1, 0)
    r13_1 = var_68
    memcpy(r13_1, rax_8, r14_1 * 2)
    arg_10.d = r14_1

if ((rdi_2.b & 8) != 0)
    rdi_2 &= 0xfffffff7
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

if ((rdi_2.b & 4) != 0)
    int64_t rcx_15 = var_58
    rdi_2 &= 0xfffffffb
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

int64_t* rax_11
int64_t r14_2

if (arg_18 == 0)
    var_88 = 0
    int32_t var_80_3 = 0
    sub_1405947f0(&var_88, 8)
    int32_t rax_12 = var_80_3 + 8
    var_80_3 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_88)
    
    r14_2 = var_88
    UnDecorator::getReferenceType(r14_2, u"nullptr", 0x10)
    rax_11 = &var_88
    rsi = 0x20
else
    rax_11 = sub_140d21830(arg_18, &var_58, 0, 0)
    r14_2 = var_88

int64_t r12_2 = *rax_11
int32_t rsi_1 = rsi | rdi_2
int32_t rdi_3 = rax_11[1].d
var_68 = nullptr

if (rdi_3 != 0)
    sub_1405a4c70(&var_68, rdi_3, 0)
    rbx = var_68
    memcpy(rbx, r12_2, rdi_3 * 2)

if ((rsi_1.b & 0x20) != 0)
    rsi_1 &= 0xffffffdf
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)

if ((rsi_1.b & 0x10) != 0)
    int64_t rcx_23 = var_58
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

int16_t* const r8_7 = &data_142d40450
int16_t* rdi_4 = var_78
int16_t* const rdx_12 = &data_142d40450
int16_t* const rcx_24 = &data_142d40450

if (rdi_3 != 0)
    rdx_12 = rbx

int16_t* const var_90 = rdx_12

if (arg_8 != 0)
    rcx_24 = rdi_4

int16_t* const var_98 = rcx_24

if (arg_10.d != 0)
    r8_7 = r13_1

*(arg1 + 0x6b8)
sub_140a2e390(&var_78, SystemInstance | System: %s | bSolo: %s | Component: %s | AttachedTo: %s |", 
    r8_7)

if (arg1 + 0x708 == &var_78)
    int16_t* rcx_27 = var_78
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
else
    int64_t rcx_26 = *(arg1 + 0x708)
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    *(arg1 + 0x708) = var_78
    *(arg1 + 0x710) = r13
    int32_t var_6c
    *(arg1 + 0x714) = var_6c

if (rbx != 0)
    sub_140a74f90(rbx)

if (r13_1 != 0)
    sub_140a74f90(r13_1)

if (rdi_4 != 0)
    sub_140a74f90(rdi_4)

return arg1 + 0x708
