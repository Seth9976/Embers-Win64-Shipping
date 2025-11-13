// 函数: sub_1424bfb00
// 地址: 0x1424bfb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x40
    int32_t i
    
    do
        int64_t* rdi_1 = r12
        r12 = &r12[0xc]
        *rdi_1 = *(rbx_1 - 0x40)
        rdi_1[1].d = rbx_1[-0xe]
        *(rdi_1 + 0xc) = *(rbx_1 - 0x34)
        *(rdi_1 + 0x14) = rbx_1[-0xb]
        rdi_1[3].b = rbx_1[-0xa].b
        *(rdi_1 + 0x1c) = rbx_1[-9]
        rdi_1[4].d = rbx_1[-8]
        *(rdi_1 + 0x24) = rbx_1[-7].b
        *(rdi_1 + 0x25) = *(rbx_1 - 0x1b)
        
        if (&rdi_1[5] != &rbx_1[-6])
            uint32_t count = rbx_1[-4]
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rdi_1 + 0x34)
            rdi_1[6].d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rdi_1[5], count, r8)
                memcpy(rdi_1[5], r15_1, count)
            else
                *(rdi_1 + 0x34) = 0
        
        if (&rdi_1[7] != &rbx_1[-2])
            int64_t rbp_1 = sx.q(*rbx_1)
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_2 = *(rdi_1 + 0x44)
            rdi_1[8].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8_2 != 0)
                sub_1405c4a00(&rdi_1[7], rbp_1.d, r8_2)
                memcpy(rdi_1[7], r15_2, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0x44) = 0
        
        rdi_1[9].d = rbx_1[2]
        *(rdi_1 + 0x4c) = rbx_1[3]
        rdi_1[0xa].b = rbx_1[4].b
        *(rdi_1 + 0x54) = rbx_1[5]
        char rax = rbx_1[6].b
        rbx_1 = &rbx_1[0x18]
        rdi_1[0xb].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
