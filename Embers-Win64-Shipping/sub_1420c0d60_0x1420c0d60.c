// 函数: sub_1420c0d60
// 地址: 0x1420c0d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* rdi_1 = *(arg2 + 0x78)
int32_t rdx

if (arg3 s>= 0)
    rdx = arg1[1].d

if (arg3 s< 0 || arg3 s>= rdx)
    int128_t var_38 = *(arg2 + 0x10)
    int64_t var_28
    int64_t* rax_6 = sub_140cbe000(&var_38, &var_28)
    int16_t* const r15_1 = &data_142d40450
    int16_t* const r12_1
    
    if (rax_6[1].d == 0)
        r12_1 = &data_142d40450
    else
        r12_1 = *rax_6
    
    int32_t rbx_2 = arg1[1].d
    int64_t var_48
    sub_140b63b70(arg2 + 0x28, &var_48)
    int16_t* const var_60_1 = r12_1
    int32_t var_68_1 = rbx_2
    int16_t* var_58
    sub_140a2e390(&var_58, Attempted to access index %d from array '%s' of length %d in '%s'!", 
        zx.q(arg3))
    data_143f47de0
    int32_t var_50
    
    if (var_50 != 0)
        r15_1 = var_58
    
    sub_140d23f50(r15_1, 3)
    int16_t* rcx_8 = var_58
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_28
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (not(test_bit(zx.q(rdi_1[8].d), 9)))
        (*(*rdi_1 + 0xf0))(rdi_1, arg4)
    else
        memset(arg4, 0, sx.q(*(rdi_1 + 0x3c) * rdi_1[7].d))
else if (rdx != 0)
    void* rax_3 = *arg1
    
    if ((not.b((*(arg2 + 0x80)).b) & 1) == 0 && (rax_3.b & 1) != 0)
        rax_3 = (rax_3 s>> 1) + arg1
    
    (*(*rdi_1 + 0xd8))(rdi_1, arg4, sx.q(*(rdi_1 + 0x3c) * arg3) + rax_3)
else
    (*(*rdi_1 + 0xd8))(rdi_1, arg4, 0)
