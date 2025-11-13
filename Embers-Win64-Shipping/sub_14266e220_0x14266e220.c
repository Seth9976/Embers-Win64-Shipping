// 函数: sub_14266e220
// 地址: 0x14266e220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_140f15120(arg1, arg5 + arg3, arg4)
int32_t* r12_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x20
    void* rbx_1 = &r12_1[5]
    int32_t i
    
    do
        *r12_1 = *(rdi_1 - 0x20)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 - 0x10))
        int64_t r15_1 = *(rdi_1 - 0x18)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_140809010(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r15_1, (rbp_1 * 0x48).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = 0
        int64_t rbp_2 = sx.q(*rdi_1)
        int64_t r15_2 = *(rdi_1 - 8)
        *(rbx_1 + 0xc) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_1409da0d0(rbx_1 + 4, rbp_2.d, 0)
            memcpy(*(rbx_1 + 4), r15_2, (rbp_2 * 0x60).d)
        else
            *(rbx_1 + 0x10) = 0
        
        r12_1 = &r12_1[0x1c]
        *(rbx_1 + 0x1c) = *(rdi_1 + 0x10)
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x20)
        *(rbx_1 + 0x3c) = *(rdi_1 + 0x30)
        *(rbx_1 + 0x4c) = *(rdi_1 + 0x40)
        *(rbx_1 + 0x50) ^= (*(rdi_1 + 0x44) ^ *(rbx_1 + 0x50)) & 1
        int32_t rcx_7 = ((*(rbx_1 + 0x50) ^ *(rdi_1 + 0x44)) & 2) ^ *(rbx_1 + 0x50)
        *(rbx_1 + 0x50) = rcx_7
        int32_t rax_7 = *(rdi_1 + 0x44)
        rdi_1 += 0x70
        rax_1 = ((rax_7 ^ rcx_7) & 4) ^ rcx_7
        *(rbx_1 + 0x50) = rax_1
        rbx_1 += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
