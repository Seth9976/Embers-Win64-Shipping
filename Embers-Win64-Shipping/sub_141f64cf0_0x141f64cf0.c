// 函数: sub_141f64cf0
// 地址: 0x141f64cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x438)
void* rcx_1 = *(arg1 + 0x430)

if (rcx_1 == 0)
    if (rax != 0)
        rcx_1 = *(rax + 0x430)
    
    if (rax == 0 || rcx_1 == 0)
        *arg2 = zx.o(0)
        int32_t var_10 = 0
        arg2[1].q = _mm_unpacklo_ps(zx.o(0), 0)
        *(arg2 + 0x18) = 0
        return 0

void var_28
int128_t* rax_1 = sub_1423120c0(rcx_1, &var_28)
*arg2 = *rax_1
arg2[1].q = rax_1[1].q
int32_t result = *(rax_1 + 0x18)
*(arg2 + 0x18) = result
return result
