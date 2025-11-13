// 函数: sub_142b983d0
// 地址: 0x142b983d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rdi_1 = *(rsi_1 + *(arg1 + 0x40))
        int64_t r14_1 = *(*rdi_1 + 0x98)
        int64_t rax_3 = *(rdi_1[2] + 0x10)
        
        if (rax_3 != 0)
            rax_3(rdi_1)
        
        (*(r14_1 + 0x10))(r14_1, rdi_1)
        i += 1
        *(rsi_1 + *(arg1 + 0x40)) = 0
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x38))

int64_t rdx_1 = *(arg1 + 0x40)

if (rdx_1 != 0)
    (*(arg2 + 0x10))(arg2, rdx_1)

*(arg1 + 0x40) = 0
*(arg1 + 0x38) = 0
