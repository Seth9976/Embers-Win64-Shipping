// 函数: sub_1410519d0
// 地址: 0x1410519d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    (*(*arg3 + 0x48))(arg3)

int64_t rax_3 = (*(*arg3 + 8))(arg3)
int64_t rdx = *arg3
void*** rax_5

if (rax_3 == 0)
    int64_t rax_6 = (*(rdx + 0x10))(arg3, rdx)
    int64_t rdx_2 = *arg3
    
    if (rax_6 != 0)
        rax_5 = sub_141039560(arg1, (*(rdx_2 + 0x10))(arg3, rdx_2))
        goto label_141051a54
    
    if ((*(rdx_2 + 0x20))(arg3, rdx_2) != 0)
        rax_5 = sub_1410398a0(arg1, (*(*arg3 + 0x20))(arg3))
        goto label_141051a54
    
    *arg2 = nullptr
else
    rax_5 = sub_141039230(arg1, (*(rdx + 8))(arg3, rdx))
label_141051a54:
    *arg2 = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d += 1
return arg2
