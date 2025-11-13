// 函数: sub_141f747a0
// 地址: 0x141f747a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
int128_t zmm6_1
zmm1, zmm6_1 = sub_141efce60(arg1, arg2.d)
void* rax = arg1[0x15]
int128_t zmm7 = *(arg1 + 0x26c)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

char rcx_1 = 0

if (zmm7.d f> *(rax + 0x520) - 1f)
    rcx_1 = 0x20

int64_t rax_2 = *arg1
*(arg1 + 0x5a7) = rcx_1 | (*(arg1 + 0x5a7) & 0xdf)
char rax_3 = (*(rax_2 + 0x8f8))(arg1)
int64_t rdx = *arg1

if ((*(rdx + 0x918))(arg1, rdx) != 0)
    zmm1.o = zmm6_1
    (*(*arg1 + 0x8e8))(arg1, zmm1, 0)

char result = (*(*arg1 + 0x910))(arg1, zx.q(rax_3))

if (result == 0)
    if (*(arg1 + 0x5a4) != 1)
        return result
    
    return (*(*arg1 + 0x8e0))(arg1, arg4)

char rax_6 = sub_140d3e110(&arg1[0x87])
int64_t r8 = *arg1

if (rax_6 == 0)
    return (*(r8 + 0x8d8))(arg1, arg4, r8)

return (*(r8 + 0x8f0))(arg1)
