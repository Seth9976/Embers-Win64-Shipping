// 函数: sub_141c0ab90
// 地址: 0x141c0ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_14399f5c0
char var_28
char var_28_1 = var_28 & 0xfc
void** const var_a8 = &data_142d8ad18
int128_t var_88 = zmm0
int128_t var_98 = zx.o(0)
uint128_t zmm1 = zx.o(data_143dbb1f0)
int64_t var_68 = (zx.o(0)).q
zmm0 = zmm1.q:4.d
int32_t var_44 = zmm0.d
int32_t var_4c = zmm0.d
int128_t var_38 = zx.o(0)
int32_t var_48 = zmm1.d
int32_t var_50 = zmm1.d
int32_t var_a0 = 0x42000000
int32_t var_9c = 0x42000000
char var_78 = 0
int64_t var_70 = 0
int64_t var_58 = 0
char var_40 = 0
int32_t var_3c = 3
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

zmm1 = data_14399f5c0
void*** rax_2 = *(arg2 + 0x38)
void** const* rsi = &var_a8
int128_t zmm0_1 = zx.o(0)
void** const var_138 = &data_142d8ad18
int128_t var_128 = zmm0_1
int64_t* var_f8 = zmm0_1.q

if (rax_2 != 0)
    rsi = rax_2

uint128_t var_118 = zmm1
zmm1 = zx.o(data_143dbb1f0)
char var_b8
char var_b8_1 = var_b8 & 0xfc
zmm0_1 = zmm1.q:4.d
int32_t var_d4 = zmm0_1.d
int32_t var_dc = zmm0_1.d
int128_t var_c8 = zx.o(0)
int32_t var_d8 = zmm1.d
int32_t var_e0 = zmm1.d
int32_t var_130 = 0x42000000
int32_t var_12c = 0x42000000
char var_108 = 0
int64_t var_100 = 0
int64_t var_e8 = 0
char var_d0 = 0
int32_t var_cc = 3
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_138, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

void*** rax_4 = *(arg2 + 0x38)
void** const* rdx_4 = &var_138

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
char result = j_sub_141b86050(rsi, rdx_4)
int64_t* rbx_1 = var_c8:8.q
*arg3 = result
var_138 = &data_142d8ad18

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (var_f8 != 0)
    var_f8[1].d -= 1
    
    if (var_f8[1].d == 1)
        result = (**var_f8)(var_f8)
        int32_t temp4_1 = *(var_f8 + 0xc)
        *(var_f8 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*var_f8 + 8))(var_f8, 1)

int64_t* rbx_3 = var_38:8.q
var_a8 = &data_142d8ad18

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

if (var_68 != 0)
    int32_t temp5_1 = *(var_68 + 8)
    *(var_68 + 8) -= 1
    
    if (temp5_1 == 1)
        result = (**var_68)(var_68)
        int32_t temp7_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*var_68 + 8))(var_68, 1)

return result
