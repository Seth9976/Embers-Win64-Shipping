// 函数: sub_1421bf2b0
// 地址: 0x1421bf2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x168) s<= 0)
    return 

int64_t r10_1 = 0

do
    int64_t* r8_1 = *(arg1 + 0x160)
    int32_t j = 0
    int64_t rax = 0
    
    if (*(r8_1 + r10_1 + 8) s> 0)
        do
            rax += 1
            j += 1
            *(rax + *(r8_1 + r10_1) - 1) = 0
        while (j s< *(r8_1 + r10_1 + 8))
    
    i += 1
    r10_1 += 0x10
while (i s< *(arg1 + 0x168))
