// 函数: sub_141ae92b0
// 地址: 0x141ae92b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        uint64_t* rbx_1 = r15
        uint64_t* rsi_1 = r15
        r15 = &r15[0x14]
        sub_140627690(rbx_1, &rdi_1[-4])
        rbx_1[2].d = *rdi_1
        *(rbx_1 + 0x14) = rdi_1[1].b
        rbx_1[0x10].d = rdi_1[0x1c]
        *(rbx_1 + 0x84) = rdi_1[0x1d].b
        *(rbx_1 + 0x85) = *(rdi_1 + 0x75)
        
        if (&rbx_1[0x11] != &rdi_1[0x1e])
            int64_t rbp_1 = sx.q(rdi_1[0x20])
            int64_t r12_1 = *(rdi_1 + 0x78)
            int32_t r8 = *(rbx_1 + 0x94)
            rbx_1[0x12].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4b20(&rbx_1[0x11], rbp_1.d, r8)
                memcpy(rbx_1[0x11], r12_1, rbp_1.d * 0x1c)
            else
                *(rbx_1 + 0x94) = 0
        
        rsi_1[0x13].b = rdi_1[0x22].b
        char rax = *(rdi_1 + 0x89)
        rdi_1 = &rdi_1[0x28]
        *(rsi_1 + 0x99) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
