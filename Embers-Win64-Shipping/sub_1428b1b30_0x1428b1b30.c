// 函数: sub_1428b1b30
// 地址: 0x1428b1b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = sub_142890ec0(arg1)
sub_1428fe250(rax, sub_142890ee0(arg1), arg2)
sub_1428cb930(&rax[0x81])
int32_t rax_2 = rax[0x8c].d
int128_t zmm0 = *(rax + 0x408)
rax[0xa4] = -1
uint128_t zmm1 = *(rax + 0x418)
*(rax + 0x464) = zmm0
zmm0 = *(rax + 0x428)
*(rax + 0x474) = zmm1
zmm1 = *(rax + 0x438)
*(rax + 0x484) = zmm0
zmm0 = *(rax + 0x448)
*(rax + 0x494) = zmm1
zmm1 = zx.o(rax[0x8b])
*(rax + 0x4a4) = zmm0
zmm0 = *(rax + 0x408)
*(rax + 0x4b4) = zmm1.q
zmm1 = *(rax + 0x418)
*(rax + 0x4bc) = rax_2
*(rax + 0x4c0) = zmm0
zmm0 = *(rax + 0x428)
*(rax + 0x4d0) = zmm1
zmm1 = *(rax + 0x438)
*(rax + 0x4e0) = zmm0
zmm0 = *(rax + 0x448)
*(rax + 0x4f0) = zmm1
zmm1 = zx.o(rax[0x8b])
*(rax + 0x500) = zmm0
rax[0xa2] = zmm1.q
rax[0xa3].d = rax_2
return 1
