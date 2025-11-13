// 函数: sub_141019460
// 地址: 0x141019460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* var_50 = arg1
void** const var_58 = &data_142da2668
int64_t (* var_78)(int64_t* arg1, int64_t* arg2) = sub_141015fe0
void*** var_68 = nullptr
AcquireSRWLockExclusive(arg1 + 0xb8)
int32_t var_98
sub_141021390(arg1 + 0x60, &var_98, arg3)
int64_t rax_2 = sx.q(var_98)
void* const rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_2 * 0x70 + *(arg1 + 0x60)

int64_t* rbx = rax_4 + 0x60

if (rax_4 == 0)
    rbx = nullptr

int64_t* rbx_1

if (rbx == 0)
    int64_t* rax_5 = j_sub_140a82f30(0x30)
    int64_t* rbx_2 = rax_5
    
    if (rax_5 == 0)
        rbx_2 = nullptr
    else
        *rax_5 = *(arg1 + 8)
        int32_t rdx_2 = (1 << (data_1439c7a34).b) - 1
        rax_5[1].d = rdx_2
        *(rax_5 + 0xc) = rdx_2
        rax_5[2] = 0
        rax_5[3] = 0
        InitializeSRWLock(&rax_5[4])
        rbx_2[5].b = 0
    
    int64_t* var_90 = rbx_2
    sub_141000e20(arg1 + 0x60, arg3, &var_90)
    rbx_1 = var_90
    ReleaseSRWLockExclusive(arg1 + 0xb8)
    void*** rcx_8 = &var_58
    int64_t* var_88 = rbx_1
    
    if (var_68 != 0)
        rcx_8 = var_68
    
    var_78((*rcx_8)[1](rcx_8), &var_88, arg3)
else
    rbx_1 = *rbx
    ReleaseSRWLockExclusive(arg1 + 0xb8)

if (var_78 != 0)
    void** const* rcx_10 = &var_58
    
    if (var_68 != 0)
        rcx_10 = var_68
    
    (*rcx_10)[2](rcx_10)

int64_t rax_12

if (rbx_1 != 0)
    if (rbx_1[5].b == 0)
        rax_12 = sub_141026e90(rbx_1)
    else
        rax_12 = rbx_1[2]

void*** result

if (rbx_1 == 0 || rax_12 == 0)
    result = nullptr
else
    result = j_sub_140a82f30(0x28)
    
    if (result == 0)
        result = nullptr
    else
        *result = &data_142d3ff08
        result[1].d = 0
        *result = &data_142efcaf8
        *(result + 0xc) = 0
        result[2].w = 0x100
        result[3] = arg2
        
        if (arg2 != 0)
            *(arg2 + 8) += 1
        
        result[4] = rbx_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
