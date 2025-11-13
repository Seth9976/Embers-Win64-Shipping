// 函数: sub_14266e0d0
// 地址: 0x14266e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_140808ed0(arg1, arg3 + arg5, arg4)
int32_t* r15_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 4
    void* rbx_1 = &r15_1[0x11]
    int32_t i
    
    do
        *r15_1 = *(rdi_1 - 4)
        *(rbx_1 - 0x40) = *rdi_1
        *(rbx_1 - 0x3c) = *(rdi_1 + 4)
        *(rbx_1 - 0x38) = *(rdi_1 + 8)
        *(rbx_1 - 0x30) = *(rdi_1 + 0x10)
        *(rbx_1 - 0x28) = *(rdi_1 + 0x18)
        *(rbx_1 - 0x18) = *(rdi_1 + 0x28)
        *(rbx_1 - 0x10) = *(rdi_1 + 0x30)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 + 0x3c))
        int64_t r13_1 = *(rdi_1 + 0x34)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1407c3650(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r13_1, (rbp_1 * 0xc).d)
        else
            *rbx_1 = 0
        
        r15_1 = &r15_1[0x14]
        *(rbx_1 + 4) = *(rdi_1 + 0x44)
        *(rbx_1 + 5) = *(rdi_1 + 0x45)
        rax_1 = (*(rdi_1 + 0x46) ^ *(rbx_1 + 6)) & 1
        *(rbx_1 + 6) ^= rax_1
        char rcx_2 = *(rdi_1 + 0x46)
        rdi_1 += 0x50
        *(rbx_1 + 6) ^= (rcx_2 ^ *(rbx_1 + 6)) & 2
        rbx_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
