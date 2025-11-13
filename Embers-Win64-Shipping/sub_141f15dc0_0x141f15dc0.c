// 函数: sub_141f15dc0
// 地址: 0x141f15dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1

if ((*(arg1 + 0x20d) & 2) != 0)
    return 0

if (arg1 == 0)
    goto label_141f15e03

while (true)
    void* rax_1 = sub_142577430()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && (*(result + 0x20d) & 1) != 0)
        return result
    
label_141f15e03:
    result = *(result + 0xc0)
    
    if (result == 0)
        return 0
