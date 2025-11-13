// 函数: sub_142467300
// 地址: 0x142467300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[5]
        
        if (rdi_1 != &rbx_1[-2])
            int64_t rsi_1 = sx.q(rbx_1[-1].d)
            int64_t rbp_1 = rbx_1[-2]
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_14174fdd0(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, rbp_1, rsi_1.d * 0x3c)
            else
                *(rdi_1 + 0xc) = 0
        
        if (&rdi_1[2] != rbx_1)
            int64_t rbp_2 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8_2 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_2 != 0)
                sub_1405c4a00(&rdi_1[2], rbp_2.d, r8_2)
                memcpy(rdi_1[2], r12_1, (rbp_2 << 3).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        char rax = rbx_1[2].b
        rbx_1 = &rbx_1[5]
        rdi_1[4].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
