// 函数: sub_14106c4c0
// 地址: 0x14106c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[3]
char rax_1 = (*(*rcx + 8))(rcx)
CRITICAL_SECTION* rcx_1 = arg1[4]
rcx_1->__offset(0x80).b = rax_1
int128_t zmm1
int128_t zmm2
int128_t zmm3
zmm1, zmm2, zmm3 = sub_1405fc0f0(rcx_1, arg2, arg3, arg4)
void* rbx = arg1[2]
sub_14106c1e0(rbx, arg1[1].d, zmm2, zmm3, zmm1)
*(rbx + 8) -= 1
int64_t* rcx_3 = *(rbx + 0x10)
(*(*rcx_3 + 0x10))(rcx_3)
jump(*(*arg1 + 0x10))
