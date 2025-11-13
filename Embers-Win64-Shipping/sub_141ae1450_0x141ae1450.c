// 函数: sub_141ae1450
// 地址: 0x141ae1450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[7]
        
        if (rbx_1 != &rdi_1[-4])
            int32_t rbp_1 = rdi_1[-2]
            int64_t r14_1 = *(rdi_1 - 0x10)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_14174fdd0(rbx_1, rbp_1, r8)
                memcpy(*rbx_1, r14_1, rbp_1 * 0x3c)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1[2].d = *rdi_1
        rbx_1[3] = *(rdi_1 + 8)
        rbx_1[4].d = rdi_1[4]
        *(rbx_1 + 0x24) = rdi_1[5]
        rbx_1[5] = *(rdi_1 + 0x18)
        rbx_1[6].d = rdi_1[8]
        *(rbx_1 + 0x34) = rdi_1[9].b
        char rax = *(rdi_1 + 0x25)
        rdi_1 = &rdi_1[0xe]
        *(rbx_1 + 0x35) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
