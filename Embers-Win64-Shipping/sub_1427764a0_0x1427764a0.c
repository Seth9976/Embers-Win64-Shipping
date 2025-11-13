// 函数: sub_1427764a0
// 地址: 0x1427764a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141e7acd0(arg1 + 0x1c8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
uint64_t result

if (rax.d == 0xffffffff)
    result = 0
else
    result = rax * 0x68 + *(arg1 + 0x1c8)

char* rbx = result + 8

if (result == 0)
    rbx = nullptr

if (rbx != 0)
    sub_1409740e0(&rbx[8], arg3)
    
    if (arg3 == arg2)
        *rbx = 0
    
    result = zx.q(*(rbx + 0x10))
    
    if (result.d == *(rbx + 0x3c) && *rbx == 0)
        return sub_142776270(arg1 + 0x1c8, arg2)

return result
