// 函数: sub_1405b9610
// 地址: 0x1405b9610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t var_b8 = arg4
int32_t rax_3 = *(arg3 + 0x24)
int64_t* r12 = 0x10
int32_t var_c8
int64_t rbx

if (rax_3 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg3)
else
    var_c8 = rax_3
    int32_t var_c4_1 = 0
    rbx = var_c8.q

int32_t rdi = 0
int32_t var_c0 = 0
var_c8 = 0
int32_t var_bc = 0
int32_t r13 = 0
int32_t r15 = 0
int32_t var_b0

if (sub_141a467f0(arg1 + 0x48, rbx, &var_c0) != 0)
    rdi = 1
    var_b0 = var_c0
    r13 = 1
    var_c8 = 1
    r15 = 1
    var_bc = 1

var_c0 = 0

if (sub_141a467f0(arg1 + 0xe8, rbx, &var_c0) != 0)
    rdi = var_c8 | 2
    var_bc = rdi
    r13 = rdi
    r15 = rdi
    int32_t var_ac_1 = var_c0

var_c8 = 0

if (sub_141a467f0(arg1 + 0x188, rbx, &var_c8) != 0)
    rdi = var_bc | 4
    r13 = rdi
    int32_t var_a8_1 = var_c8
    r15 = rdi

var_c8 = 0

if (sub_141a467f0(arg1 + 0x228, rbx, &var_c8) != 0)
    rdi = r13 | 8
    int32_t var_a4_1 = var_c8
    r15 = rdi

var_c8 = 0
int32_t var_a0

if (sub_141a467f0(arg1 + 0x2c8, rbx, &var_c8) != 0)
    var_a0 = var_c8
    rdi = r15 | 0x10

var_c8 = 0
char result
int32_t zmm6
result, zmm6 = sub_141a467f0(arg1 + 0x368, rbx, &var_c8)

if (result != 0)
    rdi |= 0x20
    int32_t var_9c_1 = var_c8

if (rdi != 0)
    int64_t r15_1 = var_b8
    int32_t var_48_1 = zmm6
    sub_1405a89d0(arg1, &var_b8, r15_1 + 0x60)
    int32_t rax_9 = *(arg3 + 0x24)
    int64_t rdx_7
    
    if (rax_9 == 0x80000000)
        if (*(arg3 + 0x20) != 0)
            r12 = 4
        
        rdx_7 = *(r12 + arg3)
    else
        var_c8 = rax_9
        int32_t var_c4_2 = 0
        rdx_7 = var_c8.q
    
    int32_t zmm0_7 = sub_141a47d70(arg1, rdx_7)
    char rbx_2 = *(arg1 + 0x408)
    char var_78
    char var_78_1 = var_78 & 0xfc
    int64_t* rax_10 = sub_140a82f30(0x28, 8)
    char result_1 = var_78_1 | 1
    int64_t* var_90 = rax_10
    int64_t* rcx_8 = &var_90
    
    if ((result_1 & 2) == 0)
        rcx_8 = rax_10
    
    *(rcx_8 + 8) = var_b0.o
    *rcx_8 = &data_142d4cae0
    rcx_8[3] = var_a0.q
    rcx_8[4].d = rdi
    int32_t var_5c_1 = zmm0_7
    int128_t var_70_1 = *(r15_1 + 0x124)
    char var_58_1 = rbx_2
    int32_t var_60_1 = *(r15_1 + 0x188)
    sub_1405a68f0(sub_1405a8fd0(r15_1 + 0xb0, sub_1405be5b0(r15_1 + 0x110), r15_1 + 0x110), var_b8, 
        &var_90)
    result = result_1
    
    if ((result & 1) != 0)
        int64_t* rcx_12 = &var_90
        
        if ((result & 2) == 0)
            rcx_12 = var_90
        
        char var_78_3 = result & 0xfe
        result = (**rcx_12)(rcx_12, 0)
        
        if ((var_78_3 & 2) == 0)
            result = sub_140a74f90(var_90)

__security_check_cookie(rax_1 ^ &var_e8)
return result
