// 函数: sub_142344100
// 地址: 0x142344100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x78) s<= 0)
    return 

int64_t rsi_1 = 0
int64_t r14_1 = 0

do
    int64_t* rdi_2 = *(arg1 + 0x70) + r14_1
    
    if (*(*(**rdi_2 + rsi_1) + 0xec) u> 0)
        sub_141997f50(&rdi_2[2])
        sub_141997f50(&rdi_2[0x55])
        sub_141997f50(&rdi_2[0x44])
        sub_141997f50(&rdi_2[0x5f])
        rdi_2[0x6d].b = 0
    
    i += 1
    r14_1 += 0x370
    rsi_1 += 8
while (i s< *(arg1 + 0x78))
