// 函数: sub_141a7b790
// 地址: 0x141a7b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r15 = arg2
int64_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x60
    int32_t i
    
    do
        int128_t* rdi_1 = r15
        r15 = &r15[9]
        *rdi_1 = *(rbx_1 - 0x60)
        rdi_1[1] = *(rbx_1 - 0x50)
        rdi_1[2] = *(rbx_1 - 0x40)
        
        if (&rdi_1[3] != &rbx_1[-0xc])
            int64_t rbp_1 = sx.q(rbx_1[-0xa])
            int64_t r14_1 = *(rbx_1 - 0x30)
            int32_t r8 = *(rdi_1 + 0x3c)
            *(rdi_1 + 0x38) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rdi_1[3], rbp_1.d, r8)
                memcpy(rdi_1[3].q, r14_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0x3c) = 0
        
        rdi_1[4].b = rbx_1[-8].b
        *(rdi_1 + 0x44) = *(rbx_1 - 0x1c)
        
        if (rdi_1 + 0x58 != &rbx_1[-2])
            int32_t rbp_2 = *rbx_1
            int64_t r14_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rdi_1 + 0x64)
            rdi_1[6].d = rbp_2
            
            if (rbp_2 != 0 || r8_3 != 0)
                sub_1405a4c70(rdi_1 + 0x58, rbp_2, r8_3)
                memcpy(*(rdi_1 + 0x58), r14_2, rbp_2 * 2)
            else
                *(rdi_1 + 0x64) = 0
        
        *(rdi_1 + 0x68) = *(rbx_1 + 8)
        
        if (&rdi_1[7] != &rbx_1[4])
            int64_t rbp_3 = sx.q(rbx_1[6])
            int64_t r14_3 = *(rbx_1 + 0x10)
            int32_t r8_6 = *(rdi_1 + 0x7c)
            *(rdi_1 + 0x78) = rbp_3.d
            
            if (rbp_3.d != 0 || r8_6 != 0)
                sub_1405a4be0(&rdi_1[7], rbp_3.d, r8_6)
                memcpy(rdi_1[7].q, r14_3, (rbp_3 << 4).d)
            else
                *(rdi_1 + 0x7c) = 0
        
        rdi_1[8].b = rbx_1[8].b
        result = *(rbx_1 + 0x24)
        rbx_1 = &rbx_1[0x24]
        *(rdi_1 + 0x84) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
