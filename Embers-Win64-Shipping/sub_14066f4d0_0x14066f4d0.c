// 函数: sub_14066f4d0
// 地址: 0x14066f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rbx = *(arg1 + 0x28)
int32_t arg_10
sub_14062d6e0(rbx, &arg_10, arg2)
int64_t rax_1 = sx.q(arg_10)

if (rax_1.d != 0xffffffff)
    int64_t rcx_1 = *rbx + rax_1 * 0x28
    rax_1 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rax_1 = 0
    
    if (rax_1 != 0 && *rax_1 != 0)
        rax_1.b = 1
        return rax_1

rax_1.b = 0
return rax_1
