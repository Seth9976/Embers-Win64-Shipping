// 函数: sub_1405d6b40
// 地址: 0x1405d6b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbx = *(arg1 + 0x50)
int16_t* const var_c8

if (*(rbx + 0x98) == 0)
    var_c8 = &data_142d40450
else
    var_c8 = *(rbx + 0x90)

if (*(rbx + 0xa8) == 0)
    int16_t* const var_c0_1 = &data_142d40450
else
    int64_t var_c0 = *(rbx + 0xa0)

uint64_t var_d8 = 0
int64_t var_d0 = 0
sub_140b0f5f0(&var_d8, &var_c8, 2)

if (arg1 + 0x108 == &var_d8)
    uint64_t rcx_2 = var_d8
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
else
    int64_t rcx_1 = *(arg1 + 0x108)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x108) = var_d8
    *(arg1 + 0x110) = var_d0.d
    *(arg1 + 0x114) = var_d0:4.d

*(arg1 + 0x118) = sub_14106d4d0(*(rbx + 0x30))
*(arg1 + 0x164) = *(rbx + 0x44)
*(arg1 + 0x160) = *(rbx + 0x48)
*(arg1 + 0x168) = *(rbx + 0x49)
int64_t rax_11 = *(rbx + 0x50)
int128_t* var_68 = nullptr

if (rax_11 != 0)
    void* rax_12 = *(rbx + 0x60)
    void* rcx_4 = rbx + 0x70
    
    if (rax_12 != 0)
        rcx_4 = rax_12
    
    (**rcx_4)(rcx_4, &var_68)

int128_t zmm0 = *(rbx + 0x34)
void*** r8 = sub_140a82f30(0x60, 0x10)
*r8 = &data_142d577c0
r8[2] = rax_11
r8[4] = var_68
int128_t var_58
int128_t zmm0_1 = var_58
var_68 = nullptr
*(r8 + 0x30) = zmm0_1
int128_t var_48
int128_t zmm1 = var_48
*(r8 + 0x40) = zmm1
int64_t rax_15 = rax_11

if (r8[2] != 0)
    rax_15 = 0

*(r8 + 0x50) = zmm0
*r8 = &data_142d577e0
int64_t (* result_1)(void* arg1, char* arg2)
int64_t (* result)(void* arg1, char* arg2) = result_1

if (r8 != -0x10)
    result = sub_1405d6f90

result_1 = result
int128_t var_98
int128_t entry_zmm2
int128_t entry_zmm3

if (arg1 + 0x120 != &result_1)
    entry_zmm2 = *(arg1 + 0x120)
    entry_zmm3 = *(arg1 + 0x130)
    int128_t zmm4_1 = *(arg1 + 0x140)
    int128_t zmm5_1 = *(arg1 + 0x150)
    *(arg1 + 0x120) = result_1.o
    zmm0_1 = var_98
    *(arg1 + 0x130) = r8.o
    int128_t var_88
    zmm1 = var_88
    *(arg1 + 0x140) = zmm0_1
    result_1.o = entry_zmm2
    result = result_1
    void*** var_a8
    var_a8.o = entry_zmm3
    r8 = var_a8
    *(arg1 + 0x150) = zmm1
    var_98 = zmm4_1
    int128_t var_88_1 = zmm5_1

if (result != 0)
    void*** rcx_7 = &var_98
    
    if (r8 != 0)
        rcx_7 = r8
    
    result = (*rcx_7)[2](rcx_7, zmm1, r8, entry_zmm3)

if (rax_15 != 0)
    int128_t* rax_17 = var_68
    int128_t* rcx_8 = &var_58
    
    if (rax_17 != 0)
        rcx_8 = rax_17
    
    result = (*(*rcx_8 + 0x10))(rcx_8, zmm1, entry_zmm2, entry_zmm3)

__security_check_cookie(rax_1 ^ &var_f8)
return result
