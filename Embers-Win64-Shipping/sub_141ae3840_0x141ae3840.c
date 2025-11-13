// 函数: sub_141ae3840
// 地址: 0x141ae3840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_140f15120(arg1, arg5 + arg3, arg4)
int64_t* r14_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x38
    void* rbx_1 = r14_1 + 0x24
    int32_t i
    
    do
        *r14_1 = 0
        int64_t rbp_1 = sx.q(*(rdi_1 - 0x30))
        int64_t r15_1 = *(rdi_1 - 0x38)
        *(rbx_1 - 0x1c) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_140809010(r14_1, rbp_1.d, 0)
            memcpy(*r14_1, r15_1, (rbp_1 * 0x48).d)
        else
            *(rbx_1 - 0x18) = 0
        
        *(rbx_1 - 0x14) = *(rdi_1 - 0x28)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_2 = sx.q(*(rdi_1 - 0x18))
        int64_t r12_1 = *(rdi_1 - 0x20)
        *(rbx_1 - 4) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_1405c4a00(rbx_1 - 0xc, rbp_2.d, 0)
            memcpy(*(rbx_1 - 0xc), r12_1, (rbp_2 << 3).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = *(rdi_1 - 0x10)
        *(rbx_1 + 8) = *(rdi_1 - 0xc)
        *(rbx_1 + 0xc) = 0
        int64_t rbp_3 = sx.q(*rdi_1)
        int64_t r12_2 = *(rdi_1 - 8)
        *(rbx_1 + 0x14) = rbp_3.d
        
        if (rbp_3.d != 0)
            sub_1407c3650(rbx_1 + 0xc, rbp_3.d, 0)
            memcpy(*(rbx_1 + 0xc), r12_2, (rbp_3 * 0xc).d)
        else
            *(rbx_1 + 0x18) = 0
        
        r14_1 = &r14_1[0xe]
        *(rbx_1 + 0x1c) = *(rdi_1 + 8)
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x18)
        *(rbx_1 + 0x30) = *(rdi_1 + 0x1c)
        *(rbx_1 + 0x40) = *(rdi_1 + 0x2c)
        rax_1 = *(rdi_1 + 0x30)
        rdi_1 += 0x70
        *(rbx_1 + 0x44) = rax_1
        rbx_1 += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
