// 函数: sub_141d44360
// 地址: 0x141d44360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x38
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[8]
        
        if (rdi_1 != &rbx_1[-0xe])
            int64_t rsi_1 = sx.q(rbx_1[-0xc])
            int64_t rbp_1 = *(rbx_1 - 0x38)
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4bc0(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, rbp_1, (rsi_1 * 0x14).d)
            else
                *(rdi_1 + 0xc) = 0
        
        if (&rdi_1[2] != &rbx_1[-0xa])
            int64_t rbp_2 = sx.q(rbx_1[-8])
            int64_t r12_1 = *(rbx_1 - 0x28)
            int32_t r8_3 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405c4a00(&rdi_1[2], rbp_2.d, r8_3)
                memcpy(rdi_1[2], r12_1, (rbp_2 << 3).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        sub_141d43fd0(&rdi_1[4], &rbx_1[-6])
        
        if (&rdi_1[6] != &rbx_1[-2])
            int64_t rsi_3 = sx.q(*rbx_1)
            int64_t rbp_3 = *(rbx_1 - 8)
            int32_t r8_6 = *(rdi_1 + 0x3c)
            rdi_1[7].d = rsi_3.d
            
            if (rsi_3.d != 0 || r8_6 != 0)
                sub_1405a4b40(&rdi_1[6], rsi_3.d, r8_6)
                memcpy(rdi_1[6], rbp_3, (rsi_3 * 0x30).d)
            else
                *(rdi_1 + 0x3c) = 0
        
        rbx_1 = &rbx_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
