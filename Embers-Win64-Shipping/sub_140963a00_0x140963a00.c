// 函数: sub_140963a00
// 地址: 0x140963a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = -1

if ((*(*arg2 + 0x28))(arg2) == 0)
    return 0xffffffff

int32_t i = 0

if (*(arg1 + 0x60) s<= 0)
    return 0xffffffff

int64_t r14 = 0

do
    int32_t j = 0
    int32_t* rsi_2 = *(arg1 + 0x58) + r14
    
    if (rsi_2[0xe] s> 0)
        int64_t rdi_1 = 0
        
        do
            int64_t* rcx_1 = *(rdi_1 + *(rsi_2 + 0x30) + 8)
            
            if ((**rcx_1)(rcx_1, arg2) != 0)
                r13 = *rsi_2
                break
            
            j += 1
            rdi_1 += 0x50
        while (j s< rsi_2[0xe])
    
    i += 1
    r14 += 0x50
while (i s< *(arg1 + 0x60))

return zx.q(r13)
