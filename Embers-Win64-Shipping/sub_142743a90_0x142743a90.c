// 函数: sub_142743a90
// 地址: 0x142743a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141f5e0e0(*arg1, *arg1[1])
int32_t* rdx_2 = arg1[2]
void* rcx_1 = *arg1
int32_t zmm2 = rdx_2[2]
int32_t zmm1 = rdx_2[1]
char* rdx_3 = arg1[3]
int32_t var_18 = *rdx_2
int32_t var_14 = zmm1
int32_t var_10 = zmm2
int64_t* rcx_2 = *(rcx_1 + 0x680)
uint64_t rdx_4 = 0

if (rax - 1 s>= 0)
    rdx_4 = zx.q(rax - 1)

return (*(*rcx_2 + 0x168))(rcx_2, rdx_4, &var_18, zx.q(sbb.d(arg4, arg4, *rdx_3 != 0)) & 3, 0, 1)
