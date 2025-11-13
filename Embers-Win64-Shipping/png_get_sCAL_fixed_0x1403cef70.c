// 函数: png_get_sCAL_fixed
// 地址: 0x1403cef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 9) & 0x40) == 0)
    return 0

*arg3 = zx.d(*(arg2 + 0x124))
atof(*(arg2 + 0x128))
int32_t rax_2
double zmm0
rax_2, zmm0 = sub_1403c0150(arg1, arg5, "sCAL width")
*arg4 = rax_2
atof(*(arg2 + 0x130))
*arg6 = sub_1403c0150(arg1, zmm0, "sCAL height")
return 0x4000
