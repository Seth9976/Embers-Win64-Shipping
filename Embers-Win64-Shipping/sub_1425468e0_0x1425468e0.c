// 函数: sub_1425468e0
// 地址: 0x1425468e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* rbp = arg2

if (arg4 != 0)
    char* rbx_1 = arg3 + 5
    int32_t i
    
    do
        int32_t* rdi_1 = rbp
        rbp = &rbp[0x28]
        *rdi_1 = *(rbx_1 - 5)
        rdi_1[1].b = rbx_1[-1]
        *(rdi_1 + 5) = *rbx_1
        *(rdi_1 + 6) = rbx_1[1]
        *(rdi_1 + 7) = rbx_1[2]
        rdi_1[2].b = rbx_1[3]
        *(rdi_1 + 9) = rbx_1[4]
        *(rdi_1 + 0xa) = rbx_1[5]
        *(rdi_1 + 0xb) = rbx_1[6]
        sub_142528410(&rdi_1[3], &rbx_1[7])
        rdi_1[0x25] = *(rbx_1 + 0x8f)
        rdi_1[0x26] = *(rbx_1 + 0x93)
        rdi_1[0x27].b = rbx_1[0x97]
        *(rdi_1 + 0x9d) ^= (rbx_1[0x98] ^ *(rdi_1 + 0x9d)) & 1
        char rax_14 = *(rdi_1 + 0x9d)
        char rcx_1 = ((rbx_1[0x98] ^ rax_14) & 2) ^ rax_14
        *(rdi_1 + 0x9d) = rcx_1
        char rax_15 = ((rbx_1[0x98] ^ rcx_1) & 4) ^ rcx_1
        *(rdi_1 + 0x9d) = rax_15
        char rcx_2 = ((rbx_1[0x98] ^ rax_15) & 8) ^ rax_15
        *(rdi_1 + 0x9d) = rcx_2
        char rax_16 = ((rbx_1[0x98] ^ rcx_2) & 0x10) ^ rcx_2
        *(rdi_1 + 0x9d) = rax_16
        char rdx_1 = ((rbx_1[0x98] ^ rax_16) & 0x20) ^ rax_16
        *(rdi_1 + 0x9d) = rdx_1
        char rcx_3 = ((rbx_1[0x98] ^ rdx_1) & 0x40) ^ rdx_1
        *(rdi_1 + 0x9d) = rcx_3
        *(rdi_1 + 0x9d) = ((rbx_1[0x98] ^ rcx_3) & 0x7f) ^ rbx_1[0x98]
        *(rdi_1 + 0x9e) ^= (*(rdi_1 + 0x9e) ^ rbx_1[0x99]) & 1
        char rax_19 = *(rdi_1 + 0x9e)
        char rcx_4 = ((rbx_1[0x99] ^ rax_19) & 2) ^ rax_19
        *(rdi_1 + 0x9e) = rcx_4
        char rax_20 = (rbx_1[0x99] ^ rcx_4) & 4
        rbx_1 = &rbx_1[0xa0]
        rax_20 ^= rcx_4
        *(rdi_1 + 0x9e) = rax_20
        char rcx_5 = ((rbx_1[-7] ^ rax_20) & 8) ^ rax_20
        *(rdi_1 + 0x9e) = rcx_5
        char rdx_2 = ((rbx_1[-7] ^ rcx_5) & 0x10) ^ rcx_5
        *(rdi_1 + 0x9e) = rdx_2
        *(rdi_1 + 0x9e) = ((rbx_1[-7] ^ rdx_2) & 0x20) ^ rdx_2
        *(rdi_1 + 0x9f) = rbx_1[-6]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
