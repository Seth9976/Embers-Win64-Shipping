// 函数: sub_1408d49e0
// 地址: 0x1408d49e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        char* rdi_1 = r14
        r14 = &r14[0x30]
        *rdi_1 = rbx_1[-1].b
        
        if (&rdi_1[8] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x14)
            *(rdi_1 + 0x10) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140808f70(&rdi_1[8], rbp_1.d, r8)
                memcpy(*(rdi_1 + 8), r15_1, (rbp_1 * 0x18).d)
            else
                *(rdi_1 + 0x14) = 0
        
        rdi_1[0x18] = rbx_1[2].b
        rdi_1[0x19] = *(rbx_1 + 0x11)
        *(rdi_1 + 0x1c) = *(rbx_1 + 0x14)
        rdi_1[0x20] = rbx_1[3].b
        rdi_1[0x21] = *(rbx_1 + 0x19)
        rdi_1[0x22] = *(rbx_1 + 0x1a)
        *(rdi_1 + 0x24) = *(rbx_1 + 0x1c)
        *(rdi_1 + 0x28) = rbx_1[4].d
        char rax = *(rbx_1 + 0x24)
        rbx_1 = &rbx_1[6]
        rdi_1[0x2c] = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
