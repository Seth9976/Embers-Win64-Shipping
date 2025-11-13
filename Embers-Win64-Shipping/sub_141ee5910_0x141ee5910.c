// 函数: sub_141ee5910
// 地址: 0x141ee5910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x1a0) * 182.044449f
float zmm2 = *(arg1 + 0x19c) * 182.044449f
*arg2 =
    zx.d((int.d(zmm1 + zmm1 + 0.5f) s>> 1).w) << 0x10 | zx.d((int.d(zmm2 + zmm2 + 0.5f) s>> 1).w)
zmm1 = *(arg1 + 0x1a4) * 0.711111128f
char result = (int.d(zmm1 + zmm1 + 0.5f) s>> 1).b
*arg3 = result
return result
