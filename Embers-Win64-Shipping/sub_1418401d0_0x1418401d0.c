// 函数: sub_1418401d0
// 地址: 0x1418401d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t rbx = arg1->__offset(0x30).q
int128_t result = sub_140a48b40()
int128_t zmm0
zmm0.q = float.d(rbx)

if (rbx s< 0)
    zmm0.q = zmm0.q f+ 1.8446744073709552e+19

result.q = result.q f* zmm0.q

if (arg1->__offset(0x38).b != 0 && arg1->__offset(0x39).b == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t rbx_2 = performanceCount - arg1->__offset(0x28).q
    zmm0 = sub_140a48b40()
    int64_t zmm1 = float.d(rbx_2)
    
    if (rbx_2 s< 0)
        zmm1 = zmm1 f+ 1.8446744073709552e+19
    
    zmm0.q = zmm0.q f* zmm1
    result.q = result.q f+ zmm0.q

LeaveCriticalSection(arg1)
return result
