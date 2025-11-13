// 函数: sub_142596ef0
// 地址: 0x142596ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        int64_t* rdi_1 = r12
        r12 = &r12[6]
        *rdi_1 = *(rbx_1 - 0x28)
        rdi_1[1].d = rbx_1[-8]
        *(rdi_1 + 0xc) ^= (rbx_1[-7] ^ *(rdi_1 + 0xc)) & 1
        
        if (&rdi_1[2] != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rdi_1[2], rbp_1.d, r8)
                memcpy(rdi_1[2], r15_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        if (&rdi_1[4] != &rbx_1[-2])
            int64_t rsi_2 = sx.q(*rbx_1)
            int64_t rbp_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rdi_1 + 0x2c)
            rdi_1[5].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1407c3650(&rdi_1[4], rsi_2.d, r8_3)
                memcpy(rdi_1[4], rbp_2, (rsi_2 * 0xc).d)
            else
                *(rdi_1 + 0x2c) = 0
        
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
