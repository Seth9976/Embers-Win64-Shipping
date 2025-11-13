// 函数: sub_142186c20
// 地址: 0x142186c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* result = sub_141f31e20(arg1, arg2, arg3)
int32_t i = 0
int64_t zmm0
zmm0.d = (*rsi).d f+ *(arg1 + 0x494)
*(arg1 + 0x494) = zmm0.d
arg1[0x93].d = *(rsi + 4) f+ arg1[0x93].d
zmm0.d = rsi[1].d.d f+ *(arg1 + 0x49c)
*(arg1 + 0x49c) = zmm0.d

for (; i s>= 0; i += 1)
    if (i s>= arg1[0xc1].d)
        break
    
    result = arg1[0xc0]
    int64_t* rcx_1 = *(result + (sx.q(i) << 3))
    
    if (rcx_1 != 0)
        zmm0 = *rsi
        int32_t var_10_1 = rsi[1].d
        int64_t rax_1 = *rcx_1
        int64_t var_18 = zmm0
        result = (*(rax_1 + 0x1e8))(zmm0, &var_18, zx.q(arg3))

return result
