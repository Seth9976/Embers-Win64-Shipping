// 函数: sub_140b6fe80
// 地址: 0x140b6fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg1
int32_t* result_1 = j_sub_140a82f30(0x4f0)
int32_t* result = result_1

if (result_1 == 0)
    result = nullptr
else
    *result_1 = 0x5397fe56
    memset(&result_1[4], 0, 0x4d0)

void* rcx_1 = &result[4]
int64_t i_1 = 9
int128_t zmm0_1
int64_t i

do
    rcx_1 += 0x80
    zmm0_1 = *rbx
    rbx = &rbx[8]
    *(rcx_1 - 0x80) = zmm0_1
    *(rcx_1 - 0x70) = rbx[-7]
    *(rcx_1 - 0x60) = rbx[-6]
    *(rcx_1 - 0x50) = rbx[-5]
    *(rcx_1 - 0x40) = rbx[-4]
    *(rcx_1 - 0x30) = rbx[-3]
    *(rcx_1 - 0x20) = rbx[-2]
    *(rcx_1 - 0x10) = rbx[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*rcx_1 = *rbx
*(rcx_1 + 0x10) = rbx[1]
*(rcx_1 + 0x20) = rbx[2]
*(rcx_1 + 0x30) = rbx[3]
zmm0_1 = rbx[4]
*(result + 0x4e0) = arg2
*(rcx_1 + 0x40) = zmm0_1
return result
