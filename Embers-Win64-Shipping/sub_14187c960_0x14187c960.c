// 函数: sub_14187c960
// 地址: 0x14187c960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x78)

if (result == 0)
    return 0

char rcx = arg1[0xa].b
int128_t zmm0 = *(arg1 + 0x18)
int32_t r8 = *arg1
int32_t r9 = arg1[1]
int32_t r10 = arg1[2]
int32_t r11 = arg1[3]
int32_t rdx = arg1[0xb]
int32_t rbx = arg1[4]
int32_t rdi_1 = arg1[0xc]
*result = &data_142fe7fb0
result[1] = arg2
result[4].d = rbx
result[7].b = rcx
result[2].d = r8
*(result + 0x14) = r9
result[3].d = r10
*(result + 0x1c) = r11
*(result + 0x28) = zmm0
*(result + 0x3c) = rdx
result[8].d = rdi_1
*(result + 0x4c) = *(result + 0x3c)
result[9].d = 0
__builtin_memset(&result[0xa], 0, 0x1c)
*(result + 0x6c) = 4
result[0xe].d = 0x10
return result
