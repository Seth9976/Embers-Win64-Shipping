// 函数: sub_141d69e40
// 地址: 0x141d69e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = Concurrency::details::_CancellationTokenRegistration::_GetToken(*(arg1 + 0x10))
double zmm0 = sub_141d587f0(rax)
int64_t* result

if (not(zmm0.d f!= 0f))
    result = sub_141d596e0(rax)

if (zmm0.d f!= 0f || result.b != 0)
    void arg_8
    result = sub_141d58a90(rax, &arg_8)
    zmm0 = float.d(*result) * 9.9999999999999995e-08
else
    int128_t zmm6
    zmm6.d = arg2.d f* arg3.d
    zmm0 = fconvert.d(zmm6.d) f+ *(arg1 + 0x20)

*(arg1 + 0x20) = zmm0
return result
