// 函数: sub_1422d2db0
// 地址: 0x1422d2db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0xffffffff)
    return 

int128_t zmm1 = arg3[1]
int32_t rax = *(arg3 + 0x88)
void* rcx_1 = *(arg1 + 0x10) + sx.q(arg2) * 0x98
*rcx_1 = *arg3
uint128_t zmm0 = arg3[2]
*(rcx_1 + 0x10) = zmm1
zmm1 = arg3[3]
*(rcx_1 + 0x20) = zmm0
zmm0 = arg3[4]
*(rcx_1 + 0x30) = zmm1
zmm1 = arg3[5]
*(rcx_1 + 0x40) = zmm0
zmm0 = arg3[6]
*(rcx_1 + 0x50) = zmm1
zmm1 = arg3[7]
*(rcx_1 + 0x60) = zmm0
zmm0 = zx.o(arg3[8].q)
*(rcx_1 + 0x70) = zmm1
*(rcx_1 + 0x80) = zmm0.q
*(rcx_1 + 0x88) = rax
int64_t* rcx_2 = data_143f53cc8
data_143f53cc8 = 0

if (rcx_2 != 0)
    jump(*(*rcx_2 + 0x38))
