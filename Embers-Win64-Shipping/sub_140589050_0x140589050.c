// 函数: sub_140589050
// 地址: 0x140589050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = **(arg1 + 0x38)

if (r8 == 0 || r8 u<= **(arg1 + 0x18)
        || (arg2 != 0xffffffff && arg2.b != *(r8 - 1) && (*(arg1 + 0x70) & 2) != 0))
    return 0xffffffff

int32_t* rax_1 = *(arg1 + 0x50)
*rax_1 += 1
int64_t* rax_2 = *(arg1 + 0x38)
*rax_2 -= 1

if (arg2 != 0xffffffff)
    ***(arg1 + 0x38) = arg2.b

if (arg2 == 0xffffffff)
    arg2 = 0

return zx.q(arg2)
