// 函数: sub_1429e15f0
// 地址: 0x1429e15f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*arg1 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        sub_1429dde60(*(rdi_1 + *(arg1 + 8)))
        rdi_1 = &rdi_1[3]
        i += 1
        *(rdi_1 + *(arg1 + 8) - 0x18) = 0
    while (i s< *arg1)

int64_t result = sub_1429dde60(*(arg1 + 8))
*(arg1 + 8) = 0
return result
