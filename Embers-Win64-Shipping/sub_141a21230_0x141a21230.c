// 函数: sub_141a21230
// 地址: 0x141a21230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r12 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int128_t* rsi_1 = r12
        r12 += 0x88
        *rsi_1 = *(rbx_1 - 0x10)
        rsi_1[1].q = *rbx_1
        *(rsi_1 + 0x18) = *(rbx_1 + 8)
        *(rsi_1 + 0x19) = *(rbx_1 + 9)
        *(rsi_1 + 0x1c) = *(rbx_1 + 0xc)
        rsi_1[2].d = *(rbx_1 + 0x10)
        *(rsi_1 + 0x24) = *(rbx_1 + 0x14)
        
        if (rsi_1 + 0x28 != rbx_1 + 0x18)
            uint32_t count = *(rbx_1 + 0x20)
            int64_t r15_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rsi_1 + 0x34)
            rsi_1[3].d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rsi_1 + 0x28, count, r8)
                memcpy(*(rsi_1 + 0x28), r15_1, count)
            else
                *(rsi_1 + 0x34) = 0
        
        sub_1405af100(rsi_1 + 0x38, rbx_1 + 0x28)
        rbx_1 += 0x88
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
