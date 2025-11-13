// 函数: sub_142211fd0
// 地址: 0x142211fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
**arg1 = 1
arg2.b = *arg1[1] == 0
sub_142278f30(rdi, arg2.b)
sub_142278220(rdi, *(arg1[2] + 0xc) & 1)
int64_t* result = arg1[2]

if ((*(result + 0xc) & 0x10) != 0 && (*(result + 0xd) & 1) != 0)
    return sub_1422816e0(rdi)

return result
