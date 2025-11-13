// 函数: sub_142ad8ea0
// 地址: 0x142ad8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t rbx = arg3

if (arg3 s< arg4)
    do
        int32_t rax_1 = sub_142a486d0(arg2, rbx)
        
        if (sub_142a54580(rax_1) != 0)
            rdi += 1
        
        int32_t rcx_2
        rcx_2.b = rax_1 u> 0xffff
        rbx += rcx_2 + 1
    while (rbx s< arg4)

return zx.q(rdi)
