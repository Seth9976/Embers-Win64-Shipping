// 函数: sub_141ba59b0
// 地址: 0x141ba59b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rax_2 = *(arg3 + 0x24)
int64_t* r12 = 0x10
int32_t var_b8
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg3)
else
    var_b8 = rax_2
    int32_t var_b4_1 = 0
    rbx = var_b8.q

int32_t rdi = 0
var_b8 = 0
int32_t rsi = 0
int32_t var_68

if (sub_141a467f0(arg1 + 0xe8, rbx, &var_b8) != 0)
    rdi = 1
    var_68 = var_b8
    rsi = 1

if (sub_141a467f0(arg1 + 0x48, rbx, &var_b8) != 0)
    rdi = rsi | 2
    int32_t var_64_1 = var_b8
    rsi = rdi

if (sub_141a467f0(arg1 + 0x188, rbx, &var_b8) != 0)
    rdi = rsi | 4
    int32_t var_60_1 = var_b8
    rsi = rdi

char result
int32_t zmm6
result, zmm6 = sub_141a467f0(arg1 + 0x228, rbx, &var_b8)

if (result != 0)
    rdi = rsi | 8
    int32_t var_5c_1 = var_b8
    rsi = rdi

if (rsi != 0)
    int32_t var_48_1 = zmm6
    int64_t var_a8
    sub_141b710b0(arg1, &var_a8, arg4 + 0x60)
    int32_t rax_6 = *(arg3 + 0x24)
    int64_t rdx_5
    
    if (rax_6 == 0x80000000)
        if (*(arg3 + 0x20) != 0)
            r12 = 4
        
        rdx_5 = *(r12 + arg3)
    else
        int32_t var_ac_1 = 0
        rdx_5 = rax_6.q
    
    int32_t zmm0_5 = sub_141a47d70(arg1, rdx_5)
    char rbx_2 = *(arg1 + 0x2c8)
    char var_90
    char var_90_1 = var_90 & 0xfc
    int64_t* rax_7 = sub_140a82f30(0x20, 8)
    char result_1 = var_90_1 | 1
    int64_t* var_a0 = rax_7
    int64_t* rcx_6 = &var_a0
    
    if ((result_1 & 2) == 0)
        rcx_6 = rax_7
    
    *(rcx_6 + 8) = var_68.o
    rcx_6[3].d = rdi
    *rcx_6 = &data_1430838c0
    int32_t var_74_1 = zmm0_5
    int128_t var_88_1 = *(arg4 + 0x124)
    char var_70_1 = rbx_2
    int32_t var_78_1 = *(arg4 + 0x188)
    sub_141b6c8d0(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), var_a8, 
        &var_a0)
    result = result_1
    
    if ((result & 1) != 0)
        int64_t* rcx_10 = &var_a0
        
        if ((result & 2) == 0)
            rcx_10 = var_a0
        
        char var_90_3 = result & 0xfe
        result = (**rcx_10)(rcx_10, 0)
        
        if ((var_90_3 & 2) == 0)
            result = sub_140a74f90(var_a0)

__security_check_cookie(rax_1 ^ &var_d8)
return result
