// 函数: sub_140f75e60
// 地址: 0x140f75e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6

if (*(arg1 + 0x340) != 1)
    zmm6 = *(arg3 + 4)
else
    zmm6 = *arg3

int32_t var_38
sub_140f756b0(arg1, &var_38, arg5)
uint128_t zmm2 = zx.o(0)
int32_t var_30
int32_t rcx_1
uint128_t zmm1_1

if (var_30 f<= 0f)
    rcx_1 = 0
else
    zmm1_1.d = zmm6.d f/ var_30
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    rcx_1 = int.d(zmm1_1.d) s>> 1

int32_t rdx_1 = *(arg1 + 0x340)
uint128_t zmm3 = zx.o(0)
int32_t var_34
uint128_t zmm0

if (rcx_1 s> 0 && ((arg4 - 1) & 0xfa) == 0 && arg4 != 5)
    zmm3.d = zmm6.d f- 0.00100000005f
    zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_1))
    zmm0.d = zmm1_1.d f* var_30
    zmm3.d = zmm3.d f- zmm0.d
    zmm3.d = zmm3.d f/ zmm1_1.d
    
    if (arg4 == 1)
        zmm0.d = zmm3.d f+ var_30
        zmm2.d = zmm3.d f/ zmm0.d
        zmm2.d = zmm2.d f* var_34

int32_t arg_8
int32_t arg_10

if (rdx_1 != 1)
    arg_8 = zmm2.d
    int32_t arg_c = zmm3.d
else
    arg_10 = zmm3.d
    int32_t arg_14 = zmm2.d

int32_t rdx_2 = var_38
int32_t* rax_2 = &arg_8

if (rdx_1 == 1)
    rax_2 = &arg_10

int32_t arg_18
int32_t arg_1c

if (rdx_2 != 1)
    arg_18 = var_34
    arg_1c = var_30
else
    arg_18 = var_30
    arg_1c = var_34

zmm0.d = arg_18.d f+ *rax_2
zmm2.d = arg_1c.d f+ rax_2[1]
*arg2 = rdx_2
*(arg2 + 4) = 0

if (rdx_2 != 1)
    arg2[2] = zmm2.d
    arg2[1] = zmm0.d
    return arg2

arg2[2] = zmm0.d
arg2[1] = zmm2.d
return arg2
