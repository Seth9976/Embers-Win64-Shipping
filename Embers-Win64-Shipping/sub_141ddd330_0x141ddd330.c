// 函数: sub_141ddd330
// 地址: 0x141ddd330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_140afef10(arg1, arg3 + arg5, arg4)
int64_t* r12_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x38
    void* rbx_1 = r12_1 + 0x3c
    int32_t i
    
    do
        *r12_1 = *(rdi_1 - 0x38)
        *(rbx_1 - 0x34) = 0
        sub_141ddd4b0(rbx_1 - 0x34, *(rdi_1 - 0x30), *(rdi_1 - 0x28), 0, 0)
        *(rbx_1 - 0x24) = *(rdi_1 - 0x20)
        *(rbx_1 - 0x20) = *(rdi_1 - 0x1c)
        *(rbx_1 - 0x1c) = *(rdi_1 - 0x18)
        *(rbx_1 - 0x18) = *(rdi_1 - 0x14)
        *(rbx_1 - 0x14) = *(rdi_1 - 0x10)
        *(rbx_1 - 0x10) = *(rdi_1 - 0xc)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*rdi_1)
        int64_t r13_1 = *(rdi_1 - 8)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_140638750(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r13_1, (rbp_1 << 2).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = 0
        int64_t rbp_2 = sx.q(*(rdi_1 + 0x10))
        int64_t r13_2 = *(rdi_1 + 8)
        *(rbx_1 + 0xc) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_140638750(rbx_1 + 4, rbp_2.d, 0)
            memcpy(*(rbx_1 + 4), r13_2, (rbp_2 << 2).d)
        else
            *(rbx_1 + 0x10) = 0
        
        rax_1 = *(rdi_1 + 0x18)
        r12_1 = &r12_1[0xb]
        *(rbx_1 + 0x14) = rax_1
        rdi_1 += 0x58
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
