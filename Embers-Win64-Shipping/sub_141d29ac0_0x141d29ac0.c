// 函数: sub_141d29ac0
// 地址: 0x141d29ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x48
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[0x17]
        
        if (rdi_1 != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(rbx_1[-0x10])
            int64_t rbp_1 = *(rbx_1 - 0x48)
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4b40(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, rbp_1, (rsi_1 * 0x30).d)
            else
                *(rdi_1 + 0xc) = 0
        
        sub_14090a0d0(&rdi_1[2], &rbx_1[-0xe])
        sub_14090a0d0(&rdi_1[4], &rbx_1[-0xa])
        
        if (&rdi_1[6] != &rbx_1[-6])
            uint32_t count = rbx_1[-4]
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8_3 = *(rdi_1 + 0x3c)
            rdi_1[7].d = count
            
            if (count != 0 || r8_3 != 0)
                sub_1405da9e0(&rdi_1[6], count, r8_3)
                memcpy(rdi_1[6], r15_1, count)
            else
                *(rdi_1 + 0x3c) = 0
        
        if (&rdi_1[8] != &rbx_1[-2])
            int32_t rbp_2 = *rbx_1
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_5 = *(rdi_1 + 0x4c)
            rdi_1[9].d = rbp_2
            
            if (rbp_2 != 0 || r8_5 != 0)
                sub_141d26450(&rdi_1[8], rbp_2, r8_5)
                memcpy(rdi_1[8], r15_2, rbp_2 * 0x6c)
            else
                *(rdi_1 + 0x4c) = 0
        
        if (&rdi_1[0xa] != &rbx_1[2])
            int64_t rbp_3 = sx.q(rbx_1[4])
            int64_t r15_3 = *(rbx_1 + 8)
            int32_t r8_7 = *(rdi_1 + 0x5c)
            rdi_1[0xb].d = rbp_3.d
            
            if (rbp_3.d != 0 || r8_7 != 0)
                sub_1405a4b40(&rdi_1[0xa], rbp_3.d, r8_7)
                memcpy(rdi_1[0xa], r15_3, (rbp_3 * 0x30).d)
            else
                *(rdi_1 + 0x5c) = 0
        
        sub_141d18d80(&rdi_1[0xc], &rbx_1[6])
        result = rbx_1[0x1a]
        rbx_1 = &rbx_1[0x2e]
        rdi_1[0x16].d = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
