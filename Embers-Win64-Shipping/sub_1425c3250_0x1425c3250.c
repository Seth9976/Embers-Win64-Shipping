// 函数: sub_1425c3250
// 地址: 0x1425c3250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t rdx = 0
int16_t* var_68 = nullptr
uint64_t rbx = arg3
int32_t var_60 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        int32_t var_5c
        r9 = var_5c
        rdx = var_60
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_60 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, arg2, (rbx_1.d + 1) * 2)
    rdx = var_60
    rbx = arg3

void* rcx_3 = *(arg1 + 0x10)
int32_t rax_2 = *(rcx_3 + 0x18)
int32_t r8_2

if (rax_2 == 0)
    r8_2 = 0
else
    r8_2 = rax_2 - 1

int16_t* const r15 = &data_142d40450
int16_t* rax_3

if (rax_2 == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *(rcx_3 + 0x10)

int16_t* const rcx_4 = &data_142d40450

if (rdx != 0)
    rcx_4 = var_68

int32_t rax_4 = sub_140a546e0(rcx_4, rax_3, sx.q(r8_2))
int64_t var_48
void arg_8
int16_t* rcx_36
int32_t rdx_17

if (rax_4 != 0)
    int16_t* r8_14 = &data_142d40450
    
    if (var_60 != 0)
        r8_14 = var_68
    
    int32_t* rax_25 =
        sub_140960120(arg1 + 0x18, &arg_8, sub_1425bf990(*(arg1 + 0x10), &var_48, r8_14))
    char rax_26
    
    if (*rax_25 == 0xffffffff)
        int16_t* rdx_21 = &data_142d40450
        
        if (var_60 != 0)
            rdx_21 = var_68
        
        rax_26 = sub_1425c26f0(*(arg1 + 0x10), rdx_21, *(rbx + 0x20) & 1)
    
    if (*rax_25 != 0xffffffff || rax_26 == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    int64_t rcx_35 = var_48
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    if (rbx.b == 0)
        rbx.b = 1
    else
        rdx_17 = var_60
        rcx_36 = var_68
    label_1425c36b2:
        
        if (rdx_17 != 0)
            r15 = rcx_36
        
        int64_t* rcx_37 = *(arg1 + 8)
        rbx = zx.q((*(*rcx_37 + 8))(rcx_37, r15, arg3))
    
    int16_t* rcx_38 = var_68
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    return zx.q(rbx.b)

int16_t* const rdi_1 = &data_142d40450

if (var_60 != rax_4)
    rdi_1 = var_68

int16_t* r14_1 = nullptr
int32_t rsi_1 = 0
int16_t* var_58 = nullptr
int32_t r12_1 = 0
int64_t* var_50_1 = nullptr

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rdi_1[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_3.d + 1)
        r12_1 = var_50_1:4.d
        rsi_1 = var_50_1.d
        r14_1 = var_58
    
    rsi_1 += rbx_3.d + 1
    var_50_1.d = rsi_1
    
    if (rsi_1 s> r12_1)
        sub_140594770(&var_58)
        r12_1 = var_50_1:4.d
        rsi_1 = var_50_1.d
        r14_1 = var_58
    
    UnDecorator::getReferenceType(r14_1, rdi_1, (rbx_3.d + 1) * 2)

sub_140598750(arg1 + 0x18, &var_58)
int16_t* const rdx_8 = r14_1
*var_50_1 = r14_1
var_50_1[1].d = rsi_1
*(var_50_1 + 0xc) = r12_1
var_50_1[2].d = 0xffffffff

if (rsi_1 == 0)
    rdx_8 = &data_142d40450

int32_t rcx_9 = rsi_1 - 1

if (rsi_1 == 0)
    rcx_9 = 0

sub_14059a6d0(arg1 + 0x18, &arg_8, sub_1405969c0(rcx_9, rdx_8), var_50_1, var_58.d, nullptr)
int32_t rdx_11 = 0x7fffffff
int32_t rcx_11 = *(*(arg1 + 0x10) + 0x18)
int32_t rdi_2 = rcx_11 - 1

if (rcx_11 == 0)
    rdi_2 = 0

if (sx.q(rdi_2) + 0x7fffffff s<= 0x7fffffff)
    rdx_11 = rdi_2 + 0x7fffffff

int32_t rax_10 = var_60
int32_t rcx_12 = rax_10 - 1

if (rax_10 == 0)
    rcx_12 = 0

int32_t r10_1

if (rdx_11 s>= 0)
    r10_1 = rcx_12
    
    if (rdx_11 s< rcx_12)
        r10_1 = rdx_11
else
    r10_1 = 0

int32_t rcx_13 = rcx_12 - r10_1
int32_t rbx_6 = rax_10 - 1

if (rax_10 == 0)
    rbx_6 = 0

int32_t rbx_7 = rbx_6 - r10_1

if (rcx_13 s>= 0)
    if (rcx_13 s< rbx_7)
        rbx_7 = rcx_13
    
    if (rbx_7 != 0)
        int32_t rcx_15 = rax_10 - r10_1
        
        if (rcx_15 != rbx_7)
            int16_t* r9_2 = var_68
            memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(r10_1 + rbx_7)], (rcx_15 - rbx_7) * 2)
            rax_10 = var_60
        
        rax_10 -= rbx_7
        var_60 = rax_10

int32_t rbx_8 = rax_10 - 1

if (rax_10 == 0)
    rbx_8 = 0

if (rdi_2 s>= 0)
    if (rdi_2 s< rbx_8)
        rbx_8 = rdi_2
    
    if (rbx_8 != 0)
        if (rax_10 != rbx_8)
            int16_t* rcx_21 = var_68
            memmove(rcx_21, &rcx_21[sx.q(rbx_8)], (rax_10 - rbx_8) * 2)
            rax_10 = var_60
        
        var_60 = rax_10 - rbx_8

int32_t rsi_2 = 1
char rax_15 = sub_140a32ae0(&var_68, u"Engine/", 1)
void* rbx_9 = *(arg1 + 0x10)
int32_t rax_17
int64_t rbx_10
int32_t rsi_3
int32_t rdi_4

if (rax_15 == 0)
    if (*(rbx_9 + 0x68) s<= 1)
        int64_t* rax_20 = sub_140b1a780(&var_48, sub_1425c0d90(rbx_9))
        
        if (rbx_9 + 0x60 != rax_20)
            int64_t rcx_29 = *(rbx_9 + 0x60)
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            *(rbx_9 + 0x60) = *rax_20
            *rax_20 = 0
            *(rbx_9 + 0x68) = rax_20[1].d
            *(rbx_9 + 0x6c) = *(rax_20 + 0xc)
            rax_20[1] = 0
        
        int64_t rcx_31 = var_48
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
    
    if (var_60 == 0)
        rdi_4 = 0
    else
        rdi_4 = var_60 - 1
    
    if (*(rbx_9 + 0x68) == 0 && rdi_4 != 0xffffffff)
        rsi_2 = 2
    
    var_58 = nullptr
    rax_17 = rdi_4 + rsi_2
    rsi_3 = *(rbx_9 + 0x68)
    rbx_10 = *(rbx_9 + 0x60)
else
    if (var_60 == 0)
        rdi_4 = 0
    else
        rdi_4 = var_60 - 1
    
    if (*(rbx_9 + 0x48) == 0 && rdi_4 != 0xffffffff)
        rsi_2 = 2
    
    var_58 = nullptr
    rax_17 = rdi_4 + rsi_2
    rsi_3 = *(rbx_9 + 0x48)
    rbx_10 = *(rbx_9 + 0x40)

var_50_1.d = rsi_3

if (rsi_3 != 0 || rax_17 != 0)
    sub_1405a4c70(&var_58, rsi_3 + rax_17, 0)
    memcpy(var_58, rbx_10, rsi_3 * 2)
else
    var_50_1:4.d = 0

sub_140a2cf70(&var_58, var_68, rdi_4)
int16_t* rcx_26 = var_68

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

rcx_36 = var_58
rdx_17 = var_50_1.d
var_68 = rcx_36
var_60 = rdx_17
int32_t var_5c_1 = var_50_1:4.d
goto label_1425c36b2
