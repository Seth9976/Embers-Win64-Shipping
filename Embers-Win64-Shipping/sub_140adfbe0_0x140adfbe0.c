// 函数: sub_140adfbe0
// 地址: 0x140adfbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = *(arg1 + 8)
int64_t* rbx = arg3
uint128_t zmm5 = *arg1
int128_t* r10 = arg1
uint128_t zmm4 = *(arg1 + 4)
uint128_t zmm6
zmm6.d = (*(arg4 + 4)).d f- arg3[1]
uint128_t zmm7
zmm7.d = (*(arg2 + 4)).d f- zmm4.d
uint128_t zmm8
zmm8.d = (*arg4).d f- *arg3
zmm4.d = zmm4.d f- arg3[1]
int128_t* var_a0 = arg1
int32_t var_8c = zmm7.d
int64_t* var_98 = rbx
int32_t var_84 = zmm8.d
int128_t zmm9
zmm9.d = arg4[1].d.d f- arg3[2]
uint128_t zmm10
zmm10.d = (*arg2).d f- zmm5.d
zmm5.d = zmm5.d f- *arg3
int128_t zmm11
zmm11.d = (*(arg2 + 8)).d f- zmm3.d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
zmm3.d = zmm3.d f- arg3[2]
int32_t var_90 = zmm10.d
uint128_t zmm0
zmm0.d = zmm10.d f* zmm10.d
int32_t var_88 = zmm11.d
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_70 = zmm3.d
zmm3 = 0x3f000000
int32_t var_80 = zmm6.d
int32_t var_7c = zmm9.d
int32_t var_78 = zmm5.d
zmm2.d = zmm2.d f+ zmm11.d f* zmm11.d
int32_t var_74 = zmm4.d

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = 0.5f - zmm3.d f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
        zmm4.d = 0.5f f- zmm3.d
        zmm3 = 0x3f000000
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm10.d = zmm10.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm11.d = zmm11.d f* zmm5.d
    else
        zmm10 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm11 = data_143dbb200

zmm2.d = zmm6.d f* zmm6.d
zmm0.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm9.d f* zmm9.d

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm4 = zmm3
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* zmm4.d
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = zmm4.d f- zmm3.d f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
        zmm4.d = zmm4.d f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
    else
        zmm8 = data_143dbb1f8
        zmm6 = data_143dbb1fc
        zmm9 = data_143dbb200

if (zmm10.d f!= 0f || zmm7.d f!= 0f || zmm11.d f!= 0f)
    arg1.b = 0
else
    arg1.b = 1

char rax

if (zmm8.d f!= 0f || zmm6.d f!= 0f || zmm9.d f!= 0f)
    rax = 0
else
    rax = 1

uint32_t result
int64_t var_b8[0x2]

if (arg1.b == 0)
    if (rax == 0)
        zmm2.d = zmm6.d f* zmm7.d
        zmm6.d = zmm6.d f* zmm6.d
        zmm0.d = zmm8.d f* zmm10.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm10.d = zmm10.d f* zmm10.d
        zmm8.d = zmm8.d f* zmm8.d
        zmm2.d = zmm2.d f+ zmm9.d f* zmm11.d
        zmm9.d = zmm9.d f* zmm9.d
        zmm7.d = zmm7.d f+ zmm10.d
        zmm11.d = zmm11.d f* zmm11.d
        zmm6.d = zmm6.d f+ zmm8.d
        zmm2.d = zmm2.d f* zmm2.d
        zmm7.d = zmm7.d f+ zmm11.d
        zmm6.d = zmm6.d f+ zmm9.d
        zmm6.d = zmm6.d f* zmm7.d
        zmm6.d = zmm6.d f- zmm2.d
        zmm6.d f- 9.99999975e-05f
        bool var_a8 = zmm6.d f< 9.99999975e-05f
        return sub_140ae0fc0(&var_a8, arg5, arg6)
    
    int64_t* rax_3 = sub_140acf9d0(&var_b8, rbx, r10, arg2)
    *arg5 = *rax_3
    arg5[1].d = rax_3[1].d
    result = rbx[1].d
    *arg6 = *rbx
    arg6[1].d = result
else
    int32_t rax_1 = *(r10 + 8)
    *arg5 = *r10
    arg5[1].d = rax_1
    
    if (rax == 0)
        int64_t* rax_2 = sub_140acf9d0(&var_b8, r10, arg3, arg4)
        *arg6 = *rax_2
        result = rax_2[1].d
        arg6[1].d = result
    else
        result = arg3[2]
        *arg6 = *arg3
        arg6[1].d = result
return result
