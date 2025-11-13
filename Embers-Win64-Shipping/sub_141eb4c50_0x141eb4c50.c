// 函数: sub_141eb4c50
// 地址: 0x141eb4c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1 = arg1 * 32767f
int64_t rbx
rbx.b = 1
int32_t rdx_2 = (int.d(arg1 + arg1 + 0.5f) s>> 1) + 0x8000
int32_t arg_8 = rdx_2

if (rdx_2 u> 0xffff)
    int32_t rax_1 = 0
    
    if (rdx_2 s> 0)
        rax_1 = 0xffff
    
    rbx.b = 0
    arg_8 = rax_1

int64_t r9 = *arg2
(*(r9 + 0x160))(arg2, &arg_8, 0x10000, r9)
return zx.q(rbx.b)
