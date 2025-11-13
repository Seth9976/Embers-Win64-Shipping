// 函数: sub_142609d30
// 地址: 0x142609d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int128_t zmm6 = *arg4
float zmm5 = *arg3
float zmm3 = arg3[1]
float zmm4 = *(arg4 + 4)
float zmm0 = zmm5 f- zmm6.d
float zmm1 = arg3[2]
zmm6.d = zmm6.d f+ zmm5
float zmm2 = *(arg4 + 8)
int64_t i = 0
int32_t* rsi = arg2
float var_498 = zmm0
char var_4a8 = 1
int32_t var_488 = zmm6.d
int64_t result = 0
float var_494 = zmm3 - zmm4
uint64_t rbx
rbx.b = 0xff
float var_484 = zmm4 + zmm3
float var_480 = zmm2 + zmm1
int64_t var_468[0x80]
int32_t rax_2
float zmm7
rax_2, zmm7 = sub_1426142f0(arg1, arg2, &var_498, &var_488, &var_468, 0x80, var_4a8)
int64_t rax_3 = sx.q(rax_2)
var_488.q = rax_3

if (rax_3 s> 0)
    do
        int64_t result_2 = var_468[i]
        int32_t rdx_2 = ((1 << (*(arg1 + 0xa0)).b).d - 1) & result_2.d
        char r8_1 = *((zx.q(*((sx.q(rdx_2) << 5) + *(rsi + 0x10) + 0x1f)) & 0x3f) + arg1 + 0x3c)
        char rsi_1 = r8_1
        
        if (r8_1 u>= rbx.b)
            rsi_1 = rbx.b
        
        int64_t result_1 = 0
        
        if (r8_1 u>= rbx.b)
            result_1 = result
        
        result = result_1
        
        if (r8_1 == rsi_1)
            float zmm6_1
            zmm6_1, zmm7 = sub_142604ed0(arg1, arg2, rdx_2, arg3, &var_498)
            float zmm3_1 = var_498
            float zmm1_1 = zmm3_1 f- *arg3
            uint32_t zmm5_1[0x4] = zmm1 - zmm2
            float zmm2_1 = var_494 f- arg3[1]
            zmm5_1[0] = zmm5_1[0] f- arg3[2]
            zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
            
            if (not(zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm5_1[0] >= zmm6_1))
                *arg5 = zmm3_1
                arg5[1] = var_494
                result = result_2
                arg5[2] = zmm5_1[0]
        
        i += 1
        rbx = zx.q(rsi_1)
        rsi = arg2
    while (i s< var_488.q)

uint32_t zmm0_1[0x4] = arg5[1]
zmm0_1[0] = zmm0_1[0] f- arg3[1]

if (__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] f> *(arg4 + 4))
    result = 0

__security_check_cookie(rax_1 ^ &var_4d8)
return result
