// 函数: sub_141c124c0
// 地址: 0x141c124c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* result

if (arg4 != 0)
    result = arg2 + 0x10
    int64_t* rbx_1 = arg3 - arg2
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + result - 0x10)
        char r10_1 = *(rbx_1 + result + 0x18)
        int64_t r9 = *(rbx_1 + result + 0x10)
        int64_t r8 = *(rbx_1 + result)
        int64_t rdx = *(rbx_1 + result - 8)
        int32_t r11_1 = *(rbx_1 + result + 8)
        *(result + 0x1c) = r11_1
        *(result - 0x10) = rcx
        *(result - 8) = rdx
        *result = r8
        *(result + 0x10) = r9
        *(result + 0x18) = r10_1
        *(result + 8) = r11_1
        *(result + 0x1c) = *(rbx_1 + result + 0x1c)
        result += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
