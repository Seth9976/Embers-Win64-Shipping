// 函数: sub_141f395f0
// 地址: 0x141f395f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_141f4b550(arg1)
void var_80
int64_t* rax_2 = sub_141f38ab0(&var_80, nullptr, 0xff)
void* rbx = *rax_2
int64_t var_a0
sub_140d3a3a0(&var_a0, arg1)
*(rbx + 0x10) = var_a0
void* rcx_3 = *rax_2
int32_t r8 = rax_2[2].d
int64_t* rdx_1 = rax_2[1]
int64_t* rbx_1 = *(rcx_3 + 0x20)
int64_t* var_a8 = rbx_1

if (rbx_1 != 0)
    rbx_1[9].d += 1

sub_141f4a940(rcx_3, rdx_1, r8, 1)

if (arg1 + 0x9e0 != &var_a8)
    int64_t* rcx_4 = *(arg1 + 0x9e0)
    *(arg1 + 0x9e0) = rbx_1
    
    if (rcx_4 != 0)
        rcx_4[9].d -= 1
        
        if (rcx_4[9].d == 1)
            sub_140a2f6e0(rcx_4)
else if (rbx_1 != 0)
    rbx_1[9].d -= 1
    
    if (rbx_1[9].d == 1)
        sub_140a2f6e0(var_a8)

void* rax_5 = *(arg1 + 0x9e0)
void** var_30 = nullptr
int32_t var_24 = 4
int32_t i_2 = 1
void* var_50 = rax_5

if (rax_5 != 0)
    *(rax_5 + 0x48) += 1

void var_68
int64_t* rax_6 = sub_141f38930(&var_68, &var_50, 0xff)
void* rbx_2 = *rax_6
int64_t var_98
sub_140d3a3a0(&var_98, arg1)
*(rbx_2 + 0x10) = var_98
void* rcx_8 = *rax_6
int32_t r8_1 = rax_6[2].d
int64_t* rdx_4 = rax_6[1]
int64_t* rbx_3 = *(rcx_8 + 0x20)
int64_t* var_b0 = rbx_3
int32_t* rdi_3 = &rbx_3[9]

if (rbx_3 != 0)
    *rdi_3 += 1
    rbx_3 = var_b0

int64_t* result = sub_141f4a6e0(rcx_8, rdx_4, r8_1, 1)

if (arg2 != 0)
    int64_t* var_90
    *(*sub_1423c0d30(arg2, &var_90) + 0x4c) = 2
    int64_t* rcx_11 = var_90
    
    if (rcx_11 != 0)
        rcx_11[9].d -= 1
        
        if (rcx_11[9].d == 1)
            sub_140a2f6e0(rcx_11)
        
        rbx_3 = var_b0
    
    if (rbx_3 != 0)
        rbx_3[9].d += 1
        rbx_3 = var_b0
    
    int64_t* var_88
    int64_t* result_1 = *sub_1423c0d30(arg2, &var_88) + 0x18
    int64_t r14_1 = sx.q(result_1[5].d)
    int32_t rax_10 = (r14_1 + 1).d
    result_1[5].d = rax_10
    
    if (rax_10 s> *(result_1 + 0x2c))
        sub_14083a490(result_1, r14_1.d)
    
    result = result_1[4]
    
    if (result != 0)
        result_1 = result
    
    void* rcx_14 = &result_1[r14_1]
    
    if (rcx_14 == 0)
        goto label_141f397d7
    
    *rcx_14 = rbx_3
    
    if (rbx_3 != 0)
        *rdi_3 += 1
        rbx_3 = var_b0
    label_141f397d7:
        
        if (rbx_3 != 0)
            result = zx.q(*rdi_3)
            *rdi_3 -= 1
            rbx_3 = var_b0
            
            if (result.d == 1)
                result = sub_140a2f6e0(rbx_3)
    
    int64_t* rcx_16 = var_88
    
    if (rcx_16 != 0)
        result = zx.q(rcx_16[9].d)
        rcx_16[9].d -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(rcx_16)
        
        rbx_3 = var_b0

if (rbx_3 != 0)
    result = zx.q(*rdi_3)
    *rdi_3 -= 1
    
    if (result.d == 1)
        result = sub_140a2f6e0(var_b0)

void** rcx_19 = var_30
void** rbx_4 = &var_50
int32_t i_1 = i_2

if (rcx_19 != 0)
    rbx_4 = rcx_19

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_18 = *rbx_4
        
        if (rcx_18 != 0)
            result = zx.q(rcx_18[9].d)
            rcx_18[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_18)
        
        rbx_4 = &rbx_4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_19 = var_30

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_d8)
return result
