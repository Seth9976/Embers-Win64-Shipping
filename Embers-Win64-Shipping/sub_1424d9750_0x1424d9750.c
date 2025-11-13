// 函数: sub_1424d9750
// 地址: 0x1424d9750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_6e = 0
int32_t var_6c
__builtin_memset(&var_6c, 0, 0x24)
int16_t var_70
int16_t var_70_1 = var_70 & 0xfe00
void** const var_78 = &data_142ecfd88
int32_t var_20 = 0x3f800000
int64_t* var_48 = &data_143e20e70
int64_t var_40
__builtin_memset(&var_40, 0, 0x20)
int16_t var_1c = 0
int64_t var_18 = 0
int16_t var_10 = 0
char var_e = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_78

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void arg_10
int64_t* result = sub_1420ce510(&arg_10, rdx_2)
int128_t var_38
int64_t* rbx_1 = var_38:8.q
*arg3 = *result

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
