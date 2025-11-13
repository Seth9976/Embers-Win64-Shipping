// 函数: sub_141b43520
// 地址: 0x141b43520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r13 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x38
    int32_t i
    
    do
        void* r15_1 = r13
        void* rbp_1 = r13
        r13 += 0xe0
        *(r15_1 + 8) = rbx_1[-6].b
        *(r15_1 + 0x10) = rbx_1[-5].b
        *(r15_1 + 0x14) = *(rbx_1 - 0x24)
        *(r15_1 + 0x20) = rbx_1[-3]
        sub_140597df0(r15_1 + 0x28, &rbx_1[-2])
        *(r15_1 + 0x38) = *rbx_1
        *(r15_1 + 0x40) = rbx_1[1]
        sub_14086c240(r15_1 + 0x50, &rbx_1[3])
        *(r15_1 + 0x60) = rbx_1[5].d
        *(r15_1 + 0x64) = *(rbx_1 + 0x2c)
        
        if (r15_1 + 0x68 != &rbx_1[6])
            int64_t rsi_1 = sx.q(rbx_1[7].d)
            int64_t r12_1 = rbx_1[6]
            int32_t r8 = *(r15_1 + 0x74)
            *(r15_1 + 0x70) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140638750(r15_1 + 0x68, rsi_1.d, r8)
                memcpy(*(r15_1 + 0x68), r12_1, (rsi_1 << 2).d)
            else
                *(r15_1 + 0x74) = rsi_1.d
        
        sub_141f98dc0(r15_1 + 0x78)
        char rax = rbx_1[0x14].b
        rbx_1 = &rbx_1[0x1c]
        *(rbp_1 + 0xd8) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
