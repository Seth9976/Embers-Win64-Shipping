// 函数: sub_140e65290
// 地址: 0x140e65290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3[1].d)
int32_t rax = (rdi + 1).d
arg3[1].d = rax

if (rax s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rdi << 3)) = arg2
int64_t* var_18 = nullptr
int32_t result_1 = 0
sub_140e489d0(arg1 + 0xa8, arg2, &var_18, 0)
int32_t result = result_1

if (result s> 0)
    int64_t* rbx_1 = var_18
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        result = sub_140e65290(arg1, *rbx_1, arg3)
        rbx_1 = &rbx_1[1]
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

if (var_18 == 0)
    return result

return sub_140a74f90(var_18)
