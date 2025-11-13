// 函数: sub_140bb9b30
// 地址: 0x140bb9b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || (*(arg1 + 0x29) & 1) != 0)
    return 

int64_t* rcx = *(arg1 + 8)
int64_t rdx = *rcx

if (rdx + arg3 u<= rcx[1])
    memcpy(arg2, rdx, arg3.d)
    int64_t* rax_2 = *(arg1 + 8)
    *rax_2 += arg3
    return 

*(arg1 + 0xd8) += rdx - rcx[2]
__builtin_memset(rcx, 0, 0x18)
int64_t rax_3 = sub_140bbce60(arg1)

if (*(arg1 + 0xd8) + arg3 s> rax_3)
    void var_40
    sub_140a96170(&var_40)
    void var_58
    sub_140a96170(&var_58)
    sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", SerializationOutOfBoundsErrorMessage", 
        &var_40, &data_143de5780)
    sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", 
        SerializationOutOfBoundsErrorMessageCaption", &var_58, &data_143de5780)
    sub_140b21610(0, &var_40, &var_58)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rax_6 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rbp_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rbp_1))

int64_t r14_1 = *(arg1 + 0xd8)
int64_t r12_1 = *(arg1 + 0xe0)
int64_t rax_12

if (r14_1 + arg3 s> r12_1)
    rax_12 = *(arg1 + 0xe8)

uint64_t rbp_3

if (r14_1 + arg3 s<= r12_1 || r14_1 s>= rax_12)
    rbp_3 = arg3
label_140bb9da1:
    
    if (rbp_3 == 0)
        goto label_140bb9dfc
    
    if (sub_140bb0fd0(arg1, r14_1, rbp_3, 1, 0).b == 0)
        sub_140bbdcf0(arg1, zx.o(0))
    
    if ((*(arg1 + 0x29) & 1) == 0)
        memcpy(arg3 + arg2 - rbp_3, *(arg1 + 0xc8) - *(arg1 + 0xe0) + r14_1, rbp_3.d)
    label_140bb9dfc:
        int64_t rdx_15 = *(arg1 + 0xd8) + arg3
        
        if (rdx_15 s< *(arg1 + 0xe0) || rdx_15 s>= *(arg1 + 0xe8))
            __builtin_memset(*(arg1 + 8), 0, 0x18)
            *(arg1 + 0xd8) = rdx_15
        else
            *(*(arg1 + 8) + 0x10) = *(arg1 + 0xc8)
            **(arg1 + 8) = *(arg1 + 0xc8) - *(arg1 + 0xe0) + rdx_15
            *(*(arg1 + 8) + 8) = *(arg1 + 0xe8) - *(arg1 + 0xe0) + *(arg1 + 0xc8)
            *(arg1 + 0xd8) = *(arg1 + 0xe0)
else
    int64_t rdx_6 = *(arg1 + 0xc8)
    uint64_t rax_13 = rax_12 - r14_1
    uint64_t rbx_3 = arg3
    
    if (r14_1 s>= r12_1)
        if (rax_13 s<= arg3)
            rbx_3 = rax_13
        
        memcpy(arg2, rdx_6 + r14_1 - r12_1, rbx_3.d)
        r14_1 = *(arg1 + 0xe8)
        rbp_3 = arg3 - rbx_3
        goto label_140bb9da1
    
    uint64_t r12_2 = r12_1 - r14_1
    int64_t r13_1 = r14_1
    uint64_t rax_14 = rax_13 - r12_2
    uint64_t rbx_4 = rbx_3 - r12_2
    
    if (rax_14 s<= rbx_4)
        rbx_4 = rax_14
    
    memcpy(r12_2 + arg2, rdx_6, rbx_4.d)
    r14_1 = *(arg1 + 0xe8)
    rbp_3 = arg3 - rbx_4 - r12_2
    
    if (r12_2 == 0)
        goto label_140bb9da1
    
    if (sub_140bb0fd0(arg1, r13_1, r12_2, 1, 0).b == 0)
        sub_140bbdcf0(arg1, zx.o(0))
    
    if ((*(arg1 + 0x29) & 1) == 0)
        memcpy(arg2, r13_1 - *(arg1 + 0xe0) + *(arg1 + 0xc8), r12_2.d)
        goto label_140bb9da1
