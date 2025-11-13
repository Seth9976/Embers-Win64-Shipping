// 函数: sub_140659810
// 地址: 0x140659810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_90 = 0x3f800000
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t var_108 = 0
int32_t var_100 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x18)
int32_t var_d0 = 0x3f800000

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

uint64_t var_78 = 0
int32_t var_70 = var_f0

if (var_f0 != 0)
    sub_1405a4c70(&var_78, var_f0, 0)
    memcpy(var_78, var_f8, var_f0 * 2)
else
    int32_t var_6c_1 = 0

int64_t var_68 = var_e8
int64_t var_e0
int64_t var_60 = var_e0
int64_t* var_d8
int64_t* var_58 = var_d8

if (var_d8 != 0)
    var_d8[1].d += 1

int64_t rdi_2 = var_c8
int32_t var_50 = var_d0
int64_t var_48 = 0
int32_t var_40 = var_c0

if (var_c0 != 0)
    sub_1405a4c70(&var_48, var_c0, 0)
    memcpy(var_48, rdi_2, var_c0 * 2)
else
    int32_t var_3c_1 = 0

uint64_t var_38 = 0
int32_t var_30 = var_b0

if (var_b0 != 0)
    sub_1405a4c70(&var_38, var_b0, 0)
    memcpy(var_38, var_b8, var_b0 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28 = var_a8
int64_t var_a0
int64_t var_20 = var_a0
int64_t* var_98
int64_t* var_18 = var_98

if (var_98 != 0)
    var_98[1].d += 1

int32_t var_10 = var_90
char result = sub_140640530(&var_48, &var_88, arg4)
*arg3 = result

if (var_d8 != 0)
    var_d8[1].d -= 1
    
    if (var_d8[1].d == 1)
        result = (**var_d8)(var_d8)
        int32_t temp1_1 = *(var_d8 + 0xc)
        *(var_d8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_d8 + 8))(var_d8, 1)

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

int64_t rcx_16 = var_108

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        result = (**var_98)(var_98)
        int32_t temp3_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*var_98 + 8))(var_98, 1)

if (var_b8 != 0)
    result = sub_140a74f90(var_b8)

int64_t rcx_20 = var_c8

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
