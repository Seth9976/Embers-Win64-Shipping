// 函数: sub_141f89ad0
// 地址: 0x141f89ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 8))()
sub_141f86d30(arg1, rax_1)
void* rax_2 = sub_141f87c30(arg1, arg3)
int32_t rcx_2

if (rax_2 != 0)
    rcx_2 = *rax_2

if (rax_2 == 0 || rcx_2 s< 0 || rcx_2 s>= rax_1)
    *arg2 = 0.0
else
    sub_141f86d30(arg1, (*(*arg1 + 8))(arg1))
    float zmm1_1[0x4] = *(sx.q(*sub_141f87c30(arg1, arg3)) * 0x1c + arg1[0xe])
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    arg2[1] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    *arg2 = temp0_1[0]

return arg2
