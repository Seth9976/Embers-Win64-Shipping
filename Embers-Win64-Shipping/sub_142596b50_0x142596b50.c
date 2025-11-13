// 函数: sub_142596b50
// 地址: 0x142596b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 4
    int32_t i
    
    do
        int32_t* rdi_1 = r14
        r14 -= -0x80
        *rdi_1 = rbx_1[-1]
        rdi_1[1] = *rbx_1
        rdi_1[2].b = rbx_1[1].b
        
        if (&rdi_1[4] != &rbx_1[3])
            int64_t rbp_1 = sx.q(rbx_1[5])
            int64_t r15_1 = *(rbx_1 + 0xc)
            int32_t r8 = rdi_1[7]
            rdi_1[6] = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407c3650(&rdi_1[4], rbp_1.d, r8)
                memcpy(*(rdi_1 + 0x10), r15_1, (rbp_1 * 0xc).d)
            else
                rdi_1[7] = 0
        
        sub_140780c40(&rdi_1[8], &rbx_1[7])
        rdi_1[0xc] = rbx_1[0xb]
        *(rdi_1 + 0x38) = *(rbx_1 + 0x34)
        *(rdi_1 + 0x40) = *(rbx_1 + 0x3c)
        *(rdi_1 + 0x50) = *(rbx_1 + 0x4c)
        *(rdi_1 + 0x60) = *(rbx_1 + 0x5c)
        *(rdi_1 + 0x70) = *(rbx_1 + 0x6c)
        result = rbx_1[0x1d]
        rbx_1 -= -0x80
        rdi_1[0x1e] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
