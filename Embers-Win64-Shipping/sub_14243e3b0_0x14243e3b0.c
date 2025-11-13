// 函数: sub_14243e3b0
// 地址: 0x14243e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(arg1 + 0x56a) = 0
*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0xa8, 0)

int32_t rax = *(arg1 + 0xc4)
*(arg1 + 0xc0) = 0

if (rax s< 0 && rax != 0)
    sub_1405a5410(arg1 + 0xb8, 0)

int64_t** rsi = *(arg1 + 0x98)
uint64_t result = &rsi[sx.q(*(arg1 + 0xa0))]
uint64_t r15_1 = sx.q(*(arg1 + 0xa0)) << 3 u>> 3

if (rsi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        char rax_2 = rbx_1[0x17].b
        
        if (rax_2 == 0)
            sub_1420e7800(rbx_1)
        else if (rax_2 == 3)
            *(arg1 + 0x56a) += 1
        
        result = sub_1420e12d0(rbx_1)
        
        if (result.b != 0)
            result = sub_14242d040(arg1 + 0xa8, rbx_1, 0)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r15_1)

return result
