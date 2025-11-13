// 函数: sub_1426da440
// 地址: 0x1426da440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg7)
int128_t* rcx = nullptr
int128_t* var_60 = nullptr
int32_t var_54 = 0
int32_t var_58 = rbx.d

if (rbx.d s> 0)
    sub_1405a4df0(&var_60)
    rcx = var_60

memset(rcx, 0, rbx * 0x18)
int32_t i = 0

if (rbx.d s> 0)
    int64_t rbp_1 = 0
    
    do
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(i)).d f* arg8.d
        int32_t var_6c
        int32_t* rax_1 = sub_140adf070(arg5, &var_6c, zmm2, &data_14399f678)
        float zmm1_1[0x4] = *arg4
        i += 1
        int64_t var_40_1 = 0
        uint128_t zmm0_1
        zmm0_1.d = rax_1[2].d f+ *(arg4 + 8)
        zmm1_1[0] = zmm1_1[0] f+ *rax_1
        zmm2.d = rax_1[1].d f+ *(arg4 + 4)
        int32_t var_48_1 = zmm0_1.d
        int128_t* rax_3 = var_60
        zmm0_1.q = (_mm_unpacklo_ps(zmm1_1, zmm2.q)).q
        *(rax_3 + rbp_1) = zmm0_1
        *(rax_3 + rbp_1 + 0x10) = var_40_1
        rbp_1 += 0x18
    while (i s< rbx.d)

uint32_t rcx_3 = zx.d(*(arg1 + 0x203))
char var_90
char var_88

if (rcx_3 == 1)
    int64_t* rax_7 = sub_1426d7f70(arg9)
    int64_t rax_8 = sub_140d3c6e0(arg9 + 0x34)
    
    if (rax_7 != 0 && rax_8 != 0)
        var_90 = 0
        sub_1426e9110(rax_7, rax_8, &arg1[0x3b], arg4, &var_60, 0)
else if (rcx_3 == 2)
    var_90 = 0
    sub_1426e98b0(*(arg9 + 0x58), &arg1[0x3b], arg4, &var_60, arg6, 0)
else if (rcx_3 == 3)
    int64_t* rax_4 = sub_1426d7f70(arg9)
    int64_t rax_5 = sub_140d3c6e0(arg9 + 0x34)
    
    if (rax_4 != 0 && rax_5 != 0)
        var_88 = 0
        var_90.q = arg6
        sub_1426ea0d0(rax_4, rax_5, &arg1[0x3b], arg4, &var_60, var_90, 0)

(*(*arg1 + 0x280))(arg1, &var_60, arg9)
int64_t result = (*(*arg1 + 0x290))(arg1, arg2, arg3, &var_60, arg9, var_90, var_88)
int128_t* rcx_16 = var_60

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
