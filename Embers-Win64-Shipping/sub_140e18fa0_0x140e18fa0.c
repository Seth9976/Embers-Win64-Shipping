// 函数: sub_140e18fa0
// 地址: 0x140e18fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x910)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x70))(rcx)

if (rcx == 0 || rax_2 == 0)
    arg4 = *(arg1 + 0xa40)
else
    int64_t* rcx_1 = *(arg1 + 0x910)
    int64_t* rsi_1 = data_143e20d08
    uint128_t zmm7
    
    if (rcx_1 == 0)
        zmm7 = 0x3f800000
    else
        (*(*rcx_1 + 0xf8))(rcx_1)
        zmm7 = arg4
    
    (*(*rsi_1 + 0x48))(rsi_1)
    int64_t* rcx_3 = *(arg1 + 0x910)
    arg4.d = arg4.d f* zmm7.d
    int128_t zmm6
    zmm6.d = 1f f/ arg4.d
    zmm7.d = _mm_cvtepi32_ps(zx.o((*(*rcx_3 + 0xb0))(rcx_3))).d f* zmm6.d
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
    uint128_t var_38_1 = zmm7
    
    if (arg3 != 0)
        int64_t* rcx_4 = *(arg1 + 0x910)
        arg4.d = _mm_cvtepi32_ps(zx.o((*(*rcx_4 + 0xb8))(rcx_4))).d f* zmm6.d
        arg4.d = arg4.d f+ zmm7.d
        var_38_1:4.d = arg4.d
    
    arg4 = var_38_1

*arg2 = arg4
return arg2
