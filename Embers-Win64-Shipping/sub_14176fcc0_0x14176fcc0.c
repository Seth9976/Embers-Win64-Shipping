// 函数: sub_14176fcc0
// 地址: 0x14176fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg4 + 8)
void var_28
int32_t arg_8
int32_t zmm1[0x8]
int32_t zmm2_1[0x8]
int32_t zmm3[0x8]
int128_t zmm6_1
zmm1, zmm2_1, zmm3, zmm6_1 = sub_1417795b0(&arg1[0xa], &arg1[0xb], arg3, arg6, &var_28, &arg_8)
zmm1[0].o = arg_8
zmm1[0] = zmm1[0] f- *(arg5 + (sx.q(arg6) << 2) + 0x90)

if (not(__andps_xmmxud_memxud(zmm1[0].o, data_142d3f770)[0] f<= arg1[0x19][0]))
    if (*(arg5 + 0xac) == 0)
        zmm2_1[0].o = zx.o(0)
    else
        zmm2_1[0].o = *(arg4 + 0x38)
        
        if (not(zmm2_1[0] f> 0f))
            zmm2_1[0].o = *(arg5 + 0xb4)
    
    if (*(arg5 + 0xad) == 0)
        zmm3[0].o = zx.o(0)
    else
        zmm3[0].o = *(arg4 + 0x3c)
        
        if (not(zmm3[0] f> 0f))
            zmm3[0].o = *(arg5 + 0xb8)
    
    zmm1[0].o = zmm6_1
    int64_t* var_48
    var_48.b = *(arg5 + 0xb0) == 0
    sub_14176e1f0(arg1, zmm1, zmm2_1, zmm3, var_48.b, &var_28, zmm1[0], &(*arg1)[0x53])

*arg2 = 0
arg2[1] = 1
return arg2
