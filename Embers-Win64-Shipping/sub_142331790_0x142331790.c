// 函数: sub_142331790
// 地址: 0x142331790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_58
char var_58_1 = var_58 & 0xfc
uint128_t var_b8 = data_14399f5c0
int128_t var_c8 = zx.o(0)
int64_t zmm1 = data_143dbb1f0
int64_t var_98 = (zx.o(0)).q
uint128_t zmm0 = zmm1:4.d
int32_t var_74 = zmm0.d
int32_t var_7c = zmm0.d
int128_t var_68 = zx.o(0)
int32_t var_78 = zmm1.d
int32_t var_80 = zmm1.d
void** const var_d8 = &data_142d8ad18
int32_t var_d0 = 0x42000000
int32_t var_cc = 0x42000000
char var_a8 = 0
int64_t var_a0 = 0
int64_t var_88 = 0
char var_70 = 0
int32_t var_6c = 3
sub_140e24dd0(&var_d8, arg2)
(*(*arg2 + 0x340))(arg2)
(*(*arg2 + 0x338))(arg2)
int32_t var_cc_1 = 0
int32_t var_d0_1 = 0
char var_a8_1 = 0
uint128_t var_b8_1 = *arg3
zmm0 = var_a0.o
var_a0.o = zx.o(0)
int64_t* rbx_1 = _mm_bsrli_si128(zmm0, 8).q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

var_6c:3.b = arg5
var_6c:1.b = arg4
void*** rax_5 = j_sub_140a82f30(0xa8)
void*** rbx_2

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_142329420(rax_5, &var_d8)

void*** rax_7 = j_sub_140a82f30(0x18)

if (rax_7 != 0)
    rax_7[1].d = 1
    *rax_7 = &data_143329cb0
    *(rax_7 + 0xc) = 1
    rax_7[2] = rbx_2

*arg1 = rbx_2
arg1[1] = rax_7
int64_t* rbx_3 = var_68:8.q
var_d8 = &data_142d8ad18

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (var_98 != 0)
    int32_t temp3_1 = *(var_98 + 8)
    *(var_98 + 8) -= 1
    
    if (temp3_1 == 1)
        (**var_98)(var_98)
        int32_t temp5_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_1 = *var_98
            (*(r8_1 + 8))(var_98, 1, r8_1)

return arg1
