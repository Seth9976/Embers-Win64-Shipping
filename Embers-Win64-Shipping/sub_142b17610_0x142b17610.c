// 函数: sub_142b17610
// 地址: 0x142b17610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(sx.q(arg3 - 1) + arg2))

if (r9.b s>= 0)
    int32_t rcx_2 = -1
    
    if (sub_142a9f280(arg1, zx.q(r9)) != 0)
        rcx_2 = 1
    
    return zx.q(rcx_2)

int32_t arg_18 = arg3 - 1
int32_t rax_3 = sub_142a9be90(arg2, 0, &arg_18, r9, 0xfd)
int32_t rbx_1 = arg3 - arg_18

if (sub_142a9f280(arg1, zx.q(rax_3)) == 0)
    rbx_1 = neg.d(rbx_1)

return zx.q(rbx_1)
