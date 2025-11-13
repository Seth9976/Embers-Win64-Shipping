// 函数: sub_141a53780
// 地址: 0x141a53780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x46c)
int32_t arg_8
int32_t zmm0

if (rcx s<= 0)
    zmm0 = (zx.o(0)).d
    arg_8 = arg1[0x8d].d
else
    int32_t rdx_2 = rcx - 1 + arg1[0x8d].d
    zmm0 = __minss_xmmss_memss(0x3f7fffff, 0x3f7fffff)
    arg_8 = rdx_2

int64_t result = *(arg1 + 0x7d4)
int64_t rbx = arg_8.q
arg_8.q = result

if (result.d == rbx.d && not(zmm0 f!= rbx:4.d) && arg1[0x8b].b == 0)
    return result

arg1[0x8b].b = 1
return sub_141a6a480(arg1, rbx, sub_141a58410(arg1, rbx))
