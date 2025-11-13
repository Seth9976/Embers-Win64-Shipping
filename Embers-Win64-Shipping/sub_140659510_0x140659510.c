// 函数: sub_140659510
// 地址: 0x140659510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x24)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t var_108 = 0
int32_t var_100 = 0
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x24)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_108, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi = var_108
int64_t var_88 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_80 = var_100

if (var_100 != 0)
    sub_1405a4c70(&var_88, var_100, 0)
    memcpy(var_88, rdi, var_100 * 2)
else
    int32_t var_7c_1 = 0

int64_t var_78 = var_f8
int64_t var_f0
int64_t var_70 = var_f0
int128_t var_e8
void* rax_6 = var_e8.q
void* var_68 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

uint64_t var_60 = 0
int32_t var_d8
int32_t var_58 = var_d8

if (var_d8 != 0)
    sub_1405a4c70(&var_60, var_d8, 0)
    memcpy(var_60, var_e8:8.q, var_d8 * 2)
else
    int32_t var_54_1 = 0

int64_t rdi_2 = var_c8
int32_t var_d0
int32_t var_50
int32_t var_50_1 = var_50 ^ ((var_50 ^ var_d0) & 0xf)
int64_t var_48 = 0
int32_t var_40 = var_c0

if (var_c0 != 0)
    sub_1405a4c70(&var_48, var_c0, 0)
    memcpy(var_48, rdi_2, var_c0 * 2)
else
    int32_t var_3c_1 = 0

int64_t var_38 = var_b8
int64_t var_b0
int64_t var_30 = var_b0
int128_t var_a8
void* rax_12 = var_a8.q
void* var_28 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

uint64_t var_20 = 0
int32_t var_98
int32_t var_18 = var_98

if (var_98 != 0)
    sub_1405a4c70(&var_20, var_98, 0)
    memcpy(var_20, var_a8:8.q, var_98 * 2)
else
    int32_t var_14_1 = 0

int32_t var_90
int32_t var_10
int32_t var_10_1 = var_10 ^ ((var_10 ^ var_90) & 0xf)
char result = sub_140640230(&var_48, &var_88, arg4)
int64_t rcx_17 = var_e8:8.q
*arg3 = result

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t* rbx_5 = var_e8.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp1_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_5 + 8))(rbx_5, 1)

int64_t rcx_20 = var_108

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t rcx_21 = var_a8:8.q

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t* rbx_6 = var_a8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp3_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

int64_t rcx_24 = var_c8

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
