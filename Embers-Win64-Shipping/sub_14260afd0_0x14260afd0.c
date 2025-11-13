// 函数: sub_14260afd0
// 地址: 0x14260afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
float zmm5 = *arg3
int128_t zmm6 = *arg4
float zmm3 = arg3[1]
float zmm0 = zmm5 f- zmm6.d
float zmm4 = *(arg4 + 4)
zmm6.d = zmm6.d f+ zmm5
float zmm1 = arg3[2]
float zmm2 = *(arg4 + 8)
float var_488 = zmm0
int32_t var_4a0 = 0x80
int32_t var_478 = zmm6.d
float var_484 = zmm3 - zmm4
float var_474 = zmm4 + zmm3
float var_470 = zmm2 + zmm1
int64_t var_458[0x80]
int32_t rax_3
int512_t zmm6_1
rax_3, zmm6_1 = sub_1426142f0(arg1, arg2, &var_488, &var_478, &var_458, var_4a0, arg6)
zmm6_1.o = 0x7f7fffff
int64_t result = 0
*arg5 = *arg3
uint32_t zmm0_1[0x4] = arg3[1]
arg5[1] = zmm0_1[0]
arg5[2] = arg3[2]

if (rax_3 s> 0)
    int64_t i = 0
    
    do
        int64_t result_1 = var_458[i]
        float zmm6_2 = sub_142604ed0(arg1, arg2, ((1 << (*(arg1 + 0xa0)).b).d - 1) & result_1.d, 
            arg3, &var_488)
        float zmm3_1 = var_488
        float zmm1_1 = zmm3_1 f- *arg3
        uint32_t zmm5_1[0x4] = zmm1 - zmm2
        float zmm2_1 = var_484 f- arg3[1]
        zmm5_1[0] = zmm5_1[0] f- arg3[2]
        zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
        
        if (not(zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm5_1[0] >= zmm6_2))
            *arg5 = zmm3_1
            arg5[1] = var_484
            result = result_1
            arg5[2] = zmm5_1[0]
        
        i += 1
    while (i s< sx.q(rax_3))
    
    zmm0_1 = arg5[1]

zmm0_1[0] = zmm0_1[0] f- arg3[1]

if (__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] f> *(arg4 + 4))
    result = 0

__security_check_cookie(rax_1 ^ &var_4c8)
return result
