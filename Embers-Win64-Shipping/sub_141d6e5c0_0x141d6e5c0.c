// 函数: sub_141d6e5c0
// 地址: 0x141d6e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = arg2[1]
uint128_t var_48 = *arg2
uint64_t var_28 = arg2[2].q
int128_t var_38 = zmm1
sub_141a6c610(arg1, &var_48, arg3, arg4)
int64_t var_108
sub_141d65a60(&var_108)
sub_141d6d480(arg1, &var_108)
int16_t* const rbx = &data_142d40450
int16_t* var_d8
int32_t var_d0
int32_t rax_1

if (arg1[0x133].b != 0)
    int16_t* const rdx_2 = &data_142d40450
    
    if (var_d0 != 0)
        rdx_2 = var_d8
    
    int16_t* const rcx_2
    
    if (arg1[0x123].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = arg1[0x122]
    
    rax_1 = sub_140a54510(rcx_2, rdx_2)

if (arg1[0x133].b == 0 || rax_1 != 0)
    if (var_d0 != 0)
        rbx = var_d8
    
    sub_140b44040(0, u"%s", rbx)

int32_t result = &var_108
int64_t var_a8
int64_t var_80

if (&var_108 != &arg1[0x11c])
    sub_141d6b370(&arg1[0x11c])
    sub_140596d10(&arg1[0x11c], &var_108)
    int128_t var_f8
    *(arg1 + 0x8f0) = var_f8
    int128_t var_e8
    *(arg1 + 0x900) = var_e8
    sub_140596d10(&arg1[0x122], &var_d8)
    int128_t var_c8
    *(arg1 + 0x920) = var_c8
    int128_t var_b8
    *(arg1 + 0x930) = var_b8
    sub_140596d10(&arg1[0x128], &var_a8)
    arg1[0x12e] = 0
    arg1[0x12a].d = 0xffffffff
    *(arg1 + 0x954) = 0
    __builtin_memset(&arg1[0x12c], 0, 0x14)
    int64_t arg_8 = 0
    
    if (*(arg1 + 0x974) s<= 0xffffffff)
        sub_1405947f0(&arg1[0x12d], 0)
    
    int16_t* rax_2 = arg1[0x12d]
    
    if (rax_2 != 0)
        *rax_2 = 0
    
    int64_t var_98
    arg1[0x12a] = var_98
    int32_t var_90
    arg1[0x12b].d = var_90
    int64_t var_88
    arg1[0x12c] = var_88
    sub_140597df0(&arg1[0x12d], &var_80)
    int64_t var_70
    arg1[0x12f] = var_70
    int32_t var_68
    arg1[0x130].d = var_68
    int64_t var_60
    arg1[0x131] = var_60
    int32_t result_1
    result = result_1
    arg1[0x132].d = result
    arg1[0x133].b = 1

int64_t rcx_9 = var_80

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_a8

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int16_t* rcx_11 = var_d8

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_108

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
