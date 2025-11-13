// 函数: sub_142bf2670
// 地址: 0x142bf2670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140dc0ea0(1, 0xd8)

if (result == 0)
    return &data_143699d90

*result = 1
*(result + 8) = 0
result[1] = 1
void* const rax = &data_143699d90

if (arg1 != 0)
    rax = arg1

if (*(rax + 4) != 0)
    *(rax + 4) = 0

if (rax != 0 && *rax != 0)
    *rax
    *rax += 1

*(result + 0x10) = rax
*(result + 0x18) = *(rax + 0x18)
*(result + 0x28) = *(rax + 0x28)
*(result + 0x38) = *(rax + 0x38)
*(result + 0x48) = *(rax + 0x48)
*(result + 0x58) = *(rax + 0x58)
*(result + 0x68) = *(rax + 0x68)
*(result + 0x78) = *(rax + 0x78)
*(result + 0x88) = *(rax + 0x88)
return result
