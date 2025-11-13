// 函数: sub_1421380b0
// 地址: 0x1421380b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x11)
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
int32_t i_2 = arg2[1].d
void* rdi = *arg2
void* r14 = arg1 + 0x18
*(r14 + 8) = i_2

if (i_2 != 0)
    sub_1405a4be0(r14, i_2, 0)
    int64_t* rbx_1 = *r14
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    r14 = arg1 + 0x18
else
    *(r14 + 0xc) = 0

bool cond:0 = arg2[8].b != 0
void* rdi_1 = &arg2[6]
int64_t var_48 = 0
int64_t var_40 = 0

if (not(cond:0))
    rdi_1 = &var_48

*(arg1 + 0x28) = 0
int32_t i_3 = *(rdi_1 + 8)
int64_t* rdi_2 = *rdi_1
*(arg1 + 0x30) = i_3

if (i_3 != 0)
    sub_1405a4be0(arg1 + 0x28, i_3, 0)
    int64_t* rbx_2 = *(arg1 + 0x28)
    int32_t i_1
    
    do
        *rbx_2 = 0
        int32_t rsi_2 = rdi_2[1].d
        int64_t r15_2 = *rdi_2
        rbx_2[1].d = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rbx_2, rsi_2, 0)
            memcpy(*rbx_2, r15_2, rsi_2 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rdi_2 = &rdi_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    r14 = arg1 + 0x18
else
    *(arg1 + 0x34) = 0

int64_t arg_8 = 0
void* const rdx_6

if (arg2[5].b == 0)
    rdx_6 = nullptr
else
    rdx_6 = arg2[4]

sub_140d3a3a0(arg1 + 0x38, rdx_6)
sub_140d3a3a0(arg1 + 0x40, arg3)
*(arg1 + 0x48) = 0xffffffff
__builtin_memset(arg1 + 0x4c, 0, 0x28)

if (&arg2[2] != arg1 + 0x68 && arg2[3].d != 0)
    int64_t* rcx_9 = arg2[2]
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x40))(rcx_9)

int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 2)
int32_t rax_2 = var_50 + 2
var_50 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, &data_142d4056c, 4)
int32_t rbx_3 = *(arg1 + 0x20)
int32_t rbx_4 = rbx_3 - 1

if (rbx_3 - 1 s>= 0)
    int64_t r15_4 = sx.q(rbx_4) << 4
    int64_t rsi_3 = r15_4
    int64_t rbp_1 = sx.q(rbx_4 + 1) << 4
    int32_t temp3_1
    
    do
        int64_t* rdi_4 = *r14 + r15_4
        _DeleteExceptionPtr(rdi_4)
        sub_140a32a50(rdi_4, &var_58, 1)
        sub_140a236f0(rdi_4, &var_58, 1)
        
        if (sub_140a2fba0(rdi_4, &var_58, 1) == 0)
            sub_140a2f8e0(rdi_4, &var_58, 1)
        
        _DeleteExceptionPtr(rdi_4)
        int32_t rax_5 = rdi_4[1].d
        int32_t rcx_19 = rax_5 - 1
        
        if (rax_5 == 0)
            rcx_19 = 0
        
        if (rcx_19 == 0)
            int64_t rcx_20 = *(rsi_3 + *r14)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int32_t rax_8 = *(r14 + 8)
            int32_t rcx_22 = rax_8 - rbx_4
            
            if (rcx_22 != 1)
                int64_t rax_7 = *r14
                memmove(rax_7 + rsi_3, rax_7 + rbp_1, (rcx_22 - 1) << 4)
                rax_8 = *(r14 + 8)
            
            *(r14 + 8) = rax_8 - 1
        
        rbp_1 -= 0x10
        rsi_3 -= 0x10
        r15_4 -= 0x10
        temp3_1 = rbx_4
        rbx_4 -= 1
    while (temp3_1 - 1 s>= 0)

int64_t rcx_25 = var_58

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg1
