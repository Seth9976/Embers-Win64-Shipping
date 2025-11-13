// 函数: sub_140ae04f0
// 地址: 0x140ae04f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg1
char var_28 = 0
char arg_20 = 0
arg1.b = 0
char result_2 = 0
char rsi = arg2[5].b & 1
uint128_t zmm1

if (rsi == 0)
    arg4.o = 0x3f360b61
    zmm1.d = (*rdi).d f* 0.711111128f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rcx = int.d(zmm1.d)
    zmm1.d = (*(rdi + 4)).d f* 0.711111128f
    arg1 = zx.q(rcx s>> 1)
    var_28 = arg1.b
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    int32_t rax_1 = int.d(zmm1.d)
    zmm1.d = (*(rdi + 8)).d f* 0.711111128f
    arg_20 = (rax_1 s>> 1).b
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f+ 0.5f
    result_2 = (int.d(zmm1.d) s>> 1).b

int64_t rax_5 = *arg2
bool arg_10 = arg1.b != 0
(*(rax_5 + 0x158))(arg2, &arg_10, 1, arg4)

if (arg_10 == 0)
    var_28 = 0
else
    int64_t* rcx_2 = arg2[1]
    char* rdx_1 = *rcx_2
    
    if (&rdx_1[1] u> rcx_2[1])
        (*(*arg2 + 0x150))(arg2, &var_28, 1)
    else
        var_28 = *rdx_1
        *rcx_2 += 1

int64_t rax_9 = *arg2
arg_10 = arg_20 != 0
(*(rax_9 + 0x158))(arg2, &arg_10, 1)

if (arg_10 == 0)
    arg_20 = 0
else
    int64_t* rcx_5 = arg2[1]
    char* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        (*(*arg2 + 0x150))(arg2, &arg_20, 1)
    else
        arg_20 = *rdx_4
        *rcx_5 += 1

int64_t rax_13 = *arg2
arg_10 = result_2 != 0
uint32_t result = (*(rax_13 + 0x158))(arg2, &arg_10, 1)
char result_1

if (arg_10 == 0)
    result_1 = 0
else
    int64_t* rcx_8 = arg2[1]
    char* rdx_7 = *rcx_8
    
    if (&rdx_7[1] u> rcx_8[1])
        result = (*(*arg2 + 0x150))(arg2, &result_2, 1)
        result_1 = result_2
    else
        result = zx.d(*rdx_7)
        result_2 = result.b
        *rcx_8 += 1
        result_1 = result_2

if (rsi != 0)
    uint32_t rax_17 = zx.d(arg_20)
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(var_28)).d f* 1.40625f
    *rdi = zmm0.d
    result = zx.d(result_1)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_17)).d f* 1.40625f
    zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 1.40625f
    *(rdi + 4) = zmm0.d
    *(rdi + 8) = zmm1.d

return result
