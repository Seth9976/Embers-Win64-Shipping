// 函数: sub_140f166b0
// 地址: 0x140f166b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int64_t result = _isnan(fconvert.d(arg2.d))

if (result.d != 0)
    zmm6 = zx.o(0)

if (not(zmm6.d f== *(arg1 + 0x8c)))
    *(arg1 + 0x88) |= 1
    *(arg1 + 0x8c) = zmm6.d
    void* i = *(arg1 + 0x18)
    result = sx.q(*(arg1 + 0x20))
    
    for (void* rdx_2 = result * 0x70 + i; i != rdx_2; i += 0x70)
        *(i + 0x68) |= 5

return result
