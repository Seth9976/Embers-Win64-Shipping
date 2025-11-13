// 函数: sub_14176fb50
// 地址: 0x14176fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg4 + 8)
void var_28
int32_t arg_8
int64_t rdx_1
int32_t zmm1[0x8]
int32_t zmm2_1[0x8]
int32_t zmm3[0x8]
int128_t zmm6_1
rdx_1, zmm1, zmm2_1, zmm3, zmm6_1 =
    sub_1417795b0(&arg1[0xa], &arg1[0xb], arg3, arg6, &var_28, &arg_8)
zmm3[0].o = zx.o(0)
zmm2_1[0].o = arg_8
zmm1[0].o = arg5[sx.q(arg6) + 0xb]
zmm1[0] = zmm1[0] f+ arg1[0x19][0]

if (not(zmm2_1[0] f<= zmm1[0]))
    zmm3[0].o = zmm2_1[0].o
    zmm3[0] = zmm3[0] f- zmm1[0]
else if (not(zmm2_1[0] f>= (zmm1[0].o ^ data_142d3f780)[0]))
    zmm3[0].o = zmm1[0].o
    zmm3[0] = zmm3[0] f+ zmm2_1[0]

if (__andps_xmmxud_memxud(zmm3[0].o, data_142d3f770)[0] f<= 0f)
    *arg2 = 0
    *(arg2 + 4) = 1
else if (arg7 == 0)
    zmm1[0].o = *(arg4 + 0x2c)
    
    if (not(zmm1[0] f> 0f))
        zmm1[0].o = *arg5
    
    sub_14176def0(arg1, rdx_1, &var_28)
    *arg2 = 1
else
    zmm2_1[0].o = *(arg4 + 0x50)
    
    if (not(zmm2_1[0] f> 0f))
        zmm2_1[0].o = arg5[0x15]
    
    uint32_t zmm0_1[0x4] = *(arg4 + 0x54)
    
    if (not(zmm0_1[0] f> 0f))
        zmm0_1 = arg5[0x16]
    
    zmm1[0].o = zmm6_1
    int32_t* rcx_1
    rcx_1.b = arg5[0x10] == 0
    int64_t* var_48
    var_48.b = rcx_1.b
    zmm3[0].o = zmm0_1
    sub_14176e1f0(arg1, zmm1, zmm2_1, zmm3, var_48.b, &var_28, zmm3[0], &(*arg1)[0x37])
    *arg2 = 1

return arg2
