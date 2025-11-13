// 函数: sub_1406413c0
// 地址: 0x1406413c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
sub_140b68140(&var_88, &data_143f024b8)
int64_t var_80

if (arg1 != &var_80)
    int32_t r8 = *(arg1 + 0xc)
    int64_t r15_1 = var_80
    int32_t var_78
    arg1[1].d = var_78
    
    if (var_78 != 0 || r8 != 0)
        sub_1405a4c70(arg1, var_78, r8)
        memcpy(*arg1, r15_1, var_78 * 2)
    else
        *(arg1 + 0xc) = 0

int64_t var_70

if (arg2 != &var_70)
    int32_t r8_3 = *(arg2 + 0xc)
    int64_t r14_1 = var_70
    int32_t var_68
    arg2[1].d = var_68
    
    if (var_68 != 0 || r8_3 != 0)
        sub_1405a4c70(arg2, var_68, r8_3)
        memcpy(*arg2, r14_1, var_68 * 2)
    else
        *(arg2 + 0xc) = 0

int64_t var_50

if (arg3 != &var_50)
    int32_t r8_6 = *(arg3 + 0xc)
    int64_t rbp_3 = var_50
    int32_t var_48
    arg3[1].d = var_48
    
    if (var_48 != 0 || r8_6 != 0)
        sub_1405a4c70(arg3, var_48, r8_6)
        memcpy(*arg3, rbp_3, var_48 * 2)
    else
        *(arg3 + 0xc) = 0

int64_t var_40
int64_t* result = &var_40

if (arg4 != &var_40)
    int32_t r8_9 = *(arg4 + 0xc)
    int64_t rsi_2 = var_40
    int32_t var_38
    arg4[1].d = var_38
    
    if (var_38 != 0 || r8_9 != 0)
        sub_1405a4c70(arg4, var_38, r8_9)
        result = memcpy(*arg4, rsi_2, var_38 * 2)
    else
        *(arg4 + 0xc) = 0

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t rcx_10 = var_40

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_50

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t var_60

if (var_60 != 0)
    result = sub_140a74f90(var_60)

int64_t rcx_13 = var_70

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_80

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
