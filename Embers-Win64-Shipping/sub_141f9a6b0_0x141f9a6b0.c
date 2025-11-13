// 函数: sub_141f9a6b0
// 地址: 0x141f9a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0xc0) |= 1

uint64_t result = sub_141f9a890(arg1, arg2)

if ((*(arg1 + 0xc0) & 1) == 0)
    return result

int64_t rsi_1 = 0
int64_t* rdi_1 = *(arg1 + 0xa0)
uint64_t r14_2 = sx.q(*(arg1 + 0xa8)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0xa8))])
    r14_2 = 0

if (r14_2 != 0)
    do
        uint64_t rbx_1 = *rdi_1
        
        if (rbx_1 != 0 && ((*(rbx_1 + 8) u>> 0xa).b & 1) != 0)
            int64_t rax_4 = sub_140d3cb50(rbx_1)
            
            if (rax_4 != 0)
                sub_140cc45a0(rax_4 + 0x200, rbx_1)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_2)

return sub_141f8f450(arg1, 1)
