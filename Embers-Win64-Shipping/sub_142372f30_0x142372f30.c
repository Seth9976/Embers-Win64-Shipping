// 函数: sub_142372f30
// 地址: 0x142372f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t result = (*(*arg1 + 0x2b0))()

if (arg1[6].d s<= result)
    return result

int32_t rcx = arg1[6].d
int32_t rax_2 = rcx - rdi.d

if (rax_2 != 1)
    int64_t r9_1 = arg1[5]
    memmove(r9_1 + (rdi << 3), r9_1 + (sx.q((rdi + 1).d) << 3), (rax_2 - 1) << 3)
    rcx = arg1[6].d

arg1[6].d = rcx - 1
return sub_1405c53d0(&arg1[5])
