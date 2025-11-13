// 函数: sub_1409f7820
// 地址: 0x1409f7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x68)

if (rcx == 0)
    return zx.o(0)

uint128_t zmm0
zmm0.q = float.d((*(*rcx + 0x78))(rcx))
int64_t result
result.d = fconvert.s(sub_1409f5b40(zmm0, 0x22, 0x24))
return result
