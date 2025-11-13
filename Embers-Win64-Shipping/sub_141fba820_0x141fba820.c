// 函数: sub_141fba820
// 地址: 0x141fba820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x770)
int32_t rax_1 = (*(*rcx + 0x60))(rcx)
int64_t* rcx_1 = *(arg1 + 0x770)
*(arg1 + 0x74c) = float.s(zx.q(rax_1)) f* 0.00100000005f
int32_t rax_4 = (*(*rcx_1 + 0x60))(rcx_1)
uint64_t result = zx.q(rax_4 - 0x1388)

if (rax_4 == 0x1388)
    result = 0

if (result.d == 0)
    return result

int512_t zmm1
zmm1.o = zx.o(0)
int64_t var_18 = 0
zmm1.d = float.s(result)
int32_t var_10_1 = 0
zmm1.d = zmm1.d f* 0.00100000005f
return sub_141fb6490(arg1, zmm1, &var_18)
