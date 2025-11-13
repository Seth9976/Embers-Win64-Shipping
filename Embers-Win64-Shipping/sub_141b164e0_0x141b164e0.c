// 函数: sub_141b164e0
// 地址: 0x141b164e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_78 = 0
int32_t rdx

if (rax_2 == 0x80000000)
    void* const rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = (*(rdx_1 + arg3)).d
else
    int32_t var_70_1 = 0
    rdx = rax_2

char result = sub_141a47350(arg1 + 0x48, rdx, &var_78)

if (result != 0)
    int64_t var_68
    sub_141aee540(arg1, &var_68, arg4 + 0x60)
    int32_t rax_3 = *(arg3 + 0x24)
    int64_t rdx_3
    
    if (rax_3 == 0x80000000)
        int64_t* rdx_4 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_4 = 4
        
        rdx_3 = *(rdx_4 + arg3)
    else
        int32_t var_70_2 = 0
        rdx_3 = rax_3.q
    
    int32_t zmm0_1 = sub_141a47d70(arg1, rdx_3)
    char rdi_1 = *(arg1 + 0xd8)
    int32_t rbx_1 = var_78
    char var_58
    char var_58_1 = var_58 & 0xfc
    int64_t* rax_4 = sub_140a82f30(0x10, 8)
    char result_1 = var_58_1 | 1
    int64_t* var_60 = rax_4
    int64_t* rcx_3 = &var_60
    
    if ((result_1 & 2) == 0)
        rcx_3 = rax_4
    
    *rcx_3 = &data_14302f4b8
    rcx_3[1].d = rbx_1
    int32_t var_3c_1 = zmm0_1
    int128_t var_50_1 = *(arg4 + 0x124)
    char var_38_1 = rdi_1
    int32_t var_40_1 = *(arg4 + 0x188)
    sub_141a285f0(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), var_68, 
        &var_60)
    result = result_1
    
    if ((result & 1) != 0)
        int64_t* rcx_7 = &var_60
        
        if ((result & 2) == 0)
            rcx_7 = var_60
        
        char var_58_3 = result & 0xfe
        result = (**rcx_7)(rcx_7, 0)
        
        if ((var_58_3 & 2) == 0)
            result = sub_140a74f90(var_60)

__security_check_cookie(rax_1 ^ &var_98)
return result
