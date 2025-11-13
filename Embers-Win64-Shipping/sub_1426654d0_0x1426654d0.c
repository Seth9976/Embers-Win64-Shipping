// 函数: sub_1426654d0
// 地址: 0x1426654d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0x18
int64_t* rbx_3 = *arg1 + 8 + r12_1
int32_t i

do
    int64_t* rcx = *rbx_3
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax_1 == 1 && rcx != 0)
            (*(*rcx + 8))(rcx, 1)
    
    rbx_3 = &rbx_3[3]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rcx_2 = rax_3 - r14_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, r9 + sx.q(r14_1.d + arg3) * 0x18, (rcx_2 - arg3) * 0x18)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1405fde90(arg1)
