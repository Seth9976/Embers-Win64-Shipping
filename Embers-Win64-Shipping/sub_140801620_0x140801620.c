// 函数: sub_140801620
// 地址: 0x140801620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)

if (rax != 4)
    if (arg2 != 0)
        *(arg1 + 0x24) = 3
        sub_140808700(*(arg1 + 0x778))
        int64_t rax_1
        rax_1.b = 1
        return rax_1
    
    if (rax != 3)
        rax.b = 0
        return rax
    
    sub_140808700(*(arg1 + 0x778))

rax.b = 1
return rax
