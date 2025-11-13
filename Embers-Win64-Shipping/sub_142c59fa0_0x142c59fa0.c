// 函数: sub_142c59fa0
// 地址: 0x142c59fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1

if (*(rdi + 0xd0) != 0)
    sub_142c52530(rdi, 3, 2)

char* result = sub_142c5a780(arg1, arg2, arg4)

if (result != 0)
    *(result + 0x10) += 1

if (*(rdi + 0xd0) == 0)
    return result

sub_142c52570(rdi, 3)
return result
