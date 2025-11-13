// 函数: sub_1417c01d0
// 地址: 0x1417c01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x10))(arg2)
int64_t r8 = *arg1

if (rax_1 != (*(r8 + 0x10))(arg1, arg3, r8))
    int32_t result
    result.b = 0
    return result

int64_t rax_2 = arg2[1]
int32_t rbx

if (arg1[1].d != rax_2.d || *(arg1 + 0xc) != (rax_2 u>> 0x20).d)
    rbx.b = 0
else
    rbx.b = 1

int32_t zmm0 = arg2[2].d
int64_t rbp

if (zmm0 f!= arg1[2].d)
    rbp.b = 0
else
    rbp.b = 1

char rax_4
int512_t zmm0_1
rax_4, zmm0_1 = sub_1417bf050(&arg1[3], &arg2[3], zmm0, arg3)
rbx.b &= rax_4 & rbp.b
uint32_t rdx_2 = zx.d(sub_1417bf050(&arg1[4], &arg2[4], zmm0_1, arg3)) & zx.d(rbx.b)

if (arg1[5].d == arg2[5].d)
    return zx.q(rdx_2)

return 0
