// 函数: sub_142371180
// 地址: 0x142371180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* i = arg1[9]
char rdx = 0

while (i != 0)
    rdx = *(i + 0x55)
    i = *(i + 0xb0)
    
    if (rdx != 0)
        break

if (rdx == 1)
    int64_t rax_1 = (*(*arg1 + 0x2e0))(arg1)
    arg1[0xa].b = 1
    return rax_1

if (rdx != 2)
    return i

jump(*(*arg1 + 0x2d8))
