// 函数: sub_141d30750
// 地址: 0x141d30750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* rdx = *(*(result + 0x410) + (sx.q(arg2) << 3))

if (*(rdx + 8) == 0)
    return result

int32_t rax = 0
int32_t rdi_1 = *(rdx + 0x48)

if (0 == *(rdx + 0x51c))
    *(rdx + 0x51c) = 0
else
    rax = *(rdx + 0x51c)

*(rdx + 0x510) += 1
int64_t r8_1 = sx.q(rax)
*(rdx + (r8_1 << 2) + 0x514) = *(rdx + 0x510)
void* rbx_1 = (r8_1 << 6) + rdx
int64_t r8_2
r8_2.b = 1
sub_141d40e10(rbx_1 + 0x530, rdi_1, r8_2.b)
sub_141d40e90(rbx_1 + 0x540, rdi_1, 1)
return sub_141d40e90(rbx_1 + 0x550, rdi_1, 1)
