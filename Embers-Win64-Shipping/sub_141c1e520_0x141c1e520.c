// 函数: sub_141c1e520
// 地址: 0x141c1e520
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
void** var_28
void*** rax_4 = sub_141bae170(&var_28, rdx_2)
int128_t var_58
int64_t* rbx_1 = var_58:8.q
*(arg3 + 8) = rax_4[1].w
*(arg3 + 0xa) = *(rax_4 + 0xa)
*(arg3 + 0xc) = *(rax_4 + 0xc)
int64_t result = rax_4[2]
*(arg3 + 0x10) = result

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
