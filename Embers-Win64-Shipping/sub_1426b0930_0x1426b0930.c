// 函数: sub_1426b0930
// 地址: 0x1426b0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
*arg1 = 0
*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) s<= 0xffffffff)
    result = sub_1405c5510(&arg1[4], 0)

if (arg1[0xc].b != 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0x10))
    int32_t rax = (rdi_1 + 0x10).d
    *(arg1 + 0x10) = rax
    
    if (rax s> *(arg1 + 0x14))
        sub_1405daba0(&arg1[4])
    
    result = rdi_1 + *(arg1 + 8)
    *result = 0
    result[1] = 0

return result
