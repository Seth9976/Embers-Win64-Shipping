// 函数: sub_142464670
// 地址: 0x142464670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_142467eb0(arg1, arg3 + arg5, arg4)
int128_t* r14_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x48
    void* rbx_1 = r14_1 + 0x3c
    int32_t i
    
    do
        *r14_1 = *(rdi_1 - 0x48)
        r14_1[1] = *(rdi_1 - 0x38)
        r14_1[2] = *(rdi_1 - 0x28)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 - 0x10))
        int64_t r13_1 = *(rdi_1 - 0x18)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1405a4b40(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r13_1, (rbp_1 * 0x30).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = 0
        uint32_t count = *rdi_1
        int64_t r13_2 = *(rdi_1 - 8)
        *(rbx_1 + 0xc) = count
        
        if (count != 0)
            sub_1405da9e0(rbx_1 + 4, count, 0)
            memcpy(*(rbx_1 + 4), r13_2, count)
        else
            *(rbx_1 + 0x10) = 0
        
        *(rbx_1 + 0x14) = 0
        int64_t rbp_2 = sx.q(*(rdi_1 + 0x10))
        int64_t r13_3 = *(rdi_1 + 8)
        *(rbx_1 + 0x1c) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_1405c4a00(rbx_1 + 0x14, rbp_2.d, 0)
            memcpy(*(rbx_1 + 0x14), r13_3, (rbp_2 << 3).d)
        else
            *(rbx_1 + 0x20) = 0
        
        *(rbx_1 + 0x24) = *(rdi_1 + 0x18)
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x20)
        *(rbx_1 + 0x2e) = *(rdi_1 + 0x22)
        *(rbx_1 + 0x34) = 0
        int32_t rbp_3 = *(rdi_1 + 0x30)
        int64_t r13_4 = *(rdi_1 + 0x28)
        *(rbx_1 + 0x3c) = rbp_3
        
        if (rbp_3 != 0)
            sub_1405a4c70(rbx_1 + 0x34, rbp_3, 0)
            memcpy(*(rbx_1 + 0x34), r13_4, rbp_3 * 2)
        else
            *(rbx_1 + 0x40) = 0
        
        r14_1 = &r14_1[9]
        *(rbx_1 + 0x44) = *(rdi_1 + 0x38)
        rax_1 = *(rdi_1 + 0x40)
        rdi_1 += 0x90
        *(rbx_1 + 0x4c) = rax_1
        rbx_1 += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
