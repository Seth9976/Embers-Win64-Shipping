// 函数: sub_1424d9e90
// 地址: 0x1424d9e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_8e = 0
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x24)
int16_t var_90
int16_t var_90_1 = var_90 & 0xfe00
int512_t zmm1
zmm1.o = zx.o(0)
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
void** const* rsi = &var_98
int64_t var_b8 = 0
int128_t zmm0 = zx.o(0)

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_b8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
int64_t var_28 = var_b8
int64_t var_20 = zmm0.q
void* rax_7 = zmm0:8.q
*(arg2 + 0x20) = rdi + rax_4
void* var_18 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

char result = sub_1420ce540(rsi, &var_28, zmm1)
int64_t* rbx_1 = zmm0:8.q
*arg3 = result

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

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
