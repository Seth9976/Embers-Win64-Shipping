// 函数: sub_141b16310
// 地址: 0x141b16310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_88 = 0
int64_t rdx

if (rax_2 == 0x80000000)
    int64_t* rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = *(rdx_1 + arg3)
else
    int32_t var_80_1 = 0
    rdx = rax_2.q

char result
int32_t zmm6
int32_t zmm7
result, zmm6, zmm7 = sub_141a467f0(arg1 + 0x48, rdx, &var_88)

if (result != 0)
    int32_t var_28_1 = zmm6
    int32_t var_38_1 = zmm7
    int64_t var_78
    sub_141aee7a0(arg1, &var_78, arg4 + 0x60)
    int32_t rax_3 = *(arg3 + 0x24)
    int64_t rdx_3
    
    if (rax_3 == 0x80000000)
        int64_t* rdx_4 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_4 = 4
        
        rdx_3 = *(rdx_4 + arg3)
    else
        int32_t var_80_2 = 0
        rdx_3 = rax_3.q
    
    int32_t zmm0_1 = sub_141a47d70(arg1, rdx_3)
    char rbx_1 = *(arg1 + 0xe8)
    int32_t zmm6_1 = var_88
    char var_68
    char var_68_1 = var_68 & 0xfc
    void*** rax_4 = sub_140a82f30(0x10, 8)
    char result_1 = var_68_1 | 1
    void*** var_70 = rax_4
    void*** rcx_3 = &var_70
    
    if ((result_1 & 2) == 0)
        rcx_3 = rax_4
    
    rcx_3[1].d = zmm6_1
    *rcx_3 = &data_14305da18
    int32_t var_4c_1 = zmm0_1
    int128_t var_60_1 = *(arg4 + 0x124)
    char var_48_1 = rbx_1
    int32_t var_50_1 = *(arg4 + 0x188)
    sub_141aeb9f0(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), var_78, 
        &var_70)
    result = result_1
    
    if ((result & 1) != 0)
        void*** rcx_7 = &var_70
        
        if ((result & 2) == 0)
            rcx_7 = var_70
        
        char var_68_3 = result & 0xfe
        result = (**rcx_7)(rcx_7, 0)
        
        if ((var_68_3 & 2) == 0)
            result = sub_140a74f90(var_70)

__security_check_cookie(rax_1 ^ &var_a8)
return result
