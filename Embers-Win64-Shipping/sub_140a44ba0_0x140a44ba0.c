// 函数: sub_140a44ba0
// 地址: 0x140a44ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = nullptr
int32_t rdi = 0
int32_t r14 = 0
int16_t* var_a8 = nullptr
int64_t var_a0 = 0
int64_t* r13 = arg1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_a8, rbx_1.d + 1)
        r14 = var_a0:4.d
        rdi = var_a0.d
        r15 = var_a8
    
    rdi += rbx_1.d + 1
    var_a0.d = rdi
    
    if (rdi s> r14)
        sub_140594770(&var_a8)
        r14 = var_a0:4.d
        rdi = var_a0.d
        r15 = var_a8
    
    memcpy(r15, arg3, (rbx_1.d + 1) * 2)

int64_t rbx_3 = -1

do
    rbx_3 += 1
while (arg4[rbx_3] != 0)

int32_t rax_2

if (rdi == 0)
    rax_2 = rdi + 2

if (rdi != 0 || (rbx_3 + 1).d == 0)
    rax_2 = 1

int16_t* var_58 = r15
int32_t rdx_4 = rdi + rax_2 + rbx_3.d
int32_t var_4c = r14

if (rdx_4 s> r14)
    sub_1405947f0(&var_58, rdx_4)

sub_140a2cf70(&var_58, arg4, rbx_3.d)
int16_t* const r8_3 = &data_142d40450
int64_t* var_78 = nullptr

if (rdi != 0)
    r8_3 = var_58

int32_t i_5 = 0
(*(*r13 + 0x78))(r13, &var_78, r8_3, zx.q(arg5), arg6)
int32_t r12_1 = 0
int16_t* var_98
int16_t** arg_18

if (i_5 s> 0)
    arg_18 = nullptr
    
    do
        int64_t* r13_1 = var_78
        int16_t* r15_1 = nullptr
        var_a8 = nullptr
        int32_t rdi_1 = 0
        int64_t var_a0_1 = 0
        int32_t r14_1 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            int64_t rbx_4 = -1
            
            do
                rbx_4 += 1
            while (arg3[rbx_4] != 0)
            
            if (rbx_4.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_4.d + 1)
                r14_1 = var_a0_1:4.d
                rdi_1 = var_a0_1.d
                r15_1 = var_a8
            
            rdi_1 += rbx_4.d + 1
            var_a0_1.d = rdi_1
            
            if (rdi_1 s> r14_1)
                sub_140594770(&var_a8)
                r14_1 = var_a0_1:4.d
                rdi_1 = var_a0_1.d
                r15_1 = var_a8
            
            memcpy(r15_1, arg3, (rbx_4.d + 1) * 2)
        
        int32_t rax_5 = *(arg_18 + r13_1 + 8)
        int32_t rbx_6 = rax_5 - 1
        
        if (rax_5 == 0)
            rbx_6 = 0
        
        int32_t rax_7
        
        if (rdi_1 == 0)
            rax_7 = rdi_1 + 2
        
        if (rdi_1 != 0 || rbx_6 == 0xffffffff)
            rax_7 = 1
        
        var_a8 = nullptr
        int32_t rdx_11 = rbx_6 + rdi_1 + rax_7
        var_98 = r15_1
        int64_t var_90
        var_90.d = rdi_1
        var_90:4.d = r14_1
        int64_t var_a0_2 = 0
        
        if (rdx_11 s> r14_1)
            sub_1405947f0(&var_98, rdx_11)
        
        sub_140a2cf70(&var_98, *(arg_18 + r13_1), rbx_6)
        int64_t rbx_7 = sx.q(arg2[1].d)
        int32_t rax_8 = (rbx_7 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_15 = (rbx_7 << 4) + *arg2
        *rcx_15 = 0
        *rcx_15 = var_98
        var_98 = nullptr
        rcx_15[1].d = var_90.d
        *(rcx_15 + 0xc) = var_90:4.d
        int16_t* rcx_16 = var_98
        var_90 = 0
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        r12_1 += 1
        arg_18 = &arg_18[2]
    while (r12_1 s< i_5)
    
    r13 = arg1

int16_t* r15_2 = nullptr
int32_t rdi_4 = 0
__builtin_memset(&var_98, 0, 0x1c)
int32_t r14_2 = 0
int64_t var_90_1
int32_t rax_12

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_8 = -1
    
    do
        rbx_8 += 1
    while (arg3[rbx_8] != 0)
    
    if (rbx_8.d + 1 s> 0)
        sub_1405947f0(&var_98, rbx_8.d + 1)
        r14_2 = var_90_1:4.d
        rdi_4 = var_90_1.d
        r15_2 = var_98
    
    rdi_4 += rbx_8.d + 1
    var_90_1.d = rdi_4
    
    if (rdi_4 s> r14_2)
        sub_140594770(&var_98)
        r14_2 = var_90_1:4.d
        rdi_4 = var_90_1.d
        r15_2 = var_98
    
    memcpy(r15_2, arg3, (rbx_8.d + 1) * 2)
    rax_12 = 2

if (arg3 == 0 || *arg3 == 0 || rdi_4 == 0)
    rax_12 = 3

int32_t rdx_17 = rdi_4 + rax_12
int16_t* var_68 = r15_2
int32_t var_5c = r14_2

if (rdx_17 s> r14_2)
    sub_1405947f0(&var_68, rdx_17)

sub_140a2cf70(&var_68, &data_142d6bbe8, 1)
int16_t* r8_9 = &data_142d40450

if (rdi_4 != 0)
    r8_9 = var_68

int16_t** var_88
int64_t result = (*(*r13 + 0x78))(r13, &var_88, r8_9, 0, 1)
int32_t i_4
int32_t i_2 = i_4
int32_t r12_2 = 0

if (i_2 s> 0)
    int64_t r13_3 = 0
    
    do
        int16_t** rax_14 = var_88
        int16_t* r15_3 = nullptr
        arg_18 = rax_14
        int32_t rdi_5 = 0
        var_a8 = nullptr
        int32_t r14_3 = 0
        int64_t var_a0_3 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            int64_t rbx_10 = -1
            
            do
                rbx_10 += 1
            while (arg3[rbx_10] != 0)
            
            if (rbx_10.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_10.d + 1)
                r14_3 = var_a0_3:4.d
                rdi_5 = var_a0_3.d
                r15_3 = var_a8
            
            rdi_5 += rbx_10.d + 1
            var_a0_3.d = rdi_5
            
            if (rdi_5 s> r14_3)
                sub_140594770(&var_a8)
                r14_3 = var_a0_3:4.d
                rdi_5 = var_a0_3.d
                r15_3 = var_a8
            
            memcpy(r15_3, arg3, (rbx_10.d + 1) * 2)
            rax_14 = arg_18
        
        int32_t rax_15 = *(rax_14 + r13_3 + 8)
        int32_t rbx_12 = rax_15 - 1
        
        if (rax_15 == 0)
            rbx_12 = 0
        
        int32_t rax_17
        
        if (rdi_5 == 0)
            rax_17 = rdi_5 + 2
        
        if (rdi_5 != 0 || rbx_12 == 0xffffffff)
            rax_17 = 1
        
        var_98 = r15_3
        int32_t rdx_23 = rax_17 + rdi_5 + rbx_12
        var_a8 = nullptr
        var_90_1.d = rdi_5
        var_90_1:4.d = r14_3
        int64_t var_a0_4 = 0
        
        if (rdx_23 s> r14_3)
            sub_1405947f0(&var_98, rdx_23)
        
        sub_140a2cf70(&var_98, *(arg_18 + r13_3), rbx_12)
        int16_t* r8_13 = &data_142d40450
        
        if (var_90_1.d != 0)
            r8_13 = var_98
        
        result = sub_140a44ba0(arg1, arg2, r8_13, arg4, arg5, arg6)
        int16_t* rcx_29 = var_98
        
        if (rcx_29 != 0)
            result = sub_140a74f90(rcx_29)
        
        i_2 = i_4
        r12_2 += 1
        r13_3 += 0x10
    while (r12_2 s< i_2)

int16_t* rcx_30 = var_68

if (rcx_30 != 0)
    result = sub_140a74f90(rcx_30)
    i_2 = i_4

int16_t** rbx_13 = var_88

if (i_2 != 0)
    int32_t i
    
    do
        int16_t* rcx_31 = *rbx_13
        
        if (rcx_31 != 0)
            result = sub_140a74f90(rcx_31)
        
        rbx_13 = &rbx_13[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_13 = var_88

if (rbx_13 != 0)
    result = sub_140a74f90(rbx_13)

int32_t i_3 = i_5
int64_t* rbx_14 = var_78

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_33 = *rbx_14
        
        if (rcx_33 != 0)
            result = sub_140a74f90(rcx_33)
        
        rbx_14 = &rbx_14[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_14 = var_78

if (rbx_14 != 0)
    result = sub_140a74f90(rbx_14)

int16_t* rcx_35 = var_58

if (rcx_35 == 0)
    return result

return sub_140a74f90(rcx_35)
