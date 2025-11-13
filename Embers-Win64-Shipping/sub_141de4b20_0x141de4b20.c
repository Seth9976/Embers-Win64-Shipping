// 函数: sub_141de4b20
// 地址: 0x141de4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1400f5e30(*arg1, *arg6, arg5, arg1[1].d)
float zmm7[0x4] = 0x3f800000
zmm7[0] = 1f f- arg5
uint32_t zmm7_1[0x4] = sub_141e451a0(arg6, sub_1400f5d80(*arg2, *arg6, zmm7, arg2[1].d))

if (not(_mm_and_ps(zmm7_1, 0x7fffffff)[0] f> 9.99999975e-06f))
    return sub_141deea30(arg7, arg3)

zmm7_1[0] = zmm7_1[0] f- 1f

if (not(_mm_and_ps(zmm7_1, 0x7fffffff)[0] f> 9.99999975e-06f))
    return sub_141deea30(arg7, arg4)

int64_t result = sub_141decfa0(arg7, arg3)
int32_t i = 0

if (arg3[1].d s> 0)
    float* rcx_6 = nullptr
    
    do
        char rdx_5
        
        if (*(rcx_6 + *arg3 + 4) != 0 || *(rcx_6 + *arg4 + 4) != 0)
            rdx_5 = 1
        else
            rdx_5 = 0
        
        i += 1
        *(rcx_6 + *arg7 + 4) = rdx_5
        float zmm0_1 = *(rcx_6 + *arg3)
        result = *arg7
        *(rcx_6 + result) = (*(rcx_6 + *arg4) - zmm0_1) f* zmm7_1[0] + zmm0_1
        rcx_6 = &rcx_6[2]
    while (i s< arg3[1].d)

return result
