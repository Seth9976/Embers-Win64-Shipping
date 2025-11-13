// 函数: sub_140e21b40
// 地址: 0x140e21b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(arg2)
float zmm4 = *(arg1 + 0x790)
uint128_t zmm6 = zx.o(arg3)
int128_t zmm11 = *(arg1 + 0x7a0)
int128_t zmm12 = *(arg1 + 0x794)
uint128_t zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
int128_t zmm13 = *(arg1 + 0x7a4)
int128_t zmm7 = zmm6.q:4.d
int128_t zmm14
zmm14.d = float.s(int.d(zmm5.d))
int32_t rax_1 = int.d(zmm1.d)
int32_t arg_8 = zmm14.d
zmm1.d = zmm6.d f* 2f
int128_t zmm8
zmm8.d = float.s(rax_1)
int64_t zmm0
zmm0.d = -0.5f f- zmm1.d
int32_t arg_c = zmm8.d
int32_t rax_2 = int.d(zmm0.d)
zmm0.d = zmm7.q.d f* 2f
int128_t zmm10
zmm10.d = float.s(neg.d(rax_2 s>> 1))
int32_t result = neg.d(int.d(-0.5f f- zmm0.d) s>> 1)
int128_t zmm9
zmm9.d = float.s(result)

if (zmm4 f!= zmm14.d || zmm12.d f!= zmm8.d || zmm11.d f!= zmm10.d || not(zmm13.d f== zmm9.d))
    int64_t* rcx_1
    
    if (*(arg1 + 0x910) == 0)
        *(arg1 + 0x780) = zmm5.q
        *(arg1 + 0x788) = zmm6.q
        rcx_1 = nullptr
    else
        sub_140e238f0(arg1, arg_8.q)
        int64_t* rcx = *(arg1 + 0x910)
        result = (*(*rcx + 8))(rcx, zx.q(int.d(zmm14.d)), zx.q(int.d(zmm8.d)), 
            zx.q(int.d(zmm10.d)), int.d(zmm9.d))
        rcx_1 = *(arg1 + 0x910)
    
    arg_8 = zmm6.d
    arg_c = zmm7.d
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0xf0))(rcx_1, &arg_8)
        zmm7 = arg_c
        zmm6 = arg_8
    
    if (zmm6.d f!= *(arg1 + 0x7a0) || not(zmm7.d f== *(arg1 + 0x7a4)))
        *(arg1 + 0x7a0) = arg_8.q
        sub_140db2ea0(arg1 + 0x390)

return result
