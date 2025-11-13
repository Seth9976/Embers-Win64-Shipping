// 函数: sub_141c10940
// 地址: 0x141c10940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_14399f5c0
char var_b8
char var_b8_1 = var_b8 & 0xfc
void** const var_138 = &data_142d8ad18
int128_t var_118 = zmm0
int128_t var_128 = zx.o(0)
int64_t zmm1 = data_143dbb1f0
int64_t var_f8 = (zx.o(0)).q
zmm0 = zmm1:4.d
int32_t var_d4 = zmm0.d
int32_t var_dc = zmm0.d
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

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_138, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void** var_a8
int64_t result = sub_141be6970(arg1, sub_14068e310(&var_a8, &var_138))
int64_t* rbx_1 = var_c8:8.q
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
    int32_t temp1_1 = *(var_f8 + 8)
    *(var_f8 + 8) -= 1
    
    if (temp1_1 == 1)
        result = (**var_f8)(var_f8)
        int32_t temp3_1 = *(var_f8 + 0xc)
        *(var_f8 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_f8 + 8))(var_f8, 1)

return result
