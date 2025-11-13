// 函数: sub_1425c3710
// 地址: 0x1425c3710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg3
int32_t rdx = 0
int16_t* var_58 = nullptr
int32_t rcx = 0
int64_t var_50 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        rcx = var_50:4.d
        rdx = var_50.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_50.d = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, (rbx_1.d + 1) * 2)
    rdx = var_50.d
    rbx = arg3

void* rcx_4 = *(arg1 + 0x10)
int32_t rax_2 = *(rcx_4 + 0x18)
int32_t r8_2

if (rax_2 == 0)
    r8_2 = 0
else
    r8_2 = rax_2 - 1

int16_t* const r14 = &data_142d40450
int16_t* rax_3

if (rax_2 == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *(rcx_4 + 0x10)

int16_t* const rcx_5 = &data_142d40450

if (rdx != 0)
    rcx_5 = var_58

int32_t rax_4 = sub_140a546e0(rcx_5, rax_3, sx.q(r8_2))
int16_t* var_48
void arg_8
int16_t* rcx_50
int32_t rdx_19

if (rax_4 != 0)
    int16_t* r8_18 = &data_142d40450
    
    if (var_50.d != 0)
        r8_18 = var_58
    
    int32_t* rax_32 =
        sub_140960120(arg1 + 0x18, &arg_8, sub_1425bf990(*(arg1 + 0x10), &var_48, r8_18))
    char rax_33
    
    if (*rax_32 == 0xffffffff)
        int16_t* rdx_22 = &data_142d40450
        
        if (var_50.d != 0)
            rdx_22 = var_58
        
        rax_33 = sub_1425c26f0(*(arg1 + 0x10), rdx_22, rbx)
    
    if (*rax_32 != 0xffffffff || rax_33 == 0)
        rbx = 0
    else
        rbx = 1
    
    int16_t* rcx_49 = var_48
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    if (rbx == 0)
        rbx = 1
    else
        rdx_19 = var_50.d
        rcx_50 = var_58
    label_1425c3c67:
        
        if (rdx_19 != 0)
            r14 = rcx_50
        
        int64_t* rcx_51 = *(arg1 + 8)
        rbx = (*(*rcx_51 + 8))(rcx_51, r14, zx.q(arg3))
    
    int16_t* rcx_52 = var_58
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    return zx.q(rbx)

int16_t* const rdi_1 = &data_142d40450

if (var_50.d != rax_4)
    rdi_1 = var_58

int16_t* r15_1 = nullptr
int32_t rsi_1 = 0
var_48 = nullptr
int32_t r12_1 = 0
int64_t* var_40_1 = nullptr

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rdi_1[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_3.d + 1)
        r12_1 = var_40_1:4.d
        rsi_1 = var_40_1.d
        r15_1 = var_48
    
    rsi_1 += rbx_3.d + 1
    var_40_1.d = rsi_1
    
    if (rsi_1 s> r12_1)
        sub_140594770(&var_48)
        r12_1 = var_40_1:4.d
        rsi_1 = var_40_1.d
        r15_1 = var_48
    
    UnDecorator::getReferenceType(r15_1, rdi_1, (rbx_3.d + 1) * 2)

sub_140598750(arg1 + 0x18, &var_48)
int16_t* const rdx_8 = r15_1
*var_40_1 = r15_1
var_40_1[1].d = rsi_1
*(var_40_1 + 0xc) = r12_1
var_40_1[2].d = 0xffffffff

if (rsi_1 == 0)
    rdx_8 = &data_142d40450

int32_t rcx_10 = rsi_1 - 1

if (rsi_1 == 0)
    rcx_10 = 0

sub_14059a6d0(arg1 + 0x18, &arg_8, sub_1405969c0(rcx_10, rdx_8), var_40_1, var_48.d, nullptr)
int32_t r15_2 = 0x7fffffff
int32_t rdx_11 = 0x7fffffff
int32_t rcx_12 = *(*(arg1 + 0x10) + 0x18)
int32_t rdi_2 = rcx_12 - 1

if (rcx_12 == 0)
    rdi_2 = 0

if (sx.q(rdi_2) + 0x7fffffff s<= 0x7fffffff)
    rdx_11 = rdi_2 + 0x7fffffff

int32_t rax_10 = var_50.d
int32_t rcx_13 = rax_10 - 1

if (rax_10 == 0)
    rcx_13 = 0

int32_t r10_1

if (rdx_11 s>= 0)
    r10_1 = rcx_13
    
    if (rdx_11 s< rcx_13)
        r10_1 = rdx_11
else
    r10_1 = 0

int32_t rcx_14 = rcx_13 - r10_1
int32_t rbx_6 = rax_10 - 1

if (rax_10 == 0)
    rbx_6 = 0

int32_t rbx_7 = rbx_6 - r10_1

if (rcx_14 s>= 0)
    if (rcx_14 s< rbx_7)
        rbx_7 = rcx_14
    
    if (rbx_7 != 0)
        int32_t rcx_16 = rax_10 - rbx_7
        
        if (rcx_16 != r10_1)
            int16_t* r9_2 = var_58
            memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(rbx_7 + r10_1)], (rcx_16 - r10_1) * 2)
            rax_10 = var_50.d
        
        rax_10 -= rbx_7
        var_50.d = rax_10

int32_t rbx_8 = rax_10 - 1

if (rax_10 == 0)
    rbx_8 = 0

if (rdi_2 s>= 0)
    if (rdi_2 s< rbx_8)
        rbx_8 = rdi_2
    
    if (rbx_8 != 0)
        if (rax_10 != rbx_8)
            int16_t* rcx_22 = var_58
            memmove(rcx_22, &rcx_22[sx.q(rbx_8)], (rax_10 - rbx_8) * 2)
            rax_10 = var_50.d
        
        var_50.d = rax_10 - rbx_8

int32_t rdi_3 = 1
char rax_15 = sub_140a32ae0(&var_58, u"Engine/", 1)
int32_t rax_16

if (rax_15 == 0)
    int16_t* rcx_24 = &data_142d40450
    
    if (var_50.d != 0)
        rcx_24 = var_58
    
    rax_16 = sub_140a54510(rcx_24, u"Engine")

int32_t rcx_40
int32_t rbx_14
int64_t rsi_4
int32_t rdi_4

if (rax_15 != 0 || rax_16 == 0)
    int32_t rbx_15 = var_50.d
    void* rax_30 = *(arg1 + 0x10)
    
    if (rbx_15 == 0)
        rbx_14 = 0
    else
        rbx_14 = rbx_15 - 1
    
    if (*(rax_30 + 0x48) == 0 && rbx_14 != 0xffffffff)
        rdi_3 = 2
    
    var_48 = nullptr
    rcx_40 = rbx_14 + rdi_3
    rdi_4 = *(rax_30 + 0x48)
    rsi_4 = *(rax_30 + 0x40)
else
    void* rsi_2 = *(arg1 + 0x10)
    
    if (*(rsi_2 + 0x28) s<= 1)
        sub_140a2e390(&var_48, u"%s/", u"Embers")
        
        if (rsi_2 + 0x20 == &var_48)
            int16_t* rcx_27 = var_48
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        else
            int16_t* rcx_26 = *(rsi_2 + 0x20)
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            *(rsi_2 + 0x20) = var_48
            *(rsi_2 + 0x28) = var_40_1.d
            *(rsi_2 + 0x2c) = var_40_1:4.d
            var_40_1 = nullptr
            var_48 = nullptr
    
    int32_t rax_20 = *(rsi_2 + 0x28)
    int32_t rsi_3 = rax_20 - 1
    
    if (rax_20 == 0)
        rsi_3 = 0
    
    if (sx.q(rsi_3) + 0x7fffffff s<= 0x7fffffff)
        r15_2 = rsi_3 + 0x7fffffff
    
    int32_t rax_23 = var_50.d
    int32_t rcx_28 = rax_23 - 1
    
    if (rax_23 == 0)
        rcx_28 = 0
    
    int32_t r10_2
    
    if (r15_2 s>= 0)
        r10_2 = rcx_28
        
        if (r15_2 s< rcx_28)
            r10_2 = r15_2
    else
        r10_2 = 0
    
    int32_t rcx_29 = rcx_28 - r10_2
    int32_t rbx_10 = rax_23 - 1
    
    if (rax_23 == 0)
        rbx_10 = 0
    
    int32_t rbx_11 = rbx_10 - r10_2
    
    if (rcx_29 s>= 0)
        if (rcx_29 s< rbx_11)
            rbx_11 = rcx_29
        
        if (rbx_11 != 0)
            int32_t rcx_31 = rax_23 - rbx_11
            
            if (rcx_31 != r10_2)
                int16_t* r9_3 = var_58
                memmove(&r9_3[sx.q(r10_2)], &r9_3[sx.q(rbx_11 + r10_2)], (rcx_31 - r10_2) * 2)
                rax_23 = var_50.d
            
            rax_23 -= rbx_11
            var_50.d = rax_23
    
    int32_t rbx_12 = rax_23 - 1
    
    if (rax_23 == 0)
        rbx_12 = 0
    
    if (rsi_3 s>= 0)
        if (rsi_3 s< rbx_12)
            rbx_12 = rsi_3
        
        if (rbx_12 != 0)
            if (rax_23 != rbx_12)
                int16_t* rcx_37 = var_58
                memmove(rcx_37, &rcx_37[sx.q(rbx_12)], (rax_23 - rbx_12) * 2)
                rax_23 = var_50.d
            
            var_50.d = rax_23 - rbx_12
    
    void* rax_28 = sub_1425c0d90(*(arg1 + 0x10))
    int32_t rbx_13 = var_50.d
    
    if (rbx_13 == 0)
        rbx_14 = 0
    else
        rbx_14 = rbx_13 - 1
    
    if (*(rax_28 + 8) == 0 && rbx_14 != 0xffffffff)
        rdi_3 = 2
    
    var_48 = nullptr
    rcx_40 = rbx_14 + rdi_3
    rdi_4 = *(rax_28 + 8)
    rsi_4 = *rax_28

var_40_1.d = rdi_4

if (rdi_4 != 0 || rcx_40 != 0)
    sub_1405a4c70(&var_48, rdi_4 + rcx_40, 0)
    memcpy(var_48, rsi_4, rdi_4 * 2)
else
    var_40_1:4.d = 0

sub_140a2cf70(&var_48, var_58, rbx_14)
int16_t* rcx_44 = var_58

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

rcx_50 = var_48
rdx_19 = var_40_1.d
var_58 = rcx_50
var_50.d = rdx_19
var_50:4.d = var_40_1:4.d
goto label_1425c3c67
