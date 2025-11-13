// 函数: sub_141a5cb80
// 地址: 0x141a5cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20
sub_141a514d0(&var_20)
float zmm1[0x2] = *(arg1 + 0x104)
int32_t zmm6 = (zx.o(0)).d
float zmm0[0x2] = data_1439d2910
int32_t var_28

if (zmm1[0] == zmm0[0])
    zmm1 = arg1[0x1f].d
    
    if (not(zmm1[0] == 0f))
        goto label_141a5cbd7
else
    *(arg1 + 0x104) = zmm0[0]
label_141a5cbd7:
    zmm6 = sub_141a6d2f0(&var_28, arg1, var_20, _mm_cvtps_pd(zmm1))
    arg1[0x1c].d = var_28
    zmm0 = data_1439d2910

zmm1 = arg1[0x21].d

if (not(zmm1[0] == zmm0[0]))
    arg1[0x1e].d = zmm1[0]
    arg1[0x21].d = data_1439d2910[0]
    zmm0 = data_1439d2910

zmm1 = *(arg1 + 0x10c)

if (zmm1[0] == zmm0[0])
    zmm1 = *(arg1 + 0xfc)
else
    *(arg1 + 0xfc) = zmm1[0]
    *(arg1 + 0x10c) = data_1439d2910[0]

if (not(zmm1[0] f<= zmm6))
    zmm6 = sub_141a6d2f0(&var_28, arg1, var_20, _mm_cvtps_pd(zmm1))
    
    if (((arg1[0x16].d u>> 1).b & 1) == 0)
        arg1[0x14].d = var_28

zmm0 = arg1[0x20].d

if (not(zmm0[0] f<= zmm6))
    sub_141a6d2f0(&var_28, arg1, var_20, _mm_cvtps_pd(zmm0))
    
    if (((arg1[0x16].d u>> 1).b & 1) == 0)
        arg1[0x14].d = var_28

return sub_140ce3290(arg1) __tailcall
