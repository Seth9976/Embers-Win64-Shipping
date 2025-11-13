// 函数: sub_1406ad410
// 地址: 0x1406ad410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x34) == 1)
    return sub_1406aced0(arg1, arg2, arg3)

uint64_t r15
r15.b = 0
void var_78
sub_14068c240(&var_78, arg1)
int64_t r13 = arg1[5]
void* rdi = nullptr
int64_t r12 = arg1[6]
void* var_50
__builtin_memset(&var_50, 0, 0x18)
int128_t var_48

if (r13 != r12)
    r12 -= r13
    int64_t rbx_2 = r12 s>> 4
    void* rax_2 = sub_1406afec0(&var_50, rbx_2)
    void* rbx_4 = (rbx_2 << 4) + rax_2
    var_50 = rax_2
    var_48:8.q = rbx_4
    rdi = rax_2
    memmove(rax_2, r13, r12.d)
    var_48.q = rbx_4

int32_t* rbx_7 = (zx.q(*(arg2 + 0x30)) << 4) + arg1[0x10]
int32_t rax_3 = *rbx_7
int64_t* r13_1 = *(rbx_7 + 8)
int64_t rax_4 = *arg1
int64_t var_88 = rax_4

if (arg4 == 0 || *r13_1 != rax_4)
    r12.b = 1
else
    r12.b = 0

int32_t rax_5 = *(arg2 + 0x24)
int32_t rbp_1
void* rdx_3

if (rax_5 s< 0 || rax_5 s> arg4)
    if (arg4 s< *(arg2 + 0x20))
        if (r12.b != 0)
            rbp_1 = rax_3
            *rbx_7 = arg4 + 1
            *(rbx_7 + 8) = &var_88
            rdx_3 = *(arg2 + 0x10)
        else
            rbp_1 = rax_3
            rdx_3 = *(*(arg2 + 0x28) + 0x10)
        
        goto label_1406ad6ac
    
    if (arg3 == 0)
        char rax_8 = sub_1406ae3c0(arg1, *(*(arg2 + 0x28) + 0x10))
        r15 = zx.q(rax_8)
        
        if (rax_8 == 0)
            if (r12.b == 0)
                goto label_1406ad6bf
            
            sub_140693000(arg1, &var_78)
            rdi = var_50
            rbp_1 = rax_3
            *rbx_7 = arg4 + 1
            *(rbx_7 + 8) = &var_88
            rdx_3 = *(arg2 + 0x10)
            goto label_1406ad6ac
        
        rbp_1 = rax_3
    else if (r12.b == 0)
        if (arg4 s<= 1)
        label_1406ad682:
            rbp_1 = rax_3
            *rbx_7 = rbp_1
            *(rbx_7 + 8) = r13_1
            sub_140693000(arg1, &var_78)
            rdi = var_50
            goto label_1406ad6a5
        
    label_1406ad6bf:
        rbp_1 = rax_3
        sub_140693000(arg1, &var_78)
        rdi = var_50
    else
        *rbx_7 = arg4 + 1
        *(rbx_7 + 8) = &var_88
        char rax_11 = sub_1406ae3c0(arg1, *(arg2 + 0x10))
        r15 = zx.q(rax_11)
        
        if (rax_11 == 0)
            goto label_1406ad682
        
        rbp_1 = rax_3
else
    rbp_1 = rax_3
label_1406ad6a5:
    rdx_3 = *(*(arg2 + 0x28) + 0x10)
label_1406ad6ac:
    char rax_19 = sub_1406ae3c0(arg1, rdx_3)
    r15 = zx.q(rax_19)
    
    if (rax_19 == 0)
        sub_140693000(arg1, &var_78)
        rdi = var_50
*(rbx_7 + 8) = r13_1
*rbx_7 = rbp_1

if (rdi == 0)
    goto label_1406ad63b

void* rax_12 = rdi

if (((var_48:8.q - rdi) & 0xfffffffffffffff0) u< 0x1000)
label_1406ad636:
    j_sub_140a74f90(rdi)
label_1406ad63b:
    void* var_70
    
    if (var_70 == 0)
        return zx.q(r15.b)
    
    int64_t var_60
    
    if (((var_60 - var_70) & 0xfffffffffffffffc) u< 0x1000)
        j_sub_140a74f90(var_70)
        return zx.q(r15.b)
    
    void* rcx_7 = *(var_70 - 8)
    
    if (var_70 - rcx_7 - 8 u<= 0x1f)
        j_sub_140a74f90(rcx_7)
        return zx.q(r15.b)
else
    rdi = *(rdi - 8)
    
    if (rax_12 - rdi - 8 u<= 0x1f)
        goto label_1406ad636

_invalid_parameter_noinfo_noreturn()
noreturn
