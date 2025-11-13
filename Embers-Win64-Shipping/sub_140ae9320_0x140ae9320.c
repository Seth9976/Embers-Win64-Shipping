// 函数: sub_140ae9320
// 地址: 0x140ae9320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

char result = sub_140b1f370(&var_58, rdx, 0, 0)

if (result != 0)
    int64_t var_48
    int64_t var_38
    int64_t var_20
    
    if (arg1[0x1b] != 0)
        var_48 = 0
        int64_t var_40_1 = 0
        sub_140596d10(&var_38, arg2)
        char var_28_1 = 0
        sub_140596d10(&var_20, &var_48)
        int64_t rcx_3 = var_48
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        sub_140ae92d0(arg1[0x1b] + 0x60, &var_38)
        sub_140aebba0(arg1[0x1b], &var_58)
    
    var_48 = 0
    int64_t var_40_2 = 0
    sub_140596d10(&var_38, arg2)
    char var_28_2 = 0
    sub_140596d10(&var_20, &var_48)
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg1[0x16].d += 1
    int32_t arg_10 = arg1[0x16].d
    sub_140ae4830(&arg1[0xc], &arg_10, &var_38)
    int64_t rcx_11 = var_20
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result = sub_140aebba0(arg1, &var_58)
    *(arg1 + 0x51) = 1

int64_t rcx_14 = var_58

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
