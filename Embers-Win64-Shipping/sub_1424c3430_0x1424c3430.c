// 函数: sub_1424c3430
// 地址: 0x1424c3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 4
    int32_t i
    
    do
        int32_t* rdi_1 = r15
        r15 = &r15[0x14]
        *rdi_1 = rbx_1[-1]
        rdi_1[1] = *rbx_1
        rdi_1[2] = rbx_1[1]
        sub_140627690(&rdi_1[4], &rbx_1[3])
        sub_140627690(&rdi_1[8], &rbx_1[7])
        
        if (&rdi_1[0xc] != &rbx_1[0xb])
            int64_t rbp_1 = sx.q(rbx_1[0xd])
            int64_t r12_1 = *(rbx_1 + 0x2c)
            int32_t r8 = rdi_1[0xf]
            rdi_1[0xe] = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a90(&rdi_1[0xc], rbp_1.d, r8)
                memcpy(*(rdi_1 + 0x30), r12_1, (rbp_1 << 2).d)
            else
                rdi_1[0xf] = 0
        
        *(rdi_1 + 0x40) = *(rbx_1 + 0x3c)
        char rax = rbx_1[0x11].b
        rbx_1 = &rbx_1[0x14]
        rdi_1[0x12].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
