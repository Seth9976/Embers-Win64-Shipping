// 函数: sub_142c08710
// 地址: 0x142c08710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[3]
sub_142c075f0(arg1)
sub_142c08340(arg1, sub_142c385e0(*arg1, rbx, arg1[1], arg2))
void* rcx_2 = *arg1

if ((*(rcx_2 + 0xb8) & 0x40) != 0)
    sub_142c39880(rcx_2, arg1[1], rbx)

int32_t i_2 = *(rbx + 0x60)
void* result = *(rbx + 0x70)

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        *result = *(result + 0xc)
        result += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

*(rbx + 0x34) = 2
return result
