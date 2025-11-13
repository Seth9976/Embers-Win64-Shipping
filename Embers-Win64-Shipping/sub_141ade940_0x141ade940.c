// 函数: sub_141ade940
// 地址: 0x141ade940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_14083a0c0(arg1, arg5 + arg3, arg4)
int128_t* r15_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x58
    void* rbx_1 = r15_1 + 0x4c
    int32_t i
    
    do
        *r15_1 = *(rdi_1 - 0x58)
        r15_1[1] = *(rdi_1 - 0x48)
        r15_1[2] = *(rdi_1 - 0x38)
        *(rbx_1 - 0x1c) = *(rdi_1 - 0x28)
        *(rbx_1 - 0x14) = *(rdi_1 - 0x20)
        *(rbx_1 - 0x10) = *(rdi_1 - 0x1c)
        *(rbx_1 - 0xc) = 0
        int64_t rbp_1 = sx.q(*(rdi_1 - 0x10))
        int64_t r12_1 = *(rdi_1 - 0x18)
        *(rbx_1 - 4) = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1405c4a90(rbx_1 - 0xc, rbp_1.d, 0)
            memcpy(*(rbx_1 - 0xc), r12_1, (rbp_1 << 2).d)
        else
            *rbx_1 = 0
        
        *(rbx_1 + 4) = 0
        int64_t rbp_2 = sx.q(*rdi_1)
        int64_t r12_2 = *(rdi_1 - 8)
        *(rbx_1 + 0xc) = rbp_2.d
        
        if (rbp_2.d != 0)
            sub_1405a4b40(rbx_1 + 4, rbp_2.d, 0)
            memcpy(*(rbx_1 + 4), r12_2, (rbp_2 * 0x30).d)
        else
            *(rbx_1 + 0x10) = 0
        
        *(rbx_1 + 0x14) = 0
        int32_t rbp_3 = *(rdi_1 + 0x10)
        int64_t r12_3 = *(rdi_1 + 8)
        *(rbx_1 + 0x1c) = rbp_3
        
        if (rbp_3 != 0)
            sub_14174fdd0(rbx_1 + 0x14, rbp_3, 0)
            memcpy(*(rbx_1 + 0x14), r12_3, rbp_3 * 0x3c)
        else
            *(rbx_1 + 0x20) = 0
        
        r15_1 = &r15_1[0xa]
        *(rbx_1 + 0x24) = *(rdi_1 + 0x18)
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x20)
        *(rbx_1 + 0x34) = *(rdi_1 + 0x28)
        *(rbx_1 + 0x38) = *(rdi_1 + 0x2c)
        *(rbx_1 + 0x3c) = *(rdi_1 + 0x30)
        *(rbx_1 + 0x44) = *(rdi_1 + 0x38)
        *(rbx_1 + 0x48) = *(rdi_1 + 0x3c)
        rax_1 = *(rdi_1 + 0x3d)
        rdi_1 += 0xa0
        *(rbx_1 + 0x49) = rax_1
        rbx_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
