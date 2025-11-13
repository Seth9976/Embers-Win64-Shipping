// 函数: sub_141c1e0c0
// 地址: 0x141c1e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_14399f5c0
char var_28
char var_28_1 = var_28 & 0xfc
void** const var_a8 = &data_142d8ad18
int128_t var_88 = zmm0
int128_t var_98 = zx.o(0)
int64_t zmm1 = data_143dbb1f0
int64_t var_68 = (zx.o(0)).q
zmm0 = zmm1:4.d
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

void*** rax_2 = *(arg2 + 0x38)
void** const* rcx_1 = &var_a8

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int64_t* result = sub_141bacb50(rcx_1)
int64_t* rbx_1 = var_38:8.q
*arg3 = result
var_a8 = &data_142d8ad18

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (var_68 != 0)
    int32_t temp1_1 = *(var_68 + 8)
    *(var_68 + 8) -= 1
    
    if (temp1_1 == 1)
        result = (**var_68)(var_68)
        int32_t temp3_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_68 + 8))(var_68, 1)

return result
