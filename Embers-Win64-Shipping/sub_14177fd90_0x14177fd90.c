// 函数: sub_14177fd90
// 地址: 0x14177fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int32_t r11 = arg2[1]
int64_t r8 = sx.q(*arg1)
int64_t rax = *(r10 + 0x90)

if (*arg2 s<= r11)
    r11 = *arg2

int64_t rcx = r8 * 3
int32_t rbx = *(rax + (rcx << 2))
*(rax + (rcx << 2)) = r11
void* rdx = *(r10 + 0x90) + r8 * 0xc
*(rdx + 4) = *arg2
int32_t result = arg2[1]
*(rdx + 8) = result

if (*(r10 + 0xb1) == 0 && r11 == rbx)
    *(r10 + 0xb1) = 0
    return result

*(r10 + 0xb1) = 1
return result
