// 函数: sub_1420d6d20
// 地址: 0x1420d6d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x21]
int64_t rdi

if (rax == 0 || *(rax + 0x10) != 0 || *(rax + 0x12) != 0)
    rdi.b = 1
    (*(*arg1 + 0x20))()
else
    rdi.b = 0

int64_t var_18 = *(arg1 + 0x124)
return sub_141d57900(arg2, rdi.b, arg1[0x23], zx.q(arg1[0x24].d))
