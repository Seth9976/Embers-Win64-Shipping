// 函数: sub_142444cb0
// 地址: 0x142444cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

while (rbp.d s>= *(arg1 + 0xf0))
    int64_t rdi_1 = sx.q(*(arg1 + 0xf0))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0xf0) = rax_1
    
    if (rax_1 s> *(arg1 + 0xf4))
        sub_1405daba0(arg1 + 0xe8)
    
    *(rdi_1 + *(arg1 + 0xe8)) = 0xff

int64_t result = *(arg1 + 0xe8)
*(rbp + result) = arg3
return result
