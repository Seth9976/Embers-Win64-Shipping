// 函数: sub_141f009d0
// 地址: 0x141f009d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_1405a4b40(arg1, arg3 + arg5, arg4)
int64_t* r14_1 = *arg1

if (i_1 != 0)
    int32_t* rdi_1 = arg2 + 8
    void* rbx_1 = r14_1 + 0x1c
    int32_t i
    
    do
        *r14_1 = 0
        int64_t rbp_1 = sx.q(*rdi_1)
        int64_t r15_1 = *(rdi_1 - 8)
        *(rbx_1 - 0x14) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1407c3650(r14_1, rbp_1.d, 0)
            memcpy(*r14_1, r15_1, (rbp_1 * 0xc).d)
        else
            *(rbx_1 - 0x10) = 0
        
        *(rbx_1 - 0xc) = 0
        int64_t rbp_2 = sx.q(rdi_1[4])
        int64_t r13_1 = *(rdi_1 + 8)
        *(rbx_1 - 4) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_140638750(rbx_1 - 0xc, rbp_2.d, 0)
            memcpy(*(rbx_1 - 0xc), r13_1, (rbp_2 << 2).d)
        else
            *rbx_1 = 0
        
        r14_1 = &r14_1[6]
        *(rbx_1 + 4) = rdi_1[6]
        *(rbx_1 + 8) = rdi_1[7].b
        rax_1 = rdi_1[8]
        rdi_1 = &rdi_1[0xc]
        *(rbx_1 + 0xc) = rax_1
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
