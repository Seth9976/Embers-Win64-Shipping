// 函数: sub_141ae15a0
// 地址: 0x141ae15a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        int64_t* rdi_1 = rbp
        rbp = &rbp[0x18]
        
        if (r14_1 != &rbx_1[-2])
            int64_t rsi_1 = sx.q(*rbx_1)
            int64_t r12_1 = *(rbx_1 - 8)
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140808f70(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, r12_1, (rsi_1 * 0x18).d)
            else
                *(r14_1 + 0xc) = 0
        
        rdi_1[2] = *(rbx_1 + 8)
        rdi_1[3].d = rbx_1[4]
        *(rdi_1 + 0x1c) = rbx_1[5]
        rdi_1[4].b = rbx_1[6].b
        *(rdi_1 + 0x21) = *(rbx_1 + 0x19)
        *(rdi_1 + 0x22) = *(rbx_1 + 0x1a)
        r14_1[0x12].d = rbx_1[0x22]
        *(r14_1 + 0x94) = rbx_1[0x23].b
        *(r14_1 + 0x95) = *(rbx_1 + 0x8d)
        
        if (&r14_1[0x13] != &rbx_1[0x24])
            int32_t r14_2 = rbx_1[0x26]
            int64_t r12_2 = *(rbx_1 + 0x90)
            int32_t r8_3 = *(r14_1 + 0xa4)
            r14_1[0x14].d = r14_2
            
            if (r14_2 != 0 || r8_3 != 0)
                sub_1405c4b20(&r14_1[0x13], r14_2, r8_3)
                memcpy(r14_1[0x13], r12_2, r14_2 * 0x1c)
            else
                *(r14_1 + 0xa4) = 0
        
        rdi_1[0x15] = *(rbx_1 + 0xa0)
        rdi_1[0x16].d = rbx_1[0x2a]
        *(rdi_1 + 0xb4) = rbx_1[0x2b]
        char rax = rbx_1[0x2c].b
        rbx_1 = &rbx_1[0x30]
        rdi_1[0x17].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
