// 函数: sub_142b81d30
// 地址: 0x142b81d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg5)
int64_t* rcx = arg1[5]

if (rcx == 0)
    return sub_142b81e00(arg1, arg2, arg3, arg4, zmm0, arg5, arg6, arg7, arg8) __tailcall

int64_t result
int512_t zmm2_1
int128_t zmm6_2
result, zmm2_1, zmm6_2 = sub_142b332a0(rcx, arg2, arg3, 0, zmm0.q, arg7, arg8)

if (*(arg3 + 8) != 0)
    int32_t arg_8 = 0
    int128_t zmm0_2 = sub_142aa7d40(arg8, &arg_8)
    zmm2_1.o = zmm6_2
    (*(*arg1 + 0x50))(arg1, zmm0_2, zmm2_1)
    sub_142aa8140(arg8, zmm0_2)

result.b = 1
return result
