// 函数: sub_140d763e0
// 地址: 0x140d763e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
uint64_t result = *(arg1 + 8)

if (result != 0 && *(result + 0x27) != 0)
    uint128_t zmm1 = zx.o(*(arg1 + 0x9c))
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x98)))
    zmm1 = _mm_cvtepi32_ps(zmm1)
    *arg2 = zmm0.d
    arg2[1] = zmm1.d
    __security_check_cookie(rax_1 ^ &var_48)
    return result

HWND hWnd = *(arg1 + 0x28)

if (hWnd != 0)
    RECT rect
    GetClientRect(hWnd, &rect)
    result = zx.q(rect.bottom - rect.top)
    *arg2 = _mm_cvtepi32_ps(zx.o(rect.right - rect.left)).d
    arg2[1] = _mm_cvtepi32_ps(zx.o(result.d)).d

__security_check_cookie(rax_1 ^ &var_48)
return result
