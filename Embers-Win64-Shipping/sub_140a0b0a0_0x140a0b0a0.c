// 函数: sub_140a0b0a0
// 地址: 0x140a0b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = r14
        r14 = &r14[8]
        
        if (rbx_1 != &rdi_1[-2])
            int32_t rsi_1 = rdi_1[-1].d
            int64_t rbp_1 = rdi_1[-2]
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_140a05dc0(rbx_1, rsi_1, r8)
                memcpy(*rbx_1, rbp_1, rsi_1 * 0x4c)
            else
                *(rbx_1 + 0xc) = 0
        
        if (&rbx_1[2] != rdi_1)
            int64_t rbp_2 = sx.q(rdi_1[1].d)
            int64_t r15_1 = *rdi_1
            int32_t r8_2 = *(rbx_1 + 0x1c)
            rbx_1[3].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_2 != 0)
                sub_1405c4a90(&rbx_1[2], rbp_2.d, r8_2)
                memcpy(rbx_1[2], r15_1, (rbp_2 << 2).d)
            else
                *(rbx_1 + 0x1c) = 0
        
        *(rbx_1 + 0x20) = *(rdi_1 + 0x10)
        rbx_1[6] = rdi_1[4]
        rbx_1[7].d = rdi_1[5].d
        *(rbx_1 + 0x3c) = *(rdi_1 + 0x2c)
        char rax = *(rdi_1 + 0x2d)
        rdi_1 = &rdi_1[8]
        *(rbx_1 + 0x3d) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
