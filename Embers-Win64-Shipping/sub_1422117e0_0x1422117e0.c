// 函数: sub_1422117e0
// 地址: 0x1422117e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 2)
    return 

int64_t rax_1 = sx.q(*(arg2 + 0x448))

if (rax_1.d s> 0)
    int64_t* rax = *(arg2 + 0x440)
    int64_t r8_1 = 0
    
    do
        if (*rax == *(arg1 + 0x34))
            return 
        
        r8_1 += 1
        rax -= -0x80
    while (r8_1 s< rax_1)

int64_t rbx_1 = sx.q(*(arg2 + 0x448))
int32_t rax_2 = (rbx_1 + 1).d
*(arg2 + 0x448) = rax_2

if (rax_2 s> *(arg2 + 0x44c))
    sub_1408888d0(arg2 + 0x440)

memset(&(*(arg2 + 0x440))[rbx_1 * 0x10], 0, 0x80)
(*(arg2 + 0x440))[rbx_1 * 0x10] = *(arg1 + 0x34)
(*(arg2 + 0x440))[rbx_1 * 0x10 + 1].b = 6
(*(arg2 + 0x440))[rbx_1 * 0x10 + 6] = 0
