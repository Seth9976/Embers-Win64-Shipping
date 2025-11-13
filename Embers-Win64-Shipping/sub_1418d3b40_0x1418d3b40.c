// 函数: sub_1418d3b40
// 地址: 0x1418d3b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14_1 = arg2 - arg1
int32_t* rbx = arg1 + 0x1c
int64_t i_1 = 5
int64_t i

do
    int64_t* rax_2 = r14_1 - 0x1c + rbx
    
    if (&rbx[-7] != rax_2)
        int64_t rdi_1 = sx.q(*(r14_1 + rbx - 0x14))
        int64_t rbp_1 = *rax_2
        int32_t r8_1 = rbx[-4]
        rbx[-5] = rdi_1.d
        
        if (rdi_1.d != 0 || r8_1 != 0)
            sub_1405c4a90(&rbx[-7], rdi_1.d, r8_1)
            memcpy(*(rbx - 0x1c), rbp_1, (rdi_1 << 2).d)
        else
            rbx[-4] = 0
    
    void* rax_4 = r14_1 - 0xc + rbx
    
    if (&rbx[-3] != rax_4)
        int64_t rdi_2 = sx.q(*(rbx + r14_1 - 4))
        int64_t rbp_2 = *rax_4
        int32_t r8_4 = *rbx
        rbx[-1] = rdi_2.d
        
        if (rdi_2.d != 0 || r8_4 != 0)
            sub_1418eca20(&rbx[-3], rdi_2.d, r8_4)
            memcpy(*(rbx - 0xc), rbp_2, (rdi_2.d + (rdi_2 << 1).d) * 2)
        else
            *rbx = 0
    
    int64_t* rax_6 = r14_1 + 4 + rbx
    
    if (&rbx[1] != rax_6)
        int32_t rdi_3 = *(r14_1 + rbx + 0xc)
        int64_t rbp_3 = *rax_6
        int32_t r8_7 = rbx[4]
        rbx[3] = rdi_3
        
        if (rdi_3 != 0 || r8_7 != 0)
            sub_1405a4c70(&rbx[1], rdi_3, r8_7)
            memcpy(*(rbx + 4), rbp_3, rdi_3 * 2)
        else
            rbx[4] = 0
    
    rbx[5].w = *(r14_1 + rbx + 0x14)
    *(rbx + 0x16) = *(r14_1 + rbx + 0x16)
    rbx = &rbx[0xe]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
