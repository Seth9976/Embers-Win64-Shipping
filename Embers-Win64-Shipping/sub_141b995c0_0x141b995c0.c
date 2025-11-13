// 函数: sub_141b995c0
// 地址: 0x141b995c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140de9310(arg1, &arg_8)
void* rax = *(arg1 + 0x3a0)

if (rax == 0)
    *arg2 = arg_8
    return arg2

int32_t zmm1 = *(rax + 0x1bc)
int64_t temp0 = __maxss_xmmss_memss((*(rax + 0x1b8)).d, arg_8.d)
int32_t temp0_1 = __maxss_xmmss_memss(zmm1, arg_8:4.d)
*arg2 = temp0.d
arg2[1] = temp0_1
return arg2
