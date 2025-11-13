// 函数: sub_142139a70
// 地址: 0x142139a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) s>= 0x15c || (*(arg1 + 0x28) & 1) == 0)
    int64_t* rax_8 = sub_1408d9160(sub_1408d9160(arg1, arg2, arg3), &arg2[3], arg3)
    int64_t* rdx_4 = rax_8[1]
    int32_t* rax_9 = *rdx_4
    
    if (&rax_9[1] u<= rdx_4[1])
        arg2[6] = *rax_9
        int64_t* rax_10 = rax_8[1]
        *rax_10 += 4
    else if ((*(rax_8 + 0x29) & 0x20) != 0)
        sub_140b54070(rax_8, &arg2[6], arg3)
    else
        (*(*rax_8 + 0x150))(rax_8, &arg2[6], 4)
    
    return arg1

int32_t arg_8
int64_t* rax_1 = sub_1409ac740(sub_1408d9160(arg1, arg2, arg3), &arg_8, arg3)
int64_t* rdx_1 = rax_1[1]
int32_t* rax_2 = *rdx_1

if (&rax_2[1] u<= rdx_1[1])
    arg2[6] = *rax_2
    int64_t* rax_3 = rax_1[1]
    *rax_3 += 4
else if ((*(rax_1 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_1, &arg2[6], arg3)
else
    (*(*rax_1 + 0x150))(rax_1, &arg2[6], 4)

arg3.o = zx.o(arg_8)
arg3.o = _mm_unpacklo_epi8(arg3.o, 0)
arg3.o = _mm_unpacklo_epi16(arg3.o, 0)
float temp0_4[0x4] = __addps_xmmps_memps(
    __mulps_xmmps_memps(_mm_cvtepi32_ps(arg3.o), data_143280740), data_142d3f7e0)
arg3.o = temp0_4
float var_10 = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)[0]
arg3.o = _mm_shuffle_ps(arg3.o, temp0_4, 0x55)
*(arg2 + 0xc) = (_mm_unpacklo_ps(temp0_4, arg3.q)).q
arg2[5] = var_10
return arg1
