// 函数: sub_141a71440
// 地址: 0x141a71440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rsi_1 = r15
        r15 += 0x90
        sub_14086c240(rsi_1 + 8, rbx_1)
        *(rsi_1 + 0x18) = *(rbx_1 + 0x10)
        *(rsi_1 + 0x19) = *(rbx_1 + 0x11)
        
        if (rsi_1 + 0x20 != rbx_1 + 0x18)
            uint32_t count = *(rbx_1 + 0x20)
            int64_t r12_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rsi_1 + 0x2c)
            *(rsi_1 + 0x28) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rsi_1 + 0x20, count, r8)
                memcpy(*(rsi_1 + 0x20), r12_1, count)
            else
                *(rsi_1 + 0x2c) = 0
        
        sub_141f98dc0(rsi_1 + 0x30)
        rbx_1 += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
