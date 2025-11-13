// 函数: sub_141b38740
// 地址: 0x141b38740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    char* rbx_1 = arg3 + 0x1c
    int32_t i
    
    do
        void* rsi_1 = r12
        r12 += 0xb0
        sub_14086c240(rsi_1 + 8, &rbx_1[-0x14])
        *(rsi_1 + 0x20) = *(rbx_1 + 4)
        *(rsi_1 + 0x18) = *(rbx_1 - 4)
        *(rsi_1 + 0x1c) = *rbx_1
        *(rsi_1 + 0x30) = *(rbx_1 + 0x14)
        *(rsi_1 + 0x38) = *(rbx_1 + 0x1c)
        
        if (rsi_1 + 0x40 != &rbx_1[0x24])
            int64_t rbp_1 = sx.q(*(rbx_1 + 0x2c))
            int64_t r15_1 = *(rbx_1 + 0x24)
            int32_t r8 = *(rsi_1 + 0x4c)
            *(rsi_1 + 0x48) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407751d0(rsi_1 + 0x40, rbp_1.d, r8)
                memcpy(*(rsi_1 + 0x40), r15_1, (rbp_1 * 0x28).d)
            else
                *(rsi_1 + 0x4c) = 0
        
        sub_141f98dc0(rsi_1 + 0x50)
        rbx_1 = &rbx_1[0xb0]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
