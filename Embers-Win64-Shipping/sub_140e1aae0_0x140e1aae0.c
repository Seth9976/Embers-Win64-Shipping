// 函数: sub_140e1aae0
// 地址: 0x140e1aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.d = arg2:4.d.d f- *(arg1 + 0x794)
int128_t zmm7
zmm7.d = arg2.d.d f- *(arg1 + 0x790)
int32_t result

if (_finite(_mm_cvtps_pd(zmm7.q)) != 0 && _finite(_mm_cvtps_pd(zmm6.q)) != 0)
    double zmm0 = zmm7.q
    
    if ((*(**(arg1 + 0x910) + 0xa8))(zmm0, zx.q(int.d(zmm0.d)), zx.q(int.d(zmm6.q.d))).b != 0)
        result.b = 1
        return result

result.b = 0
return result
