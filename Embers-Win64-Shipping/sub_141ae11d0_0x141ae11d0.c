// 函数: sub_141ae11d0
// 地址: 0x141ae11d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0x78
        *(rdi_1 + 8) = *(rbx_1 - 0x20)
        
        if (rdi_1 + 0x10 != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rdi_1 + 0x1c)
            *(rdi_1 + 0x18) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140808ed0(rdi_1 + 0x10, rbp_1.d, r8)
                memcpy(*(rdi_1 + 0x10), r15_1, (rbp_1 * 0x50).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        if (rdi_1 + 0x20 != &rbx_1[-2])
            int64_t rbp_2 = sx.q(*rbx_1)
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_4 = *(rdi_1 + 0x2c)
            *(rdi_1 + 0x28) = rbp_2.d
            
            if (rbp_2.d != 0 || r8_4 != 0)
                sub_1405c4a00(rdi_1 + 0x20, rbp_2.d, r8_4)
                memcpy(*(rdi_1 + 0x20), r15_2, (rbp_2 << 3).d)
            else
                *(rdi_1 + 0x2c) = 0
        
        sub_140627690(rdi_1 + 0x30, &rbx_1[2])
        
        if (rdi_1 + 0x40 != &rbx_1[6])
            int64_t rbp_3 = sx.q(rbx_1[8])
            int64_t r15_3 = *(rbx_1 + 0x18)
            int32_t r8_7 = *(rdi_1 + 0x4c)
            *(rdi_1 + 0x48) = rbp_3.d
            
            if (rbp_3.d != 0 || r8_7 != 0)
                sub_1405a4b40(rdi_1 + 0x40, rbp_3.d, r8_7)
                memcpy(*(rdi_1 + 0x40), r15_3, (rbp_3 * 0x30).d)
            else
                *(rdi_1 + 0x4c) = 0
        
        *(rdi_1 + 0x50) = rbx_1[0xa]
        sub_14090a0d0(rdi_1 + 0x58, &rbx_1[0xc])
        *(rdi_1 + 0x68) = *(rbx_1 + 0x40)
        char rax = rbx_1[0x12].b
        rbx_1 = &rbx_1[0x1e]
        *(rdi_1 + 0x70) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
