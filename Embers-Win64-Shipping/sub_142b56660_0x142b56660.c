// 函数: sub_142b56660
// 地址: 0x142b56660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x58)
int128_t zmm6 = arg2

if (rcx == 0)
    return 0

int64_t* rax_1 = sub_142ae72d0(rcx, 0)
int64_t* rax_2 = sub_142ae72d0(*(arg1 + 0x58), 1)

if (rax_1 == 0 || rax_2 == 0)
    return nullptr

int128_t zmm7 = zmm6
int32_t var_78

if (arg3 != 0)
    int32_t rax_3 = sub_141b60020(rax_1)
    int32_t rax_4 = sub_1405f8de0(rax_1)
    int32_t rax_5 = sub_141b60020(rax_2)
    var_78 = arg5
    char var_88
    var_88.d = rax_3
    zmm7.q = zmm7.q f- _mm_cvtepi32_pd(zx.q(sub_142b568b0(arg1, sub_1405f8de0(rax_2), rax_5, rax_4, 
        var_88, arg4, var_78)))

int64_t rdi_2 = *rax_1
int32_t rax_9 = sub_141b60020(rax_2)
char var_88_1 = 1
uint64_t var_68
char rax_11 =
    (*(rdi_2 + 0x48))(rax_1, zmm7, zx.q(sub_1405f8de0(rax_2)), zx.q(rax_9), 1, &var_68, var_78)

if (arg3 != 0)
    int32_t rax_12 = sub_141b60020(rax_2)
    int32_t rax_13 = sub_1405f8de0(rax_2)
    int32_t rax_14 = sub_141b60020(rax_1)
    var_78 = arg5
    uint64_t* var_80_1
    var_80_1.d = arg4
    var_88_1.d = rax_12
    zmm6.q = zmm6.q f- _mm_cvtepi32_pd(zx.q(sub_142b568b0(arg1, sub_1405f8de0(rax_1), rax_14, 
        rax_13, var_88_1, var_80_1.d, var_78)))

int64_t rdi_4 = *rax_2
int32_t rax_18 = sub_141b60020(rax_1)
int64_t var_60
char rax_20 =
    (*(rdi_4 + 0x48))(rax_2, zmm6, zx.q(sub_1405f8de0(rax_1)), zx.q(rax_18), 1, &var_60, var_78)

if (rax_11 == 0)
    if (rax_20 != 0)
        return rax_2
    
    return nullptr

if (rax_20 == 0)
    return rax_1

if (var_68 f> var_60)
    return rax_1

return rax_2
