// 函数: sub_141ae0f80
// 地址: 0x141ae0f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x60
    int32_t i
    
    do
        void* rsi_1 = r12
        r12 += 0x78
        *(rsi_1 + 8) = *(rbx_1 - 0x58)
        *(rsi_1 + 0x10) = rbx_1[-0x14]
        *(rsi_1 + 0x14) = rbx_1[-0x13].b
        *(rsi_1 + 0x15) = *(rbx_1 - 0x4b)
        *(rsi_1 + 0x16) = *(rbx_1 - 0x4a)
        *(rsi_1 + 0x18) = rbx_1[-0x12]
        *(rsi_1 + 0x1c) = rbx_1[-0x11]
        *(rsi_1 + 0x20) = *(rbx_1 - 0x40)
        *(rsi_1 + 0x30) = *(rbx_1 - 0x30)
        *(rsi_1 + 0x38) = *(rbx_1 - 0x28)
        *(rsi_1 + 0x40) = rbx_1[-8].b
        *(rsi_1 + 0x44) = rbx_1[-7]
        
        if (rsi_1 + 0x48 != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rsi_1 + 0x54)
            *(rsi_1 + 0x50) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407c3650(rsi_1 + 0x48, rbp_1.d, r8)
                memcpy(*(rsi_1 + 0x48), r15_1, (rbp_1 * 0xc).d)
            else
                *(rsi_1 + 0x54) = 0
        
        if (rsi_1 + 0x58 != &rbx_1[-2])
            uint32_t count = *rbx_1
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_4 = *(rsi_1 + 0x64)
            *(rsi_1 + 0x60) = count
            
            if (count != 0 || r8_4 != 0)
                sub_1405da9e0(rsi_1 + 0x58, count, r8_4)
                memcpy(*(rsi_1 + 0x58), r15_2, count)
            else
                *(rsi_1 + 0x64) = 0
        
        sub_140627690(rsi_1 + 0x68, &rbx_1[2])
        rbx_1 = &rbx_1[0x1e]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
