// 函数: sub_1424d9370
// 地址: 0x1424d9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_8e = 0
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x24)
int16_t var_90
int16_t var_90_1 = var_90 & 0xfe00
void** const var_98 = &data_142ecfd88
int32_t var_40 = 0x3f800000
int64_t* var_68 = &data_143e20e70
int64_t var_60
__builtin_memset(&var_60, 0, 0x20)
int16_t var_3c = 0
int64_t var_38 = 0
int16_t var_30 = 0
char var_2e = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_98

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_28
int64_t* result = sub_140647400(arg3, sub_1420ce4a0(&var_28, rdx_2))
int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        result = (**var_18)(var_18)
        int32_t temp2_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_18 + 8))(var_18, 1)

int128_t var_58
int64_t* rbx_2 = var_58:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
