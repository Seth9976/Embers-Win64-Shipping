// 函数: sub_142321660
// 地址: 0x142321660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_1409768a0(arg1, arg5 + arg3, arg4)
int32_t* r12 = *arg1

if (i_1 != 0)
    void* rbx_1 = &r12[5]
    void* rdi_1 = arg2 + 0x70
    int32_t i
    
    do
        *r12 = *(rdi_1 - 0x70)
        *(rbx_1 - 0x10) = *(rdi_1 - 0x6c)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 - 0x60))
        int64_t r15_1 = *(rdi_1 - 0x68)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_140638750(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r15_1, (rbp_1 << 2).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = *(rdi_1 - 0x58)
        *(rbx_1 + 0x14) = *(rdi_1 - 0x48)
        *(rbx_1 + 0x18) = *(rdi_1 - 0x44)
        *(rbx_1 + 0x28) = *(rdi_1 - 0x34)
        *(rbx_1 + 0x38) = *(rdi_1 - 0x24)
        *(rbx_1 + 0x48) = *(rdi_1 - 0x14)
        *(rbx_1 + 0x50) = *(rdi_1 - 0xc)
        *(rbx_1 + 0x54) = 0
        int64_t rbp_2 = sx.q(*rdi_1)
        int64_t r15_2 = *(rdi_1 - 8)
        *(rbx_1 + 0x5c) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_1405a4be0(rbx_1 + 0x54, rbp_2.d, 0)
            memcpy(*(rbx_1 + 0x54), r15_2, (rbp_2 << 4).d)
        else
            *(rbx_1 + 0x60) = 0
        
        *(rbx_1 + 0x64) = 0
        int64_t rbp_3 = sx.q(*(rdi_1 + 0x10))
        int64_t r15_3 = *(rdi_1 + 8)
        *(rbx_1 + 0x6c) = rbp_3.d
        
        if (rbp_3.d != 0)
            sub_1405a4be0(rbx_1 + 0x64, rbp_3.d, 0)
            memcpy(*(rbx_1 + 0x64), r15_3, (rbp_3 << 4).d)
        else
            *(rbx_1 + 0x70) = 0
        
        *(rbx_1 + 0x74) = *(rdi_1 + 0x18)
        *(rbx_1 + 0x7c) = *(rdi_1 + 0x20)
        *(rbx_1 + 0x84) = *(rdi_1 + 0x28)
        sub_140596d10(rbx_1 + 0x8c, rdi_1 + 0x30)
        r12 = &r12[0x2e]
        *(rbx_1 + 0x9c) = *(rdi_1 + 0x40)
        *(rbx_1 + 0x9d) ^= (*(rbx_1 + 0x9d) ^ *(rdi_1 + 0x41)) & 1
        char rax_11 = *(rbx_1 + 0x9d)
        char rcx_7 = ((rax_11 ^ *(rdi_1 + 0x41)) & 2) ^ rax_11
        *(rbx_1 + 0x9d) = rcx_7
        char rdx_8 = ((rcx_7 ^ *(rdi_1 + 0x41)) & 4) ^ rcx_7
        *(rbx_1 + 0x9d) = rdx_8
        rax_1 = rdx_8 ^ *(rdi_1 + 0x41)
        rdi_1 += 0xb8
        rax_1 = (rax_1 & 8) ^ rdx_8
        *(rbx_1 + 0x9d) = rax_1
        rbx_1 += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
