// 函数: sub_140ff0000
// 地址: 0x140ff0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg3 + 8))(arg3)
int64_t rdx = *arg3
void*** rax_3

if (rax_1 == 0)
    int64_t rax_4 = (*(rdx + 0x10))(arg3, rdx)
    int64_t rdx_2 = *arg3
    
    if (rax_4 != 0)
        rax_3 = sub_140fd05e0(arg1, (*(rdx_2 + 0x10))(arg3, rdx_2))
        goto label_140ff0076
    
    if ((*(rdx_2 + 0x20))(arg3, rdx_2) != 0)
        rax_3 = sub_140fd09b0(arg1, (*(*arg3 + 0x20))(arg3))
        goto label_140ff0076
    
    *arg2 = nullptr
else
    rax_3 = sub_140fd0210(arg1, (*(rdx + 8))(arg3, rdx))
label_140ff0076:
    *arg2 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
return arg2
