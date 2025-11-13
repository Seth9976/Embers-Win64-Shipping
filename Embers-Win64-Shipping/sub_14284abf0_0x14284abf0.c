// 函数: sub_14284abf0
// 地址: 0x14284abf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
float result[0x4] = arg1
int32_t rcx = int.d(result[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== result[0]))
    result =
        _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(result, result[0].q)) & 1)))

arg1[0] = arg1[0] - result[0]
arg1[0] - 0.5f

if (not(arg1[0] < 0.5f))
    if (arg1[0] > 0.5f)
        result[0] = result[0] + 1f
    else
        result[0] = result[0] * 0.5f
        float _Y
        modff(result[0], &_Y)
        arg1 = _Y
        arg1[0] = arg1[0] * 2f
        
        if (not(arg1[0] == result[0]))
            result[0] = result[0] + 1f

__security_check_cookie(rax_1 ^ &var_48)
return result
