// 函数: sub_1425ccff0
// 地址: 0x1425ccff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r15 = arg2
int32_t result

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rsi_1 = r15
        r15 = &r15[0xe]
        *rsi_1 = *(rbx_1 - 8)
        sub_14081d8c0(&rsi_1[2], rbx_1)
        rsi_1[6] = *(rbx_1 + 0x10)
        
        if (&rsi_1[8] != rbx_1 + 0x18)
            uint32_t count = *(rbx_1 + 0x20)
            int64_t r12_1 = *(rbx_1 + 0x18)
            int32_t r8 = rsi_1[0xb]
            rsi_1[0xa] = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rsi_1[8], count, r8)
                memcpy(*(rsi_1 + 0x20), r12_1, count)
            else
                rsi_1[0xb] = 0
        
        result = *(rbx_1 + 0x28)
        rbx_1 += 0x38
        rsi_1[0xc] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
