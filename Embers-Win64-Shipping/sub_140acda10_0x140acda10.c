// 函数: sub_140acda10
// 地址: 0x140acda10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (((arg1[3] ^ *(arg2 + 0xc)) | (arg1[2] ^ *(arg2 + 8)) | (arg1[1] ^ *(arg2 + 4))
        | (*arg1 ^ *arg2)) == 0)
    int32_t rcx_4 = (arg1[7] ^ *(arg2 + 0x1c)) | (arg1[6] ^ *(arg2 + 0x18))
        | (arg1[5] ^ *(arg2 + 0x14)) | (arg1[4] ^ *(arg2 + 0x10))
    
    if (rcx_4 == 0)
        int32_t rcx_9 = (arg1[0xb] ^ *(arg2 + 0x2c)) | (arg1[0xa] ^ *(arg2 + 0x28))
            | (arg1[9] ^ *(arg2 + 0x24)) | (*(arg2 + 0x20) ^ arg1[8])
        
        if (rcx_9 == 0)
            result.b = 1
            return result

result.b = 0
return result
