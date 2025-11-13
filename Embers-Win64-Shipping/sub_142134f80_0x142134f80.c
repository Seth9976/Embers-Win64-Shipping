// 函数: sub_142134f80
// 地址: 0x142134f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (*(arg1 + 0x1c) s< 3 || (arg1[4].b & 2) == 0)
    rdi.b = 0
else
    rdi.b = 1

char rax_1 = (*(*arg1 + 0x1c0))()

if (rax_1 == 0)
    if (arg2 != 0 || rdi.b == 0)
        rax_1 = (*(*arg1 + 0x30))(arg1)
    
    if (((arg2 == 0 && rdi.b != 0) || rax_1 == 0) && (*(*arg1 + 0xb0))(arg1) == 0)
        if (rdi.b == 0)
        label_142135005:
            
            if ((*(*arg1 + 0x318))(arg1) == 0)
                return 1
        else
            if ((*(*arg1 + 0x30))(arg1) == 0)
                goto label_142135005
            
            if ((*(*arg1 + 0x128))(arg1) == 0)
                goto label_142135005

return 0
