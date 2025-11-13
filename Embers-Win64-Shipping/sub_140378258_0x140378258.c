// 函数: sub_140378258
// 地址: 0x140378258
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg3
int64_t rax = CoTaskMemAlloc(0x42c)
int32_t rbx_2 = not.d(sbb.d(arg3.d, arg3.d, rax != 0)) & 0x8007000e

if (rbx_2 s>= 0)
    memcpy(rax, *(arg1 + 8), 0x42c)
    *arg2 = rax

return zx.q(rbx_2)
