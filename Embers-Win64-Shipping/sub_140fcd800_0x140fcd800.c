// 函数: sub_140fcd800
// 地址: 0x140fcd800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[2]

for (int64_t i = 0; i s< 8; )
    int64_t rdx_1 = *(rbx - 8)
    
    if (rdx_1 == 0)
        break
    
    int64_t r8_1 = *rbx
    
    if (r8_1 != 0)
        (*(*arg1 + 0x118))(arg1, rdx_1, r8_1, &arg1[0x1c])
    
    i += 1
    rbx += 0x18

int64_t rdx_2 = arg1[0x19]

if (rdx_2 == 0)
    return 

int64_t r8_2 = arg1[0x1a]

if (r8_2 != 0)
    (*(*arg1 + 0x118))(arg1, rdx_2, r8_2, &arg1[0x1c])
