// 函数: sub_14106b900
// 地址: 0x14106b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rcx = arg1[4]
rcx->__offset(0x80).b = 0
int128_t zmm1
int128_t zmm2
int128_t zmm3
zmm1, zmm2, zmm3 = sub_1405fc0f0(rcx, arg2, arg3, arg4)
void* rbx = arg1[2]
sub_14106c1e0(rbx, arg1[1].d, zmm2, zmm3, zmm1)
*(rbx + 8) -= 1
int64_t* rcx_2 = *(rbx + 0x10)
(*(*rcx_2 + 0x10))(rcx_2)
jump(*(*arg1 + 0x10))
