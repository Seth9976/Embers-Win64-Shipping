// 函数: sub_1425059f0
// 地址: 0x1425059f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rcx_1 = &var_18
int32_t zmm0_1 = (zx.o(0)).d

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result

if (not(zmm0_1 f!= *rcx_1) && not(zmm0_1 f!= *(rcx_1 + 4)) && not(zmm0_1 f!= *(rcx_1 + 8))
        && not(zmm0_1 f!= *(rcx_1 + 0xc)))
    *arg3 = 1
    return result

*arg3 = 0
return result
