// 函数: sub_141027270
// 地址: 0x141027270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x28 == arg2)
    return 

void* rcx = *(arg1 + 0x30)

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0x14)
    *(rcx + 0x14) -= 1
    
    if (rax_1 == 1)
        int64_t* rcx_1 = *(arg1 + 0x30)
        
        if (rcx_1 != 0)
            sub_141011360(rcx_1, rax_1.b)

*(arg1 + 0x30) = 0
void* rax = *(arg2 + 8)

if (rax != 0)
    *(arg1 + 0x30) = rax
    *(rax + 0x14) += 1
