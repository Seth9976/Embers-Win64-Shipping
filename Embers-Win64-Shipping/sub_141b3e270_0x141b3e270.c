// 函数: sub_141b3e270
// 地址: 0x141b3e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rcx = r15
        void* rsi_1 = r15
        r15 += 0x98
        *rcx = *(rbx_1 - 0x10)
        sub_14086c240(rsi_1 + 0x10, rbx_1)
        *(rsi_1 + 0x20) = *(rbx_1 + 0x10)
        *(rsi_1 + 0x21) = *(rbx_1 + 0x11)
        
        if (rsi_1 + 0x28 != rbx_1 + 0x18)
            uint32_t count = *(rbx_1 + 0x20)
            int64_t r12_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rsi_1 + 0x34)
            *(rsi_1 + 0x30) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rsi_1 + 0x28, count, r8)
                memcpy(*(rsi_1 + 0x28), r12_1, count)
            else
                *(rsi_1 + 0x34) = 0
        
        sub_141f98dc0(rsi_1 + 0x38)
        rbx_1 += 0x98
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
