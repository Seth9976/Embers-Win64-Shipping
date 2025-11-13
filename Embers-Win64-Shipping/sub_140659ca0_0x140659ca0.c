// 函数: sub_140659ca0
// 地址: 0x140659ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_50 = 0x3f800000
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int64_t var_68
__builtin_memset(&var_68, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi = var_88
int64_t var_48 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_40 = var_80

if (var_80 != 0)
    sub_1405a4c70(&var_48, var_80, 0)
    memcpy(var_48, rdi, var_80 * 2)
else
    int32_t var_3c_1 = 0

uint64_t var_38 = 0
int32_t var_30 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_38, var_70, 0)
    memcpy(var_38, var_78, var_70 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28 = var_68
int64_t var_60
int64_t var_20 = var_60
int64_t* var_58
int64_t* var_18 = var_58

if (var_58 != 0)
    var_58[1].d += 1

int32_t var_10 = var_50
int64_t* result = sub_1406409d0(&var_48)

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        result = (**var_58)(var_58)
        int32_t temp1_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_58 + 8))(var_58, 1)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_11 = var_88

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
