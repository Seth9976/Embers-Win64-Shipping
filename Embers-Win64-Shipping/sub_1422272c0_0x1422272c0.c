// 函数: sub_1422272c0
// 地址: 0x1422272c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142565030()
uint64_t result = rax[0x23]

if (result == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    result = rax[0x23]

if (*(result + 0xc4) != 0)
    char rax_1 = sub_140d3e110(arg1 + 0xf8)
    int64_t rax_3
    
    if (rax_1 != 0)
        int64_t* rax_2
        int64_t r8_1
        rax_2, r8_1 = sub_140d3c6e0(arg1 + 0xf8)
        r8_1.b = 1
        int64_t arg_10 = 0
        int64_t r9_1 = *rax_2
        rax_3 = (*(r9_1 + 0x6a8))(rax_2, 0, r8_1, r9_1)
    
    int32_t rax_5
    
    if (rax_1 == 0 || rax_3 == arg1)
        rax_5 = sub_142216be0(arg1)
    else
        int64_t* rax_4 = sub_140d3c6e0(arg1 + 0xf8)
        int64_t rdx_2 = *rax_4
        rax_5 = (*(rdx_2 + 0x4c8))(rax_4, rdx_2)
    
    int64_t rcx_7 = *(arg1 + 0xa0)
    result.b = rax_5 - 2 u<= 1
    *(arg1 + 0xf) &= 0xfe
    *(arg1 + 0xf) |= result.b
    
    if (rcx_7 != 0)
        sub_1422272c0(rcx_7)
        char rdx_3 = *(arg1 + 0xf)
        result = *(arg1 + 0xa0)
        *(arg1 + 0xf) = (((*(result + 0xf) | rdx_3) ^ rdx_3) & 1) ^ rdx_3

return result
