// 函数: sub_141736860
// 地址: 0x141736860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (*(arg1 + 0xc) != 0)
    int64_t i = 0
    void* r9_1 = arg3 + 0xc
    void var_98
    result = (*(*arg1 + 0x28))(arg1, &var_98) - arg3
    
    do
        if ((*(r9_1 - 0xc)).d f> *(result + r9_1))
            return result
        
        if ((*r9_1).d f< *(result + r9_1 - 0xc))
            return result
        
        i += 1
        r9_1 += 4
    while (i s< 3)

int128_t zmm7 = data_142d3f660
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rbx_1 + 1).d
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405c4fe0(arg2)

result = *arg2
int128_t* rcx_2 = rbx_1 << 6
*(rcx_2 + result) = arg1.o
*(rcx_2 + result + 0x10) = zmm7
*(rcx_2 + result + 0x20) = zx.o(0)
*(rcx_2 + result + 0x30) = temp0_3
return result
