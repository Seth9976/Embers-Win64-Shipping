// 函数: sub_14196e810
// 地址: 0x14196e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm3
zmm3.o = *(arg1 + 0x18)
int512_t zmm2
zmm2.o = *(arg1 + 0x14)
int32_t zmm0 = *(arg1 + 0x1c)
int64_t result = (*(**(arg2 + 0x20) + 0x1d0))(zmm0, *(arg1 + 0x10), zmm2, zmm3, zmm0, 
    *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28), *(arg1 + 0x2c), *(arg1 + 0x30), *(arg1 + 0x34))
return result
