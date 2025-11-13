// 函数: sub_142c7db50
// 地址: 0x142c7db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int512_t zmm2
result, zmm2 = sub_142c8f150(&arg1[0xd3], 0, arg3)
bool rcx_1 = arg1[0xea].d == 0
*arg2 = rcx_1

if (result != 0 || rcx_1 == 0)
    return result

if (*(*(*arg1 + 0x250) + 0x18) == 0)
    *(arg1 + 0x3fc) = 1
else
    sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2, 0, 0xffffffff, nullptr)

*(arg1 + 0x729) = 1
return 0
