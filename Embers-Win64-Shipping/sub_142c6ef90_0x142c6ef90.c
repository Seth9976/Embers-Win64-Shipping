// 函数: sub_142c6ef90
// 地址: 0x142c6ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(rbx + 0x8b8) = 0
int32_t result
int64_t r8
int512_t zmm2
result, r8, zmm2 = sub_142c6f450(arg1, arg2, arg3)

if (result != 0)
    return result

if ((*(rbx + 0x8f0) & 0x10) == 0 && *(rbx + 0x8e8) == result.b)
    sub_142c56480(*(rbx + 0x258), U"\n", r8, zmm2)

*(rbx + 0xa40) = 0
return 0
