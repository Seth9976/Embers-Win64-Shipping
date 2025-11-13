// 函数: sub_141ba5650
// 地址: 0x141ba5650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* var_c0 = arg4
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

int32_t rsi = *(arg1 + 0x4ac)
int32_t rdi = 0
int32_t var_9c = 0
int32_t r13 = 0
var_c8 = 0
int32_t var_b8
int32_t zmm6

if ((rsi.b & 1) != 0)
    char rax_4
    rax_4, zmm6 = sub_141a467f0(arg1 + 0x48, rbx, &var_c8)
    
    if (rax_4 != 0)
        rdi = 1
        var_b8 = var_c8
        r13 = 1
        int32_t var_9c_1 = 1

var_c8 = 0

if (((rsi u>> 1).b & 1) != 0)
    char rax_7
    rax_7, zmm6 = sub_141a467f0(arg1 + 0xe8, rbx, &var_c8)
    
    if (rax_7 != 0)
        rdi = r13 | 2
        int32_t var_b4_1 = var_c8
        int32_t var_9c_2 = rdi

var_c8 = 0

if (((rsi u>> 3).b & 1) != 0)
    char rax_10
    rax_10, zmm6 = sub_141a467f0(arg1 + 0x228, rbx, &var_c8)
    
    if (rax_10 != 0)
        rdi |= 4
        int32_t var_b0_1 = var_c8
        int32_t var_9c_3 = rdi

var_c8 = 0

if (((rsi u>> 4).b & 1) != 0)
    char rax_13
    rax_13, zmm6 = sub_141a467f0(arg1 + 0x2c8, rbx, &var_c8)
    
    if (rax_13 != 0)
        rdi |= 8
        int32_t var_ac_1 = var_c8
        int32_t var_9c_4 = rdi

var_c8 = 0
int32_t var_a8

if (((rsi u>> 5).b & 1) != 0)
    char rax_16
    rax_16, zmm6 = sub_141a467f0(arg1 + 0x368, rbx, &var_c8)
    
    if (rax_16 != 0)
        rdi |= 0x10
        var_a8 = var_c8
        int32_t var_9c_5 = rdi

var_c8 = 0
uint8_t result = (rsi u>> 6).b

if ((result & 1) != 0)
    result, zmm6 = sub_141a467f0(arg1 + 0x408, rbx, &var_c8)
    
    if (result != 0)
        rdi |= 0x20
        int32_t var_a4_1 = var_c8
        int32_t var_9c_6 = rdi

var_c8 = 0

if (((rsi u>> 2).b & 1) != 0)
    result, zmm6 = sub_141a467f0(arg1 + 0x188, rbx, &var_c8)
    
    if (result != 0)
        rdi |= 0x40
        int32_t var_a0_1 = var_c8
        int32_t var_9c_7 = rdi

if (rdi != 0)
    void* rdi_2 = var_c0
    int32_t var_48_1 = zmm6
    sub_141b71330(arg1, &var_c0, rdi_2 + 0x60)
    int32_t rax_18 = *(arg3 + 0x24)
    int64_t rdx_8
    
    if (rax_18 == 0x80000000)
        if (*(arg3 + 0x20) != 0)
            r12 = 4
        
        rdx_8 = *(r12 + arg3)
    else
        var_c8 = rax_18
        int32_t var_c4_2 = 0
        rdx_8 = var_c8.q
    
    int32_t zmm0_8 = sub_141a47d70(arg1, rdx_8)
    char rbx_2 = *(arg1 + 0x4a8)
    char var_78
    uint8_t var_78_1 = var_78 & 0xfc
    int64_t* rax_19 = sub_140a82f30(0x28, 8)
    uint8_t result_1 = var_78_1 | 1
    int64_t* var_98 = rax_19
    int64_t* rcx_9 = &var_98
    
    if ((result_1 & 2) == 0)
        rcx_9 = rax_19
    
    *(rcx_9 + 8) = var_b8.o
    *rcx_9 = &data_1430838b0
    *(rcx_9 + 0x18) = var_a8.o
    char var_58_1 = rbx_2
    int32_t var_5c_1 = zmm0_8
    int128_t var_70_1 = *(rdi_2 + 0x124)
    int32_t var_60_1 = *(rdi_2 + 0x188)
    sub_141b6cac0(sub_1405a8fd0(rdi_2 + 0xb0, sub_1405be5b0(rdi_2 + 0x110), rdi_2 + 0x110), var_c0, 
        &var_98)
    result = result_1
    
    if ((result & 1) != 0)
        int64_t* rcx_13 = &var_98
        
        if ((result & 2) == 0)
            rcx_13 = var_98
        
        uint8_t var_78_3 = result & 0xfe
        result = (**rcx_13)(rcx_13, 0)
        
        if ((var_78_3 & 2) == 0)
            result = sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_e8)
return result
