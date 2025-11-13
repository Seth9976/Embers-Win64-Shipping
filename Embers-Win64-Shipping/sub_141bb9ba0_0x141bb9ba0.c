// 函数: sub_141bb9ba0
// 地址: 0x141bb9ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_a8
void*** rcx = &var_a8
int64_t var_68
int128_t var_38

if (arg2 == 0)
    sub_14068e310(arg1, sub_140ddaa70(rcx, &data_143dbb1f0))
else
    uint128_t zmm0 = data_14399f5c0
    char var_28
    char var_28_1 = var_28 & 0xfc
    var_a8 = &data_142d8ad18
    uint128_t var_88_1 = zmm0
    int128_t var_98_1 = zx.o(0)
    uint128_t zmm1 = zx.o(data_143dbb1f0)
    var_68 = (zx.o(0)).q
    zmm0 = zmm1.q:4.d
    int32_t var_44_1 = zmm0.d
    int32_t var_4c_1 = zmm0.d
    var_38 = zx.o(0)
    int32_t var_48_1 = zmm1.d
    int32_t var_50_1 = zmm1.d
    int32_t var_a0_1 = 0x42000000
    int32_t var_9c_1 = 0x42000000
    char var_78_1 = 0
    int64_t var_70_1 = 0
    int64_t var_58_1 = 0
    char var_40_1 = 0
    int32_t var_3c_1 = 3
    sub_140e24dd0(rcx, arg2)
    int32_t var_a0_2 = _mm_cvtepi32_ps(zx.o(arg3)).d
    int32_t var_9c_2 = _mm_cvtepi32_ps(zx.o(arg4)).d
    sub_14068e310(arg1, &var_a8)

var_a8 = &data_142d8ad18
int64_t* rdi = var_38:8.q

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (var_68 != 0)
    int32_t temp1_1 = *(var_68 + 8)
    *(var_68 + 8) -= 1
    
    if (temp1_1 == 1)
        (**var_68)(var_68)
        int32_t temp3_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_68 + 8))(var_68, 1)

return arg1
