// 函数: sub_140b25e70
// 地址: 0x140b25e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r14_1 = sx.q(arg2)
int64_t r15_1 = r14_1 * 0x70
void* rbx_2 = *arg1 + r15_1
int32_t i

do
    if (*(rbx_2 + 0x60) != 0)
        *(rbx_2 + 0x60) = 0
    
    void* rcx = rbx_2 + 0x10
    
    if ((*(rbx_2 + 0xc) | *(rbx_2 + 8) | *(rbx_2 + 4) | *rbx_2) == 0)
        rcx = nullptr
    
    if (rcx != 0)
        (**rcx)(rcx, 0)
    
    rbx_2 += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_6 = arg1[1].d
int32_t rcx_2 = rax_6 - r14_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_1, sx.q(r14_1.d + arg3) * 0x70 + r9, (rcx_2 - arg3) * 0x70)
    rax_6 = arg1[1].d

arg1[1].d = rax_6 - arg3

if (arg4 != 0)
    sub_140b26a50(arg1)
