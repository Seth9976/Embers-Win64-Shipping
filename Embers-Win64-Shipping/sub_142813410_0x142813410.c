// 函数: sub_142813410
// 地址: 0x142813410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x178) = 0
*(arg1 + 0x170) = 0
*(arg1 + 0x180) = 0
int32_t* rax = sub_142819d40(arg1, arg2, 0x10)
*arg3 -= neg.d(arg2.d & 0xf) & 0xf
int32_t rbx_4 = *rax
int64_t r9 = sub_142816b70(arg1, rbx_4)
*arg4 = rbx_4

if (rbx_4 == 0)
    sub_142817350(arg1, rbx_4 + 1, "\n\nConverting empty collection!\n\n", r9)

*arg3 -= 4
void* result = sub_142812f10(arg1, &rax[1], arg3)

if (result != 0)
    result = sub_142813300(arg1, sub_142813240(arg1, sub_142813180(arg1, result, arg3), arg3), arg3)
    *(arg1 + 0x178) = arg1 + 0x168

return result
