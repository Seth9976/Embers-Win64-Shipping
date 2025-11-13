// 函数: sub_1423d37e0
// 地址: 0x1423d37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = 0
int64_t var_110 = 0
int64_t var_f8
sub_1423fd810(&var_f8, nullptr)
sub_1424171b0(&var_f8, u"DefaultPlayer", &data_143de5830)
int64_t* rax = sub_141520bd0()
void* rbx = rax[0x23]

if (rbx == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    rbx = rax[0x23]

int64_t var_108
int64_t* rax_1 = sub_14151ffb0(&var_108)
int32_t rcx_4 = rax_1[1].d
uint64_t var_138
int32_t var_130

if (rcx_4 s> 1)
    int32_t rax_2 = *(rbx + 0x30)
    int32_t rdi_2 = rax_2 - 1
    
    if (rax_2 == 0)
        rdi_2 = 0
    
    int32_t r8_3
    
    if (rcx_4 == 0)
        r8_3 = rcx_4 + 1
    
    if (rcx_4 != 0 || rdi_2 == 0)
        r8_3 = 0
    
    uint64_t rax_3 = *rax_1
    *rax_1 = 0
    uint64_t var_128 = rax_3
    int32_t rcx_7 = *(rax_1 + 0xc)
    rax_1[1] = 0
    int32_t rdx_5 = rcx_4 + rdi_2 + r8_3
    
    if (rdx_5 s> rcx_7)
        sub_1405947f0(&var_128, rdx_5)
    
    sub_140a20ba0(&var_128, *(rbx + 0x28), rdi_2)
    var_138 = var_128
    var_130 = rcx_4
    int32_t var_12c_2 = rcx_7
else
    var_138 = 0
    int32_t rdi_1 = *(rbx + 0x30)
    int64_t rbx_1 = *(rbx + 0x28)
    var_130 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_138, rdi_1, 0)
        memcpy(var_138, rbx_1, rdi_1 * 2)
    else
        int32_t var_12c_1 = 0

int64_t rcx_10 = var_108

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int16_t* const r8_5 = &data_142d40450

if (var_130 != 0)
    r8_5 = var_138

void var_88
int32_t result = (*(*arg1 + 0x440))(arg1, arg2, sub_1423fb9e0(&var_88, &var_f8, r8_5, 1), &var_118)

if (result != 0)
    result = (*(*arg1 + 0x4d8))(arg1, arg2, &var_138, &var_118)

uint64_t rcx_14 = var_138

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t var_a0

if (var_a0 != 0)
    result = sub_140a74f90(var_a0)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_b0
int64_t* rbx_3 = var_b0

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_16 = *rbx_3
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_b0

if (rbx_3 != 0)
    result = sub_140a74f90(rbx_3)

int64_t var_c0

if (var_c0 != 0)
    result = sub_140a74f90(var_c0)

int64_t var_d0

if (var_d0 != 0)
    result = sub_140a74f90(var_d0)

int64_t var_e8

if (var_e8 != 0)
    result = sub_140a74f90(var_e8)

int64_t rcx_21 = var_f8

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t rcx_22 = var_118

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
