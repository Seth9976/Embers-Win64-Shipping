// 函数: sub_141be5d10
// 地址: 0x141be5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*arg2)
*(arg1 + 0x82c) = zmm1.d
*(arg1 + 0x830) = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
void* rcx = *(arg1 + 0x870)
uint64_t arg_8 = zmm1.q

if (rcx == 0)
    return 

return sub_140f60a00(rcx, zmm1.q) __tailcall
