// 函数: sub_140cfea80
// 地址: 0x140cfea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x40)
void* rbx = arg1 + 0x38

if (r10 != 0)
    rbx = r10

int64_t rdi_2

for (int32_t i = *(rbx + (((sx.q(*(arg1 + 0x48)) - 1) & sx.q(arg4)) << 2)); i != 0xffffffff; 
        i = *(sx.q(*arg3) + rdi_2))
    int64_t rcx = *(arg5 + 8)
    int32_t rax_2 = arg3[4] * i
    int64_t var_28 = arg2
    rdi_2 = sx.q(rax_2) + *arg1
    int64_t arg_8 = rdi_2
    
    if ((*arg5)(rcx, &var_28, &arg_8) != 0)
        return zx.q(i)

return 0xffffffff
