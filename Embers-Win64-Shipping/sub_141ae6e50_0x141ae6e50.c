// 函数: sub_141ae6e50
// 地址: 0x141ae6e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rcx = r15
        r15 += 0xc8
        *(rcx + 8) = *rbx_1
        *(rcx + 0x10) = *(rbx_1 + 8)
        *(rcx + 0x20) = rbx_1[3].d
        *(rcx + 0x24) = *(rbx_1 + 0x1c)
        *(rcx + 0x28) = rbx_1[4].b
        *(rcx + 0x29) = *(rbx_1 + 0x21)
        *(rcx + 0x2c) = *(rbx_1 + 0x24)
        *(rcx + 0x30) = rbx_1[5]
        *(rcx + 0x38) = *(rbx_1 + 0x30)
        *(rcx + 0x48) = *(rbx_1 + 0x40)
        *(rcx + 0x58) = *(rbx_1 + 0x50)
        *(rcx + 0x68) = *(rbx_1 + 0x60)
        *(rcx + 0x78) = rbx_1[0xe]
        *(rcx + 0x80) = rbx_1[0xf]
        *(rcx + 0x88) = *(rbx_1 + 0x80)
        *(rcx + 0x98) = *(rbx_1 + 0x90)
        *(rcx + 0xa8) = *(rbx_1 + 0xa0)
        
        if (rcx + 0xb8 != &rbx_1[0x16])
            int64_t rsi_1 = sx.q(rbx_1[0x17].d)
            int64_t r14_2 = rbx_1[0x16]
            int32_t r8 = *(rcx + 0xc4)
            *(rcx + 0xc0) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c35c0(rcx + 0xb8, rsi_1.d, r8)
                memcpy(*(rcx + 0xb8), r14_2, (rsi_1 << 6).d)
            else
                *(rcx + 0xc4) = 0
        
        rbx_1 = &rbx_1[0x19]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
