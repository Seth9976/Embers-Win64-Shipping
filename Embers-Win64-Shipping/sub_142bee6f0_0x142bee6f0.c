// 函数: sub_142bee6f0
// 地址: 0x142bee6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d
int32_t result_1 = 0

if (arg2 u<= r8)
    return 0

int32_t rbx_1 = r8 + 5 + (r8 u>> 1)

if (r8 == 0xfffffff)
    return 0x40

if (rbx_1 u< r8 || rbx_1 u> 0xfffffff)
    rbx_1 = 0xfffffff

*arg1 = sub_142b99a90(arg1[2], 8, r8, rbx_1, *arg1, &result_1)
int32_t result = result_1

if (result != 0)
    return result

arg1[1].d = rbx_1
return result
