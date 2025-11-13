// 函数: sub_140659b10
// 地址: 0x140659b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x24)

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

int64_t var_38 = var_78
int64_t var_70
int64_t var_30 = var_70
int128_t var_68
void* rax_5 = var_68.q
void* var_28 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

uint64_t var_20 = 0
int32_t var_58
int32_t var_18 = var_58

if (var_58 != 0)
    sub_1405a4c70(&var_20, var_58, 0)
    memcpy(var_20, var_68:8.q, var_58 * 2)
else
    int32_t var_14_1 = 0

int32_t var_50
int32_t var_10
int32_t var_10_1 = var_10 ^ ((var_10 ^ var_50) & 0xf)
int64_t* result = sub_1406407f0(&var_48)
int64_t rcx_10 = var_68:8.q

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t* rbx_3 = var_68.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_13 = var_88

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
