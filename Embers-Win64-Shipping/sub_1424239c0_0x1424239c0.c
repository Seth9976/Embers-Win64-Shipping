// 函数: sub_1424239c0
// 地址: 0x1424239c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142403cf0(arg1)
int64_t* rax = sub_1424c7800()
void* result = rax[0x23]

if (result == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    result = rax[0x23]

if ((*(result + 0x39) & 2) == 0)
    return result

return sub_1420546e0(arg1 + 0x2b8, arg1 + 0x28, arg1, arg2)
