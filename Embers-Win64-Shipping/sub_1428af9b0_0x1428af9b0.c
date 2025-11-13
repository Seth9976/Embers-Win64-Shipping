// 函数: sub_1428af9b0
// 地址: 0x1428af9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rcx = 1

if (*(arg1 + 0xa0) == 0)
    int64_t rax_1 = *(arg1 + 0x60)
    
    if (rax_1 != 0)
        int32_t rax_2 = rax_1(arg1)
        rcx = rax_2
        
        if (rax_2 == 0)
            return rax_2

int32_t rax_4 = *(arg1 + 0x9c) + 1
*(arg1 + 0xa0) += 1
*(arg1 + 0x9c) = rax_4
return rcx
