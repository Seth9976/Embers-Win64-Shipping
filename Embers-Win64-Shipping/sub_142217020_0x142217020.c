// 函数: sub_142217020
// 地址: 0x142217020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0xbf800000
char rax
int32_t zmm0
rax, zmm0 = sub_14226ea10(arg1, arg2, &arg_20, arg3)

if (rax == 0)
    return 0xbf800000

return __sqrtss_xmmss_memss(zmm0, arg_20)
