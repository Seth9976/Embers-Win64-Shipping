// 函数: sub_140d09480
// 地址: 0x140d09480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s<= 0)
    return 

do
    int32_t rax_2 = i * *(arg1 + 0x3c)
    int64_t r8_1
    
    if (arg3 == 0)
        r8_1 = 0
    else
        r8_1 = sx.q(rax_2) + arg3
    
    void* rcx = *(arg1 + 0x78)
    sub_140be1be0(rcx, sx.q(rax_2) + arg2, r8_1, rcx, arg4, arg5)
    i += 1
while (i s< *(arg1 + 0x38))
