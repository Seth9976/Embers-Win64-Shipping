// 函数: sub_142486040
// 地址: 0x142486040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2

if (arg4 != 0)
    char* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[3]
        
        if (rbx_1 != &rdi_1[-0x10])
            int64_t rbp_1 = sx.q(*(rdi_1 - 8))
            int64_t r15_1 = *(rdi_1 - 0x10)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4b20(rbx_1, rbp_1.d, r8)
                memcpy(*rbx_1, r15_1, rbp_1.d * 0x1c)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1[2].b = *rdi_1
        char rax = rdi_1[1]
        rdi_1 = &rdi_1[0x18]
        *(rbx_1 + 0x11) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
